---
title: 'Procedura dettagliata: Distribuzione di un programma (C++)'
ms.date: 05/14/2019
helpviewer_keywords:
- deploying applications [C++], walkthroughs
- setup projects [C++]
- program deployments [C++]
- projects [C++], setup
- projects [C++], deploying programs
- application deployment [C++], walkthroughs
ms.assetid: 79e6cc4e-dced-419d-aaf7-d62d1367603f
ms.openlocfilehash: 6c5d98687d6b5a49fb7b4b90aecf345a739c34a3
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92924674"
---
# <a name="walkthrough-deploying-your-program-c"></a>Procedura dettagliata: Distribuzione di un programma (C++)

Dopo aver creato l'applicazione completando le procedure dettagliate correlate precedenti, l'ultimo passaggio consiste nel creare un programma di installazione in modo che altri utenti possano installare il programma nei rispettivi computer. Per il programma di installazione, si aggiungerà un nuovo progetto alla soluzione esistente. L'output del nuovo progetto è un file setup.exe che installerà l'applicazione in un altro computer.

La procedura dettagliata mostra come usare Windows Installer per distribuire l'applicazione. Ai fini della distribuzione, è possibile anche utilizzare ClickOnce. Per altre informazioni, vedere [ClickOnce Deployment for Visual C++ Applications](../windows/clickonce-deployment-for-visual-cpp-applications.md). Per altre informazioni sulla distribuzione in generale, vedere [Distribuzione di applicazioni, servizi e componenti](/visualstudio/deployment/deploying-applications-services-and-components).

## <a name="prerequisites"></a>Prerequisites

- Nella procedura dettagliata si presuppone la conoscenza delle nozioni di base del linguaggio C++.

- Si presuppone anche che l'utente abbia completato le procedure dettagliate correlate elencate in precedenza in [Utilizzo dell'ambiente di sviluppo di Visual Studio per lo sviluppo di applicazioni desktop C++](using-the-visual-studio-ide-for-cpp-desktop-development.md).

- La procedura dettagliata non può essere completata nelle versioni Express Edition di Visual Studio.

## <a name="install-the-visual-studio-setup-and-deployment-project-template"></a>Installare il modello di progetto di installazione e distribuzione di Visual Studio

I passaggi descritti in questa sezione variano a seconda della versione di Visual Studio installata. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo selettore della **versione** . Si trova nella parte superiore del sommario in questa pagina.

<!-- markdownlint-disable MD034 -->

::: moniker range="msvc-160"

### <a name="to-install-the-setup-and-deployment-project-template-for-visual-studio-2019"></a>Per installare il modello di progetto di installazione e distribuzione per Visual Studio 2019

1. Se non è già stato fatto, scaricare l'estensione per i progetti del programma di installazione Microsoft Visual Studio. L'estensione è gratuita per gli sviluppatori di Visual Studio e aggiunge le funzionalità presenti nei modelli di progetto di installazione e distribuzione in Visual Studio. Quando si è connessi a Internet, in Visual Studio scegliere **estensioni**  >  **Gestisci estensioni** . Nella finestra di dialogo **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **invio** , selezionare **Microsoft Visual Studio \<version> progetti del programma di installazione** e fare clic su **download** . Scegliere di eseguire e installare l'estensione e quindi riavviare Visual Studio.

1. Sulla barra dei menu di Visuali Studio scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere di riaprire il progetto.

1. Sulla barra dei menu scegliere **file**  >  **nuovo**  >  **progetto** per aprire la finestra di dialogo **Crea un nuovo progetto** . Nella casella di ricerca digitare "installazione" e nell'elenco dei risultati scegliere **Progetto di installazione** .

1. Immettere un nome per il progetto di installazione nella casella **Nome** . Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione** . Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene aperta una scheda **File Assistant (ProjectName)** (Assistente file - NomeProgetto).

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Output progetto** per aprire la finestra di dialogo **Aggiungi gruppo output progetto** .

1. Nella finestra di dialogo selezionare **Output primario** e fare clic su **OK** . Viene visualizzato un nuovo elemento denominato **Output primario da Game (attivo)** .

1. Selezionare l'elemento **Output primario da Game (attivo)** , fare clic con il pulsante destro del mouse e scegliere **Crea collegamento a output primario da Game (attivo)** . Viene visualizzato un nuovo elemento denominato **Collegamento a output primario da Game (attivo)** .

1. Rinominare l'elemento del collegamento in *Game* e quindi trascinarlo nel nodo **Menu Programmi dell'utente** sul lato sinistro della finestra.

1. In **Esplora soluzioni** selezionare il progetto **Game Installer** e scegliere **Visualizza** > **Finestra Proprietà** o premere **F4** per aprire la finestra **Proprietà** .

