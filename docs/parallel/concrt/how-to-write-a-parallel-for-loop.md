---
title: 'Procedura: scrivere un ciclo parallel_for | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- writing a parallel_for loop [Concurrency Runtime]
- parallel_for function, example
ms.assetid: adb4d64e-5514-4b70-8dcb-b9210e6b5a1c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0cd9f10f473ae72c32b11fe648abe693568b34a6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46395454"
---
# <a name="how-to-write-a-parallelfor-loop"></a>Procedura: Scrivere un ciclo parallel_for

In questo esempio viene illustrato come utilizzare [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) per calcolare il prodotto di due matrici.

## <a name="example"></a>Esempio

L'esempio seguente illustra il `matrix_multiply` funzione che calcola il prodotto di due matrici di quadrato.

[!code-cpp[concrt-parallel-matrix-multiply#1](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_1.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente mostra le `parallel_matrix_multiply` funzione, che usa il `parallel_for` algoritmo per eseguire il ciclo esterno in parallelo.

[!code-cpp[concrt-parallel-matrix-multiply#2](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_2.cpp)]

In questo esempio viene eseguita la parallelizzazione del ciclo esterno, solo perché consente di eseguire un lavoro sufficiente per trarre vantaggio dal sovraccarico dell'elaborazione parallela. Se si parallelizza il ciclo interno, non riceverai un miglioramento delle prestazioni poiché piccole quantità di lavoro che esegue il ciclo interno non superare l'overhead per l'elaborazione parallela. Di conseguenza, la parallelizzazione del solo ciclo esterno è il modo migliore per ottimizzare i vantaggi della concorrenza sulla maggior parte dei sistemi.

## <a name="example"></a>Esempio

Seguente esempio più esaustivo vengono confrontate le prestazioni dei `matrix_multiply` funzione rispetto al `parallel_matrix_multiply` (funzione).

[!code-cpp[concrt-parallel-matrix-multiply#3](../../parallel/concrt/codesnippet/cpp/how-to-write-a-parallel-for-loop_3.cpp)]

L'output di esempio seguente è relativo a un computer con quattro processori.

```Output
serial: 3853
parallel: 1311
```

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-matrix-multiply.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc parallel-matrix-multiply. cpp**

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[parallel_for (funzione)](reference/concurrency-namespace-functions.md#parallel_for)

