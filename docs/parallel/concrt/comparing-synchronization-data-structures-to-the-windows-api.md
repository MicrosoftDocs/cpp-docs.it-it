---
title: Confronto delle strutture di dati di sincronizzazione con l'API Windows
ms.date: 11/04/2016
helpviewer_keywords:
- synchronization data structures, compared to Windows API
- event class, example
ms.assetid: 8b0b1a3a-ef80-408c-91fa-93e6af920b4e
ms.openlocfilehash: 4fa0d3fbf3457bfafab731275584d206206161dd
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62414035"
---
# <a name="comparing-synchronization-data-structures-to-the-windows-api"></a>Confronto delle strutture di dati di sincronizzazione con l'API Windows

In questo argomento Confronta il comportamento delle strutture di dati di sincronizzazione forniti dal Runtime di concorrenza a quelle fornite dall'API di Windows.

Le strutture di dati di sincronizzazione forniti dal Runtime di concorrenza seguono le *modello di threading cooperativo*. Nel modello di threading cooperativo, le primitive di sincronizzazione restituiscono in modo esplicito le risorse di elaborazione agli altri thread. Questo comportamento è diverso dal *modello di threading preemptive*, in cui le risorse di elaborazione vengono trasferite agli altri thread per il sistema operativo o il controllo dell'utilità di pianificazione.

## <a name="criticalsection"></a>critical_section

Il [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) classe è simile al Windows `CRITICAL_SECTION` struttura poiché può essere usato solo dal thread di un processo. Per altre informazioni sulle sezioni critiche nell'API di Windows, vedere [oggetti sezione critica](/windows/desktop/Sync/critical-section-objects).

## <a name="readerwriterlock"></a>reader_writer_lock

Il [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) classe è simile a blocchi in lettura/scrittura (SRW) di Windows. Nella tabella seguente vengono illustrate le analogie e differenze.

|Funzionalità|`reader_writer_lock`|Blocco SRW|
|-------------|--------------------------|--------------|
|Non è rientrante|Yes|Yes|
|Possibile alzare di livello un lettore in un writer (supporto per l'aggiornamento)|No|No|
|Può abbassare di livello un autore di un lettore (supporto per il downgrade)|No|No|
|Blocco di scrittura preferenza|Yes|No|
|Accesso FIFO per i writer|Yes|No|

Per altre informazioni sui blocchi SRW, vedere [blocchi Slim Reader/Writer (SRW)](https://msdn.microsoft.com/library/windows/desktop/aa904937) in Platform SDK.

## <a name="event"></a>event

Il [Concurrency:: event](../../parallel/concrt/reference/event-class.md) classe è simile a un evento di reimpostazione manuale di Windows senza nome. Tuttavia, un `event` oggetto si comporta in modo cooperativo, mentre un evento di Windows si comporta preventivamente. Per altre informazioni sugli eventi di Windows, vedere [oggetti evento](/windows/desktop/Sync/event-objects).

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Per comprendere meglio la differenza tra il `event` classe e gli eventi di Windows, si consideri l'esempio seguente. Questo esempio viene abilitato l'utilità di pianificazione creare al massimo due attività simultanee e quindi chiama due funzioni simili che utilizzano il `event` classe e un evento di reimpostazione manuale di Windows. Ogni funzione prima di tutto crea diverse attività in attesa di un evento venga segnalato condiviso. Ogni funzione restituisce quindi per le attività in esecuzione e quindi segnala l'evento. Ogni funzione attende quindi l'evento segnalato.

### <a name="code"></a>Codice

[!code-cpp[concrt-event-comparison#1](../../parallel/concrt/codesnippet/cpp/comparing-synchronization-data-structures-to-the-windows-api_1.cpp)]

### <a name="comments"></a>Commenti

Questo esempio produce l'output di esempio seguente:

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

Poiché il `event` classe si comporta in modo cooperativo, l'utilità di pianificazione può riassegnare le risorse di elaborazione a un altro contesto quando un evento è in attesa di passare allo stato segnalato. Pertanto, più lavoro avviene tramite la versione che usa il `event` classe. Nella versione che utilizza gli eventi di Windows, ogni attività in attesa deve passare allo stato segnalato prima che venga avviata l'attività successiva.

Per altre informazioni sulle attività, vedere [Task Parallelism](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="see-also"></a>Vedere anche

[Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
