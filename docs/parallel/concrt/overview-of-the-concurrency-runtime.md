---
title: "Cenni preliminari sul runtime di concorrenza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Runtime di concorrenza, architettura"
  - "Runtime di concorrenza, espressioni lambda"
  - "Runtime di concorrenza, panoramica"
  - "Runtime di concorrenza, requisiti"
ms.assetid: 56237d96-10b0-494a-9cb4-f5c5090436c5
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 19
---
# Cenni preliminari sul runtime di concorrenza
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questo documento fornisce i cenni preliminari sul runtime di concorrenza.  Illustra i vantaggi del runtime di concorrenza, quando usarlo e che modo i relativi componenti interagiscono tra loro e con il sistema operativo e le applicazioni.  
  
> [!IMPORTANT]
>  In Visual Studio 2015 e versioni successive, l'Utilità di pianificazione del runtime di concorrenza non è più l'utilità di pianificazione per la classe di attività e i tipi correlati in ppltasks.  Tali tipi ora usano il pool di thread di Windows per migliorare le prestazioni e l'interoperabilità con le primitive di sincronizzazione di Windows.  Gli algoritmi paralleli come parallel\_for continuano a usare l'Utilità di pianificazione del runtime di concorrenza.  
  
##  <a name="top"></a> Sezioni  
 Il documento include le sezioni seguenti:  
  
