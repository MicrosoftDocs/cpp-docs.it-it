---
title: 'Procedura: utilizzare parallel_invoke per eseguire operazioni in parallelo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- parallel_invoke function, example
- calling multiple functions in parallel [Concurrency Runtime]
ms.assetid: a6aea69b-d647-4b7e-bf3b-e6a6a9880072
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: cefabd21e04c4c3cc39934de111fe94151317ca5
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="how-to-use-parallelinvoke-to-execute-parallel-operations"></a>Procedura: Usare parallel_invoke per eseguire operazioni in parallelo
In questo esempio viene illustrato come utilizzare il [Concurrency:: parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke) algoritmo per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa. Poiché delle operazioni modifica l'origine, possono essere eseguite in parallelo in modo semplice.  

  
## <a name="example"></a>Esempio  
 Si consideri l'esempio di codice seguente che crea una variabile di tipo `MyDataType`, chiama una funzione per inizializzare la variabile e quindi vengono eseguite più operazioni di lunga durate su tali dati.  
  
 [!code-cpp[concrt-parallel-word-mining#1](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_1.cpp)]  
  
 Se il `lengthy_operation1`, `lengthy_operation2`, e `lengthy_operation3` funzioni non modificano il `MyDataType` variabile, queste funzioni possono essere eseguite in parallelo senza modifiche aggiuntive.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene modificato l'esempio precedente per eseguire in parallelo. Il `parallel_invoke` algoritmo esegue ogni attività in parallelo e restituisce al termine di tutte le attività.  
  
 [!code-cpp[concrt-parallel-word-mining#2](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_2.cpp)]  
  
## <a name="example"></a>Esempio  
 L'esempio seguente Scarica *Iliade* di omero da gutenberg.org e vengono eseguite più operazioni su tale file. Nell'esempio viene innanzitutto queste operazioni vengono eseguite in serie e quindi esegue le stesse operazioni in parallelo.  
  
 [!code-cpp[concrt-parallel-word-mining#3](../../parallel/concrt/codesnippet/cpp/how-to-use-parallel-invoke-to-execute-parallel-operations_3.cpp)]  
  
 Questo esempio produce il seguente output di esempio.  
  
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
  
 Questo esempio viene utilizzato il `parallel_invoke` algoritmo chiamare più funzioni che agiscono sulla stessa origine dati. È possibile utilizzare il `parallel_invoke` algoritmo di chiamare qualsiasi set di funzioni in parallelo, non solo quelle che agiscono sugli stessi dati.  
  
 Poiché il `parallel_invoke` algoritmo chiama ogni funzione lavoro in parallelo, le prestazioni dipendono dalla funzione che richiede il tempo più lungo di fine (ovvero, se il runtime elabora ogni funzione in un processore separato). Se in questo esempio vengono eseguite più attività in parallelo rispetto al numero di processori disponibili, è possibile eseguire più attività in ogni processore. In questo caso, le prestazioni sono limitata da gruppo di attività che richiede tempi di completamento.  
  
 Poiché in questo esempio esegue tre attività in parallelo, non prevede la scalabilità nei computer che dispongono di processori più di tre delle prestazioni. Per migliorare ulteriormente le prestazioni, è possibile suddividere le attività di esecuzione più lunga in attività più piccole ed eseguire le attività in parallelo.  
  
 È possibile utilizzare il `parallel_invoke` algoritmo anziché il [Concurrency:: task_group](reference/task-group-class.md) e [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) classi se non è necessario il supporto per l'annullamento. Per un esempio che confronta l'utilizzo del `parallel_invoke` algoritmo rispetto a gruppi di attività, vedere [procedura: usare parallel_invoke per scrivere una Routine di ordinamento parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md).  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-word-mining.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc /MD//D_AFXDLL necessario definire parallelo-word-mining. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel_invoke](reference/concurrency-namespace-functions.md#parallel_invoke)


