---
title: Confronto delle strutture di dati di sincronizzazione con l'API Windows
ms.date: 11/04/2016
helpviewer_keywords:
- synchronization data structures, compared to Windows API
- event class, example
ms.assetid: 8b0b1a3a-ef80-408c-91fa-93e6af920b4e
ms.openlocfilehash: b889570935b3a94e0cb8717c8af1783e2ce31c42
ms.sourcegitcommit: 6280a4c629de0f638ebc2edd446de2a9b11f0406
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/12/2020
ms.locfileid: "90040341"
---
# <a name="comparing-synchronization-data-structures-to-the-windows-api"></a>Confronto delle strutture di dati di sincronizzazione con l'API Windows

In questo argomento viene confrontato il comportamento delle strutture di dati di sincronizzazione fornite dal runtime di concorrenza a quelle fornite dall'API di Windows.

Le strutture dei dati di sincronizzazione fornite dal runtime di concorrenza seguono il *modello di threading cooperativo*. Nel modello di threading cooperativo le primitive di sincronizzazione restituiscono in modo esplicito le risorse di elaborazione ad altri thread. Questo comportamento è diverso rispetto al *modello di threading preemptive*, in cui le risorse di elaborazione vengono trasferite ad altri thread dall'utilità di pianificazione di controllo o dal sistema operativo.

## <a name="critical_section"></a>critical_section

La classe [Concurrency:: critical_section](../../parallel/concrt/reference/critical-section-class.md) è simile alla struttura di Windows `CRITICAL_SECTION` perché può essere utilizzata solo dai thread di un processo. Per ulteriori informazioni sulle sezioni critiche nell'API Windows, vedere [oggetti sezione critica](/windows/win32/Sync/critical-section-objects).

## <a name="reader_writer_lock"></a>reader_writer_lock

La classe [Concurrency:: reader_writer_lock](../../parallel/concrt/reference/reader-writer-lock-class.md) è simile ai blocchi SRW (Reader/Writer) di Windows Slim. Nella tabella seguente vengono illustrate le analogie e le differenze.

| Feature | Classe `reader_writer_lock` | Blocco SRW |
|--|--|--|
| Non rientrante | Sì | Sì |
| Consente di innalzare di livello un reader a Writer (supporto dell'aggiornamento) | No | No |
| Può abbassare di valore il writer a un lettore (supporto del downgrade) | No | No |
| Blocco preferenza scrittura | Sì | No |
| Accesso FIFO ai writer | Sì | No |

Per ulteriori informazioni sui blocchi SRW, vedere la pagina relativa ai [blocchi di Reader/Writer (SRW) Slim](/windows/win32/sync/slim-reader-writer--srw--locks) in Platform SDK.

## <a name="event"></a>event

La classe [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) è simile a un evento di reimpostazione manuale di Windows senza nome. Tuttavia, un `event` oggetto si comporta in modo cooperativo, mentre un evento Windows si comporta in modo preemptive. Per ulteriori informazioni sugli eventi di Windows, vedere [oggetti evento](/windows/win32/Sync/event-objects).

## <a name="example"></a>Esempio

### <a name="description"></a>Descrizione

Per comprendere meglio la differenza tra la `event` classe e gli eventi di Windows, si consideri l'esempio seguente. Questo esempio consente all'utilità di pianificazione di creare al massimo due attività simultanee e quindi chiama due funzioni simili che usano la `event` classe e un evento di reimpostazione manuale di Windows. Ogni funzione crea innanzitutto diverse attività che attendono che un evento condiviso venga segnalato. Ogni funzione restituisce quindi le attività in esecuzione e quindi segnala l'evento. Ogni funzione attende quindi l'evento segnalato.

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

Poiché la `event` classe si comporta in modo cooperativo, l'utilità di pianificazione può riallocare le risorse di elaborazione a un altro contesto quando un evento è in attesa di entrare nello stato segnalato. Pertanto, una maggiore quantità di lavoro viene eseguita dalla versione che utilizza la `event` classe. Nella versione che usa gli eventi di Windows, ogni attività in attesa deve entrare nello stato segnalato prima che l'attività successiva venga avviata.

Per ulteriori informazioni sulle attività, vedere [parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md).

## <a name="see-also"></a>Vedi anche

[Strutture dei dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)
