---
title: "Strutture di dati di sincronizzazione | Microsoft Docs"
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
  - "strutture di dati di sincronizzazione"
ms.assetid: d612757d-e4b7-4019-a627-f853af085b8b
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# Strutture di dati di sincronizzazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il runtime di concorrenza fornisce diverse strutture dei dati che consentono di sincronizzare l'accesso ai dati condivisi da più thread.  Queste strutture dei dati sono utili in presenza di dati condivisi che vengono modificati raramente.  Un oggetto di sincronizzazione, ad esempio una sezione critica, impone agli altri thread di attendere finché la risorsa condivisa non è disponibile.  Pertanto, se si utilizza tale oggetto per sincronizzare l'accesso ai dati utilizzati di frequente, è possibile perdere scalabilità nell'applicazione.  Nella libreria [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) è disponibile la classe [concurrency::combinable](../../parallel/concrt/reference/combinable-class.md), che consente di condividere una risorsa tra diversi thread o attività senza la necessità di sincronizzazione.  Per ulteriori informazioni sulla classe `combinable`, vedere [Contenitori e oggetti paralleli](../../parallel/concrt/parallel-containers-and-objects.md).  
  
##  <a name="top"></a> Sezioni  
 In questo argomento vengono descritti in dettaglio i tipi di blocco dei messaggi asincroni seguenti:  
  
