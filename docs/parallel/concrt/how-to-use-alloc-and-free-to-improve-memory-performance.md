---
title: 'Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria'
ms.date: 11/04/2016
helpviewer_keywords:
- Alloc and Free, using [Concurrency Runtime]
- Using Alloc and Free [Concurrency Runtime]
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
ms.openlocfilehash: 8438e833262d42c6083f48f759501c573a35c772
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142791"
---
# <a name="how-to-use-alloc-and-free-to-improve-memory-performance"></a>Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria

In questo documento viene illustrato come utilizzare le funzioni [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) per migliorare le prestazioni di memoria. Consente di confrontare il tempo necessario per invertire gli elementi di una matrice in parallelo per tre tipi diversi che specificano gli operatori `new` e `delete`.

Le funzioni `Alloc` e `Free` sono molto utili quando più thread chiamano spesso `Alloc` e `Free`. Il runtime include una cache di memoria separata per ogni thread. il runtime gestisce pertanto la memoria senza l'utilizzo di blocchi o barriere di memoria.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrati tre tipi che specificano gli operatori `new` e `delete`. La classe `new_delete` usa gli operatori Global `new` e `delete`, la classe `malloc_free` usa le funzioni di runtime C [malloc](../../c-runtime-library/reference/malloc.md) e [Free](../../c-runtime-library/reference/free.md) e la classe `Alloc_Free` usa le funzioni runtime di concorrenza `Alloc` e `Free`.

[!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente vengono illustrate le funzioni `swap` e `reverse_array`. La funzione `swap` scambia il contenuto della matrice in corrispondenza degli indici specificati. Alloca memoria dall'heap per la variabile temporanea. La funzione `reverse_array` crea una matrice di grandi dimensioni e calcola il tempo necessario per invertire la matrice più volte in parallelo.

[!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `wmain`, che calcola il tempo necessario affinché la funzione `reverse_array` agisca sui tipi `new_delete`, `malloc_free`e `Alloc_Free`, ognuno dei quali utilizza uno schema di allocazione della memoria diverso.

[!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]

## <a name="example"></a>Esempio

L'esempio completo segue.

[!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]

Questo esempio produce l'output di esempio seguente per un computer che dispone di quattro processori.

```Output
Took 2031 ms with new/delete.
Took 1672 ms with malloc/free.
Took 656 ms with Alloc/Free.
```

In questo esempio, il tipo che usa le funzioni `Alloc` e `Free` fornisce le migliori prestazioni di memoria perché le funzioni `Alloc` e `Free` sono ottimizzate per l'allocazione e la liberazione di blocchi di memoria da più thread.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `allocators.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc allocatori. cpp**

## <a name="see-also"></a>Vedere anche

[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)<br/>
[Alloc (funzione)](reference/concurrency-namespace-functions.md#alloc)<br/>
[Free (funzione)](reference/concurrency-namespace-functions.md#free)
