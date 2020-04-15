---
title: "Procedura dettagliata: Creazione di un'applicazione basata sugli agenti"
ms.date: 04/25/2019
helpviewer_keywords:
- asynchronous agents, creating
- agent class, example
ms.assetid: 730f42ce-6d58-4753-b948-fd9c9ef2ce6c
ms.openlocfilehash: 20197786e3d3c2d34d29af748c1cc073902cf70d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81377450"
---
# <a name="walkthrough-creating-an-agent-based-application"></a>Procedura dettagliata: Creazione di un'applicazione basata sugli agenti

In questo argomento viene descritto come creare un'applicazione basata su agente di base. In questa procedura dettagliata, è possibile creare un agente che legge i dati da un file di testo in modo asincrono. L'applicazione utilizza l'algoritmo di checksum Adler-32 per calcolare il checksum del contenuto di tale file.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario comprendere gli argomenti seguenti:You must understand the following topics to complete this walkthrough:

- [Agenti asincroni](../../parallel/concrt/asynchronous-agents.md)

- [Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)

- [Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)

- [Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)

## <a name="sections"></a><a name="top"></a>Sezioni

In questa procedura dettagliata viene illustrato come eseguire le attività seguenti:This walkthrough demonstrates how to perform the following tasks:

- [Creazione dell'applicazione console](#createapplication)

- [Creazione della classe file_reader](#createagentclass)

- [Utilizzo della classe file_reader nell'applicazioneUsing the file_reader Class in the Application](#useagentclass)

## <a name="creating-the-console-application"></a><a name="createapplication"></a>Creazione dell'applicazione console

In questa sezione viene illustrato come creare un'applicazione console di C, che fa riferimento ai file di intestazione che verranno utilizzati dal programma. I passaggi iniziali variano a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-a-c-console-application-in-visual-studio-2019"></a>Per creare un'applicazione console in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella parte superiore della finestra di dialogo impostare **Linguaggio** su **C++ **, impostare **Piattaforma** su **Windows** e impostare **Tipo di progetto** su **Console**.

1. Nell'elenco filtrato dei tipi di progetto scegliere **App console** e quindi scegliere **Avanti**. Nella pagina successiva, `BasicAgent` immettere il nome del progetto e specificare la posizione del progetto, se lo si desidera.

1. Scegliere il pulsante **Crea** per creare il progetto.

1. Fare clic con il pulsante destro del mouse sul nodo del progetto in **Esplora soluzioni**e scegliere **Proprietà**. In **Proprietà di** > configurazione**C/C'** > **Intestazione precompilata** Intestazioni > **precompilate**scegliere **Crea**.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-a-c-console-application-in-visual-studio-2017-and-earlier"></a>Per creare un'applicazione console di C

1. Dal menu **File** , fare clic su **Nuovo**e quindi fare clic su **progetto** per visualizzare la finestra di dialogo **Nuovo progetto** .

1. Nella finestra di dialogo **Nuovo progetto** , selezionare il nodo **Visual C,** nel riquadro Tipi di **progetto,** quindi selezionare **Applicazione console Win32** nel riquadro **Modelli.** Digitare un nome per il `BasicAgent`progetto, ad esempio , e quindi fare clic **su OK** per visualizzare la **Creazione guidata applicazione console Win32**.

1. Nella finestra di dialogo **Creazione guidata applicazione console Win32** fare clic su **Fine**.

::: moniker-end

1. In *pch.h* (*stdafx.h* in Visual Studio 2017 e versioni precedenti), aggiungere il codice seguente:

[!code-cpp[concrt-basic-agent#1](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_1.h)]

   Il file di intestazione agents.h contiene la funzionalità della classe [concurrency::agent.](../../parallel/concrt/reference/agent-class.md)

1. Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal menu **Debug** .

[[In alto](#top)]

## <a name="creating-the-file_reader-class"></a><a name="createagentclass"></a>Creazione della classe file_reader

In questa sezione viene `file_reader` illustrato come creare la classe. Il runtime pianifica ogni agente per eseguire il lavoro nel proprio contesto. Pertanto, è possibile creare un agente che esegue il lavoro in modo sincrono, ma interagisce con altri componenti in modo asincrono. La `file_reader` classe legge i dati da un determinato file di input e invia i dati da tale file a un determinato componente di destinazione.

#### <a name="to-create-the-file_reader-class"></a>Per creare la classe file_reader

1. Aggiungere un nuovo file di intestazione di C, ad esempio, al progetto. A tale scopo, fare clic con il pulsante destro del mouse sul nodo File di **intestazione** in **Esplora soluzioni**, **scegliere Aggiungi**, quindi Nuovo **elemento**. Nel riquadro **Modelli** selezionare File di **intestazione (.h)**. Nella finestra di dialogo `file_reader.h` Aggiungi nuovo **elemento** digitare la casella **Nome** e quindi fare clic su **Aggiungi**.

1. In file_reader.h aggiungere il codice seguente.

[!code-cpp[concrt-basic-agent#17](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_2.h)]

1. In file_reader.h creare una classe `file_reader` denominata `agent`che deriva da .

[!code-cpp[concrt-basic-agent#2](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_3.h)]

1. Aggiungere i seguenti membri `private` dati alla sezione della classe.

[!code-cpp[concrt-basic-agent#3](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_4.h)]

   Il `_file_name` membro è il nome file da cui l'agente legge. Il `_target` membro è un oggetto [concurrency::ITarget](../../parallel/concrt/reference/itarget-class.md) in cui l'agente scrive il contenuto del file. Il `_error` membro contiene qualsiasi errore che si verifica durante la vita dell'agente.

1. Aggiungere il codice `file_reader` seguente per `public` i costruttori alla sezione della `file_reader` classe.

[!code-cpp[concrt-basic-agent#4](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_5.h)]

   Ogni overload del `file_reader` costruttore imposta i membri dati. Il secondo e il terzo overload del costruttore consentono all'applicazione di utilizzare un'utilità di pianificazione specifica con l'agente. Il primo overload utilizza l'utilità di pianificazione predefinita con l'agente.

1. Aggiungere `get_error` il metodo alla sezione `file_reader` pubblica della classe.

[!code-cpp[concrt-basic-agent#5](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_6.h)]

   Il `get_error` metodo recupera qualsiasi errore che si verifica durante la durata dell'agente.

1. Implementare il metodo [concurrency::agent::run](reference/agent-class.md#run) nella `protected` sezione della classe.

[!code-cpp[concrt-basic-agent#6](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_7.h)]

Il `run` metodo apre il file e legge i dati da esso. Il `run` metodo utilizza la gestione delle eccezioni per acquisire eventuali errori che si verificano durante l'elaborazione del file.

   Ogni volta che questo metodo legge i dati dal file, chiama la funzione [concurrency::asend](reference/concurrency-namespace-functions.md#asend) per inviare i dati al buffer di destinazione. Invia la stringa vuota al buffer di destinazione per indicare la fine dell'elaborazione.

Nell'esempio seguente viene illustrato il contenuto completo di file_reader.h.

[!code-cpp[concrt-basic-agent#7](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_8.h)]

[[In alto](#top)]

## <a name="using-the-file_reader-class-in-the-application"></a><a name="useagentclass"></a>Utilizzo della classe file_reader nell'applicazioneUsing the file_reader Class in the Application

In questa sezione viene `file_reader` illustrato come utilizzare la classe per leggere il contenuto di un file di testo. Viene inoltre illustrato come creare un oggetto [concurrency::call](../../parallel/concrt/reference/call-class.md) che riceve i dati del file e calcola il checksum Adler-32.

#### <a name="to-use-the-file_reader-class-in-your-application"></a>Per utilizzare la classe file_reader nell'applicazione

1. In BasicAgent.cpp aggiungere `#include` l'istruzione seguente.

[!code-cpp[concrt-basic-agent#8](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_9.cpp)]

1. In BasicAgent.cpp aggiungere `using` le direttive seguenti.

[!code-cpp[concrt-basic-agent#9](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_10.cpp)]

1. Nella `_tmain` funzione creare un oggetto [concurrency::event](../../parallel/concrt/reference/event-class.md) che segnali la fine dell'elaborazione.

[!code-cpp[concrt-basic-agent#10](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_11.cpp)]

1. Creare `call` un oggetto che aggiorna il checksum quando riceve i dati.

[!code-cpp[concrt-basic-agent#11](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_12.cpp)]

   Questo `call` oggetto imposta `event` anche l'oggetto quando riceve la stringa vuota per segnalare la fine dell'elaborazione.

1. Creare `file_reader` un oggetto che legge dal file test.txt e scrive `call` il contenuto di tale file nell'oggetto.

[!code-cpp[concrt-basic-agent#12](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_13.cpp)]

1. Avviare l'agente e attendere che finisca.

[!code-cpp[concrt-basic-agent#13](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_14.cpp)]

1. Attendere che `call` l'oggetto riceva tutti i dati e la finitura.

[!code-cpp[concrt-basic-agent#14](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_15.cpp)]

1. Verificare la presenza di errori nel lettore di file. Se non si è verificato alcun errore, calcolare la somma Adler-32 finale e stampare la somma nella console.

[!code-cpp[concrt-basic-agent#15](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_16.cpp)]

Nell'esempio seguente viene illustrato il file BasicAgent.cpp completo.

[!code-cpp[concrt-basic-agent#16](../../parallel/concrt/codesnippet/cpp/walkthrough-creating-an-agent-based-application_17.cpp)]

[[In alto](#top)]

## <a name="sample-input"></a>Input di esempio

Questo è il contenuto di esempio del file di input text.txt:

```Output
The quick brown fox
jumps
over the lazy dog
```

## <a name="sample-output"></a>Output di esempio

Se utilizzato con l'input di esempio, questo programma produce il seguente output:

```Output
Adler-32 sum is fefb0d75
```

## <a name="robust-programming"></a>Programmazione efficiente

Per impedire l'accesso simultaneo ai membri dati, è `protected` `private` consigliabile aggiungere metodi che eseguono operazioni alla o alla sezione della classe. Aggiungere solo metodi che inviano o ricevono `public` messaggi da o verso l'agente alla sezione della classe.

Chiamare sempre il metodo [concurrency::agent::done](reference/agent-class.md#done) per spostare l'agente nello stato completato. Questo metodo viene in genere `run` chiamato prima di tornare dal metodo .

## <a name="next-steps"></a>Passaggi successivi

Per un altro esempio di applicazione basata su agente, vedere [Procedura dettagliata: utilizzo di join per prevenire](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)il deadlock .

## <a name="see-also"></a>Vedere anche

[libreria di agenti asincroni](../../parallel/concrt/asynchronous-agents-library.md)<br/>
[Blocchi dei messaggi asincroni](../../parallel/concrt/asynchronous-message-blocks.md)<br/>
[Funzioni di passaggio dei messaggiMessage Passing Functions](../../parallel/concrt/message-passing-functions.md)<br/>
[Strutture di dati di sincronizzazione](../../parallel/concrt/synchronization-data-structures.md)<br/>
[Procedura dettagliata: Uso della classe join per impedire un deadlock](../../parallel/concrt/walkthrough-using-join-to-prevent-deadlock.md)
