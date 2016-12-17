---
title: "Funzioni di gestione della memoria | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
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
  - "funzioni di gestione della memoria [Runtime di concorrenza]"
ms.assetid: d303dd2a-dfa4-4d90-a508-f6aa290bb9ea
caps.latest.revision: 6
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni di gestione della memoria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento vengono descritte le funzioni di gestione della memoria offerte dal runtime di concorrenza che consentono di allocare e liberare memoria in modo simultaneo.  
  
> [!TIP]
>  Il runtime di concorrenza fornisce un'utilità di pianificazione predefinita, pertanto non è necessario crearne una nell'applicazione.  Poiché l'utilità di pianificazione consente di ottimizzare le prestazioni delle applicazioni, è consigliabile iniziare con la [PPL \(Parallel Patterns Library\)](../../parallel/concrt/parallel-patterns-library-ppl.md) o la [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md) se non si ha familiarità con il runtime di concorrenza.  
  
 Il runtime di concorrenza fornisce due funzioni di gestione della memoria ottimizzate per allocare e liberare blocchi di memoria in modo simultaneo.  La funzione [concurrency::Alloc](../Topic/Alloc%20Function.md) alloca un blocco di memoria utilizzando le dimensioni specificate.  La funzione [concurrency::Free](../Topic/Free%20Function.md) libera la memoria allocata da `Alloc`.  
  
> [!NOTE]
>  Le funzioni `Alloc` e `Free` sono dipendenti tra loro.  Utilizzare la funzione `Free` solo per rilasciare la memoria allocata tramite la funzione `Alloc`.  Inoltre, quando si utilizza la funzione `Alloc` per allocare memoria, utilizzare solo la funzione `Free` per rilasciare tale memoria.  
  
 Utilizzare le funzioni `Alloc` e `Free` quando si alloca e libera un set prestabilito di dimensioni di allocazione da attività o thread diversi.  Il runtime di concorrenza memorizza nella cache la memoria allocata dall'heap del runtime C.  Il runtime di concorrenza mantiene una cache di memoria separata per ogni thread in esecuzione; pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o barriere di memoria.  Un'applicazione beneficia maggiormente dei vantaggi offerti dalle funzioni `Alloc` e `Free` quando l'accesso alla cache di memoria è più frequente.  Ad esempio, un thread che chiama frequentemente `Alloc` e `Free` trae più vantaggi rispetto a un thread che chiama principalmente `Alloc` o `Free`.  
  
> [!NOTE]
>  Quando si utilizzano queste funzioni di gestione della memoria e l'applicazione utilizza una grande quantità di memoria, è possibile che nell'applicazione si verifichi una condizione di memoria insufficiente prima del previsto.  Poiché i blocchi di memoria memorizzati nella cache da un thread non sono disponibili per un altro thread, se un thread include una grande quantità di memoria, tale memoria non sarà disponibile.  
  
## Esempio  
 Per un esempio in cui vengono utilizzate le funzioni `Alloc` e `Free` per migliorare le prestazioni di memoria, vedere [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md).  
  
## Vedere anche  
 [Utilità di pianificazione](../../parallel/concrt/task-scheduler-concurrency-runtime.md)   
 [Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria](../../parallel/concrt/how-to-use-alloc-and-free-to-improve-memory-performance.md)