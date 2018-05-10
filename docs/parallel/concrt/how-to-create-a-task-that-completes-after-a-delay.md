---
title: "Procedura: creare un'attività che viene completata dopo un ritardo | Documenti Microsoft"
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- task_completion_event class, example
- create a task that completes after a delay, example [C++]
ms.assetid: 3fc0a194-3fdb-4eba-8b8a-b890981a985d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fca1ba3874f02b44f96fd795b531536a23c8d462
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="how-to-create-a-task-that-completes-after-a-delay"></a>Procedura: Creare un'attività che viene completata dopo un ritardo
In questo esempio viene illustrato come utilizzare il [Concurrency:: Task](../../parallel/concrt/reference/task-class.md), [Concurrency:: cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md), [cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md), [ Concurrency:: task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md), [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md), e [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) classi per creare un'attività che viene completata dopo un ritardo. È possibile utilizzare questo metodo per creare cicli in cui viene occasionalmente eseguito il polling dei dati, vengono introdotti timeout, viene ritardata la gestione dell'input utente per un tempo predeterminato e così via.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente vengono illustrate le funzioni `complete_after` e `cancel_after_timeout`. Tramite la funzione `complete_after` viene creato un oggetto `task` che viene completato dopo il ritardo specificato. Vengono utilizzati gli oggetti `timer` e `call` per impostare un oggetto `task_completion_event` dopo il ritardo specificato. Utilizzando la classe `task_completion_event`, è possibile definire un'attività che viene completata dopo che tramite un thread o un'altra attività viene segnalata la disponibilità di un valore. Quando l'evento è impostato, le attività del listener vengono completate e viene pianificata l'esecuzione delle relative continuazioni.  
  
> [!TIP]
>  Per ulteriori informazioni sul `timer` e `call` classi, che fanno parte della libreria di agenti asincroni, vedere [blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).  
  
 La funzione `cancel_after_timeout` si basa sulla funzione `complete_after` per annullare un'attività se quest'ultima non viene completata prima del timeout specificato. Tramite la funzione `cancel_after_timeout` vengono create due attività. La prima attività indica un esito positivo e viene completata al termine dell'attività fornita; la seconda attività indica un esito negativo e viene completata dopo il timeout specificato. Tramite la funzione `cancel_after_timeout` viene creata un'attività di continuazione che viene eseguita al termine dell'attività di esito positivo o negativo. Se viene completata per prima l'attività di esito negativo, tramite la continuazione viene annullata l'origine del token per annullare l'intera attività.  
  
 [!code-cpp[concrt-task-delay#1](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_1.cpp)]  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene calcolato più volte il conteggio dei numeri primi nell'intervallo [0, 100000]. L'operazione avrà esito negativo se non viene completata nel limite di tempo specificato. Nella funzione `count_primes` viene illustrato come utilizzare la funzione `cancel_after_timeout`. Viene calcolata la quantità di numeri primi nell'intervallo fornito e l'esito sarà negativo se l'attività non viene completata nel tempo specificato. Tramite la funzione `wmain` viene chiamata più volte la funzione `count_primes`. Ogni volta il limite di tempo viene dimezzato. Il programma termina dopo che l'operazione non viene completata nel limite di tempo corrente.  
  
 [!code-cpp[concrt-task-delay#2](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_2.cpp)]  
  
 Quando si utilizza questa tecnica per annullare le attività dopo un ritardo, tutte le attività non ancora iniziate non verranno avviate dopo l'annullamento dell'attività complessiva. Tuttavia, per tutte le attività di lunga durata è importante una risposta tempestiva all'annullamento. Per ulteriori informazioni sull'annullamento di attività, vedere [annullamento nella libreria PPL](cancellation-in-the-ppl.md).  
  
## <a name="example"></a>Esempio  
 Di seguito viene riportato il codice completo per questo esempio:  
  
 [!code-cpp[concrt-task-delay#3](../../parallel/concrt/codesnippet/cpp/how-to-create-a-task-that-completes-after-a-delay_3.cpp)]  
  
## <a name="compiling-the-code"></a>Compilazione del codice  
 Per compilare il codice, copiarlo e quindi incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `task-delay.cpp` , quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.  
  
 **CL.exe /EHsc task-Delay. cpp**  
  
## <a name="see-also"></a>Vedere anche  
 [Parallelismo delle attività](../../parallel/concrt/task-parallelism-concurrency-runtime.md)   
 [Classe Task (Runtime di concorrenza)](../../parallel/concrt/reference/task-class.md)   
 [Classe cancellation_token_source](../../parallel/concrt/reference/cancellation-token-source-class.md)   
 [Classe cancellation_token](../../parallel/concrt/reference/cancellation-token-class.md)   
 [Classe task_completion_event](../../parallel/concrt/reference/task-completion-event-class.md)   
 [Classe Timer](../../parallel/concrt/reference/timer-class.md)   
 [Call (classe)](../../parallel/concrt/reference/call-class.md)   
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)   
 [Annullamento nella libreria PPL](cancellation-in-the-ppl.md)

