---
title: Libreria di agenti asincroni | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-concrt
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- Agents Library
- Asynchronous Agents Library
ms.assetid: d2a72a31-8ba6-4220-ad7a-e403a6acaa42
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a8bb1ce7a0c449d5c09e49ad16435e7732ddfcc1
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33688996"
---
# <a name="asynchronous-agents-library"></a>libreria di agenti asincroni
Libreria di agenti asincroni (o semplicemente *libreria di agenti*) fornisce un modello di programmazione che consente di aumentare l'affidabilità dello sviluppo di applicazioni abilitate per la concorrenza. La libreria di agenti è una libreria di modelli di C++ che promuove un modello di programmazione basato su attori e attività di pipelining e il passaggio di un flusso di dati dei messaggi in-process. La libreria di agenti si basa sui componenti di gestione risorse e pianificazione del Runtime di concorrenza.  
  
## <a name="programming-model"></a>Modello di programmazione  
 La libreria di agenti offre alternative a uno stato condiviso consentendo la connessione di componenti isolati tramite un modello di comunicazione asincrona che è basato sul flusso di dati anziché il flusso di controllo. *Flussi di dati* fa riferimento a una programmazione modello in cui i calcoli vengono eseguiti quando tutti i dati necessari è disponibile. *flusso di controllo* fa riferimento a un modello di programmazione in cui i calcoli vengono eseguiti in un ordine predeterminato.  
  
 Il modello di programmazione del flusso di dati è correlato al concetto di *passaggio dei messaggi*, in base al quale i componenti indipendenti di un programma comunicano con un altro programma inviando messaggi.  
  
 La libreria di agenti è composta da tre componenti: *agenti asincroni*, *blocchi dei messaggi asincroni*, e *funzioni di passaggio dei messaggi*. Gli agenti mantengono lo stato e utilizzano i blocchi dei messaggi e funzioni di passaggio dei messaggi per comunicare tra loro e con i componenti esterni. Funzioni di passaggio dei messaggi consentono agli agenti di inviare e ricevere messaggi da e verso i componenti esterni. Blocchi dei messaggi asincroni ricezione dei messaggi e consentono agli agenti di comunicare in modo sincronizzato.  
  
 Nella figura seguente viene illustrato come due agenti utilizzare blocchi dei messaggi e funzioni di passaggio dei messaggi per comunicare. In questa illustrazione, `agent1` invia un messaggio `agent2` utilizzando il [Concurrency:: Send](reference/concurrency-namespace-functions.md#send) (funzione) e un [Concurrency:: unbounded_buffer](reference/unbounded-buffer-class.md) oggetto. `agent2` Usa il [Concurrency:: Receive](reference/concurrency-namespace-functions.md#receive) funzione per leggere il messaggio. `agent2` Usa lo stesso metodo a cui per inviare un messaggio `agent1`. Le frecce tratteggiate rappresentano il flusso di dati tra gli agenti. Le frecce continue connettono gli agenti ai blocchi di messaggio che scrivere o leggere.  
  
 ![I componenti della libreria di agenti](../../parallel/concrt/media/agent_librarycomp.png "agent_librarycomp")  
  
 Un esempio di codice che implementa questa figura è illustrato più avanti in questo argomento.  
  
 Il modello di programmazione dell'agente presenta diversi vantaggi rispetto altri meccanismi di sincronizzazione e concorrenza, ad esempio, gli eventi. Un vantaggio è che tramite passaggio di messaggi per trasmettere le modifiche dello stato tra oggetti, è possibile isolare l'accesso alle risorse condivise e migliorare la scalabilità. Un vantaggio di passaggio dei messaggi è che collega la sincronizzazione di dati anziché il collegamento a un oggetto di sincronizzazione esterno di questa. Ciò semplifica la trasmissione dei dati tra i componenti e consente di eliminare gli errori di programmazione nelle applicazioni.  
  
## <a name="when-to-use-the-agents-library"></a>Quando utilizzare la libreria di agenti  
 Utilizzare la libreria di agenti quando si dispone di più operazioni che devono comunicare tra loro in modo asincrono. Blocchi dei messaggi e funzioni di passaggio dei messaggi consentono di scrivere applicazioni parallele senza meccanismi di sincronizzazione, ad esempio i blocchi. Ciò consente di concentrarsi sulla logica dell'applicazione.  
  
 Il modello di programmazione dell'agente viene spesso utilizzato per creare *pipeline di dati* o *reti*. Una pipeline di dati è una serie di componenti, ognuno dei quali esegue un'attività specifica che contribuisce a un obiettivo più grande. Ogni componente in una pipeline del flusso di dati esegue lavoro quando viene ricevuto un messaggio da un altro componente. Il risultato di tale lavoro viene passato ad altri componenti della pipeline o rete. I componenti possono utilizzare altre funzionalità di concorrenza con granularità fine dalle altre raccolte, ad esempio, il [libreria PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene implementata l'illustrazione illustrato in precedenza in questo argomento.  
  
 [!code-cpp[concrt-basic-agents#1](../../parallel/concrt/codesnippet/cpp/asynchronous-agents-library_1.cpp)]  
  
 Questo esempio produce il seguente output:  
  
```Output  
agent1: sending request...  
agent2: received 'request'.  
agent2: sending response...  
agent1: received '42'.  
```  
  
 Gli argomenti seguenti descrivono le funzionalità utilizzate in questo esempio.  
  
## <a name="related-topics"></a>Argomenti correlati  
 [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)  
 Viene descritto il ruolo di agenti asincroni nella risoluzione maggiore attività di elaborazione.  
  
 [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)  
 Descrive i vari tipi di blocco di messaggi che vengono forniti dalla libreria di agenti.  
  
 [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)  
 Vengono descritte le diverse routine di passaggio messaggio forniti dalla libreria di agenti.  
  
 [Procedura: Implementare vari modelli producer-consumer](../../parallel/concrt/how-to-implement-various-producer-consumer-patterns.md)  
 Viene descritto come implementare il modello producer-consumer nell'applicazione.  
  
 [Procedura: Fornire funzioni lavoro alle classi call e transformer](../../parallel/concrt/how-to-provide-work-functions-to-the-call-and-transformer-classes.md)  
 Vengono illustrati vari modi per fornire funzioni lavoro al [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) e [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classi.  
  
 [Procedura: Usare la classe transformer in una pipeline di dati](../../parallel/concrt/how-to-use-transformer-in-a-data-pipeline.md)  
 Viene illustrato come utilizzare il [Concurrency:: transformer](../../parallel/concrt/reference/transformer-class.md) classe in una pipeline di dati.  
  
 [Procedura: Effettuare una scelta tra le attività completate](../../parallel/concrt/how-to-select-among-completed-tasks.md)  
 Viene illustrato come utilizzare il [Concurrency:: Choice](../../parallel/concrt/reference/choice-class.md) e [Concurrency:: join](../../parallel/concrt/reference/join-class.md) classi per selezionare la prima attività da completare un algoritmo di ricerca.  
  
 [Procedura: Inviare un messaggio a intervalli regolari](../../parallel/concrt/how-to-send-a-message-at-a-regular-interval.md)  
 Viene illustrato come utilizzare il [Concurrency:: timer](../../parallel/concrt/reference/timer-class.md) classe per inviare un messaggio a intervalli regolari.  
  
 [Procedura: Usare il filtro di blocco dei messaggi](../../parallel/concrt/how-to-use-a-message-block-filter.md)  
 Di seguito viene illustrato come utilizzare un filtro per consentire a un blocco di messaggi asincroni accettare o rifiutare i messaggi.  
  
 [PPL (Parallel Patterns Library)](../../parallel/concrt/parallel-patterns-library-ppl.md)  
 Viene descritto come usare vari modelli paralleli, ad esempio gli algoritmi paralleli, nelle applicazioni.  
  
 [Runtime di concorrenza](../../parallel/concrt/concurrency-runtime.md)  
 Descrive il runtime di concorrenza che semplifica la programmazione parallela e contiene i collegamenti ad argomenti correlati.

