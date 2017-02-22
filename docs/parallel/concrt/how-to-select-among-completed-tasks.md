---
title: "Procedura: Effettuare una scelta tra le attivit&#224; completate | Microsoft Docs"
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
  - "selezione tra le attività completate [Runtime di concorrenza]"
  - "attività completate, selezione [Runtime di concorrenza]"
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Procedura: Effettuare una scelta tra le attivit&#224; completate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo esempio viene illustrato l'utilizzo delle classi [concurrency::choice](../../parallel/concrt/reference/choice-class.md) e [concurrency::join](../../parallel/concrt/reference/join-class.md) per selezionare la prima attività per completare un algoritmo di ricerca.  
  
## Esempio  
 Nell'esempio seguente vengono eseguiti due algoritmi di ricerca in parallelo e viene selezionato il primo algoritmo da completare.  Viene definito il tipo `employee` che contiene un identificatore numerico e uno stipendio per un dipendente.  La funzione `find_employee` trova il primo dipendente con l'identificatore o lo stipendio fornito.  La funzione `find_employee` gestisce inoltre il caso in cui non è presente alcun dipendente con l'identificatore o lo stipendio fornito.  La funzione `wmain` crea una matrice di oggetti `employee` e cerca i diversi valori per identificatore e stipendio.  
  
 Nell'esempio viene utilizzato un oggetto `choice` per effettuare una scelta tra i casi seguenti.  
  
1.  Esiste un dipendente con l'identificatore fornito.  
  
2.  Esiste un dipendente con lo stipendio fornito.  
  
3.  Non esiste alcun dipendente con l'identificatore o lo stipendio fornito.  
  
 Per i primi due casi, nell'esempio viene utilizzato l'oggetto [concurrency::single\_assignment](../../parallel/concrt/reference/single-assignment-class.md) per contenere l'identificatore e un altro oggetto `single_assignment` per contenere lo stipendio.  Nell'esempio viene utilizzato un oggetto `join` per il terzo caso.  L'oggetto `join` è composto da due oggetti `single_assignment` aggiuntivi, uno per il caso in cui non esiste alcun dipendente con l'identificatore fornito e uno per il caso in cui non esiste alcun dipendente con lo stipendio fornito.  L'oggetto `join` invia un messaggio quando ognuno dei relativi membri riceve un messaggio.  In questo esempio l'oggetto `join` invia un messaggio quando non esiste alcun dipendente con l'identificatore o il salario fornito.  
  
 Nell'esempio viene utilizzato un oggetto [concurrency::structured\_task\_group](../../parallel/concrt/reference/structured-task-group-class.md) per eseguire entrambi gli algoritmi di ricerca in parallelo.  Ogni attività di ricerca scrive in uno degli oggetti `single_assignment` per indicare se il dipendente specificato esiste.  Nell'esempio viene utilizzata la funzione [concurrency::receive](../Topic/receive%20Function.md) per ottenere l'indice del primo buffer che contiene un messaggio e un blocco di `switch` per stampare il risultato.  
  
 [!code-cpp[concrt-find-employee#1](../../parallel/concrt/codesnippet/CPP/how-to-select-among-completed-tasks_1.cpp)]  
  
 Questo esempio produce l'output che segue.  
  
  **Employee with id 14758 has salary 27780.00.**  
**Employee with salary 29150.00 has id 84345.**  
**Employee with id 61935 has salary 29905.00.**  
**No employee has id 899 or salary 31223.00.** In questo esempio viene utilizzata la funzione di supporto [concurrency::make\_choice](../Topic/make_choice%20Function.md) per creare gli oggetti `choice` e la funzione di supporto [concurrency::make\_join](../Topic/make_join%20Function.md) per creare oggetti `join`.  
  
## Compilazione del codice  
 Copiare il codice di esempio e incollarlo in un progetto di Visual Studio o incollarlo in un file denominato `find-employee.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **cl.exe \/EHsc find\-employee.cpp**  
  
## Vedere anche  
 [Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)   
 [Classe choice](../../parallel/concrt/reference/choice-class.md)   
 [Classe join](../../parallel/concrt/reference/join-class.md)