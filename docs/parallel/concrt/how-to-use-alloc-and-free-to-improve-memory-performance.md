---
title: "Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria | Microsoft Docs"
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
  - "Alloc e Free, uso [Runtime di concorrenza]"
  - "utilizzo di Alloc e Free [Runtime di concorrenza]"
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
caps.latest.revision: 14
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo documento viene illustrato come utilizzare le funzioni [concurrency::Alloc](../Topic/Alloc%20Function.md) e [concurrency::Free](../Topic/Free%20Function.md) per migliorare le prestazioni di memoria.  Viene confrontato il tempo necessario per invertire gli elementi di una matrice in parallelo per tre tipi diversi, ognuno dei quali specifica gli operatori `new` e `delete`.  
  
 Le funzioni `Alloc` e `Free` risultano particolarmente utili quando più thread chiamano frequentemente sia `Alloc` che `Free`.  Il runtime mantiene una cache di memoria separata per ogni thread; pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o barriere di memoria.  
  
## Esempio  
 Nell'esempio seguente vengono illustrati tre tipi, ognuno dei quali specifica gli operatori `new` e `delete`.  La classe `new_delete` utilizza gli operatori globali `new` e `delete`, la classe `malloc_free` utilizza le funzioni runtime C [malloc](../../c-runtime-library/reference/malloc.md) e [free](../../c-runtime-library/reference/free.md) e la classe `Alloc_Free` utilizza le funzioni del runtime di concorrenza `Alloc` e `Free`.  
  
 [!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/CPP/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]  
  
## Esempio  
 Nell'esempio seguente vengono illustrate le funzioni `swap` e `reverse_array`.  La funzione `swap` scambia il contenuto della matrice in corrispondenza degli indici specificati.  Alloca memoria dall'heap per la variabile temporanea.  La funzione `reverse_array` crea una matrice di grandi dimensioni e calcola il tempo necessario per invertire la matrice diverse volte in parallelo.  
  
 [!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/CPP/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]  
  
## Esempio  
 Nell'esempio seguente viene illustrata la funzione `wmain` che calcola il tempo necessario impiegato dalla funzione `reverse_array` per elaborare i tipi `new_delete`, `malloc_free` e `Alloc_Free`, ognuno dei quali utilizza uno schema di allocazione della memoria diverso.  
  
 [!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/CPP/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]  
  
## Esempio  
 Di seguito viene fornito l'esempio completo.  
  
 [!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/CPP/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]  
  
 L'output di esempio seguente è relativo a un computer con quattro processori.  
  
  **Took 2031 ms with new\/delete.**  
**Took 1672 ms with malloc\/free.**  
**Took 656 ms with Alloc\/Free.** In questo esempio il tipo che utilizza le funzioni `Alloc` e `Free` fornisce le migliori prestazioni di memoria perché le funzioni `Alloc` e `Free` vengono ottimizzate per allocare e liberare spesso blocchi di memoria da più thread.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `allocators.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc allocators.cpp**  
  
## Vedere anche  
 [Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)   
 [Funzione Alloc](../Topic/Alloc%20Function.md)   
 [Funzione Free](../Topic/Free%20Function.md)