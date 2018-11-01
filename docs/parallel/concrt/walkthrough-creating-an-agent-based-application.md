---
title: "Procedura dettagliata: Creazione di un'applicazione basata sugli agenti"
ms.date: 11/04/2016
helpviewer_keywords:
- asynchronous agents, creating
- agent class, example
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
ms.openlocfilehash: 1d5e7ed085481b714423760cebf2984084626645
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50509344"
---
# <a name="walkthrough-creating-an-agent-based-application"></a>Procedura dettagliata: Creazione di un'applicazione basata sugli agenti

In questo argomento viene descritto come creare un'applicazione basata su agente base. In questa procedura dettagliata, è possibile creare un agente che legge dati da un file di testo in modo asincrono. L'applicazione usa l'algoritmo di checksum Adler-32 per il calcolo del checksum del contenuto del file.

## <a name="prerequisites"></a>Prerequisiti

È necessario conoscere gli argomenti seguenti per completare questa procedura dettagliata:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)

##  <a name="top"></a> Sezioni

Questa procedura dettagliata viene illustrato come eseguire le attività seguenti:

- [Creazione dell'applicazione console](#createapplication)

- [Creazione della classe file_reader](#createagentclass)

- [Utilizzo della classe file_reader nell'applicazione](#useagentclass)

##  <a name="createapplication"></a> Creazione dell'applicazione Console

In questa sezione viene illustrato come creare un'applicazione console Visual C++ che fa riferimento ai file di intestazione che verrà utilizzato il programma.

#### <a name="to-create-a-visual-c-application-by-using-the-win32-console-application-wizard"></a>Per creare un'applicazione Visual C++ con la creazione guidata applicazione Console Win32

1. Nel **File** menu, fare clic su **New**e quindi fare clic su **progetto** per visualizzare il **nuovo progetto** nella finestra di dialogo.

1. Nel **nuovo progetto** finestra di dialogo, seleziona il **Visual C++** nodo il **tipi di progetto** riquadro, quindi selezionare **applicazione Console Win32** nel **modelli** riquadro. Digitare un nome per il progetto, ad esempio, `BasicAgent`, quindi fare clic su **OK** per visualizzare il **Creazione guidata applicazione Console Win32**.

1. Nel **Creazione guidata applicazione Console Win32** finestra di dialogo, fare clic su **fine**.

1. In stdafx. h, aggiungere il codice seguente.

[!code-cpp[concrt-basic-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_1.h)]

   Il file di intestazione Agents. h contiene le funzionalità dei [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) classe.

1. Verificare che l'applicazione è stata creata correttamente per la creazione e la sua esecuzione. Per compilare l'applicazione, scegliere il **compilare** menu, fare clic su **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione facendo clic **Avvia debug** nel **Debug** menu.

[[Torna all'inizio](#top)]

##  <a name="createagentclass"></a> Creazione della classe file_reader

In questa sezione viene illustrato come creare il `file_reader` classe. Il runtime consente di pianificare ogni agente per eseguire le operazioni in un contesto specifico. Pertanto, è possibile creare un agente che esegue il lavoro in modo sincrono, ma che interagisce con altri componenti in modo asincrono. Il `file_reader` classe legge i dati da un file di input specificato e invia i dati da tale file a un componente di destinazione specificato.

#### <a name="to-create-the-filereader-class"></a>Per creare la classe file_reader

1. Aggiungere un nuovo file di intestazione C++ nel progetto. A tale scopo, fare doppio clic sui **file di intestazione** nodo **Esplora soluzioni**, fare clic su **Add**e quindi fare clic su **nuovo elemento**. Nel **modelli** riquadro, selezionare **File di intestazione (h)**. Nel **Aggiungi nuovo elemento** finestra di dialogo, digitare `file_reader.h` nel **Name** casella e quindi fare clic su **Aggiungi**.

1. In file_reader, aggiungere il codice seguente.

[!code-cpp[concrt-basic-agent#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_2.h)]

1. In file_reader, creare una classe denominata `file_reader` che deriva da `agent`.

[!code-cpp[concrt-basic-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_3.h)]

1. Aggiungere i membri dati seguenti per il `private` sezione della classe.

[!code-cpp[concrt-basic-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_4.h)]

   Il `_file_name` membro è il nome del file da cui legge l'agente. Il `_target` membro è un [ITarget](../../parallel/concrt/reference/itarget-class.md) che l'agente scrive il contenuto del file dell'oggetto. Il `_error` membro contiene eventuali errori che si verifica durante il ciclo di vita dell'agente.

1. Aggiungere il codice seguente per il `file_reader` costruttori per il `public` sezione il `file_reader` classe.

[!code-cpp[concrt-basic-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_5.h)]

   Ogni overload del costruttore imposta la `file_reader` membri dati. L'overload del secondo e terzo costruttore consente l'applicazione per usare un'utilità di pianificazione specifiche con l'agente. Il primo overload viene utilizzato l'utilità di pianificazione predefinita con l'agente.

1. Aggiungere il `get_error` metodo nella sezione pubblica del `file_reader` classe.

[!code-cpp[concrt-basic-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_6.h)]

   Il `get_error` metodo recupera gli errori che si verifica durante il ciclo di vita dell'agente.

1. Implementare il [concurrency::agent::run](reference/agent-class.md#run) metodo nella `protected` sezione della classe.

[!code-cpp[concrt-basic-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_7.h)]

Il `run` metodo apre il file e legge i dati da esso. Il `run` metodo utilizza la gestione delle eccezioni per acquisire gli errori che si verificano durante l'elaborazione dei file.

   Ogni volta che questo metodo legge i dati dal file, chiama il [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) funzione per inviare dati al buffer di destinazione. Invia una stringa vuota al buffer di destinazione per indicare la fine dell'elaborazione.

Nell'esempio seguente viene illustrato il contenuto completo della file_reader.

[!code-cpp[concrt-basic-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_8.h)]

[[Torna all'inizio](#top)]

##  <a name="useagentclass"></a> Utilizzo della classe file_reader nell'applicazione

In questa sezione viene illustrato come utilizzare il `file_reader` classe per leggere il contenuto di un file di testo. Viene inoltre illustrato come creare un [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) oggetto che riceve i dati del file e calcola il relativo checksum Adler-32.

#### <a name="to-use-the-filereader-class-in-your-application"></a>Usare la classe file_reader nell'applicazione

1. Aggiungere il codice seguente in BasicAgent., `#include` istruzione.

[!code-cpp[concrt-basic-agent#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_9.cpp)]

1. Aggiungere il codice seguente in BasicAgent., `using` direttive.

[!code-cpp[concrt-basic-agent#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_10.cpp)]

1. Nel `_tmain` funzionamento, creare un [Concurrency:: event](../../parallel/concrt/reference/event-class.md) oggetti che segnala la fine dell'elaborazione.

[!code-cpp[concrt-basic-agent#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_11.cpp)]

1. Creare un `call` oggetto che aggiorna il valore di checksum, alla ricezione dei dati.

[!code-cpp[concrt-basic-agent#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_12.cpp)]

   Ciò `call` oggetto imposta inoltre il `event` quando riceve una stringa vuota per segnalare la fine dell'elaborazione dell'oggetto.

1. Creare un `file_reader` oggetto che legge il file test. txt e scrive il contenuto del file per il `call` oggetto.

[!code-cpp[concrt-basic-agent#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_13.cpp)]

1. Avviare l'agente e attendere il completamento.

[!code-cpp[concrt-basic-agent#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_14.cpp)]

1. Attendere il `call` oggetto per ricevere tutti i dati e di fine.

[!code-cpp[concrt-basic-agent#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_15.cpp)]

1. Controllare il lettore di file per gli errori. Se si è verificato alcun errore, calcolare la somma di Adler-32 finale e stampare la somma nella console.

[!code-cpp[concrt-basic-agent#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_16.cpp)]

Nell'esempio seguente viene illustrato il file BasicAgent completo.

[!code-cpp[concrt-basic-agent#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_17.cpp)]

[[Torna all'inizio](#top)]

## <a name="sample-input"></a>Esempio di Input

Si tratta del contenuto di esempio di Text il file di input. txt:

```Output
The quick brown fox
jumps
over the lazy dog
```

## <a name="sample-output"></a>Esempio di output

Se usato con l'input di esempio, questo programma produce l'output seguente:

```Output
Adler-32 sum is fefb0d75
```

## <a name="robust-programming"></a>Programmazione efficiente

Per impedire l'accesso simultaneo ai membri dati, è consigliabile aggiungere i metodi che eseguono operazioni per la `protected` o `private` sezione della classe. Aggiungere solo i metodi che inviano o ricevono messaggi da e verso l'agente per il `public` sezione della classe.

Chiamare sempre il [Concurrency:: agent::](reference/agent-class.md#done) metodo per spostare l'agente allo stato completato. Chiamare questo metodo in genere prima della restituzione dal `run` (metodo).

## <a name="next-steps"></a>Passaggi successivi

Per un altro esempio di un'applicazione basata su agenti, vedere [procedura dettagliata: uso della classe join per impedire un Deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md).

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)<br/>
[Procedura dettagliata: uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)

