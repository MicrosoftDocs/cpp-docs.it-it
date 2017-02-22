---
title: "Procedura: eseguire operazioni di mapping e riduzione in parallelo | Microsoft Docs"
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
  - "parallel_transform (funzione), ad esempio"
  - "mapping parallelo e riduzione, esempio"
  - "parallel_reduce (funzione), ad esempio"
ms.assetid: 9d19fac0-4ab6-4380-a375-3b18eeb87720
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Procedura: eseguire operazioni di mapping e riduzione in parallelo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato come utilizzare il [Concurrency:: parallel_reduce](../Topic/parallel_transform%20Function.md) e [Concurrency:: parallel_transform](../Topic/parallel_reduce%20Function.md) algoritmi e [concurrency::concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md) per contare le occorrenze di parole nei file di classe.  
  
 Oggetto *mappa* operazione applica una funzione a ogni valore di una sequenza. Oggetto *ridurre* operazione combina gli elementi di una sequenza in un unico valore. È possibile utilizzare il modello libreria STL (Standard) [std:: Transform](../Topic/transform.md)[std:: accumulate](../Topic/accumulate.md) classi per eseguire mapping e riduzione delle operazioni. Tuttavia, per migliorare le prestazioni per molti problemi, è possibile usare l'algoritmo `parallel_transform` per eseguire l'operazione di mapping in parallelo e l'algoritmo `parallel_reduce` per eseguire l'operazione di riduzione in parallelo. In alcuni casi, è possibile usare `concurrent_unordered_map` per eseguire le operazioni di mapping e di riduzione in un'unica operazione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente si contano le occorrenze delle parole nei file. Usa [std:: Vector](vector%20Class.md) per rappresentare il contenuto di due file. L'operazione di mapping calcola le occorrenze di ogni parola in ogni vettore. L'operazione di riduzione accumula i conteggi delle parole per entrambi i vettori.  
  
 [!code-cpp[concrt-parallel-map-reduce#1](../../parallel/concrt/codesnippet/CPP/how-to-perform-map-and-reduce-operations-in-parallel_1.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-map-reduce.cpp` quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallelo-map-reduce.cpp**  
  
## <a name="robust-programming"></a>Programmazione efficiente  
 In questo esempio, è possibile usare la classe `concurrent_unordered_map`, definita in concurrent_unordered_map.h, per esegue le operazioni di mapping e di riduzione in un'unica operazione.  
  
 [!code-cpp[concrt-parallel-map-reduce#2](../../parallel/concrt/codesnippet/CPP/how-to-perform-map-and-reduce-operations-in-parallel_2.cpp)]  
  
 In genere, si parallelizza solo il ciclo esterno o quello interno. Parallelizzare il ciclo interno se si dispone di un numero relativamente basso di file e ogni file contiene numerose parole. Parallelizzare il ciclo esterno se si dispone di un numero relativamente alto di file e ogni file contiene poche parole.  
  
## <a name="see-also"></a>Vedere anche  
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [parallel_transform (funzione)](../Topic/parallel_transform%20Function.md)   
 [parallel_reduce (funzione)](../Topic/parallel_reduce%20Function.md)   
 [Classe concurrent_unordered_map](../../parallel/concrt/reference/concurrent-unordered-map-class.md)
