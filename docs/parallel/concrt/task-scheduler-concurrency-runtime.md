---
title: "Utilit&#224; di pianificazione (runtime di concorrenza) | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "attività leggere [Runtime di concorrenza]"
  - "oversubscription [Runtime di concorrenza]"
  - "gruppi di pianificazione [Runtime di concorrenza]"
  - "istanze dell'utilità di pianificazione [Runtime di concorrenza]"
  - "criteri dell'utilità di pianificazione [Runtime di concorrenza]"
  - "utilità di pianificazione [Runtime di concorrenza]"
  - "utilità di pianificazione [Runtime di concorrenza], attività leggere"
  - "utilità di pianificazione [Runtime di concorrenza], oversubscription"
  - "utilità di pianificazione [Runtime di concorrenza], gruppi di pianificazione"
  - "utilità di pianificazione [Runtime di concorrenza], istanze dell'utilità di pianificazione"
  - "utilità di pianificazione [Runtime di concorrenza], criteri dell'utilità di pianificazione"
  - "utilità di pianificazione [Runtime di concorrenza], wait (funzione)"
  - "wait (funzione) [Runtime di concorrenza]"
ms.assetid: 9aba278c-e0c9-4ede-b7c6-fedf7a365d90
caps.latest.revision: 42
caps.handback.revision: 41
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilit&#224; di pianificazione (runtime di concorrenza)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Negli argomenti contenuti in questa parte della documentazione vengono descritte le funzionalità principali dell'utilità di pianificazione del runtime di concorrenza.  L'Utilità di pianificazione è utile quando si vuole ottimizzare le prestazioni del codice esistente che usa il runtime di concorrenza.  
  
> [!IMPORTANT]
>  L'utilità di pianificazione non è disponibile in un'applicazione [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)].  Per altre informazioni, vedere [Creazione di operazioni asincrone in C\+\+ per le applicazioni Windows Store](../../parallel/concrt/creating-asynchronous-operations-in-cpp-for-windows-store-apps.md).  
>   
>  In Visual Studio 2015 e versioni successive, la classe [concurrency::task](../../parallel/concrt/reference/task-class-concurrency-runtime.md) e i tipi correlati in ppltasks.h usano il pool di thread di Windows come utilità di pianificazione.  Questo argomento non si applica più ai tipi definiti in ppltasks.h.  Gli algoritmi paralleli come parallel\_for continuano a usare il runtime di concorrenza come utilità di pianificazione predefinita.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione.  Poiché l'Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con il runtime di concorrenza.  
  
 L'Utilità di pianificazione pianifica e coordina le attività in fase di esecuzione.  Per *attività* si intende un'unità di lavoro che esegue un processo specifico.  Un'attività può in genere essere eseguita in parallelo con altre attività.  Esempi di attività sono rappresentati dal lavoro eseguito dagli elementi del gruppo di attività, dagli algoritmi paralleli e dagli agenti asincroni.  
  
 L'Utilità di pianificazione gestisce i dettagli correlati alla pianificazione efficiente delle attività su computer che dispongono di più risorse di elaborazione.  L'Utilità di pianificazione usa inoltre le funzionalità più recenti del sistema operativo sottostante.  Pertanto, le applicazioni che usano il runtime di concorrenza si adeguano automaticamente all'hardware migliorandolo con funzionalità estese.  
  
 In [Confronto con altri modelli di concorrenza](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md) vengono descritte le differenze tra i meccanismi di pianificazione di tipo preemptive e cooperativa.  L'Utilità di pianificazione usa la pianificazione cooperativa e un algoritmo di acquisizione del lavoro insieme all'utilità di pianificazione di tipo preemptive del sistema operativo per ottimizzare l'uso delle risorse di elaborazione.  
  
 Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita in modo da evitare di dover gestire i dettagli dell'infrastruttura.  Pertanto, l'Utilità di pianificazione in genere non viene usata direttamente.  Tuttavia, per soddisfare le esigenze di qualità dell'applicazione, è possibile usare l'Utilità di pianificazione per fornire criteri di pianificazione personalizzati o associare utilità di pianificazione a specifiche attività.  Si supponga ad esempio di avere una routine di ordinamento parallela che non possa essere usata con più di quattro processori.  È possibile usare i *criteri dell'utilità di pianificazione* per creare un'utilità di pianificazione che generi non più di quattro attività simultanee.  L'esecuzione della routine di ordinamento su questa utilità di pianificazione consente alle altre utilità di pianificazione attive di usare tutte le risorse di elaborazione rimanenti.  
  
## Argomenti correlati  
  
|Titolo|Descrizione|  
|------------|-----------------|  
|[Istanze dell'utilità di pianificazione](../../parallel/concrt/scheduler-instances.md)|Vengono descritte le istanze dell'utilità di pianificazione e l'uso delle classi `concurrency::Scheduler` e `concurrency::CurrentScheduler` per gestirle.  Usare le istanze dell'utilità di pianificazione quando si vuole associare i criteri di pianificazione espliciti a specifici tipi di carichi di lavoro.|  
|[Criteri dell'utilità di pianificazione](../../parallel/concrt/scheduler-policies.md)|Descrive il ruolo dei criteri dell'utilità di pianificazione.  Usare i criteri dell'utilità di pianificazione per controllare la strategia usata dall'utilità di pianificazione quando gestisce le attività.|  
|[Gruppi di pianificazione](../../parallel/concrt/schedule-groups.md)|Descrive il ruolo dei gruppi di pianificazione.  Usare i gruppi di pianificazione quando è necessario un livello elevato di località tra le attività, ad esempio quando un gruppo di attività correlate trae vantaggio dall'esecuzione nello stesso nodo del processore.|  
|[Attività leggere](../../parallel/concrt/lightweight-tasks.md)|Descrive il ruolo delle attività leggere.  Le attività leggere sono utili quando si adatta il codice esistente per usare la funzionalità di pianificazione del runtime di concorrenza.|  
|[Contesti](../../parallel/concrt/contexts.md)|Descrive il ruolo dei contesti, la funzione `concurrency::wait` e la classe `concurrency::Context`.  Usare queste funzionalità quando è necessario controllare le operazioni di blocco, sblocco e restituzione dei contesti e l'oversubscription nell'applicazione.|  
|[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)|Descrive le funzioni `concurrency::Alloc` e `concurrency::Free`.  Queste funzioni consentono di migliorare le prestazioni di memoria allocando e liberando memoria in modo simultaneo.|  
|[Confronto con altri modelli di concorrenza](../../parallel/concrt/comparing-the-concurrency-runtime-to-other-concurrency-models.md)|Descrive le differenze tra i meccanismi di pianificazione di tipo preemptive e cooperativa.|  
|[PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md)|Descrive come usare i vari modelli paralleli, ad esempio gli algoritmi paralleli, nelle applicazioni.|  
|[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)|Descrive come usare gli agenti asincroni nelle applicazioni.|  
|[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)|Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.|