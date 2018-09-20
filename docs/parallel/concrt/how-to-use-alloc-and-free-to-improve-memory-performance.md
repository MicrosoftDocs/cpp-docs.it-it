---
title: 'Procedura: usare Alloc e Free per migliorare le prestazioni della memoria | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Alloc and Free, using [Concurrency Runtime]
- Using Alloc and Free [Concurrency Runtime]
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0ce828d15d68ade5ba24c3a010e76e3d702f9a83
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405873"
---
# <a name="how-to-use-alloc-and-free-to-improve-memory-performance"></a>Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria

Questo documento illustra come usare il [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) funzioni per migliorare le prestazioni di memoria. Viene confrontato il tempo necessario per invertire gli elementi della matrice in parallelo per tre diversi tipi che ognuno dei quali specifica il `new` e `delete` operatori.

Il `Alloc` e `Free` funzioni risultano particolarmente utili quando più thread chiama spesso entrambi `Alloc` e `Free`. Il runtime mantiene una cache di memoria separati per ogni thread. Pertanto, il runtime gestisce la memoria senza l'utilizzo di blocchi o le barriere di memoria.

## <a name="example"></a>Esempio

L'esempio seguente mostra tre tipi di ognuno dei quali specifica il `new` e `delete` operatori. Il `new_delete` classe utilizza globale `new` e `delete` operatori, il `malloc_free` classe Usa il Runtime di C [malloc](../../c-runtime-library/reference/malloc.md) e [gratuito](../../c-runtime-library/reference/free.md) funzioni e il `Alloc_Free` classe Usa il Runtime di concorrenza `Alloc` e `Free` funzioni.

[!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le funzioni `swap` e `reverse_array`. Il `swap` funzione Scambia il contenuto della matrice in corrispondenza degli indici specificati. Alloca memoria dall'heap per la variabile temporanea. Il `reverse_array` funzione crea una matrice di grandi dimensioni e calcola il tempo necessario per invertire la matrice più volte in parallelo.

[!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente illustra il `wmain` funzione che calcola il tempo necessario per il `reverse_array` funzione ad agire per il `new_delete`, `malloc_free`, e `Alloc_Free` tipi, ognuno dei quali usa uno schema di allocazione di memoria diverse.

[!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]

## <a name="example"></a>Esempio

Segue un esempio completo.

[!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]

Questo esempio produce il seguente output di esempio per un computer dotato di quattro processori.

```Output
Took 2031 ms with new/delete.
Took 1672 ms with malloc/free.
Took 656 ms with Alloc/Free.
```

In questo esempio, il tipo che utilizza il `Alloc` e `Free` funzioni offre le migliori prestazioni di memoria perché le `Alloc` e `Free` funzioni sono ottimizzate per allocare e liberare blocchi di memoria da più spesso thread.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `allocators.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**allocators. cpp CL.exe /EHsc**

## <a name="see-also"></a>Vedere anche

[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)<br/>
[Funzione Alloc](reference/concurrency-namespace-functions.md#alloc)<br/>
[Free (funzione)](reference/concurrency-namespace-functions.md#free)

