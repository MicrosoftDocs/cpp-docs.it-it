---
title: "Procedura: Usare l'annullamento per interrompere un ciclo Parallel"
ms.date: 11/04/2016
helpviewer_keywords:
- writing a parallel search algorithm [Concurrency Runtime]
- parallel search algorithm, writing [Concurrency Runtime]
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
ms.openlocfilehash: 21907de6c5625f7774ae788cef0449ac49107e40
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142143"
---
# <a name="how-to-use-cancellation-to-break-from-a-parallel-loop"></a>Procedura: Usare l'annullamento per interrompere un ciclo Parallel

In questo esempio viene illustrato come utilizzare l'annullamento per implementare un algoritmo di ricerca parallelo di base.

## <a name="example"></a>Esempio

Nell'esempio seguente viene usato l'annullamento per cercare un elemento in una matrice. La funzione `parallel_find_any` usa l'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) e la funzione [Concurrency:: run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) per cercare la posizione che contiene il valore specificato. Quando il ciclo parallelo trova il valore, chiama il metodo [Concurrency:: cancellation_token_source:: Cancel](reference/cancellation-token-source-class.md#cancel) per annullare il lavoro futuro.

[!code-cpp[concrt-parallel-array-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-cancellation-to-break-from-a-parallel-loop_1.cpp)]

L'algoritmo [Concurrency::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) agisce simultaneamente. Pertanto, non esegue le operazioni in un ordine predeterminato. Se la matrice contiene più istanze del valore, il risultato può essere una delle posizioni.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-array-search.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc parallel-array-search. cpp**

## <a name="see-also"></a>Vedere anche

[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)<br/>
[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)<br/>
[Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)
