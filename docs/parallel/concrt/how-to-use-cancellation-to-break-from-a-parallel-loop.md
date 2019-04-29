---
title: "Procedura: Usare l'annullamento per interrompere un ciclo Parallel"
ms.date: 11/04/2016
helpviewer_keywords:
- writing a parallel search algorithm [Concurrency Runtime]
- parallel search algorithm, writing [Concurrency Runtime]
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
ms.openlocfilehash: 08f33a75bc5c5391333a2d9368d4ed6563e117c2
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62346262"
---
# <a name="how-to-use-cancellation-to-break-from-a-parallel-loop"></a>Procedura: Usare l'annullamento per interrompere un ciclo Parallel

In questo esempio viene illustrato come utilizzare l'annullamento per implementare un algoritmo di ricerca parallelo di base.

## <a name="example"></a>Esempio

Nell'esempio seguente usa l'annullamento per cercare un elemento in una matrice. Il `parallel_find_any` funzione Usa le [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo e il [Concurrency:: run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) (funzione) per cercare la posizione che contiene il valore specificato. Quando il ciclo parallelo rileva che il valore, chiama il [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) metodo per annullare il lavoro futuro.

[!code-cpp[concrt-parallel-array-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-cancellation-to-break-from-a-parallel-loop_1.cpp)]

Il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo agisce contemporaneamente. Pertanto, non esegue le operazioni in un ordine predeterminato. Se la matrice contiene più istanze di tale valore, il risultato può essere una qualsiasi delle relative posizioni.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-array-search.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**cl.exe /EHsc parallel-array-search.cpp**

## <a name="see-also"></a>Vedere anche

[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[parallel_for (funzione)](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)