-   [critical\_section](#critical_section)  
  
-   [reader\_writer\_lock](#reader_writer_lock)  
  
-   [scoped\_lock e scoped\_lock\_read](#scoped_lock)  
  
-   [event](#event)  
  
##  <a name="critical_section"></a> critical\_section  
 La classe [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md) rappresenta un oggetto cooperativo a esclusione reciproca che cede il controllo ad altre attività anziché avere la precedenza su di esse.  Le sezioni critiche sono utili quando più thread richiedono l'accesso esclusivo in lettura e scrittura ai dati condivisi.  
  
 La classe `critical_section` non è rientrante.  Il metodo [concurrency::critical\_section::lock](../Topic/critical_section::lock%20Method.md) genera un'eccezione di tipo [concurrency::improper\_lock](../../parallel/concrt/reference/improper-lock-class.md) se viene chiamato dal thread già proprietario del blocco.  
  
### Metodi e funzionalità  
 Nella tabella seguente vengono illustrati i metodi principali definiti dalla classe `critical_section`.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[blocco](../Topic/critical_section::lock%20Method.md)|Acquisisce la sezione critica.  Il contesto di chiamata viene bloccato finché non viene acquisito il blocco.|  
|[try\_lock](../Topic/critical_section::try_lock%20Method.md)|Tenta di acquisire la sezione critica, senza bloccarsi.|  
|[unlock](../Topic/critical_section::unlock%20Method.md)|Rilascia la sezione critica.|  
  
 \[[Top](#top)\]  
  
##  <a name="reader_writer_lock"></a> reader\_writer\_lock  
 La classe [concurrency::reader\_writer\_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) fornisce le operazioni di lettura\/scrittura thread\-safe nei dati condivisi.  Utilizzare i blocchi reader\/writer quando più thread richiedono l'accesso in lettura simultaneo a una risorsa condivisa ma raramente scrivono nella risorsa condivisa.  Questa classe concede a un oggetto sempre un solo accesso in scrittura al thread.  
  
 Le prestazioni della classe `reader_writer_lock` risultano migliori della classe `critical_section` poiché un oggetto `critical_section` acquisisce l'accesso esclusivo a una risorsa condivisa impedendo l'accesso in lettura simultaneo.  
  
 Analogamente alla classe `critical_section`, la classe `reader_writer_lock` rappresenta un oggetto cooperativo a esclusione reciproca che viene passato ad altre attività anziché annullarle.  
  
 Quando un thread che deve scrivere in una risorsa condivisa acquisisce un blocco reader\/writer, gli altri thread che devono accedere alla risorsa vengono bloccati finché il writer non rilascia il blocco.  La classe `reader_writer_lock` è un esempio di blocco con *preferenza di scrittura*, ovvero un blocco che sblocca i writer in attesa prima di sbloccare i reader in attesa.  
  
 Analogamente alla `critical_section`, la classe `reader_writer_lock` non è rientrante.  I metodi [concurrency::reader\_writer\_lock::lock](../Topic/reader_writer_lock::lock%20Method.md) e [concurrency::reader\_writer\_lock::lock\_read](../Topic/reader_writer_lock::lock_read%20Method.md) generano un'eccezione di tipo `improper_lock` se vengono chiamati da un thread già proprietario del blocco.  
  
> [!NOTE]
>  Poiché la classe `reader_writer_lock` non è rientrante, non è possibile aggiornare un blocco di sola lettura a un blocco di lettura\/scrittura o declassare un blocco di lettura\/scrittura a un blocco di sola lettura.  L'esecuzione di entrambe queste operazioni produce un comportamento non specificato.  
  
### Metodi e funzionalità  
 Nella tabella seguente vengono illustrati i metodi principali definiti dalla classe `reader_writer_lock`.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[blocco](../Topic/reader_writer_lock::lock%20Method.md)|Acquisisce l'accesso in lettura\/scrittura al blocco.|  
|[try\_lock](../Topic/reader_writer_lock::try_lock%20Method.md)|Tenta di acquisire l'accesso in lettura\/scrittura al blocco, senza bloccarsi.|  
|[lock\_read](../Topic/reader_writer_lock::lock_read%20Method.md)|Acquisisce l'accesso in sola lettura al blocco.|  
|[try\_lock\_read](../Topic/reader_writer_lock::try_lock_read%20Method.md)|Tenta di acquisire l'accesso in sola lettura al blocco, senza bloccarsi.|  
|[unlock](../Topic/reader_writer_lock::unlock%20Method.md)|Rilascia il blocco.|  
  
 \[[Top](#top)\]  
  
##  <a name="scoped_lock"></a> scoped\_lock e scoped\_lock\_read  
 Le classi `critical_section` e `reader_writer_lock` forniscono classi di supporto annidate che semplificano il modo di utilizzare gli oggetti a esclusione reciproca.  Queste classi di supporto sono note come *blocchi con ambito*.  
  
 La classe `critical_section` include la classe [concurrency::critical\_section::scoped\_lock](../Topic/critical_section::scoped_lock%20Class.md).  Il costruttore acquisisce l'accesso all'oggetto `critical_section` fornito, mentre il distruttore rilascia l'accesso a tale oggetto.  La classe `reader_writer_lock` include la classe [concurrency::reader\_writer\_lock::scoped\_lock](../Topic/reader_writer_lock::scoped_lock%20Class.md), che è simile a `critical_section::scoped_lock`, con l'unica differenza che gestisce l'accesso in scrittura all'oggetto `reader_writer_lock` fornito.  La classe `reader_writer_lock` include inoltre la classe [concurrency::reader\_writer\_lock::scoped\_lock\_read](../Topic/reader_writer_lock::scoped_lock_read%20Class.md).  Questa classe gestisce l'accesso in lettura all'oggetto `reader_writer_lock` fornito.  
  
 I blocchi con ambito forniscono diversi vantaggi quando si utilizzano gli oggetti `critical_section` e `reader_writer_lock` manualmente.  In genere, un blocco con ambito viene allocato nello stack.  Un blocco con ambito rilascia automaticamente l'accesso al relativo oggetto a esclusione reciproca quando viene eliminato; pertanto, l'oggetto sottostante non viene manualmente sbloccato.  Ciò si rivela utile quando una funzione contiene più istruzioni `return`.  I blocchi con ambito possono inoltre consentire di scrivere il codice indipendentemente dalle eccezioni.  Quando un'istruzione `throw` determina la rimozione dello stack, viene chiamato il distruttore di un blocco con ambito attivo e pertanto l'oggetto a esclusione reciproca viene sempre rilasciato correttamente.  
  
> [!NOTE]
>  Quando si utilizzano le classi `critical_section::scoped_lock`, `reader_writer_lock::scoped_lock` e `reader_writer_lock::scoped_lock_read`, non rilasciare manualmente l'accesso all'oggetto a esclusione reciproca sottostante,  poiché il runtime può restituire uno stato non valido.  
  
##  <a name="event"></a> event  
 La classe [concurrency::event](../../parallel/concrt/reference/event-class.md) rappresenta un oggetto di sincronizzazione il cui stato può essere segnalato o non segnalato.  A differenza degli oggetti di sincronizzazione, come le sezioni critiche, il cui scopo è proteggere l'accesso ai dati condivisi, gli eventi sincronizzano il flusso di esecuzione.  
  
 La classe `event` è utile quando un'attività ha completato il lavoro di un'altra attività.  Ad esempio, un'attività potrebbe segnalare a un'altra attività di aver letto i dati da una connessione di rete o da un file.  
  
### Metodi e funzionalità  
 Nella tabella seguente vengono illustrati diversi metodi principali definiti dalla classe `event`.  
  
|Metodo|Descrizione|  
|------------|-----------------|  
|[wait](../Topic/event::wait%20Method.md)|Attende che l'evento venga segnalato.|  
|[set](../Topic/event::set%20Method.md)|Imposta l'evento sullo stato segnalato.|  
|[reset](../Topic/event::reset%20Method.md)|Imposta l'evento sullo stato non segnalato.|  
|[wait\_for\_multiple](../Topic/event::wait_for_multiple%20Method.md)|Attende che più eventi vengano segnalati.|  
  
### Esempio  
 Per un esempio che illustra come utilizzare la classe `event`, vedere [Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md).  
  
 \[[Top](#top)\]  
  
## Sezioni correlate  
 [Confronto delle strutture di dati di sincronizzazione con l'API Windows](../../parallel/concrt/comparing-synchronization-data-structures-to-the-windows-api.md)  
 Viene confrontato il comportamento delle strutture dei dati di sincronizzazione con quelle fornite dall'API Windows.  
  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)  
 Viene descritto il runtime di concorrenza che semplifica la programmazione parallela e vengono forniti i collegamenti ad argomenti correlati.