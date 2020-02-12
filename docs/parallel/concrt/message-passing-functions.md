---
title: Funzioni di passaggio dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- message passing functions
ms.assetid: 42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0
ms.openlocfilehash: 4e1052a59f355c4ad5a7c6b57724268c24a209b4
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77143289"
---
# <a name="message-passing-functions"></a>Funzioni di passaggio dei messaggi

La libreria di agenti asincroni fornisce diverse funzioni che consentono di passare messaggi tra i componenti.

Queste funzioni di passaggio dei messaggi vengono usate con i vari tipi di blocchi di messaggi. Per ulteriori informazioni sui tipi di blocchi di messaggi definiti dalla runtime di concorrenza, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="top"></a> Sezioni

In questo argomento vengono descritte le funzioni di passaggio dei messaggi seguenti:

- [Send e asend](#send)

- [ricezione e try_receive](#receive)

- [esempi](#examples)

## <a name="send"></a>Send e asend

La funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) Invia un messaggio alla destinazione specificata in modo sincrono e la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) Invia un messaggio alla destinazione specificata in modo asincrono. Entrambe le funzioni `send` e `asend` attendono che la destinazione indichi che il messaggio verrà accettato o rifiutato.

La funzione `send` attende fino a quando la destinazione accetta o rifiuta il messaggio prima che venga restituito. La funzione `send` restituisce **true** se il messaggio è stato recapitato e **false** in caso contrario. Poiché la funzione `send` funziona in modo sincrono, la funzione `send` attende che la destinazione riceva il messaggio prima che venga restituito.

Viceversa, la funzione `asend` non attende che la destinazione accetti o rifiuti il messaggio prima che venga restituito. Al contrario, la funzione `asend` restituisce **true** se la destinazione accetta il messaggio e la riprenderà. In caso contrario, `asend` restituisce **false** per indicare che la destinazione ha rifiutato il messaggio o ha posticipato la decisione di accettare il messaggio.

[[Torna all'inizio](#top)]

## <a name="receive"></a>ricezione e try_receive

Le funzioni [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) e [Concurrency:: try_receive](reference/concurrency-namespace-functions.md#try_receive) leggono i dati da un'origine specificata. La funzione `receive` attende che i dati diventino disponibili, mentre la funzione `try_receive` restituisce immediatamente un risultato.

Utilizzare la funzione `receive` quando è necessario disporre dei dati per continuare. Utilizzare la funzione `try_receive` se non è necessario bloccare il contesto corrente o se non è necessario che i dati continuino.

[[Torna all'inizio](#top)]

## <a name="examples"></a> Esempi

Per esempi che usano le funzioni `send` e `asend`e `receive`, vedere gli argomenti seguenti:

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
[Receive (funzione)](reference/concurrency-namespace-functions.md#receive)<br/>
[Funzione try_receive](reference/concurrency-namespace-functions.md#try_receive)
