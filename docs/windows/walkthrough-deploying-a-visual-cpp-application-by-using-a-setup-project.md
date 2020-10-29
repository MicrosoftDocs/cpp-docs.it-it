---
title: Distribuire un'applicazione Visual C++ tramite un progetto di installazione
ms.date: 04/25/2019
helpviewer_keywords:
- deployment for Visual C++
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
ms.openlocfilehash: 4ded30695647b3e9377bc35227283f367816edfa
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92918851"
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-a-setup-project"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite un progetto di installazione

Descrive come usare un progetto di installazione per distribuire un'applicazione Visual C++.

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario disporre dei componenti seguenti:

- Un computer con Visual Studio installato.

- Un altro computer che non dispone delle librerie Visual C++.

## <a name="create-the-setup-project"></a>Creare il progetto di installazione

Le istruzioni per la creazione di un progetto di installazione variano a seconda della versione di Visual Studio installata. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="=msvc-160"

### <a name="to-create-the-project-in-visual-studio-2019"></a>Per creare il progetto in Visual Studio 2019

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto** .

   ![Progetto di app MFC](media/vs2019-mfc-app-new-project.png "Nuova app MFC")

1. Nella parte superiore della finestra di dialogo digitare `MFC` nella casella di ricerca e quindi scegliere **app MFC** dall'elenco risultati. Se non viene visualizzato, sarà necessario avviare il programma Programma di installazione di Visual Studio dal menu Start di Windows e fare clic sul riquadro del carico di **lavoro sviluppo di applicazioni desktop C++** . In **singoli componenti** , verificare che il componente MFC sia selezionato.

1. Nella pagina successiva immettere un nome per il progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto client. Quando viene visualizzata la **creazione guidata applicazione MFC** , accettare tutte le impostazioni predefinite.

1. Modificare la configurazione della soluzione attiva in **Release** . Nel menu **Compila** selezionare **Gestione configurazione** . Nella finestra di dialogo **Gestione configurazione** selezionare **Rilascio** nell'elenco a discesa **Configurazione soluzione attiva** . Fare clic su **Chiudi** .

1. Premere **CTRL** + **MAIUSC** + **B** per compilare l'applicazione. Oppure nel menu **Compila** scegliere **Compila soluzione** . La compilazione dell'applicazione consente al progetto di installazione di usare l'output di questo progetto di applicazione MFC.

1. Se non è già stato fatto, scaricare l'estensione per i progetti del programma di installazione Microsoft Visual Studio. L'estensione è gratuita per gli sviluppatori di Visual Studio e aggiunge le funzionalità presenti nei modelli di progetto di installazione e distribuzione in Visual Studio. Quando si è connessi a Internet, in Visual Studio scegliere **estensioni**  >  **Gestisci estensioni** . Nella finestra di dialogo **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **invio** , selezionare **Microsoft Visual Studio \<version> progetti di installazione** e fare clic su **download** . Scegliere di eseguire e installare l'estensione e quindi riavviare Visual Studio.

   ![Progetto di installazione di Visual Studio](media/vs2019-extension-dialog-installer-project.png "Assegnare un nome al progetto client")

1. Sulla barra dei menu di Visuali Studio scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere di riaprire il progetto.

1. Sulla barra dei menu scegliere **file**  >  **nuovo**  >  **progetto** per aprire la finestra di dialogo **Crea un nuovo progetto** . Nella casella di ricerca digitare "installazione" e nell'elenco dei risultati scegliere **Progetto di installazione** .

1. Immettere un nome per il progetto di installazione nella casella **Nome** . Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione** . Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene aperta una scheda **File Assistant (ProjectName)** (Assistente file - NomeProgetto).

::: moniker-end

::: moniker range="=msvc-150"

### <a name="to-create-the-project-in-visual-studio-2017"></a>Per creare il progetto in Visual Studio 2017

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File** e quindi fare clic su **Progetto** .

1. Utilizzare la **creazione guidata applicazione MFC** per creare una nuova soluzione di Visual Studio. Per trovare la procedura guidata, nella finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C++** , selezionare **MFC** , selezionare **Applicazione MFC** , immettere un nome per il progetto e fare clic su **OK** . Fare clic su **Fine** .

   > [!NOTE]
   > Se il tipo di **applicazione MFC** è mancante, selezionare **Apri programma di installazione di Visual Studio** nel riquadro sinistro della finestra di dialogo **nuovo progetto** . Installare l'opzione che si trova in **Sviluppo di applicazioni desktop con C++** , nella sezione dei componenti **Facoltativi** , denominata **MFC Visual C++ per x86 e x64** .

1. Modificare la configurazione della soluzione attiva in **Release** . Nel menu **Compila** selezionare **Gestione configurazione** . Nella finestra di dialogo **Gestione configurazione** selezionare **Rilascio** nell'elenco a discesa **Configurazione soluzione attiva** . Fare clic su **Chiudi** .

1. Premere **CTRL** + **MAIUSC** + **B** per compilare l'applicazione. Oppure nel menu **Compila** scegliere **Compila soluzione** . La compilazione dell'applicazione consente al progetto di installazione di usare l'output di questo progetto di applicazione MFC.

1. Se non è già stato fatto, scaricare l'estensione per i progetti del programma di installazione Microsoft Visual Studio. L'estensione è gratuita per gli sviluppatori di Visual Studio e aggiunge le funzionalità presenti nei modelli di progetto di installazione e distribuzione in Visual Studio. Quando si è connessi a Internet, in Visual Studio scegliere **strumenti**  >  **estensioni e aggiornamenti** . Nella finestra di dialogo **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **invio** , selezionare **Microsoft Visual Studio \<version> progetti di installazione** e fare clic su **download** . Scegliere di eseguire e installare l'estensione e quindi riavviare Visual Studio.

