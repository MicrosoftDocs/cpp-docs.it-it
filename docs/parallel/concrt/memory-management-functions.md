---
title: Funzioni di gestione della memoria | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- memory management functions [Concurrency Runtime]
ms.assetid: d303dd2a-dfa4-4d90-a508-f6aa290bb9ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f0a298c7fb9e50bb17d37224b69ce342c54115d7
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="memory-management-functions"></a>Funzioni di gestione della memoria
Questo documento descrive le funzioni di gestione della memoria che fornisce il Runtime di concorrenza che consentono di allocare e liberare memoria in modo simultaneo.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione. Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md) o [libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se si è familiarità con il Runtime di concorrenza.  
  
 Il Runtime di concorrenza fornisce due funzioni di gestione della memoria che sono ottimizzate per allocare e liberare i blocchi di memoria in modo simultaneo. Il [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) funzione alloca un blocco di memoria utilizzando la dimensione specificata. Il [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) funzione libera la memoria allocata da `Alloc`.  
  
> [!NOTE]
>  Il `Alloc` e `Free` funzioni si basano su loro. Utilizzare il `Free` funzione solo per rilasciare la memoria allocata tramite il `Alloc` (funzione). Inoltre, quando si utilizza il `Alloc` funzione per allocare memoria, utilizzare solo il `Free` funzione per rilasciare tale memoria.  
  
 Utilizzare il `Alloc` e `Free` funzioni quando si alloca e libera un set fisso di dimensioni di allocazione da attività o thread diversi. Il Runtime di concorrenza memorizza nella cache di memoria allocata dall'heap di Runtime C. Il Runtime di concorrenza mantiene una cache di memoria separata per ogni thread in esecuzione. Pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o barriere di memoria. Vantaggi di un'applicazione più il `Alloc` e `Free` funzioni quando la cache della memoria si accede più frequentemente. Ad esempio, un thread che chiama frequentemente `Alloc` e `Free` vantaggi più di un thread che chiama principalmente `Alloc` o `Free`.  
  
> [!NOTE]
>  Quando si utilizzano queste funzioni di gestione della memoria e l'applicazione utilizza molti memoria, l'applicazione è possono immettere una condizione di memoria insufficiente prima di quanto previsto. Poiché i blocchi di memoria che vengono memorizzati nella cache da un thread non sono disponibili altri thread, se un thread contiene grandi quantità di memoria, che la memoria non è disponibile.  
  
## <a name="example"></a>Esempio  
 Per un esempio che utilizza il `Alloc` e `Free` funzioni per migliorare le prestazioni di memoria, vedere [procedura: utilizzare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)

