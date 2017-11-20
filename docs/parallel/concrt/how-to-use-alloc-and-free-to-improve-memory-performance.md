---
title: 'Procedura: utilizzare Alloc e Free per migliorare le prestazioni di memoria | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Alloc and Free, using [Concurrency Runtime]
- Using Alloc and Free [Concurrency Runtime]
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
caps.latest.revision: "14"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: b375c5b3ec9f35050d7da4ae03139f6e809172cd
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="how-to-use-alloc-and-free-to-improve-memory-performance"></a>Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria

Questo documento viene illustrato come utilizzare il [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) funzioni per migliorare le prestazioni di memoria. Viene confrontato il tempo necessario per invertire gli elementi di matrice in parallelo per tre tipi diversi che ognuno dei quali specifica il `new` e `delete` operatori.  

  
 Il `Alloc` e `Free` funzioni risultano particolarmente utili quando più thread chiamano frequentemente sia `Alloc` e `Free`. Il runtime mantiene una cache di memoria separata per ogni thread. Pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o barriere di memoria.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente mostra tre tipi, ognuno dei quali specifica il `new` e `delete` operatori. Il `new_delete` classe utilizza globale `new` e `delete` operatori, il `malloc_free` classe utilizza il Runtime C [malloc](../../c-runtime-library/reference/malloc.md) e [libero](../../c-runtime-library/reference/free.md) funzioni e `Alloc_Free` classe utilizza il Runtime di concorrenza `Alloc` e `Free` funzioni.  
  
 [!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente vengono illustrate le funzioni `swap` e `reverse_array`. Il `swap` funzione Scambia il contenuto della matrice in corrispondenza degli indici specificati. Alloca memoria dall'heap per la variabile temporanea. Il `reverse_array` funzione crea una matrice di grandi dimensioni e calcola il tempo necessario per invertire la matrice più volte in parallelo.  
  
 [!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente il `wmain` funzione che calcola il tempo necessario per il `reverse_array` funzione per agire sul `new_delete`, `malloc_free`, e `Alloc_Free` tipi, ognuno dei quali utilizza uno schema di allocazione di memoria diverse.  
  
 [!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]  
  
## <a name="example"></a>Esempio  
 Segue un esempio completo.  
  
 [!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]  
  
 In questo esempio produce il seguente output di esempio per un computer che dispone di quattro processori.  
  
```Output  
Took 2031 ms with new/delete.  
Took 1672 ms with malloc/free.  
Took 656 ms with Alloc/Free.  
```  
  
 In questo esempio, il tipo che utilizza il `Alloc` e `Free` funzioni offre le migliori prestazioni di memoria perché il `Alloc` e `Free` funzioni ottimizzate per allocare e liberare i blocchi di memoria da più spesso thread.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `allocators.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc allocators.cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)   
 [Funzione Alloc](reference/concurrency-namespace-functions.md#alloc)   
 [Free (funzione)](reference/concurrency-namespace-functions.md#free)