1. Sulla barra dei menu scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere di riaprire il progetto.

1. Sulla barra dei menu scegliere **file**  >  **nuovo**  >  **progetto** per aprire la finestra di dialogo **nuovo progetto** . Quindi, nel riquadro sinistro della finestra di dialogo espandere i nodi **Installed**  >  **altri tipi di progetto** installati e selezionare **programma di installazione di Visual Studio** . Nel riquadro centrale selezionare **Progetto di installazione** .

1. Immettere un nome per il progetto di installazione nella casella **Nome** . Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione** . Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene aperta una scheda **File Assistant (ProjectName)** (Assistente file - NomeProgetto).

::: moniker-end

::: moniker range="=msvc-140"

### <a name="to-create-the-project-in-visual-studio-2015"></a>Per creare il progetto in Visual Studio 2015

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File** e quindi fare clic su **Progetto** .

1. Utilizzare la **creazione guidata applicazione MFC** per creare una nuova soluzione di Visual Studio. Per trovare la procedura guidata, nella finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C++** , selezionare **MFC** , selezionare **Applicazione MFC** , immettere un nome per il progetto e fare clic su **OK** . Fare clic su **Fine** .

   > [!NOTE]
   > Se il tipo di **applicazione MFC** non è presente, fare clic sul pulsante Start di Windows e digitare installazione **applicazioni** . Aprire il programma dall'elenco risultati e quindi individuare l'installazione di Microsoft Visual Studio 2015 nell'elenco dei programmi installati. Fare doppio clic, quindi scegliere **Modifica** e selezionare il componente **Microsoft Foundation Classes** in **Visual C++** .

1. Modificare la configurazione della soluzione attiva in **Release** . Scegliere **Configuration Manager** dal menu **Compila** . Nella finestra di dialogo **Gestione configurazione** selezionare **Rilascio** nell'elenco a discesa **Configurazione soluzione attiva** . Fare clic su **Chiudi** .

1. Premere **CTRL** + **MAIUSC** + **B** per compilare l'applicazione. Oppure nel menu **Compila** scegliere **Compila soluzione** . La compilazione dell'applicazione consente al progetto di installazione di usare l'output di questo progetto di applicazione MFC.

1. Se non è già stato fatto, scaricare l'estensione per i progetti del programma di installazione Microsoft Visual Studio. L'estensione è gratuita per gli sviluppatori di Visual Studio e aggiunge le funzionalità presenti nei modelli di progetto di installazione e distribuzione in Visual Studio. Quando si è connessi a Internet, in Visual Studio scegliere **strumenti**  >  **estensioni e aggiornamenti** . Nella finestra di dialogo **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **invio** , selezionare **Microsoft Visual Studio \<version> progetti di installazione** e fare clic su **download** . Scegliere di eseguire e installare l'estensione e quindi riavviare Visual Studio.

1. Sulla barra dei menu scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere di riaprire il progetto.

1. Sulla barra dei menu scegliere **file**  >  **nuovo**  >  **progetto** per aprire la finestra di dialogo **nuovo progetto** . Quindi, nel riquadro sinistro della finestra di dialogo espandere i nodi **Installed**  >  **altri tipi di progetto** installati e selezionare **programma di installazione di Visual Studio** . Nel riquadro centrale selezionare **Progetto di installazione** .

1. Immettere un nome per il progetto di installazione nella casella **Nome** . Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione** . Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene aperta una scheda **File Assistant (ProjectName)** (Assistente file - NomeProgetto).

::: moniker-end

## <a name="add-items-to-the-project"></a>Aggiungere elementi al progetto

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Output progetto** per aprire la finestra di dialogo **Aggiungi gruppo output progetto** . Nella finestra di dialogo selezionare **Output primario** e fare clic su **OK** . Viene visualizzato un nuovo elemento denominato **Output primario da NomeProgetto (attivo)** .

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Assembly** per aprire la finestra di dialogo **Seleziona componente** . Selezionare e aggiungere eventuali DLL richieste dal programma, come descritto nell'articolo [Determinazione delle DLL da ridistribuire](determining-which-dlls-to-redistribute.md).

1. Selezionare l'elemento **Output primario da NomeProgetto (attivo)** , fare clic con il pulsante destro del mouse e scegliere **Crea collegamento a output primario da NomeProgetto (attivo)** . Viene visualizzato un nuovo elemento denominato **Collegamento a output primario da NomeProgetto (attivo)** . È possibile rinominare l'elemento del collegamento e quindi trascinarlo nel nodo **Menu Programmi dell'utente** sul lato sinistro della finestra.

1. Nella barra dei menu scegliere **Compila**  >  **Configuration Manager** . Nella tabella **Progetto** , nella colonna **Compilazione** selezionare la casella per il progetto di distribuzione. Fare clic su **Chiudi** .

1. Sulla barra dei menu scegliere **Compila**  >  **Compila soluzione** per compilare il progetto MFC e il progetto di distribuzione.

1. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto di distribuzione. È possibile copiare questo file, insieme al file con estensione msi, per installare l'applicazione e i file di libreria necessari in un altro computer. Eseguire il programma di installazione in un secondo computer che non dispone delle librerie Visual C++.

## <a name="see-also"></a>Vedere anche

[Esempi di distribuzione](deployment-examples.md)<br/>
