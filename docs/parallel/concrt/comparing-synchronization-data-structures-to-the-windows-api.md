---
title: "Confronto delle strutture di dati di sincronizzazione con l&#39;API Windows | Microsoft Docs"
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
  - "strutture di dati di sincronizzazione, confronto con API Windows"
  - "event (classe), esempio"
ms.assetid: 8b0b1a3a-ef80-408c-91fa-93e6af920b4e
caps.latest.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Confronto delle strutture di dati di sincronizzazione con l&#39;API Windows
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento viene confrontato il comportamento delle strutture di dati di sincronizzazione fornite dal runtime di concorrenza con quelle fornite dall'API Windows.  
  
 Le strutture di dati di sincronizzazione fornite dal runtime di concorrenza seguono il *modello di threading cooperativo*.  Nel modello di threading cooperativo, le primitive di sincronizzazione restituiscono in modo esplicito le risorse di elaborazione agli altri thread.  Questo modello è diverso dal *modello di threading di tipo preemptive*, dove le risorse di elaborazione vengono trasferite agli altri thread dall'utilità di pianificazione di controllo o dal sistema operativo.  
  
## critical\_section  
 La classe [concurrency::critical\_section](../../parallel/concrt/reference/critical-section-class.md) è simile alla struttura `CRITICAL_SECTION` di Windows poiché può essere utilizzata solo dai thread di un processo.  Per ulteriori informazioni sulle sezioni critiche nell'API Windows, vedere [Oggetti sezione critica](http://msdn.microsoft.com/library/windows/desktop/ms682530) \(la pagina potrebbe essere in inglese\).  
  
## reader\_writer\_lock  
 La classe [concurrency::reader\_writer\_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) è simile ai blocchi in lettura scrittura ridotti \(SRW\) di Windows.  Nella tabella seguente vengono illustrate similitudini e differenze.  
  
|Funzionalità|`reader_writer_lock`|Blocco SRW|  
|------------------|--------------------------|----------------|  
|Non rientrante|Yes|Yes|  
|Possibilità di promuovere da reader a writer \(supporto dell'aggiornamento\)|No|No|  
|Possibilità di abbassare di livello da writer a reader \(supporto del downgrade\)|No|No|  
|Blocco preferenza scrittura|Yes|No|  
|Accesso FIFO ai writer|Yes|No|  
  
 Per ulteriori informazioni sui blocchi SRW, vedere [Blocchi in lettura\/scrittura ridotti \(SRW\)](http://msdn.microsoft.com/library/windows/desktop/aa904937) \(la pagina potrebbe essere in inglese\) in Platform SDK.  
  
## event  
 La classe [concurrency::event](../../parallel/concrt/reference/event-class.md) è simile a un evento Windows di reimpostazione manuale senza nome.  Tuttavia, un oggetto `event` si comporta in modo cooperativo, mentre un evento Windows si comporta in modo preemptive.  Per ulteriori informazioni sugli eventi Windows, vedere [Oggetti eventi](http://msdn.microsoft.com/library/windows/desktop/ms682655) \(la pagina potrebbe essere in inglese\).  
  
## Esempio  
  
### Descrizione  
 Per comprendere meglio la differenza tra la classe `event` e gli eventi Windows, considerare l'esempio seguente.  Questo esempio consente all'utilità di pianificazione di creare al massimo due attività simultanee, quindi vengono chiamate due funzioni simili che utilizzano la classe `event` e un evento Windows di reimpostazione manuale.  Ogni funzione crea innanzitutto diverse attività in attesa che un evento condiviso venga segnalato.  Ogni funzione viene quindi restituita alle attività in esecuzione e segnala l'evento.  Ogni funzione attende infine l'evento segnalato.  
  
### Codice  
 [!code-cpp[concrt-event-comparison#1](../../parallel/concrt/codesnippet/CPP/comparing-synchronization-data-structures-to-the-windows-api_1.cpp)]  
  
### Commenti  
 Questo esempio produce l'output seguente:  
  
  **Cooperative event:**  
 **Context 0: waiting on an event.**  
 **Context 1: waiting on an event.**  
 **Context 2: waiting on an event.**  
 **Context 3: waiting on an event.**  
 **Context 4: waiting on an event.**  
 **Setting the event.**  
 **Context 5: received the event.**  
 **Context 6: received the event.**  
 **Context 7: received the event.**  
 **Context 8: received the event.**  
 **Context 9: received the event.**  
**Windows event:**  
 **Context 10: waiting on an event.**  
 **Context 11: waiting on an event.**  
 **Setting the event.**  
 **Context 12: received the event.**  
 **Context 14: waiting on an event.**  
 **Context 15: received the event.**  
 **Context 16: waiting on an event.**  
 **Context 17: received the event.**  
 **Context 18: waiting on an event.**  
 **Context 19: received the event.**  
 **Context 13: received the event.** Poiché la classe `event` si comporta in modo cooperativo, l'utilità di pianificazione può riassegnare le risorse di elaborazione a un altro contesto mentre un evento è in attesa di passare allo stato segnalato.  Pertanto, la versione che utilizza la classe `event` esegue più lavoro.  Nella versione che utilizza gli eventi Windows, ogni attività in attesa deve passare allo stato segnalato prima che venga avviata l'attività successiva.  
  
 Per ulteriori informazioni sulle attività, vedere [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## Vedere anche  
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)   
 [Oggetti sezione critica](http://msdn.microsoft.com/library/windows/desktop/ms682530)   
 [Blocchi in lettura\/scrittura ridotti \(SRW\)](http://msdn.microsoft.com/library/windows/desktop/aa904937)   
 [Oggetti evento](http://msdn.microsoft.com/library/windows/desktop/ms682655)