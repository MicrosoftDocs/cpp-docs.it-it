---
description: 'Altre informazioni su: procedura: usare parallel_invoke per eseguire operazioni in parallelo'
title: 'Procedura: Usare parallel_invoke per eseguire operazioni in parallelo'
ms.date: 11/04/2016
helpviewer_keywords:
- parallel_invoke function, example
- calling multiple functions in parallel [Concurrency Runtime]
ms.assetid: a6aea69b-d647-4b7e-bf3b-e6a6a9880072
ms.openlocfilehash: e31cc19a1670cf7ccf9d664ffbed33fea98134a7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97334670"
---
# <a name="how-to-use-parallel_invoke-to-execute-parallel-operations"></a>Procedura: Usare parallel_invoke per eseguire operazioni in parallelo

Questo esempio illustra come usare l'algoritmo [Concurrency::p arallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa. Poiché nessuna operazione modifica l'origine, può essere eseguita in parallelo in modo semplice.

## <a name="example-create-initialize-and-perform-operations-on-a-variable"></a>Esempio: creazione, inizializzazione ed esecuzione di operazioni su una variabile

Si consideri l'esempio di codice seguente che crea una variabile di tipo `MyDataType` , chiama una funzione per inizializzare la variabile e quindi esegue più lunghe operazioni su tali dati.

[!code-cpp[concrt-parallel-word-mining#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_1.cpp)]

Se le `lengthy_operation1` `lengthy_operation2` funzioni, e non `lengthy_operation3` modificano la `MyDataType` variabile, queste funzioni possono essere eseguite in parallelo senza modifiche aggiuntive.

## <a name="example-run-previous-example-in-parallel"></a>Esempio: eseguire l'esempio precedente in parallelo

Nell'esempio seguente viene modificato l'esempio precedente per l'esecuzione in parallelo. L' `parallel_invoke` algoritmo esegue ogni attività in parallelo e restituisce una volta completate tutte le attività.

[!code-cpp[concrt-parallel-word-mining#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_2.cpp)]

## <a name="example-perform-multiple-operations-on-a-downloaded-file"></a>Esempio: esecuzione di più operazioni su un file scaricato

L'esempio seguente Scarica *l'Iliade* da omero da Gutenberg.org ed esegue più operazioni su tale file. Nell'esempio vengono prima eseguite queste operazioni in modo seriale, quindi le stesse operazioni vengono eseguite in parallelo.

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

In questo esempio viene utilizzato l' `parallel_invoke` algoritmo per chiamare più funzioni che agiscono sulla stessa origine dati. È possibile utilizzare l' `parallel_invoke` algoritmo per chiamare qualsiasi set di funzioni in parallelo, non solo quelle che agiscono sugli stessi dati.

Poiché l' `parallel_invoke` algoritmo chiama ogni funzione lavoro in parallelo, le prestazioni sono limitate dalla funzione che richiede il tempo più lungo per il completamento, ovvero se il runtime elabora ogni funzione in un processore separato. Se in questo esempio vengono eseguite più attività in parallelo rispetto al numero di processori disponibili, è possibile eseguire più attività in ogni processore. In questo caso, le prestazioni sono limitate dal gruppo di attività il cui completamento richiede più tempo.

Poiché in questo esempio vengono eseguite tre attività in parallelo, è consigliabile non prevedere prestazioni per la scalabilità in computer che dispongono di più di tre processori. Per migliorare ulteriormente le prestazioni, è possibile suddividere le attività con esecuzione prolungata in attività più piccole ed eseguire tali attività in parallelo.

È possibile utilizzare l' `parallel_invoke` algoritmo anziché le classi [Concurrency:: task_group](reference/task-group-class.md) e [concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) se non è necessario il supporto per l'annullamento. Per un esempio in cui viene confrontato l'utilizzo dell' `parallel_invoke` algoritmo e dei gruppi di attività, vedere [procedura: utilizzare parallel_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md).

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `parallel-word-mining.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **cl.exe/EHsc/MD/DUNICODE/D_AFXDLL Parallel-Word-mining. cpp**

## <a name="see-also"></a>Vedi anche

[Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)<br/>
[Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)
