---
title: "Procedura: Creare un'attività che viene completata dopo un ritardo"
description: Creare un'attività che viene completata dopo un ritardo utilizzando la libreria PPL ConcRT.
ms.date: 10/19/2020
helpviewer_keywords:
- task_completion_event class, example
- create a task that completes after a delay, example [C++]
ms.assetid: 3fc0a194-3fdb-4eba-8b8a-b890981a985d
ms.openlocfilehash: 694b6190a7ec60043a5674e920dc54e6e7bf0eb6
ms.sourcegitcommit: 19016630f9d35f365e9ba249e0f3617515d7ca33
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/20/2020
ms.locfileid: "92274558"
---
# <a name="how-to-create-a-task-that-completes-after-a-delay"></a>Procedura: Creare un'attività che viene completata dopo un ritardo

Questo esempio illustra come usare le [`concurrency::task`](../../parallel/concrt/reference/task-class.md) classi, [`concurrency::cancellation_token_source`](../../parallel/concrt/reference/cancellation-token-source-class.md) , [`concurrency::cancellation_token`](../../parallel/concrt/reference/cancellation-token-class.md) , [`concurrency::task_completion_event`](../../parallel/concrt/reference/task-completion-event-class.md) , [`concurrency::timer`](../../parallel/concrt/reference/timer-class.md) e [`concurrency::call`](../../parallel/concrt/reference/call-class.md) per creare un'attività che viene completata dopo un ritardo. È possibile utilizzare questo metodo per compilare cicli che occasionalmente eseguono il polling dei dati. È anche possibile introdurre timeout, ritardare la gestione dell'input utente per un tempo predeterminato e così via.

## <a name="example-complete_after-and-cancel_after_timeout-functions"></a>Esempio: funzioni complete_after e cancel_after_timeout

Nell'esempio seguente vengono illustrate le funzioni `complete_after` e `cancel_after_timeout`. Tramite la funzione `complete_after` viene creato un oggetto `task` che viene completato dopo il ritardo specificato. Vengono utilizzati gli oggetti `timer` e `call` per impostare un oggetto `task_completion_event` dopo il ritardo specificato. Utilizzando la classe `task_completion_event`, è possibile definire un'attività che viene completata dopo che tramite un thread o un'altra attività viene segnalata la disponibilità di un valore. Quando l'evento è impostato, le attività del listener vengono completate e viene pianificata l'esecuzione delle relative continuazioni.

> [!TIP]
> Per ulteriori informazioni sulle `timer` classi e `call` , che fanno parte della libreria di agenti asincroni, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

La `cancel_after_timeout` funzione si basa sulla `complete_after` funzione per annullare un'attività se l'attività non viene completata prima di un determinato timeout. Tramite la funzione `cancel_after_timeout` vengono create due attività. La prima attività indica un esito positivo e viene completata dopo il completamento dell'attività fornita. La seconda attività indica un errore e viene completata dopo il timeout specificato. Tramite la funzione `cancel_after_timeout` viene creata un'attività di continuazione che viene eseguita al termine dell'attività di esito positivo o negativo. Se viene completata per prima l'attività di esito negativo, tramite la continuazione viene annullata l'origine del token per annullare l'intera attività.

[!code-cpp[concrt-task-delay#1](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_1.cpp)]

## <a name="example-compute-count-of-prime-numbers"></a>Esempio: calcolo del conteggio dei numeri primi

Nell'esempio seguente viene calcolato più volte il conteggio dei numeri primi nell'intervallo [0, 100000]. L'operazione ha esito negativo se non viene completata in un determinato limite di tempo. Nella funzione `count_primes` viene illustrato come utilizzare la funzione `cancel_after_timeout`. Conta il numero di primi nell'intervallo specificato e non riesce se l'attività non viene completata nel tempo specificato. Tramite la funzione `wmain` viene chiamata più volte la funzione `count_primes`. Ogni volta il limite di tempo viene dimezzato. Il programma termina dopo che l'operazione non è stata completata nel limite di tempo corrente.

[!code-cpp[concrt-task-delay#2](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_2.cpp)]

Quando si usa questa tecnica per annullare le attività dopo un ritardo, le attività non avviate non verranno avviate dopo l'annullamento dell'attività complessiva. Tuttavia, è importante che le attività a esecuzione prolungata rispondano rapidamente all'annullamento. Per ulteriori informazioni sull'annullamento delle attività, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).

## <a name="complete-code-example"></a>Esempio di codice completo

Di seguito viene riportato il codice completo per questo esempio:

[!code-cpp[concrt-task-delay#3](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_3.cpp)]

## <a name="compiling-the-code"></a>Compilazione del codice

Per compilare il codice, copiarlo e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `task-delay.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**cl.exe/EHsc Task-delay. cpp**

## <a name="see-also"></a>Vedere anche

[Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)<br/>
[Classe Task (runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)<br/>
[Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)<br/>
[Classe cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md)<br/>
[Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)<br/>
[timer (classe)](../../parallel/concrt/reference/timer-class.md)<br/>
[Classe call](../../parallel/concrt/reference/call-class.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Annullamento nella libreria PPL](cancellation-in-the-ppl.md)
