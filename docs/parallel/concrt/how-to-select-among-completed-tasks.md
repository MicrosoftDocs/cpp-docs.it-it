---
title: 'Procedura: effettuare una scelta tra le attività completate | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- selecting among completed tasks [Concurrency Runtime]
- completed tasks, selecting among [Concurrency Runtime]
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a485eb87f2caa62a382983c1cda2b9c098742d42
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687114"
---
# <a name="how-to-select-among-completed-tasks"></a>Procedura: Effettuare una scelta tra le attività completate
In questo esempio viene illustrato come utilizzare il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) e [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classi per selezionare la prima attività da completare un algoritmo di ricerca.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente esegue due algoritmi di ricerca in parallelo e seleziona il primo algoritmo da completare. Questo esempio viene definito il `employee` tipo, che contiene un identificatore numerico e uno stipendio per un dipendente. Il `find_employee` funzione trova il primo dipendente con l'identificatore specificato o lo stipendio fornito. Il `find_employee` funzione gestisce inoltre il caso in cui nessun dipendente è l'identificatore specificato o lo stipendio. Il `wmain` funzione crea una matrice di `employee` oggetti e le ricerche per diversi valori di identificatore e stipendio.  
  
 Nell'esempio viene utilizzato un `choice` oggetto da selezionare tra i casi seguenti:  
  
1.  Un dipendente con l'identificatore specificato esiste.  
  
2.  Esiste un dipendente con lo stipendio fornito.  
  
3.  È presente alcun dipendente con l'identificatore specificato o lo stipendio.  
  
 Per i primi due casi, nell'esempio viene utilizzato un [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) oggetto per contenere l'identificatore e un altro `single_assignment` oggetto che contenga lo stipendio. Nell'esempio viene utilizzato un `join` oggetto per il terzo caso. Il `join` oggetto è composto da due ulteriori `single_assignment` oggetti, uno per il caso in cui è presente alcun dipendente con l'identificatore specificato e uno per il caso in cui è presente alcun dipendente con lo stipendio fornito. Il `join` oggetto invia un messaggio quando ognuno dei relativi membri riceve un messaggio. In questo esempio, il `join` oggetto invia un messaggio quando alcun dipendente con l'identificatore specificato non esiste o Salario.  
  
 Nell'esempio viene utilizzato un [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto per l'esecuzione di entrambi gli algoritmi di ricerca in parallelo. Ogni attività di ricerca scrive in uno del `single_assignment` oggetti per indicare se il dipendente specificato esiste. Nell'esempio viene utilizzato il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per ottenere l'indice del primo buffer che contiene un messaggio e un `switch` blocco per stampare il risultato.  
  
 [!code-cpp[concrt-find-employee#1](../../parallel/concrt/codesnippet/cpp/how-to-select-among-completed-tasks_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
Employee with id 14758 has salary 27780.00.  
Employee with salary 29150.00 has id 84345.  
Employee with id 61935 has salary 29905.00.  
No employee has id 899 or salary 31223.00.  
```  
  
 Questo esempio viene utilizzato il [Concurrency:: make_choice](reference/concurrency-namespace-functions.md#make_choice) funzione helper per creare `choice` oggetti e [Concurrency:: make_join](reference/concurrency-namespace-functions.md#make_join) funzione helper per creare `join` oggetti.  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `find-employee.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **find-employee. CL.exe /EHsc**  
  
## <a name="see-also"></a>Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Classe Choice](../../parallel/concrt/reference/choice-class.md)   
 [Classe join](../../parallel/concrt/reference/join-class.md)
