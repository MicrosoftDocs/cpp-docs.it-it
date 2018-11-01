---
title: 'Procedura: Effettuare una scelta tra le attività completate'
ms.date: 11/04/2016
helpviewer_keywords:
- selecting among completed tasks [Concurrency Runtime]
- completed tasks, selecting among [Concurrency Runtime]
ms.assetid: c8ccc160-043f-4599-847b-32ed270bb257
ms.openlocfilehash: c9137c3d1e354a5e3f50f0d281ecbbd247642597
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50551632"
---
# <a name="how-to-select-among-completed-tasks"></a>Procedura: Effettuare una scelta tra le attività completate

Questo esempio illustra come usare il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) e [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classi per selezionare la prima attività per completare un algoritmo di ricerca.

## <a name="example"></a>Esempio

Nell'esempio seguente esegue due algoritmi di ricerca in parallelo e seleziona l'algoritmo primo completamento. Questo esempio viene definito il `employee` tipo, che contiene un identificatore numerico e uno stipendio di un dipendente. Il `find_employee` funzione trova il primo dipendente con l'identificatore specificato o lo stipendio specificato. Il `find_employee` funzione gestisce anche il caso in cui nessun dipendente è l'identificatore specificato o lo stipendio. Il `wmain` funzione crea una matrice di `employee` oggetti e le ricerche per diversi valori dell'identificatore e stipendio.

Nell'esempio viene usato un `choice` oggetto da selezionare tra i casi seguenti:

1. Un dipendente con l'identificatore specificato esiste.

1. Un dipendente che ha lo stipendio specificato esiste.

1. È presente alcun dipendente con l'identificatore specificato o lo stipendio.

Per i primi due casi, l'esempio Usa un' [Concurrency:: single_assignment](../../parallel/concrt/reference/single-assignment-class.md) che include l'identificatore e l'altro `single_assignment` oggetto per contenere le retribuzioni. Nell'esempio viene usato un `join` oggetto per il terzo caso. Il `join` oggetto è costituito da due ulteriori `single_assignment` oggetti, uno per il caso in cui è presente alcun dipendente con l'identificatore specificato e uno per il caso in cui è presente alcun dipendente con lo stipendio specificato. Il `join` oggetto invia un messaggio quando ognuno dei relativi membri riceve un messaggio. In questo esempio, il `join` oggetto invia un messaggio quando alcun dipendente con l'identificatore specificato non esiste o Salario.

L'esempio Usa un' [Concurrency:: structured_task_group](../../parallel/concrt/reference/structured-task-group-class.md) oggetto per l'esecuzione di entrambi gli algoritmi di ricerca in parallelo. Ogni attività di ricerca scrive in uno del `single_assignment` oggetti per indicare se il dipendente specificato esiste. L'esempio Usa la [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per ottenere l'indice del primo buffer che contiene un messaggio e un `switch` blocco per stampare il risultato.

[!code-cpp[concrt-find-employee#1](../../parallel/concrt/codesnippet/cpp/how-to-select-among-completed-tasks_1.cpp)]

Questo esempio produce il seguente output:

```Output
Employee with id 14758 has salary 27780.00.
Employee with salary 29150.00 has id 84345.
Employee with id 61935 has salary 29905.00.
No employee has id 899 or salary 31223.00.
```

Questo esempio Usa la [Concurrency:: make_choice](reference/concurrency-namespace-functions.md#make_choice) funzione helper per creare `choice` oggetti e il [Concurrency:: make_join](reference/concurrency-namespace-functions.md#make_join) funzione helper per creare `join` oggetti.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `find-employee.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**find-employee. CL.exe /EHsc**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Classe choice](../../parallel/concrt/reference/choice-class.md)<br/>
[Classe join](../../parallel/concrt/reference/join-class.md)
