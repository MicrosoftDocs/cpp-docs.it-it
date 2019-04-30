---
title: 'Procedura: Implementare vari modelli Producer-Consumer'
ms.date: 11/04/2016
helpviewer_keywords:
- producer-consumer patterns, implementing [Concurrency Runtime]
- implementing producer-consumer patterns [Concurrency Runtime]
ms.assetid: 75f2c7cc-5399-49ea-98eb-847fe6747169
ms.openlocfilehash: 113518e97b6715384b5e7b84b0d0eab63dfcfcc7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62411357"
---
# <a name="how-to-implement-various-producer-consumer-patterns"></a>Procedura: Implementare vari modelli Producer-Consumer

In questo argomento viene descritto come implementare il modello producer-consumer nell'applicazione. In questo modello, il *producer* invia messaggi a un blocco di messaggi e il *consumer* legge i messaggi dal blocco.

Questo argomento vengono illustrati due scenari. Nel primo scenario, il consumer deve ricevere ogni messaggio inviato dal producer. Nel secondo scenario, il consumer esegue periodicamente il polling per i dati e pertanto non deve ricevere ogni messaggio.

Entrambi gli esempi in questo argomento usano gli agenti, blocchi di messaggi e funzioni di passaggio dei messaggi per trasmettere i messaggi da parte del produttore per il consumer. L'agente di producer Usa la [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione per scrivere messaggi in un [ITarget](../../parallel/concrt/reference/itarget-class.md) oggetto. L'agente utente utilizza il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per leggere i messaggi da una [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) oggetto. Entrambi gli agenti di contenere un valore di sentinel per coordinare la fine dell'elaborazione.

Per altre informazioni sugli agenti asincroni, vedere [agenti asincroni](../../parallel/concrt/asynchronous-agents.md). Per altre informazioni sui blocchi di messaggi e funzioni di passaggio dei messaggi, vedere [blocchi del messaggio asincrona](../../parallel/concrt/asynchronous-message-blocks.md) e [Message Passing Functions](../../parallel/concrt/message-passing-functions.md).

## <a name="example"></a>Esempio

In questo esempio, l'agente di producer invia una serie di numeri all'agente di consumer. Il consumer riceve ognuno di questi numeri e ne calcola la Media. L'applicazione scrive la media nella console.

Questo esempio Usa un' [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto per consentire il producer di messaggi in coda. Il `unbounded_buffer` classe implementa `ITarget` e `ISource` in modo che il producer e consumer possono inviare e ricevere messaggi da e verso un buffer condiviso. Il `send` e `receive` funzioni coordinano le attività di propagazione dei dati da parte del produttore per il consumer.

[!code-cpp[concrt-producer-consumer-average#1](../../parallel/concrt/codesnippet/cpp/how-to-implement-various-producer-consumer-patterns_1.cpp)]

Questo esempio produce il seguente output:

```Output
The average is 50.
```

## <a name="example"></a>Esempio

In questo esempio, l'agente di producer invia una serie di quotazioni all'agente di consumer. L'agente consumer periodicamente legge l'offerta corrente e lo stampa nella console.

In questo esempio è simile a quello precedente, ad eccezione del fatto che usa un' [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) oggetto per abilitare il producer di condividere un messaggio al consumer. Come nell'esempio precedente, `overwrite_buffer` classe implementa `ITarget` e `ISource` in modo che il producer e consumer può agire su un buffer dei messaggi condivisi.

[!code-cpp[concrt-producer-consumer-quotes#1](../../parallel/concrt/codesnippet/cpp/how-to-implement-various-producer-consumer-patterns_2.cpp)]

Questo esempio produce l'output di esempio seguente.

```Output
Current quote is 24.44.
Current quote is 24.44.
Current quote is 24.65.
Current quote is 24.99.
Current quote is 23.76.
Current quote is 22.30.
Current quote is 25.89.
```

A differenza di con un `unbounded_buffer` oggetti, il `receive` funzione non rimuove il messaggio dal `overwrite_buffer` oggetto. Se il consumer legge dal buffer del messaggio più di una volta prima che il producer sovrascrive tale messaggio, il ricevitore ottiene lo stesso messaggio ogni volta.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato `producer-consumer.cpp` e quindi eseguire il comando seguente in una finestra del Prompt dei comandi di Visual Studio.

**CL.exe /EHsc producer-consumer. cpp**

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)
