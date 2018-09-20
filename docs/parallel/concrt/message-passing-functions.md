---
title: Funzioni di passaggio dei messaggi | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- message passing functions
ms.assetid: 42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b0b7a7afb25d46fa3b521353c4577fbed66e69fd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46436988"
---
# <a name="message-passing-functions"></a>Funzioni di passaggio dei messaggi

Asynchronous Agents Library offre diverse funzioni che consentono di passare messaggi tra i componenti.

Queste funzioni di passaggio dei messaggi vengono usate con i vari tipi di blocco dei messaggi. Per altre informazioni sui tipi di blocco dei messaggi che sono definiti dal Runtime di concorrenza, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

##  <a name="top"></a> Sezioni

Questo argomento descrive le funzioni di passaggio dei messaggi seguenti:

- [trasmissione e asend](#send)

- [ricevere e try_receive](#receive)

- [Esempi](#examples)

##  <a name="send"></a> trasmissione e asend

Il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) funzione Invia un messaggio alla destinazione specificata in modo sincrono e il [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) funzione Invia un messaggio alla destinazione specificata in modo asincrono. Sia la `send` e `asend` funzioni attendere fino a quando la destinazione indica che verrà infine accettare o rifiutare il messaggio.

Il `send` funzione attende fino a quando la destinazione accetta o rifiuta il messaggio prima della restituzione. Il `send` funzione restituisce `true` se il messaggio è stato recapitato e `false` in caso contrario. Poiché il `send` funzione funziona in modo sincrono, il `send` funzione attende che la destinazione ricevere il messaggio prima della restituzione.

Al contrario, il `asend` funzione non attende la destinazione di accettare o rifiutare il messaggio prima della restituzione. Al contrario, il `asend` funzione restituisce `true` se la destinazione accetta il messaggio e alla fine richiederà lo. In caso contrario, `asend` restituisce `false` per indicare che la destinazione ha rifiutato il messaggio o la decisione sulla possibilità di estrarre il messaggio posticipato.

[[Torna all'inizio](#top)]

##  <a name="receive"></a> ricevere e try_receive

Il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) e [Concurrency:: try_receive](reference/concurrency-namespace-functions.md#try_receive) funzioni leggono i dati da un'origine specificata. Il `receive` funzione attende che i dati diventino disponibili, mentre il `try_receive` funzione restituisce immediatamente.

Usare il `receive` funzione quando è necessario avere i dati per continuare. Usare il `try_receive` funzionare se non è necessario bloccare il contesto corrente o non è necessario avere i dati per continuare.

[[Torna all'inizio](#top)]

##  <a name="examples"></a> Esempi

Per esempi che usano il `send` e `asend`, e `receive` funzioni, vedere gli argomenti seguenti:

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: Implementare vari modelli producer-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)

- [Procedura: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)

- [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)

- [Procedura: Effettuare una scelta tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)

- [Procedura: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)

- [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

[[Torna all'inizio](#top)]

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzione Send](reference/concurrency-namespace-functions.md#send)<br/>
[Funzione asend](reference/concurrency-namespace-functions.md#asend)<br/>
[Funzione Receive](reference/concurrency-namespace-functions.md#receive)<br/>
[Funzione try_receive](reference/concurrency-namespace-functions.md#try_receive)

