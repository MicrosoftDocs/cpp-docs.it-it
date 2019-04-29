---
title: Agenti asincroni
ms.date: 11/19/2018
helpviewer_keywords:
- asynchronous agents
- agents [Concurrency Runtime]
ms.assetid: 6cf6ccc6-87f1-4e14-af15-ea8ba58fef1a
ms.openlocfilehash: ff6fa851519066c3c399a28557fd8f103d0e94be
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62412804"
---
# <a name="asynchronous-agents"></a>Agenti asincroni

Un' *agente asincrono* (o semplicemente *agente*) è un componente dell'applicazione che funziona in modo asincrono con altri agenti per risolvere l'attività di calcolo più grandi. Un agente può essere paragonato a un'attività che dispone di un ciclo di vita impostato. Ad esempio, un agente potrebbe leggere i dati da un dispositivo di input/output (ad esempio, la tastiera, un file su disco o una connessione di rete) e un altro agente potrebbero eseguire un'azione su tali dati appena sarà disponibile. Il primo agente utilizza il passaggio di messaggio per informare il secondo agente che sono disponibili più dati. L'utilità di pianificazione di Runtime di concorrenza fornisce un meccanismo efficiente per abilitare gli agenti bloccare e risultare in modo cooperativo senza richiedere l'annullamento di una procedura meno efficiente.

La libreria di agenti definisce il [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) classe per rappresentare un agente asincrono. `agent` è una classe astratta che dichiara il metodo virtuale [concurrency::agent::run](reference/agent-class.md#run). Il `run` metodo esegue l'attività che viene eseguita dall'agente. In quanto `run` è astratto, è necessario implementare questo metodo in ogni classe derivata da `agent`.

## <a name="agent-life-cycle"></a>Ciclo di vita dell'agente

Gli agenti hanno un ciclo di vita impostato. Il [Concurrency:: agent_status](reference/concurrency-namespace-enums.md#agent_status) enumerazione definisce i vari stati di un agente. Nella figura seguente è riportato un diagramma di stato che mostra l'avanzamento degli agenti da uno stato a altro. In questa illustrazione, linee continue rappresentano i metodi che vengono chiamati dall'applicazione. linee punteggiate rappresentano i metodi chiamati dal runtime.

![Diagramma dello stato dell'agente](../../parallel/concrt/media/agentstate.png "diagramma dello stato dell'agente")

La tabella seguente descrive ogni stato nel `agent_status` enumerazione.

|Stato dell'agente|Descrizione|
|-----------------|-----------------|
|`agent_created`|L'agente non è stato pianificato per l'esecuzione.|
|`agent_runnable`|Il runtime sta pianificando l'esecuzione dell'agente.|
|`agent_started`|L'agente è avviato e sia in esecuzione.|
|`agent_done`|L'agente è terminata.|
|`agent_canceled`|L'agente è stato annullato prima dell'ingresso il `started` dello stato.|

`agent_created` stato iniziale di un agente `agent_runnable` e `agent_started` sono gli stati attivi, e `agent_done` e `agent_canceled` sono stati terminali.

Usare la [concurrency::agent::status](reference/agent-class.md#status) metodo per recuperare lo stato corrente di un `agent` oggetto. Anche se il `status` metodo è indipendente dalla concorrenza, lo stato dell'agente può cambiare prima che il `status` restituzione del metodo. Ad esempio, potrebbe essere un agente nel `agent_started` stato quando si chiama il `status` metodo, spostato ma il `agent_done` stato subito dopo il `status` restituzione del metodo.

## <a name="methods-and-features"></a>I metodi e funzionalità

La tabella seguente illustra alcuni dei metodi importanti che appartengono al `agent` classe. Per altre informazioni su tutti i `agent` metodi della classe, vedere [classe agent](../../parallel/concrt/reference/agent-class.md).

|Metodo|Descrizione|
|------------|-----------------|
|[start](reference/agent-class.md#start)|Le pianificazioni di `agent` oggetto per l'esecuzione e lo imposta sul `agent_runnable` dello stato.|
|[run](reference/agent-class.md#run)|Esegue l'attività che deve essere eseguita dal `agent` oggetto.|
|[done](reference/agent-class.md#done)|Sposta un agente di `agent_done` dello stato.|
|[cancel](../../parallel/concrt/cancellation-in-the-ppl.md#cancel)|Se l'agente non è stato avviato, questo metodo annulla l'esecuzione dell'agente e lo imposta sul `agent_canceled` dello stato.|
|[status](reference/agent-class.md#status)|Recupera lo stato corrente del `agent` oggetto.|
|[wait](reference/agent-class.md#wait)|Attende che il `agent` oggetto immettere il `agent_done` o `agent_canceled` dello stato.|
|[wait_for_all](reference/agent-class.md#wait_for_all)|Attende che tutti forniti `agent` gli oggetti di immettere il `agent_done` o `agent_canceled` dello stato.|
|[wait_for_one](reference/agent-class.md#wait_for_one)|È in attesa di almeno uno dei fornito `agent` gli oggetti di immettere il `agent_done` o `agent_canceled` dello stato.|

Dopo aver creato un oggetto agente, chiamare il [metodi](reference/agent-class.md#start) metodo pianificarlo per l'esecuzione. Il runtime chiama il `run` metodo dopo aver pianificato l'agente e lo imposta sul `agent_runnable` dello stato.

Il runtime non gestisce le eccezioni generate dagli agenti asincroni. Per altre informazioni sulla gestione delle eccezioni e sugli agenti, vedere [gestione delle eccezioni](../../parallel/concrt/exception-handling-in-the-concurrency-runtime.md).

## <a name="example"></a>Esempio

Per un esempio che illustra come creare un'applicazione basata su agente base, vedere [procedura dettagliata: Creazione di un'applicazione basata su agente](../../parallel/concrt/walkthrough-creating-an-agent-based-application.md).

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)
