---
title: "Procedura: Usare parallel_invoke per eseguire operazioni in parallelo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "parallel_invoke (funzione), esempio"
  - "chiamata di più funzioni in parallelo [Runtime di concorrenza]"
ms.assetid: a6aea69b-d647-4b7e-bf3b-e6a6a9880072
caps.latest.revision: 18
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 15
---
# Procedura: Usare parallel_invoke per eseguire operazioni in parallelo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare l'algoritmo [concurrency::parallel\_invoke](../Topic/parallel_invoke%20Function.md) per migliorare le prestazioni di un programma che esegue più operazioni in un'origine dati condivisa.  Poiché nessuna delle operazioni modifica l'origine, queste possono essere eseguite in parallelo in modo semplice.  
  
## Esempio  
 Si consideri l'esempio di codice riportato di seguito in cui viene creata una variabile di tipo `MyDataType`, viene chiamata una funzione per inizializzare tale variabile, quindi vengono eseguite più operazioni di lunga durata con i dati.  
  
 [!code-cpp[concrt-parallel-word-mining#1](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-execute-parallel-operations_1.cpp)]  
  
 Se le funzioni `lengthy_operation1`, `lengthy_operation2` e `lengthy_operation3` non modificano la variabile `MyDataType`, tali funzioni possono essere eseguite in parallelo senza modifiche aggiuntive.  
  
## Esempio  
 Nell'esempio seguente viene modificato l'esempio precedente per consentire l'esecuzione in parallelo.  L'algoritmo `parallel_invoke` esegue ogni attività in parallelo e restituisce un risultato dopo che tutte le attività sono state completate.  
  
 [!code-cpp[concrt-parallel-word-mining#2](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-execute-parallel-operations_2.cpp)]  
  
## Esempio  
 Nell'esempio riportato di seguito viene eseguito il download dell'*Iliade* di Omero dal sito gutenberg.org e vengono eseguite più operazioni sul file.  Nell'esempio le operazioni vengono prima eseguite in serie, quindi le stesse operazioni vengono eseguite in parallelo.  
  
 [!code-cpp[concrt-parallel-word-mining#3](../../parallel/concrt/codesnippet/CPP/how-to-use-parallel-invoke-to-execute-parallel-operations_3.cpp)]  
  
 Questo esempio produce l'output seguente:  
  
  **Downloading 'The Iliad'...**  
**Running serial version... took 953 ms.**  
**Running parallel version... took 656 ms.**  
**The most common words that have five or more letters are:**  
 **their \(953\)**  
 **shall \(444\)**  
 **which \(431\)**  
 **great \(398\)**  
 **Hector \(349\)**  
 **Achilles \(309\)**  
 **through \(301\)**  
 **these \(268\)**  
 **chief \(259\)**  
**The longest sequence of words that have the same first letter is:**  
 **through the tempest to the tented**  
**The following palindromes appear in the text:**  
 **spots stops**  
 **speed deeps**  
 **keels sleek** Nell'esempio viene utilizzato l'algoritmo `parallel_invoke` per chiamare più funzioni che agiscono sulla stessa origine dati.  È possibile utilizzare l'algoritmo `parallel_invoke` per chiamare qualsiasi insieme di funzioni in parallelo, non solo a quelli che agiscono sugli stessi dati.  
  
 Poiché l'algoritmo `parallel_invoke` chiama ogni funzione lavoro in parallelo, le prestazioni dipendono dalla funzione che richiede la maggiore quantità di tempo per essere completata, ovvero se il runtime elabora ogni funzione in un processore separato.  Se in questo esempio viene eseguito in parallelo un numero di attività superiore al numero di processori disponibili, è possibile che su ciascun processore vengano eseguite più attività.  In questo caso, le prestazioni dipendono dal gruppo di attività che richiede la maggiore quantità di tempo per essere completato.  
  
 Poiché in questo esempio vengono eseguite tre attività in parallelo, non ci si deve aspettare la scalabilità delle prestazioni nei computer con più di tre processori.  Per migliorare ulteriormente le prestazioni, è possibile suddividere le attività che prevedono tempi maggiori di esecuzione in attività più piccole ed eseguirle in parallelo.  
  
 È possibile utilizzare l'algoritmo `parallel_invoke` anziché le classi [concurrency::task\_group](../Topic/task_group%20Class.md) e [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md) se non è richiesto supporto per l'annullamento.  Per un esempio in cui si confronta l'utilizzo dell'algoritmo `parallel_invoke` con i gruppi di attività, vedere [Procedura: Usare parallel\_invoke per scrivere una routine di ordinamento in parallelo](../../parallel/concrt/how-to-use-parallel-invoke-to-write-a-parallel-sort-routine.md).  
  
## Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-word-mining.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc \/MD \/DUNICODE \/D\_AFXDLL parallel\-word\-mining.cpp**  
  
## Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel\_invoke](../Topic/parallel_invoke%20Function.md)