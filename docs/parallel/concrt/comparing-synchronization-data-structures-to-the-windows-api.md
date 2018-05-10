---
title: Il confronto delle strutture di dati di sincronizzazione per l'API Windows | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- synchronization data structures, compared to Windows API
- event class, example
ms.assetid: 8b0b1a3a-ef80-408c-91fa-93e6af920b4e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2d1470911b13243a7c8b3befc627801368e89f04
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="comparing-synchronization-data-structures-to-the-windows-api"></a>Confronto delle strutture di dati di sincronizzazione con l'API Windows
In questo argomento viene confrontato il comportamento delle strutture di dati di sincronizzazione fornite dal Runtime di concorrenza a quelli forniti dall'API di Windows.  
  
 Le strutture di dati di sincronizzazione fornite dal Runtime di concorrenza seguono il *modello di threading cooperativo*. Nel modello di threading cooperativo, le primitive di sincronizzazione restituiscono in modo esplicito le risorse di elaborazione da altri thread. Questo comportamento è diverso dal *modello di threading preemptive*, in cui le risorse di elaborazione vengono trasferite agli altri thread per il sistema operativo o il controllo dell'utilità di pianificazione.  
  
## <a name="criticalsection"></a>critical_section  
 Il [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) classe è simile a Windows `CRITICAL_SECTION` struttura perché può essere utilizzato solo dai thread di un processo. Per ulteriori informazioni sulle sezioni critiche nell'API di Windows, vedere [oggetti sezione critica](http://msdn.microsoft.com/library/windows/desktop/ms682530).  
  
## <a name="readerwriterlock"></a>reader_writer_lock  
 Il [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) classe simile ai blocchi in lettura/scrittura (SRW) di Windows. Nella tabella seguente vengono illustrate le analogie e differenze.  
  
|Funzionalità|`reader_writer_lock`|Blocco SRW|  
|-------------|--------------------------|--------------|  
|Non rientrante|Yes|Yes|  
|Possibile alzare di livello un lettore in un writer (supporto per l'aggiornamento)|No|No|  
|Può abbassare di livello un autore di un lettore (supporto per il downgrade)|No|No|  
|Blocco preferenza scrittura|Yes|No|  
|Accesso FIFO ai writer|Yes|No|  
  
 Per ulteriori informazioni sui blocchi SRW, vedere [blocchi in lettura/scrittura (SRW)](http://msdn.microsoft.com/library/windows/desktop/aa904937) in Platform SDK.  
  
## <a name="event"></a>event  
 Il [Concurrency:: event](../../parallel/concrt/reference/event-class.md) classe è simile a un evento di reimpostazione manuale di Windows senza nome. Tuttavia, un `event` oggetto si comporta in modo cooperativo, mentre un evento di Windows si comporta in modo preemptive. Per ulteriori informazioni sugli eventi di Windows, vedere [oggetti evento](http://msdn.microsoft.com/library/windows/desktop/ms682655).  
  
## <a name="example"></a>Esempio  
  
### <a name="description"></a>Descrizione  
 Per comprendere meglio la differenza tra la `event` classe e gli eventi di Windows, si consideri l'esempio seguente. In questo esempio consente di creare al massimo due attività simultanee e quindi chiama due funzioni simili che utilizzano l'utilità di pianificazione di `event` classe e un evento di reimpostazione manuale di Windows. Ogni funzione crea innanzitutto diverse attività in attesa di un evento condiviso segnalato. Ogni funzione restituisce quindi per le attività in esecuzione e segnala l'evento. Ogni funzione attende che l'evento segnalato.  
  
### <a name="code"></a>Codice  
 [!code-cpp[concrt-event-comparison#1](../../parallel/concrt/codesnippet/cpp/comparing-synchronization-data-structures-to-the-windows-api_1.cpp)]  
  
### <a name="comments"></a>Commenti  
 Questo esempio produce il seguente output di esempio:  
  
```Output  
Cooperative event:  
    Context 0: waiting on an event.  
    Context 1: waiting on an event.  
    Context 2: waiting on an event.  
    Context 3: waiting on an event.  
    Context 4: waiting on an event.  
    Setting the event.  
    Context 5: received the event.  
    Context 6: received the event.  
    Context 7: received the event.  
    Context 8: received the event.  
    Context 9: received the event.  
Windows event:  
    Context 10: waiting on an event.  
    Context 11: waiting on an event.  
    Setting the event.  
    Context 12: received the event.  
    Context 14: waiting on an event.  
    Context 15: received the event.  
    Context 16: waiting on an event.  
    Context 17: received the event.  
    Context 18: waiting on an event.  
    Context 19: received the event.  
    Context 13: received the event.  
```  
  
 Poiché la `event` classe si comporta in modo cooperativo, l'utilità di pianificazione può riassegnare le risorse di elaborazione a un altro contesto quando un evento è in attesa di passare allo stato segnalato. Pertanto, esegue più lavoro per la versione che utilizza il `event` classe. La versione che utilizza gli eventi di Windows, ogni attività in attesa immettere in stato segnalato prima dell'avvio dell'operazione successiva.  
  
 Per ulteriori informazioni sulle attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
