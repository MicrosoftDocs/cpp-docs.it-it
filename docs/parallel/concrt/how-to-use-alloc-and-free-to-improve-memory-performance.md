---
description: 'Altre informazioni su: procedura: usare Alloc e Free per migliorare le prestazioni di memoria'
title: 'Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria'
ms.date: 11/04/2016
helpviewer_keywords:
- Alloc and Free, using [Concurrency Runtime]
- Using Alloc and Free [Concurrency Runtime]
ms.assetid: e1fab9e8-a97d-4104-bead-e95958db79f9
ms.openlocfilehash: ab9a7bb9ad067bd7a5650b9e66d1708f08ffc183
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172570"
---
# <a name="how-to-use-alloc-and-free-to-improve-memory-performance"></a>Procedura: Usare Alloc e Free per migliorare le prestazioni di memoria

In questo documento viene illustrato come utilizzare le funzioni [Concurrency:: Alloc](reference/concurrency-namespace-functions.md#alloc) e [Concurrency:: Free](reference/concurrency-namespace-functions.md#free) per migliorare le prestazioni di memoria. Consente di confrontare il tempo necessario per invertire gli elementi di una matrice in parallelo per tre tipi diversi che specificano gli `new` operatori e `delete` .

Le `Alloc` `Free` funzioni e sono particolarmente utili quando più thread chiamano spesso `Alloc` e `Free` . Il runtime include una cache di memoria separata per ogni thread. il runtime gestisce pertanto la memoria senza l'utilizzo di blocchi o barriere di memoria.

## <a name="example-types-that-specify-new-and-delete-operators"></a>Esempio: tipi che specificano gli operatori new e Delete

Nell'esempio seguente vengono illustrati tre tipi che specificano gli `new` `delete` operatori e. La `new_delete` classe utilizza gli `new` operatori globali e `delete` , la `malloc_free` classe utilizza le funzioni [malloc](../../c-runtime-library/reference/malloc.md) e [Free](../../c-runtime-library/reference/free.md) del Runtime C e la `Alloc_Free` classe utilizza le `Alloc` funzioni runtime di concorrenza e `Free` .

[!code-cpp[concrt-allocators#1](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_1.cpp)]

## <a name="example-swap-and-reverse_array-functions"></a>Esempio: funzioni swap e reverse_array

Nell'esempio seguente vengono illustrate le funzioni `swap` e `reverse_array`. La `swap` funzione scambia il contenuto della matrice in corrispondenza degli indici specificati. Alloca memoria dall'heap per la variabile temporanea. La `reverse_array` funzione crea una matrice di grandi dimensioni e calcola il tempo necessario per invertire la matrice più volte in parallelo.

[!code-cpp[concrt-allocators#2](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_2.cpp)]

## <a name="example-wmain-function"></a>Esempio: funzione wmain

Nell'esempio seguente viene illustrata la `wmain` funzione, che calcola il tempo necessario per la `reverse_array` funzione per agire sui `new_delete` `malloc_free` tipi, e `Alloc_Free` , ognuno dei quali utilizza uno schema di allocazione della memoria diverso.

[!code-cpp[concrt-allocators#3](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_3.cpp)]

## <a name="complete-code-example"></a>Esempio di codice completo

L'esempio completo segue.

[!code-cpp[concrt-allocators#4](../../parallel/concrt/codesnippet/cpp/how-to-use-alloc-and-free-to-improve-memory-performance_4.cpp)]

Questo esempio produce l'output di esempio seguente per un computer che dispone di quattro processori.

```Output
Took 2031 ms with new/delete.
Took 1672 ms with malloc/free.
Took 656 ms with Alloc/Free.
```

In questo esempio, il tipo che usa le `Alloc` `Free` funzioni e offre le migliori prestazioni di memoria perché `Alloc` le `Free` funzioni e sono ottimizzate per l'allocazione e la liberazione di blocchi di memoria da più thread.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `allocators.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe allocatori/EHsc. cpp**

## <a name="see-also"></a>Vedi anche

[Funzioni di gestione della memoria](../../parallel/concrt/memory-management-functions.md)<br/>
[Alloc (funzione)](reference/concurrency-namespace-functions.md#alloc)<br/>
[Free (funzione)](reference/concurrency-namespace-functions.md#free)
