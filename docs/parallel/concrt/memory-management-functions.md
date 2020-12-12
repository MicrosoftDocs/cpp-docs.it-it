---
description: 'Altre informazioni su: funzioni di gestione della memoria'
title: Funzioni di gestione della memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory management functions [Concurrency Runtime]
ms.assetid: d303dd2a-dfa4-4d90-a508-f6aa290bb9ea
ms.openlocfilehash: d75778f99294c1a177ac204bb0fb96c3ee84422c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97205538"
---
# <a name="memory-management-functions"></a>Funzioni di gestione della memoria

In questo documento vengono descritte le funzioni di gestione della memoria fornite dal runtime di concorrenza per consentire di allocare e liberare memoria in modo simultaneo.

> [!TIP]
> Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché il Utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la libreria [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con l'runtime di concorrenza.

Il runtime di concorrenza fornisce due funzioni di gestione della memoria ottimizzate per l'allocazione e la liberazione di blocchi di memoria in modo simultaneo. La funzione [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) alloca un blocco di memoria utilizzando le dimensioni specificate. La funzione [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) libera la memoria allocata da `Alloc` .

> [!NOTE]
> Le `Alloc` funzioni e si `Free` basano tra loro. Usare la `Free` funzione solo per rilasciare la memoria allocata usando la `Alloc` funzione. Inoltre, quando si utilizza la `Alloc` funzione per allocare memoria, utilizzare solo la `Free` funzione per rilasciare tale memoria.

Utilizzare le `Alloc` `Free` funzioni e quando si alloca e si libera un set fisso di dimensioni di allocazione da thread o attività diverse. Il runtime di concorrenza memorizza nella cache la memoria che alloca dall'heap di runtime C. Il runtime di concorrenza include una cache di memoria separata per ogni thread in esecuzione. il runtime gestisce pertanto la memoria senza l'utilizzo di blocchi o barriere di memoria. Un'applicazione offre maggiori vantaggi dalle `Alloc` `Free` funzioni e quando viene eseguito l'accesso alla cache della memoria con maggiore frequenza. Ad esempio, un thread che chiama spesso sia `Alloc` che `Free` avvantaggia più di un thread che chiama principalmente `Alloc` o `Free` .

> [!NOTE]
> Quando si usano queste funzioni di gestione della memoria e l'applicazione usa molta memoria, è possibile che l'applicazione entri in una condizione di memoria insufficiente prima di quanto previsto. Poiché i blocchi di memoria memorizzati nella cache da un thread non sono disponibili per nessun altro thread, se un thread utilizza molta memoria, tale memoria non è disponibile.

## <a name="example"></a>Esempio

Per un esempio che usa le `Alloc` `Free` funzioni e per migliorare le prestazioni della memoria, vedere [procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).

## <a name="see-also"></a>Vedi anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)
