---
description: 'Altre informazioni su: agenti asincroni'
title: Agenti asincroni
ms.date: 11/19/2018
helpviewer_keywords:
- asynchronous agents
- agents [Concurrency Runtime]
ms.assetid: 6cf6ccc6-87f1-4e14-af15-ea8ba58fef1a
ms.openlocfilehash: 38d2325404d83443ed0bd054793ca200a562359f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97338287"
---
# <a name="asynchronous-agents"></a>Agenti asincroni

Un *agente asincrono* (o solo *agente*) è un componente dell'applicazione che funziona in modo asincrono con altri agenti per risolvere attività di elaborazione più grandi. Si pensi a un agente come a un'attività con un ciclo di vita impostato. Ad esempio, un agente può leggere i dati da un dispositivo di input/output (ad esempio la tastiera, un file su disco o una connessione di rete) e un altro agente può eseguire un'azione su tali dati quando diventa disponibile. Il primo agente utilizza il passaggio del messaggio per informare il secondo agente che sono disponibili più dati. Il runtime di concorrenza utilità di pianificazione fornisce un meccanismo efficiente per consentire agli agenti di bloccarsi e produrre in modo cooperativo senza richiedere una precedenza meno efficiente.

La libreria di agenti definisce la classe [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) per rappresentare un agente asincrono. `agent` è una classe astratta che dichiara il metodo virtuale [Concurrency:: Agent:: Run](reference/agent-class.md#run). Il `run` metodo esegue l'attività eseguita dall'agente. Poiché `run` è astratto, è necessario implementare questo metodo in ogni classe da cui si deriva `agent` .

## <a name="agent-life-cycle"></a>Ciclo di vita dell'agente

Gli agenti hanno un ciclo di vita impostato. L'enumerazione [Concurrency:: agent_status](reference/concurrency-namespace-enums.md#agent_status) definisce i vari Stati di un agente. Nella figura seguente è riportato un diagramma di stato che mostra il modo in cui gli agenti avanzano da uno stato a un altro. In questa illustrazione, le linee solide rappresentano i metodi chiamati dall'applicazione. le linee punteggiate rappresentano i metodi che vengono chiamati dal runtime.

![Diagramma dello stato dell'agente](../../parallel/concrt/media/agentstate.png "Diagramma dello stato dell'agente")

Nella tabella seguente viene descritto ogni stato nell' `agent_status` enumerazione.

|Stato agente|Description|
|-----------------|-----------------|
|`agent_created`|L'agente non è stato pianificato per l'esecuzione.|
|`agent_runnable`|Il Runtime sta pianificando l'esecuzione dell'agente.|
|`agent_started`|L'agente è stato avviato ed è in esecuzione.|
|`agent_done`|L'agente è stato terminato.|
|`agent_canceled`|L'agente è stato annullato prima dell'immissione dello `started` stato.|

`agent_created` è lo stato iniziale di un agente, `agent_runnable` e `agent_started` sono gli Stati attivi, e `agent_done` e `agent_canceled` sono gli Stati del terminale.

Utilizzare il metodo [Concurrency:: Agent:: status](reference/agent-class.md#status) per recuperare lo stato corrente di un `agent` oggetto. Sebbene il `status` metodo sia indipendente dalla concorrenza, lo stato dell'agente può variare in base al momento in cui il `status` metodo restituisce. Ad esempio, un agente potrebbe trovarsi nello `agent_started` stato quando si chiama il `status` metodo, ma viene spostato nello `agent_done` stato subito dopo la `status` restituzione del metodo.

## <a name="methods-and-features"></a>Metodi e funzionalità

Nella tabella seguente vengono illustrati alcuni dei principali metodi che appartengono alla `agent` classe. Per ulteriori informazioni su tutti i `agent` metodi della classe, vedere [classe Agent](../../parallel/concrt/reference/agent-class.md).

|Metodo|Descrizione|
|------------|-----------------|
|[start](reference/agent-class.md#start)|Pianifica l' `agent` oggetto per l'esecuzione e lo imposta sullo `agent_runnable` stato.|
|[Correre](reference/agent-class.md#run)|Esegue l'attività che deve essere eseguita dall' `agent` oggetto.|
|[Fine](reference/agent-class.md#done)|Sposta un agente sullo `agent_done` stato.|
|[cancel](../../parallel/concrt/cancellation-in-the-ppl.md#cancel)|Se l'agente non è stato avviato, questo metodo annulla l'esecuzione dell'agente e lo imposta sullo `agent_canceled` stato.|
|[Stato](reference/agent-class.md#status)|Recupera lo stato corrente dell' `agent` oggetto.|
|[attendere](reference/agent-class.md#wait)|Attende `agent` che l'oggetto entri nello `agent_done` `agent_canceled` stato o.|
|[wait_for_all](reference/agent-class.md#wait_for_all)|Attende `agent` che tutti gli oggetti forniti entrino nello `agent_done` `agent_canceled` stato o.|
|[wait_for_one](reference/agent-class.md#wait_for_one)|Attende che almeno uno degli oggetti forniti entri nello `agent` `agent_done` `agent_canceled` stato o.|

Dopo aver creato un oggetto Agent, chiamare il metodo [Concurrency:: Agent:: Start](reference/agent-class.md#start) per pianificarlo per l'esecuzione. Il runtime chiama il `run` metodo dopo che ha pianificato l'agente e lo imposta sullo `agent_runnable` stato.

Il runtime non gestisce le eccezioni generate dagli agenti asincroni. Per ulteriori informazioni sulla gestione delle eccezioni e sugli agenti, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="example"></a>Esempio

Per un esempio in cui viene illustrato come creare un'applicazione basata su agente di base, vedere [procedura dettagliata: creazione di un'applicazione Agent-Based](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md).

## <a name="see-also"></a>Vedi anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)
