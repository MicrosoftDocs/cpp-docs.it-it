---
description: 'Altre informazioni su: funzioni di passaggio dei messaggi'
title: Funzioni di passaggio dei messaggi
ms.date: 11/04/2016
helpviewer_keywords:
- message passing functions
ms.assetid: 42477c9e-a8a6-4dc4-a98e-93c6dc8c4dd0
ms.openlocfilehash: 77e221f5d2116c1bfc2690d247161979af04ac06
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97159856"
---
# <a name="message-passing-functions"></a>Funzioni di passaggio dei messaggi

La libreria di agenti asincroni fornisce diverse funzioni che consentono di passare messaggi tra i componenti.

Queste funzioni di passaggio dei messaggi vengono usate con i vari tipi di blocchi di messaggi. Per ulteriori informazioni sui tipi di blocchi di messaggi definiti dalla runtime di concorrenza, vedere [blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md).

## <a name="sections"></a><a name="top"></a> Sezioni

In questo argomento vengono descritte le funzioni di passaggio dei messaggi seguenti:

- [Send e asend](#send)

- [ricezione e try_receive](#receive)

- [Esempi](#examples)

## <a name="send-and-asend"></a><a name="send"></a> Send e asend

La funzione [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) Invia un messaggio alla destinazione specificata in modo sincrono e la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) Invia un messaggio alla destinazione specificata in modo asincrono. Entrambe le `send` `asend` funzioni e attendono fino a quando la destinazione non indica che il messaggio verrà accettato o rifiutato.

La `send` funzione attende fino a quando la destinazione non accetta o rifiuta il messaggio prima che venga restituito. La `send` funzione restituisce **`true`** se il messaggio è stato recapitato e **`false`** in caso contrario. Poiché la `send` funzione funziona in modo sincrono, la `send` funzione attende che la destinazione riceva il messaggio prima che venga restituito.

Viceversa, la funzione non `asend` attende che la destinazione accetti o rifiuti il messaggio prima che venga restituito. Al contrario, la `asend` funzione restituisce **`true`** se la destinazione accetta il messaggio e alla fine lo prenderà. In caso contrario, `asend` restituisce **`false`** per indicare che la destinazione ha rifiutato il messaggio o ha posticipato la decisione relativa all'accettazione o meno del messaggio.

[All'[inizio](#top)]

## <a name="receive-and-try_receive"></a><a name="receive"></a> ricezione e try_receive

Le funzioni [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) e [Concurrency:: try_receive](reference/concurrency-namespace-functions.md#try_receive) leggono i dati da un'origine specificata. La `receive` funzione attende che i dati diventino disponibili, mentre la `try_receive` funzione restituisce immediatamente il risultato.

Utilizzare la `receive` funzione quando è necessario disporre dei dati per continuare. Utilizzare la `try_receive` funzione se non è necessario bloccare il contesto corrente o se non è necessario che i dati continuino.

[All'[inizio](#top)]

## <a name="examples"></a><a name="examples"></a> Esempi

Per esempi che usano le `send` `asend` funzioni e e `receive` , vedere gli argomenti seguenti:

- [Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Procedura: implementare vari modelli di Producer-Consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)

- [Procedura: fornire funzioni lavoro alle classi call e Transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)

- [Procedura: usare Transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)

- [Procedura: effettuare una selezione tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)

- [Procedura: inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)

- [Procedura: utilizzare un filtro di blocco messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)

[All'[inizio](#top)]

## <a name="see-also"></a>Vedi anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi di messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzione send](reference/concurrency-namespace-functions.md#send)<br/>
[Funzione asend](reference/concurrency-namespace-functions.md#asend)<br/>
[Funzione receive](reference/concurrency-namespace-functions.md#receive)<br/>
[Funzione try_receive](reference/concurrency-namespace-functions.md#try_receive)
