---
title: "Procedura dettagliata: Creazione di un'applicazione basata su agenti"
ms.date: 04/25/2019
helpviewer_keywords:
- asynchronous agents, creating
- agent class, example
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
ms.openlocfilehash: 4a2fabd9ab4f358d40b17e662fb64ab70d01c58e
ms.sourcegitcommit: 9d4ffb8e6e0d70520a1e1a77805785878d445b8a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/20/2019
ms.locfileid: "69631655"
---
# <a name="walkthrough-creating-an-agent-based-application"></a>Procedura dettagliata: Creazione di un'applicazione basata su agenti

In questo argomento viene descritto come creare un'applicazione di base basata su agenti. In questa procedura dettagliata è possibile creare un agente che legge i dati da un file di testo in modo asincrono. L'applicazione usa l'algoritmo di checksum Adler-32 per calcolare il checksum del contenuto di tale file.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario comprendere gli argomenti seguenti:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)

- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)

##  <a name="top"></a> Sezioni

In questa procedura dettagliata viene illustrato come eseguire le attività seguenti:

- [Creazione dell'applicazione console](#createapplication)

- [Creazione della classe file_reader](#createagentclass)

- [Uso della classe file_reader nell'applicazione](#useagentclass)

##  <a name="createapplication"></a>Creazione dell'applicazione console

In questa sezione viene illustrato come creare C++ un'applicazione console che fa riferimento ai file di intestazione che il programma utilizzerà. I passaggi iniziali variano a seconda della versione di Visual Studio in uso. Verificare che il selettore di versione sia impostato correttamente nell'angolo superiore sinistro della pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-c-console-application-in-visual-studio-2019"></a>Per creare un' C++ applicazione console in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++** , impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**. 

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva immettere `BasicAgent` come nome del progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni**, quindi scegliere **Proprietà**. In **Proprietà** > di configurazione**CC++/**  > **intestazioni** precompilate intestazione precompilata scegliere Crea. > 

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-c-console-application-in-visual-studio-2017-and-earlier"></a>Per creare un' C++ applicazione console in Visual Studio 2017 e versioni precedenti

1. Scegliere **nuovo**dal menu **file** , quindi fare clic su **progetto** per visualizzare la finestra di dialogo **nuovo progetto** .

1. Nella finestra di dialogo **nuovo progetto** selezionare il nodo **visivo C++**  nel riquadro **tipi di progetto** e quindi selezionare **applicazione console Win32** nel riquadro **modelli** . Digitare un nome per il progetto, ad esempio `BasicAgent`, e quindi fare clic su **OK** per visualizzare la **creazione guidata applicazione console Win32**.

1. Nella finestra di dialogo **creazione guidata applicazione console Win32** fare clic su **fine**.

::: moniker-end

1. In *PCH. h* (*stdafx. h* in Visual Studio 2017 e versioni precedenti) aggiungere il codice seguente:

[!code-cpp[concrt-basic-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_1.h)]

   Il file di intestazione agents. h contiene la funzionalità della classe [Concurrency:: Agent](../../parallel/concrt/reference/agent-class.md) .

1. Verificare che l'applicazione sia stata creata correttamente mediante la compilazione e l'esecuzione. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguire l'applicazione scegliendo **Avvia debug** dal menu **debug** .

[[Torna all'inizio](#top)]

##  <a name="createagentclass"></a>Creazione della classe file_reader

In questa sezione viene illustrato come creare `file_reader` la classe. Il runtime pianifica ogni agente per eseguire il lavoro nel proprio contesto. Pertanto, è possibile creare un agente che esegue il lavoro in modo sincrono, ma interagisce con altri componenti in modo asincrono. La `file_reader` classe legge i dati da un file di input specificato e invia i dati da tale file a un determinato componente di destinazione.

#### <a name="to-create-the-file_reader-class"></a>Per creare la classe file_reader

1. Aggiungere un nuovo C++ file di intestazione al progetto. A tale scopo, fare clic con il pulsante destro del mouse sul nodo **file di intestazione** in **Esplora soluzioni**, scegliere **Aggiungi**, quindi fare clic su **nuovo elemento**. Nel riquadro **modelli** selezionare file di **intestazione (. h)** . Nella finestra di dialogo **Aggiungi nuovo elemento** Digitare `file_reader.h` nella casella **nome** , quindi fare clic su **Aggiungi**.

1. In file_reader. h aggiungere il codice seguente.

[!code-cpp[concrt-basic-agent#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_2.h)]

1. In file_reader. h creare una classe denominata `file_reader` che deriva da. `agent`

[!code-cpp[concrt-basic-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_3.h)]

1. Aggiungere i membri dati seguenti alla `private` sezione della classe.

[!code-cpp[concrt-basic-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_4.h)]

   Il `_file_name` membro è il nome del file da cui viene letto l'agente. Il `_target` membro è un oggetto [Concurrency:: ITarget](../../parallel/concrt/reference/itarget-class.md) in cui l'agente scrive il contenuto del file. Il `_error` membro include tutti gli errori che si verificano durante il ciclo di vita dell'agente.

1. Aggiungere il codice seguente per i `file_reader` costruttori `public` alla sezione della `file_reader` classe.

[!code-cpp[concrt-basic-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_5.h)]

   Ogni overload del costruttore imposta `file_reader` i membri dati. Il secondo e il terzo overload del costruttore consentono all'applicazione di usare un'utilità di pianificazione specifica con l'agente. Il primo overload usa l'utilità di pianificazione predefinita con l'agente.

1. Aggiungere il `get_error` metodo alla sezione public `file_reader` della classe.

[!code-cpp[concrt-basic-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_6.h)]

   Il `get_error` metodo recupera tutti gli errori che si verificano durante il ciclo di vita dell'agente.

1. Implementare il metodo Concurrency [:: Agent:: Run](reference/agent-class.md#run) nella `protected` sezione della classe.

[!code-cpp[concrt-basic-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_7.h)]

Il `run` metodo apre il file e legge i dati da esso. Il `run` metodo usa la gestione delle eccezioni per acquisire eventuali errori che si verificano durante l'elaborazione dei file.

   Ogni volta che questo metodo legge i dati dal file, chiama la funzione [Concurrency:: asend](reference/concurrency-namespace-functions.md#asend) per inviare i dati al buffer di destinazione. Invia la stringa vuota al buffer di destinazione per indicare la fine dell'elaborazione.

Nell'esempio seguente viene illustrato il contenuto completo di file_reader. h.

[!code-cpp[concrt-basic-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_8.h)]

[[Torna all'inizio](#top)]

##  <a name="useagentclass"></a>Uso della classe file_reader nell'applicazione

In questa sezione viene illustrato come utilizzare `file_reader` la classe per leggere il contenuto di un file di testo. Viene inoltre illustrato come creare un oggetto [Concurrency:: Call](../../parallel/concrt/reference/call-class.md) che riceve i dati del file e calcola il checksum Adler-32.

#### <a name="to-use-the-file_reader-class-in-your-application"></a>Per usare la classe file_reader nell'applicazione

1. In BasicAgent. cpp aggiungere l'istruzione seguente `#include` .

[!code-cpp[concrt-basic-agent#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_9.cpp)]

1. In BasicAgent. cpp aggiungere le direttive `using` seguenti.

[!code-cpp[concrt-basic-agent#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_10.cpp)]

1. Nella funzione creare un oggetto [Concurrency:: Event](../../parallel/concrt/reference/event-class.md) che segnali la fine dell'elaborazione. `_tmain`

[!code-cpp[concrt-basic-agent#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_11.cpp)]

1. Creare un `call` oggetto che aggiorni il checksum quando riceve i dati.

[!code-cpp[concrt-basic-agent#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_12.cpp)]

   Questo `call` oggetto imposta inoltre l' `event` oggetto quando riceve la stringa vuota per segnalare la fine dell'elaborazione.

1. Creare un `file_reader` oggetto che legge dal file test. txt e scrive il contenuto del file `call` nell'oggetto.

[!code-cpp[concrt-basic-agent#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_13.cpp)]

1. Avviare l'agente e attenderne il completamento.

[!code-cpp[concrt-basic-agent#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_14.cpp)]

1. Attendere che l' `call` oggetto riceva tutti i dati e completi.

[!code-cpp[concrt-basic-agent#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_15.cpp)]

1. Verificare la presenza di errori nel lettore di file. Se non si è verificato alcun errore, calcolare la somma finale di Adler-32 e stampare la somma nella console.

[!code-cpp[concrt-basic-agent#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_16.cpp)]

Nell'esempio seguente viene illustrato il file BasicAgent. cpp completo.

[!code-cpp[concrt-basic-agent#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_17.cpp)]

[[Torna all'inizio](#top)]

## <a name="sample-input"></a>Input di esempio

Questo è il contenuto di esempio del file di input text. txt:

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

Per impedire l'accesso simultaneo ai membri dati, è consigliabile aggiungere metodi che eseguono operazioni alla `protected` sezione o `private` della classe. Aggiungere solo metodi che inviano o ricevono messaggi da o verso l'agente alla `public` sezione della classe.

Chiamare sempre il metodo [Concurrency:: Agent::d un](reference/agent-class.md#done) metodo per spostare l'agente nello stato completato. Questo metodo viene in genere chiamato prima della restituzione `run` dal metodo.

## <a name="next-steps"></a>Fasi successive

Per un altro esempio di un'applicazione basata su agenti, [vedere Procedura dettagliata: Utilizzo di join per impedire](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)il deadlock.

## <a name="see-also"></a>Vedere anche

[Libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggi](../../parallel/concrt/message-passing-functions.md)<br/>
[Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)<br/>
[Procedura dettagliata: Uso di join per evitare il deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)
