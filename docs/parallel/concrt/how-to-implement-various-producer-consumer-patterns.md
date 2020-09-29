---
title: 'Procedura: Implementare vari modelli producer-consumer'
ms.date: 11/04/2016
helpviewer_keywords:
- producer-consumer patterns, implementing [Concurrency Runtime]
- implementing producer-consumer patterns [Concurrency Runtime]
ms.assetid: 75f2c7cc-5399-49ea-98eb-847fe6747169
ms.openlocfilehash: 70813adf6715a2bcaf4af7370ce43d99c44263bd
ms.sourcegitcommit: 94893973211d0b254c8bcdcf0779997dcc136b0c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/28/2020
ms.locfileid: "91413775"
---
# <a name="how-to-implement-various-producer-consumer-patterns"></a>Procedura: Implementare vari modelli producer-consumer

Questo argomento descrive come implementare il modello producer-consumer nell'applicazione. In questo modello, il *producer* invia messaggi a un blocco di messaggi e il *consumer* legge i messaggi dal blocco.

Nell'argomento vengono illustrati due scenari. Nel primo scenario, il consumer deve ricevere ogni messaggio inviato dal Producer. Nel secondo scenario, il consumer esegue periodicamente il polling dei dati e pertanto non deve ricevere ogni messaggio.

In entrambi gli esempi di questo argomento vengono utilizzati agenti, blocchi di messaggio e funzioni di passaggio dei messaggi per trasmettere messaggi dal producer al consumer. L'agente Producer utilizza la funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) per scrivere messaggi in un oggetto [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) . L'agente consumer utilizza la funzione [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) per leggere i messaggi da un oggetto [Concurrency:: ISource](../../parallel/concrt/reference/isource-class.md) . Entrambi gli agenti contengono un valore sentinella per coordinare la fine dell'elaborazione.

Per ulteriori informazioni sugli agenti asincroni, vedere [Asynchronous Agents](../../parallel/concrt/asynchronous-agents.md). Per ulteriori informazioni sui blocchi di messaggi e sulle funzioni di passaggio dei messaggi, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md) e [funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md).

## <a name="example-send-series-of-numbers-to-consumer-agent"></a>Esempio: inviare serie di numeri all'agente consumer

In questo esempio, l'agente producer invia una serie di numeri all'agente consumer. Il consumer riceve ognuno di questi numeri e ne calcola la media. L'applicazione scrive la media nella console.

In questo esempio viene utilizzato un oggetto [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) per consentire al producer di accodare i messaggi. La `unbounded_buffer` classe implementa `ITarget` e `ISource` in modo che il producer e il consumer possano inviare e ricevere messaggi da e verso un buffer condiviso. Le `send` `receive` funzioni e coordinano l'attività di propagazione dei dati dal producer al consumer.

[!code-cpp[concrt-producer-consumer-average#1](../../parallel/concrt/codesnippet/cpp/how-to-implement-various-producer-consumer-patterns_1.cpp)]

Questo esempio produce il seguente output:

```Output
The average is 50.
```

## <a name="example-send-series-of-stock-quotes-to-consumer-agent"></a>Esempio: inviare serie di quotazioni azionarie all'agente consumer

In questo esempio, l'agente producer invia una serie di citazioni azionarie all'agente consumer. L'agente consumer legge periodicamente le virgolette correnti e le stampa nella console.

Questo esempio è simile a quello precedente, ad eccezione del fatto che usa un oggetto [Concurrency:: overwrite_buffer](../../parallel/concrt/reference/overwrite-buffer-class.md) per consentire al producer di condividere un messaggio con il consumer. Come nell'esempio precedente, `overwrite_buffer` la classe implementa `ITarget` e in `ISource` modo che il producer e il consumer possano agire su un buffer di messaggi condiviso.

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

A differenza di un `unbounded_buffer` oggetto, la `receive` funzione non rimuove il messaggio dall' `overwrite_buffer` oggetto. Se il consumer legge dal buffer dei messaggi più di una volta prima che il produttore sovrascriva il messaggio, il ricevitore riceve lo stesso messaggio ogni volta.

## <a name="compiling-the-code"></a>Compilazione del codice

Copiare il codice di esempio e incollarlo in un progetto di Visual Studio oppure incollarlo in un file denominato, `producer-consumer.cpp` quindi eseguire il comando seguente in una finestra del prompt dei comandi di Visual Studio.

**cl.exe/EHsc producer-consumer. cpp**

## <a name="see-also"></a>Vedere anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio del messaggio](../../parallel/concrt/message-passing-functions.md)
