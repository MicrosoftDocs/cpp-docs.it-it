---
title: "Procedura: usare l'annullamento per interrompere un ciclo Parallel | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- writing a parallel search algorithm [Concurrency Runtime]
- parallel search algorithm, writing [Concurrency Runtime]
ms.assetid: 421cd2de-f058-465f-b890-dd8fcc0df273
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b1b5153c225c3bb3a67be4265cf8303da2121c2b
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33696292"
---
# <a name="how-to-use-cancellation-to-break-from-a-parallel-loop"></a>Procedura: utilizzare l'annullamento per interrompere un ciclo Parallel
In questo esempio viene illustrato come utilizzare l'annullamento per implementare un algoritmo di ricerca parallelo di base.  
  
## <a name="example"></a>Esempio  

 Nell'esempio seguente viene utilizzato l'annullamento per cercare un elemento nella matrice. Il `parallel_find_any` funzione Usa il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo e [Concurrency:: run_with_cancellation_token](reference/concurrency-namespace-functions.md#run_with_cancellation_token) funzione per cercare la posizione che contiene il valore specificato. Quando il ciclo parallelo rileva che il valore, viene chiamato il [concurrency::cancellation_token_source::cancel](reference/cancellation-token-source-class.md#cancel) metodo per annullare il lavoro futuro.  


  
 [!code-cpp[concrt-parallel-array-search#1](../../parallel/concrt/codesnippet/cpp/how-to-use-cancellation-to-break-from-a-parallel-loop_1.cpp)]  
  

 Il [Concurrency:: parallel_for](reference/concurrency-namespace-functions.md#parallel_for) algoritmo agisce contemporaneamente. Pertanto, non esegue le operazioni in un ordine predeterminato. Se la matrice contiene più istanze del valore, il risultato può essere una delle relative posizioni.  

  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `parallel-array-search.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc parallelo-array-search. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)   
 [Algoritmi paralleli](../../parallel/concrt/parallel-algorithms.md)   
 [Funzione parallel_for](reference/concurrency-namespace-functions.md#parallel_for)   
 [Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)
