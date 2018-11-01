---
title: 'Procedura: Usare parallel_invoke per eseguire operazioni in parallelo'
ms.date: 11/04/2016
helpviewer_keywords:
- parallel_invoke function, example
- calling multiple functions in parallel [Concurrency Runtime]
ms.assetid: a6aea69b-d647-4b7e-bf3b-e6a6a9880072
ms.openlocfilehash: 2d4cd19a3cbb02b9c18b1733f8df6f64eb956803
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50473684"
---
# <a name="how-to-use-parallelinvoke-to-execute-parallel-operations"></a>Procedura: Usare parallel_invoke per eseguire operazioni in parallelo

Questo esempio illustra come usare il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa. Poiché delle operazioni modifica l'origine, può essere eseguiti in parallelo in modo semplice.

## <a name="example"></a>Esempio

Si consideri l'esempio di codice seguente che crea una variabile di tipo `MyDataType`, chiama una funzione per inizializzare la variabile e quindi esegue più operazioni di lunga durata su tali dati.

[!code-cpp[concrt-parallel-word-mining#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_1.cpp)]

Se il `lengthy_operation1`, `lengthy_operation2`, e `lengthy_operation3` funzioni non modificano il `MyDataType` variabile, queste funzioni possono essere eseguite in parallelo senza modifiche aggiuntive.

## <a name="example"></a>Esempio

L'esempio seguente viene modificato l'esempio precedente per eseguire in parallelo. Il `parallel_invoke` algoritmo esegue ogni attività in parallelo e restituisce quando tutte le attività sono state completate.

[!code-cpp[concrt-parallel-word-mining#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_2.cpp)]

## <a name="example"></a>Esempio

L'esempio seguente Scarica *Iliade* di omero da gutenberg.org ed esegue più operazioni su tale file. L'esempio esegue prima di queste operazioni, in modo seriale e quindi esegue le stesse operazioni in parallelo.

[!code-cpp[concrt-parallel-word-mining#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_3.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Downloading 'The Iliad'...

Running serial version... took 953 ms.
Running parallel version... took 656 ms.

The most common words that have five or more letters are:
    their (953)
    shall (444)
    which (431)
    great (398)
    Hector (349)
    Achilles (309)
    through (301)
    these (268)
    chief (259)
The longest sequence of words that have the same first letter is:
    through the tempest to the tented
The following palindromes appear in the text:
    spots stops
    speed deeps
    keels sleek
```

Questo esempio viene usato il `parallel_invoke` algoritmo per chiamare più funzioni che agiscono sulla stessa origine dati. È possibile usare il `parallel_invoke` algoritmo per chiamare qualsiasi set di funzioni in parallelo, non solo quelli che operano sugli stessi dati.

Poiché il `parallel_invoke` algoritmo chiama ogni funzione di lavoro in parallelo, le prestazioni dipendono dalla funzione che accetta la maggiore quantità di tempo per completare (vale a dire, se il runtime elabora ogni funzione in un processore separato). Se in questo esempio esegue altre attività in parallelo rispetto al numero di processori disponibili, è possibile eseguire più attività in ogni processore. In questo caso, le prestazioni sono limitata dal gruppo di attività che richiede maggiore tempo alla fine.

Poiché in questo esempio esegue le tre attività in parallelo, non è opportuno presupporre la scalabilità nei computer con processori più di tre delle prestazioni. Per migliorare ulteriormente le prestazioni, è possibile suddividere le attività con esecuzione più lunga in attività più piccole ed eseguire tali attività in parallelo.

È possibile usare la `parallel_invoke` algoritmo anziché il [Concurrency:: task_group](reference/task-group-class.md) e [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) classi se non è necessario il supporto per l'annullamento. Per un esempio che confronta l'utilizzo dei `parallel_invoke` algoritmo rispetto a gruppi di attività, vedere [procedura: usare parallel_invoke per scrivere una Routine di ordinamento parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-word-mining.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**/EHsc CL.exe /MD/DUNICODE /D_AFXDLL parallelo-word-mining. cpp**

## <a name="see-also"></a>Vedere anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[parallel_invoke (funzione)](reference/concurrency-namespace-functions.md#parallel_invoke)

