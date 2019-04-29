---
title: libreria di agenti asincroni
ms.date: 11/19/2018
helpviewer_keywords:
- Agents Library
- Asynchronous Agents Library
ms.assetid: d2a72a31-8ba6-4220-ad7a-e403a6acaa42
ms.openlocfilehash: 39ae785b602b3928f0c32f9fc599527dab5558f5
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62371897"
---
# <a name="asynchronous-agents-library"></a>libreria di agenti asincroni

Asynchronous Agents Library (o semplicemente *libreria di agenti*) fornisce un modello di programmazione che consente di migliorare l'efficienza dello sviluppo di applicazioni abilitate per la concorrenza. La libreria di agenti è una libreria dei modelli C++ che promuove un modello di programmazione basato su attori e i messaggi in-process, passando per un flusso di dati e attività di pipelining. La libreria di agenti si basa sui componenti di gestione risorse e pianificazione del Runtime di concorrenza.

## <a name="programming-model"></a>Modello di programmazione

La libreria di agenti sono disponibili alternative allo stato condiviso, consentendo di collegare componenti isolati tramite un modello di comunicazione asincrona basata su flussi di dati anziché il flusso di controllo. *Flusso di dati* fa riferimento alla programmazione di una modello in cui i calcoli vengono eseguiti quando tutti i dati richiesti è disponibile. *flusso di controllo* fa riferimento a un modello di programmazione in cui i calcoli vengono eseguiti in un ordine predeterminato.

Il modello di programmazione del flusso di dati è correlato al concetto di *passaggio dei messaggi*, in base al quale i componenti indipendenti di un programma comunicano con un altro programma inviando messaggi.

La libreria di agenti è costituita da tre componenti: *agenti asincroni*, *blocchi dei messaggi asincroni*, e *funzioni di passaggio messaggi*. Gli agenti di mantengono lo stato e usano funzioni di passaggio dei messaggi e blocchi di messaggi per comunicare tra loro e con componenti esterni. Funzioni di passaggio di messaggi consentono agli agenti di inviare e ricevere messaggi da e verso i componenti esterni. Blocchi dei messaggi asincroni trattenere i messaggi e consentono agli agenti di comunicare in modo sincronizzato.

La figura seguente mostra come due agenti Usa blocchi di messaggi e le funzioni di passaggio dei messaggi per comunicare. In questa illustrazione `agent1` invia un messaggio al `agent2` tramite il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) (funzione) e un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto. `agent2` Usa il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per leggere il messaggio. `agent2` Usa lo stesso metodo per inviare un messaggio a `agent1`. Le frecce tratteggiate rappresentano il flusso di dati tra gli agenti. Le frecce continue connettono gli agenti per i blocchi di messaggio che scrivere o leggere dal.

![I componenti della libreria di agenti](../../parallel/concrt/media/agent_librarycomp.png "i componenti della libreria di agenti")

Un esempio di codice che implementa questa figura è illustrato più avanti in questo argomento.

Il modello di programmazione dell'agente presenta diversi vantaggi rispetto altri meccanismi di sincronizzazione e concorrenza, ad esempio, gli eventi. Un vantaggio è che tramite il passaggio di messaggi per trasmettere le modifiche dello stato tra gli oggetti, è possibile isolare l'accesso alle risorse condivise e migliorare la scalabilità. Un vantaggio di passaggio dei messaggi è che si unisce la sincronizzazione dei dati anziché associare, a un oggetto di sincronizzazione esterni. Ciò semplifica la trasmissione dei dati tra i componenti e possa eliminare gli errori di programmazione delle applicazioni.

## <a name="when-to-use-the-agents-library"></a>Quando usare la libreria di agenti

Usare la libreria di agenti quando si dispone di più operazioni che devono comunicare tra loro in modo asincrono. Funzioni di passaggio dei messaggi e blocchi di messaggi consentono di scrivere applicazioni parallele senza la necessità di meccanismi di sincronizzazione, ad esempio i blocchi. Questo consente di concentrarsi sulla logica dell'applicazione.

Il modello di programmazione dell'agente viene spesso utilizzato per creare *pipeline di dati* oppure *reti*. Una pipeline di dati è una serie di componenti, ognuno dei quali esegue un'attività specifica che contribuisce a un obiettivo più grande. Ogni componente in una pipeline del flusso di dati esegue un'operazione quando viene ricevuto un messaggio da un altro componente. Il risultato di tale lavoro viene passato ad altri componenti della pipeline o rete. I componenti possono utilizzare altre funzionalità di concorrenza con granularità fine da altre librerie, ad esempio, il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md).

## <a name="example"></a>Esempio

L'esempio seguente implementa la figura illustrata in precedenza in questo argomento.

[!code-cpp[concrt-basic-agents#1](../../parallel/concrt/codesnippet/cpp/asynchronous-agents-library_1.cpp)]

Questo esempio produce il seguente output:

```Output
agent1: sending request...
agent2: received 'request'.
agent2: sending response...
agent1: received '42'.
```

Gli argomenti seguenti descrivono le funzionalità usate in questo esempio.

## <a name="related-topics"></a>Argomenti correlati

[Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)<br/>
Descrive il ruolo di agenti asincroni per risolvere le attività di calcolo più grandi.

[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
Descrive i vari tipi di blocchi di messaggi forniti dalla libreria di agenti.

[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
Vengono descritte le routine di passaggio messaggi diversi forniti dalla libreria di agenti.

[Procedura: Implementare vari modelli producer-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)<br/>
Viene descritto come implementare il modello producer-consumer nell'applicazione.

[Procedura: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)<br/>
Vengono illustrati vari modi per fornire funzioni lavoro per le [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classi.

[Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)<br/>
Viene illustrato come utilizzare il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe in una pipeline di dati.

[Procedura: Effettuare una scelta tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)<br/>
Viene illustrato come utilizzare il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) e [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classi per selezionare la prima attività per completare un algoritmo di ricerca.

[Procedura: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)<br/>
Viene illustrato come utilizzare il [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) classe per inviare un messaggio a intervalli regolari.

[Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)<br/>
Viene illustrato come usare un filtro per consentire un blocco di messaggi asincroni accettare o rifiutare i messaggi.

[PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)<br/>
Viene descritto come utilizzare i vari modelli paralleli, ad esempio gli algoritmi paralleli, nelle applicazioni.

[Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)<br/>
Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.