-   [Importanza del runtime di concorrenza](#runtime)  
  
-   [Architettura](#architecture)  
  
-   [Espressioni lambda C\+\+](#lambda)  
  
-   [Requisiti](#requirements)  
  
##  <a name="runtime"></a> Importanza del runtime di concorrenza  
 Un runtime di concorrenza fornisce uniformità e prevedibilità alle applicazioni e ai componenti dell'applicazione eseguiti simultaneamente.  La *pianificazione cooperativa delle attività* e il *blocco cooperativo* rappresentano due esempi dei vantaggi del runtime di concorrenza.  
  
 Il runtime di concorrenza usa un'utilità di pianificazione cooperativa che implementa un algoritmo di acquisizione del lavoro per distribuire il lavoro tra le risorse di elaborazione in modo efficiente.  Si consideri, ad esempio, un'applicazione che dispone di due thread entrambi gestiti dallo stesso runtime.  Se un thread termina l'attività pianificata, può scaricare il lavoro dall'altro thread.  Questo meccanismo bilancia il carico di lavoro complessivo dell'applicazione.  
  
 Il runtime di concorrenza fornisce inoltre le primitive di sincronizzazione che usano il blocco cooperativo per sincronizzare l'accesso alle risorse.  Si consideri, ad esempio, un'attività che deve avere accesso esclusivo a una risorsa condivisa.  Mediante il blocco cooperativo, il runtime può usare il quantum rimanente per eseguire un'altra attività mentre la prima attività è in attesa della risorsa.  Questo meccanismo consente il massimo utilizzo delle risorse di elaborazione.  
  
 \[[Torna all'inizio](#top)\]  
  
##  <a name="architecture"></a> Architettura  
 Il runtime di concorrenza è diviso in quattro componenti: libreria PPL \(Parallel Patterns Library\), libreria di agenti asincroni, Utilità di pianificazione e Gestione risorse.  Questi componenti risiedono tra il sistema operativo e le applicazioni.   L'illustrazione seguente mostra come i componenti del runtime di concorrenza interagiscono tra il sistema operativo e le applicazioni:  
  
 **Architettura del runtime di concorrenza**  
  
 ![Architettura del runtime di concorrenza](../../parallel/concrt/media/concurrencyrun.png "ConcurrencyRun")  
  
> [!IMPORTANT]
>  Le componenti Utilità di pianificazione e Gestione risorse non sono disponibili in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] o quando si usa la classe dell'attività o altri tipi in ppltasks.h.  
  
 Il runtime di concorrenza è altamente *componibile*, ovvero è possibile combinare le funzionalità esistenti per ottenere maggiori prestazioni.  Il runtime di concorrenza compone molte funzionalità, ad esempio gli algoritmi paralleli, dai componenti di livello inferiore.  
  
 Il runtime di concorrenza fornisce inoltre le primitive di sincronizzazione che usano il blocco cooperativo per sincronizzare l'accesso alle risorse.  Per altre informazioni sulle primitive di sincronizzazione, vedere [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md).  
  
 Nelle sezioni seguenti vengono forniti alcuni cenni preliminari sui vantaggi di ogni componente e sul relativo uso.  
  
### Parallel Patterns Library  
 La libreria PPL \(Parallel Patterns Library\) fornisce contenitori e algoritmi di uso generale per l'esecuzione di un parallelismo accurato.  La libreria PPL consente il *parallelismo imperativo dei dati* fornendo gli algoritmi paralleli che distribuiscono i calcoli sulle raccolte o sui set di dati tra le risorse di elaborazione.  Consente inoltre il *parallelismo delle attività* fornendo oggetti attività che distribuiscono più operazioni indipendenti tra le risorse di elaborazione.  
  
 Usare la libreria PPL \(Parallel Patterns Library\) per i calcoli locali che possono trarre vantaggio dall'esecuzione parallela.  È possibile, ad esempio, utilizzare l'algoritmo [concurrency::parallel\_for](../Topic/parallel_for%20Function.md) per trasformare un ciclo `for` esistente in modo da agire in parallelo.  
  
 Per altre informazioni sulla libreria PPL, vedere [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md).  
  
### Libreria di agenti asincroni  
 La libreria di agenti asincroni, o semplicemente *libreria di agenti*, fornisce un modello di programmazione basato su attori e le interfacce per il passaggio dei messaggi per le attività di pipelining o per un flusso di dati meno accurato.  Gli agenti asincroni consentono di usare la latenza in modo produttivo eseguendo il lavoro come gli altri componenti in attesa dei dati.  
  
 Usare la libreria di agenti quando si dispone di più entità che comunicano tra loro in modo asincrono.  È possibile, ad esempio, creare un agente che legge i dati da un file o da una connessione di rete e quindi usa le interfacce per il passaggio dei messaggi per inviare i dati a un altro agente.  
  
 Per altre informazioni sulla libreria di agenti, vedere [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md).  
  
### Utilità di pianificazione  
 L'Utilità di pianificazione pianifica e coordina le attività in fase di esecuzione.  L'Utilità di pianificazione è cooperativa e usa un algoritmo di acquisizione del lavoro per ottenere il massimo utilizzo delle risorse di elaborazione.  
  
 Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita in modo da evitare di dover gestire i dettagli dell'infrastruttura.   Tuttavia, per soddisfare le esigenze di qualità dell'applicazione, è anche possibile fornire criteri di pianificazione personalizzati o associare utilità di pianificazione specifiche a specifiche attività.  
  
 Per altre informazioni sull'Utilità di pianificazione, vedere [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md).  
  
### Gestione risorse  
 Gestione risorse ha il ruolo di gestire le risorse di elaborazione, ad esempio processori e memoria.  Gestione risorse risponde ai carichi di lavoro man mano che vengono modificati in fase di esecuzione assegnando le risorse dove possono risultare più efficaci.  
  
 Gestione risorse funge da astrazione sulle risorse di elaborazione e interagisce principalmente con l'Utilità di pianificazione.  Sebbene sia possibile usare Gestione risorse per ottimizzare le prestazioni delle librerie e delle applicazioni, in genere vengono usate le funzionalità fornite dalla libreria PPL, dalla libreria di agenti e dall'Utilità di pianificazione.  Tali librerie usano Gestione risorse per ribilanciare dinamicamente le risorse in base alla modifica dei carichi di lavoro.  
  
 \[[Torna all'inizio](#top)\]  
  
##  <a name="lambda"></a> Espressioni lambda C\+\+  
 Molti dei tipi e degli algoritmi definiti dal runtime di concorrenza vengono implementati come modelli C\+\+.   Alcuni di questi tipi e algoritmi accettano come parametro una routine che esegue il lavoro.  Questo parametro può essere una funzione lambda, un oggetto funzione o un puntatore a funzione.  Queste entità vengono definite anche *funzioni lavoro* o *routine lavoro*.  
  
 Le espressioni lambda rappresentano una nuova e importante funzionalità del linguaggio di Visual C\+\+ perché forniscono una modalità succinta per definire le funzioni lavoro per l'elaborazione in parallelo.  Gli oggetti funzione e i puntatori a funzione consentono di usare il runtime di concorrenza con il codice esistente.  Tuttavia, è consigliabile usare le espressioni lambda quando si scrive nuovo codice per i vantaggi offerti in termini di produttività e sicurezza.  
  
 Nell'esempio seguente vengono confrontati la sintassi delle funzioni lambda, gli oggetti funzione e i puntatori a funzione in più chiamate all'algoritmo [concurrency::parallel\_for\_each](../Topic/parallel_for_each%20Function.md).  Ogni chiamata a `parallel_for_each` usa una tecnica diversa per calcolare il quadrato di ogni elemento in un oggetto [std::array](../../standard-library/array-class-stl.md).  
  
 [!code-cpp[concrt-comparing-work-functions#1](../../parallel/concrt/codesnippet/CPP/overview-of-the-concurrency-runtime_1.cpp)]  
  
 **Output**  
  
  **1**  
**256**  
**6561**  
**65536**  
**390625** Per altre informazioni sulle funzioni lambda in C\+\+, vedere [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md).  
  
 \[[Torna all'inizio](#top)\]  
  
##  <a name="requirements"></a> Requisiti  
 Nella tabella seguente vengono mostrati i file di intestazione associati a ogni componente del runtime di concorrenza:  
  
|Componente|File di intestazione|  
|----------------|--------------------------|  
|PPL \(Parallel Patterns Library\)|ppl.h<br /><br /> concurrent\_queue.h<br /><br /> concurrent\_vector.h|  
|Libreria di agenti asincroni|agents.h|  
|Utilità di pianificazione|concrt.h|  
|Gestione risorse|concrtrm.h|  
  
 Il runtime di concorrenza viene dichiarato nello spazio dei nomi [Concurrency](../../parallel/concrt/reference/concurrency-namespace.md) \(è anche possibile utilizzare [concurrency](../../parallel/concrt/reference/concurrency-namespace.md), un alias per questo spazio dei nomi\). Lo spazio dei nomi `concurrency::details` supporta il framework del runtime di concorrenza e non deve essere usato direttamente dal codice.  
  
 Il runtime di concorrenza viene fornito come parte della Libreria di runtime C \(CRT\).  Per altre informazioni sulla compilazione di un'applicazione che usa CRT, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
 \[[Torna all'inizio](#top)\]