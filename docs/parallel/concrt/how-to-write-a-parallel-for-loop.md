---
title: 'Procedura: Scrivere un ciclo parallel_for'
ms.date: 11/04/2016
helpviewer_keywords:
- writing a parallel_for loop [Concurrency Runtime]
- parallel_for function, example
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
ms.openlocfilehash: 5903114a12de46dc06929c83e9995b39d0136810
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77141869"
---
# <a name="how-to-write-a-parallel_for-loop"></a>Procedura: Scrivere un ciclo parallel_for

Questo esempio illustra come usare la [concorrenza::p arallel_for](reference/concurrency-namespace-functions.md#parallel_for) per calcolare il prodotto di due matrici.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `matrix_multiply`, che calcola il prodotto di due matrici quadrate.

[!code-cpp[concrt-parallel-matrix-multiply#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_1.cpp)]

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata la funzione `parallel_matrix_multiply`, che usa l'algoritmo `parallel_for` per eseguire il ciclo esterno in parallelo.

[!code-cpp[concrt-parallel-matrix-multiply#2](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_2.cpp)]

Questo esempio parallelizzazione il ciclo esterno solo perché esegue un lavoro sufficiente per trarre vantaggio dal sovraccarico per l'elaborazione parallela. Se si parallelizzare il ciclo interno, non si otterrà un miglioramento delle prestazioni perché la piccola quantità di lavoro eseguita dal ciclo interno non supera il sovraccarico per l'elaborazione parallela. Di conseguenza, la parallelizzazione del solo ciclo esterno è il modo migliore per ottimizzare i vantaggi della concorrenza sulla maggior parte dei sistemi.

## <a name="example"></a>Esempio

Nell'esempio più completo riportato di seguito vengono confrontate le prestazioni della funzione `matrix_multiply` rispetto alla funzione di `parallel_matrix_multiply`.

[!code-cpp[concrt-parallel-matrix-multiply#3](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_3.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial: 3853
parallel: 1311
```

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-matrix-multiply.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc parallel-matrix-multiply. cpp**

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)
