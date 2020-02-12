---
title: 'Procedura: Effettuare una scelta tra le attività completate'
ms.date: 11/04/2016
helpviewer_keywords:
- selecting among completed tasks [Concurrency Runtime]
- completed tasks, selecting among [Concurrency Runtime]
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
ms.openlocfilehash: 75ecac8dd0e8845401e3e287e8c95ea614055970
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77142480"
---
# <a name="how-to-select-among-completed-tasks"></a>Procedura: Effettuare una scelta tra le attività completate

In questo esempio viene illustrato come utilizzare le classi [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) e [Concurrency:: join](../../parallel/concrt/reference/join-class.md) per selezionare la prima attività per completare un algoritmo di ricerca.

## <a name="example"></a>Esempio

Nell'esempio seguente vengono eseguiti due algoritmi di ricerca in parallelo e viene selezionato il primo algoritmo da completare. Questo esempio definisce il tipo di `employee`, che include un identificatore numerico e uno stipendio per un dipendente. La funzione `find_employee` trova il primo dipendente con l'identificatore fornito o lo stipendio fornito. La funzione `find_employee` gestisce anche il caso in cui nessun dipendente ha l'identificatore o lo stipendio fornito. La funzione `wmain` crea una matrice di oggetti `employee` e cerca diversi valori di identificatore e stipendio.

Nell'esempio viene usato un oggetto `choice` per selezionare tra i casi seguenti:

1. Un dipendente con l'identificatore specificato esiste.

1. Un dipendente con lo stipendio specificato esiste.

1. Nessun dipendente con l'identificatore o lo stipendio specificato esiste.

Per i primi due casi, nell'esempio viene utilizzato un oggetto [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) per conservare l'identificatore e un altro oggetto `single_assignment` per mantenere lo stipendio. Nell'esempio viene utilizzato un oggetto `join` per il terzo caso. L'oggetto `join` è costituito da due oggetti `single_assignment` aggiuntivi, uno per il caso in cui non esiste alcun dipendente con l'identificatore specificato e uno per il caso in cui non esista alcun dipendente con lo stipendio fornito. L'oggetto `join` Invia un messaggio quando ogni membro riceve un messaggio. In questo esempio, l'oggetto `join` Invia un messaggio quando non esiste alcun dipendente con l'identificatore o lo stipendio fornito.

Nell'esempio viene utilizzato un oggetto [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) per eseguire entrambi gli algoritmi di ricerca in parallelo. Ogni attività di ricerca scrive in uno degli oggetti `single_assignment` per indicare se il dipendente specificato esiste. Nell'esempio viene utilizzata la funzione [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) per ottenere l'indice del primo buffer contenente un messaggio e un blocco di `switch` per stampare il risultato.

[!code-cpp[concrt-find-employee#1](../../parallel/concrt/codesnippet/cpp/how-to-select-among-completed-tasks_1.cpp)]

Questo esempio produce il seguente output:

```Output
Employee with id 14758 has salary 27780.00.
Employee with salary 29150.00 has id 84345.
Employee with id 61935 has salary 29905.00.
No employee has id 899 or salary 31223.00.
```

In questo esempio viene utilizzata la funzione helper [Concurrency:: make_choice](reference/concurrency-namespace-functions.md#make_choice) per creare oggetti `choice` e la funzione di supporto [Concurrency:: make_join](reference/concurrency-namespace-functions.md#make_join) per creare oggetti `join`.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `find-employee.cpp`, quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

> **CL. exe/EHsc Find-Employee. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Classe choice](../../parallel/concrt/reference/choice-class.md)<br/>
[Classe join](../../parallel/concrt/reference/join-class.md)