1. Specificare eventuali dettagli aggiuntivi da visualizzare nel programma di installazione.  Utilizzare, ad esempio, *Contoso* per **produttore** , programma di *installazione del gioco* per **nome prodotto** e *https \: //www.contoso.com* per **SupportUrl** .

1. Nella barra dei menu scegliere **Compila**  >  **Configuration Manager** . Nella tabella **Progetto** , nella colonna **Compilazione** selezionare la casella per **Game Installer** . Fare clic su **Chiudi** .

1. Sulla barra dei menu scegliere **Compila** > **Compila soluzione** per compilare il progetto Game e il progetto Game Installer.

1. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto Game Installer ed eseguirlo per installare l'applicazione del gioco nel computer. È possibile copiare questo file, insieme a GameInstaller.msi, per installare l'applicazione e i file di libreria necessari in un altro computer.

::: moniker-end

::: moniker range="<=msvc-150"

### <a name="to-install-the-setup-and-deployment-project-template-for-visual-studio-2017-and-earlier"></a>Per installare il modello di progetto di installazione e distribuzione per Visual Studio 2017 e versioni precedenti

1. Connettersi a Internet e quindi in Visual Studio scegliere **Strumenti** > **Estensioni e aggiornamenti** .

1. In **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **invio** , selezionare **Microsoft Visual Studio \<version> progetti del programma di installazione** e fare clic su **download** .

1. Scegliere di installare l'estensione e quindi riavviare Visual Studio.

1. Sulla barra dei menu scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere la soluzione **Game** per riaprirla.

### <a name="to-create-a-setup-project-and-install-your-program"></a>Per creare un progetto di installazione e installare il programma

1. Modificare la configurazione attiva della soluzione in Rilascio. Nella barra dei menu scegliere **Compila**  >  **Configuration Manager** . Nella finestra di dialogo **Gestione configurazione** nell'elenco a discesa **Configurazione soluzione attiva** selezionare **Rilascio** . Scegliere il pulsante **Chiudi** per salvare la configurazione.

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Nuovo progetto** .

1. Nel riquadro sinistro della finestra di dialogo espandere i **Installed**  >  nodi **altri tipi di progetto** installati, quindi selezionare **programma di installazione di Visual Studio** . Nel riquadro centrale selezionare **Progetto di installazione** .

1. Immettere un nome per il progetto di installazione nella casella **Nome** . Per questo esempio digitare *Game Installer* . Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione** . Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene visualizzata la scheda **File Assistant (Game Installer)** (Assistente file - Game Installer).

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Output progetto** per aprire la finestra di dialogo **Aggiungi gruppo output progetto** .

1. Nella finestra di dialogo selezionare **Output primario** e fare clic su **OK** . Viene visualizzato un nuovo elemento denominato **Output primario da Game (attivo)** .

1. Selezionare l'elemento **Output primario da Game (attivo)** , fare clic con il pulsante destro del mouse e scegliere **Crea collegamento a output primario da Game (attivo)** . Viene visualizzato un nuovo elemento denominato **Collegamento a output primario da Game (attivo)** .

1. Rinominare l'elemento del collegamento in *Game* e quindi trascinarlo nel nodo **Menu Programmi dell'utente** sul lato sinistro della finestra.

1. In **Esplora soluzioni** selezionare il progetto **Game Installer** e scegliere **Visualizza** > **Finestra Proprietà** o premere **F4** per aprire la finestra **Proprietà** .

1. Specificare eventuali dettagli aggiuntivi da visualizzare nel programma di installazione.  Utilizzare, ad esempio, *Contoso* per **produttore** , programma di *installazione del gioco* per **nome prodotto** e *https \: //www.contoso.com* per **SupportUrl** .

1. Nella barra dei menu scegliere **Compila**  >  **Configuration Manager** . Nella tabella **Progetto** , nella colonna **Compilazione** selezionare la casella per **Game Installer** . Fare clic su **Chiudi** .

1. Sulla barra dei menu scegliere **Compila** > **Compila soluzione** per compilare il progetto Game e il progetto Game Installer.

1. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto Game Installer ed eseguirlo per installare l'applicazione del gioco nel computer. È possibile copiare questo file, insieme a GameInstaller.msi, per installare l'applicazione e i file di libreria necessari in un altro computer.

::: moniker-end

## <a name="next-steps"></a>Passaggi successivi

**Precedente:** [Procedura dettagliata: Debug di un progetto (C++)](walkthrough-debugging-a-project-cpp.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti per il linguaggio C++](../cpp/cpp-language-reference.md)<br/>
[Progetti e sistemi di compilazione](../build/projects-and-build-systems-cpp.md)<br/>
[Distribuzione di applicazioni desktop](../windows/deploying-native-desktop-applications-visual-cpp.md)<br/>
