---
title: 'Procedura: Scrivere un ciclo parallel_for'
ms.date: 11/04/2016
helpviewer_keywords:
- writing a parallel_for loop [Concurrency Runtime]
- parallel_for function, example
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
ms.openlocfilehash: 8d2d54e084652a8f34b125b96c3f502dd9cdb1fa
ms.sourcegitcommit: 43cee7a0d41a062661229043c2f7cbc6ace17fa3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/13/2020
ms.locfileid: "92008963"
---
# <a name="how-to-write-a-parallel_for-loop"></a>Procedura: Scrivere un ciclo parallel_for

Questo esempio illustra come usare la [concorrenza::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per calcolare il prodotto di due matrici.

## <a name="example-compute-the-product-of-two-matrices"></a>Esempio: calcolo del prodotto di due matrici

Nell'esempio seguente viene illustrata la `matrix_multiply` funzione, che calcola il prodotto di due matrici quadrate.

[!code-cpp[concrt-parallel-matrix-multiply#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_1.cpp)]

## <a name="example-compute-a-matrix-multiply-in-parallel"></a>Esempio: calcolo di una matrice moltiplica in parallelo

Nell'esempio seguente viene illustrata la `parallel_matrix_multiply` funzione, che usa l' `parallel_for` algoritmo per eseguire il ciclo esterno in parallelo.

[!code-cpp[concrt-parallel-matrix-multiply#2](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_2.cpp)]

Questo esempio parallelizzazione il ciclo esterno solo perché esegue un lavoro sufficiente per trarre vantaggio dal sovraccarico per l'elaborazione parallela. Se si parallelizzare il ciclo interno, non si otterrà un miglioramento delle prestazioni perché la piccola quantità di lavoro eseguita dal ciclo interno non supera il sovraccarico per l'elaborazione parallela. Di conseguenza, la parallelizzazione del solo ciclo esterno è il modo migliore per ottimizzare i vantaggi della concorrenza sulla maggior parte dei sistemi.

## <a name="example-finished-parallel_for-loop-code-sample"></a>Esempio: esempio di codice terminato parallel_for loop

Nell'esempio più completo riportato di seguito vengono confrontate le prestazioni della `matrix_multiply` funzione rispetto alla `parallel_matrix_multiply` funzione.

[!code-cpp[concrt-parallel-matrix-multiply#3](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_3.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial: 3853
parallel: 1311
```

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-matrix-multiply.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc parallel-matrix-multiply. cpp**

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)
