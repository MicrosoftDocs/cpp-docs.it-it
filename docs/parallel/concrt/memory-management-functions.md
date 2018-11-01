---
title: Funzioni di gestione della memoria
ms.date: 11/04/2016
helpviewer_keywords:
- memory management functions [Concurrency Runtime]
ms.assetid: d303dd2a-dfa4-4d90-a508-f6aa290bb9ea
ms.openlocfilehash: d8dfc8bbb200258818c38e931e978cc3be292525
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50454081"
---
# <a name="memory-management-functions"></a>Funzioni di gestione della memoria

Questo documento descrive le funzioni di gestione della memoria offerte dal Runtime di concorrenza che consentono di allocare e liberare la memoria in modo simultaneo.

> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o nella [Asynchronous Agents Library](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.

Il Runtime di concorrenza fornisce due funzioni di gestione della memoria che sono ottimizzate per allocare e liberare blocchi di memoria in modo simultaneo. Il [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) funzione alloca un blocco di memoria tramite la dimensione specificata. Il [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) funzione libera la memoria allocata dalle `Alloc`.

> [!NOTE]
>  Il `Alloc` e `Free` funzioni si basano tra loro. Usare la `Free` funzione solo per rilasciare la memoria allocata tramite la `Alloc` (funzione). Inoltre, quando si usa la `Alloc` funzione per allocare memoria, usare solo il `Free` funzione per rilasciare tale memoria.

Usare la `Alloc` e `Free` funzioni quando si alloca e libera un set fisso di dimensioni di allocazione da thread diversi o attività. Il Runtime di concorrenza vengono memorizzati nella cache la memoria allocata dall'heap di Runtime C. Il Runtime di concorrenza mantiene una cache di memoria separati per ogni thread in esecuzione. Pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o le barriere di memoria. Un'applicazione trae vantaggio dal `Alloc` e `Free` funzioni quando la cache in memoria si accede più frequentemente. Ad esempio, un thread che chiama frequentemente `Alloc` e `Free` vantaggi ulteriori rispetto a un thread che chiama principalmente `Alloc` o `Free`.

> [!NOTE]
>  Quando si usano queste funzioni di gestione della memoria, e l'applicazione utilizza gran di memoria, l'applicazione è possibile immettere una condizione di memoria insufficiente più rapidamente rispetto a quelli previsti. Poiché i blocchi di memoria che vengono memorizzati nella cache da un thread non sono disponibili per un altro thread, se un thread contiene un numero elevato di memoria, tale memoria non è disponibile.

## <a name="example"></a>Esempio

Per un esempio che usa il `Alloc` e `Free` funzioni per migliorare le prestazioni di memoria, vedere [procedura: usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).

## <a name="see-also"></a>Vedere anche

[Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)<br/>
[Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)

