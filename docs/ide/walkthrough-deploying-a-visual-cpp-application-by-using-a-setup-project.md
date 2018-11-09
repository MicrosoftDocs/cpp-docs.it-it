---
title: Distribuire un'applicazione Visual C++ tramite un progetto di installazione
ms.date: 09/17/2018
helpviewer_keywords:
- deployment for Visual C++
ms.assetid: 66735cda-8fe3-4211-a19a-2cf717a12a3f
ms.openlocfilehash: 3dc607ea082e31ba73f34ce1ca8acd3ebc78292a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50565594"
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-a-setup-project"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite un progetto di installazione

Descrive come usare un progetto di installazione per distribuire un'applicazione Visual C++.

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, è necessario disporre dei componenti seguenti:

- Un computer con Visual Studio installato.

- Un altro computer che non dispone delle librerie Visual C++.

### <a name="to-deploy-an-application-by-using-a-setup-project"></a>Per distribuire un'applicazione tramite un progetto di installazione

1. Creare un nuovo progetto. Scegliere **Nuovo** dal menu **File**, quindi fare clic su **Progetto**.

1. Usare **Creazione guidata applicazione MFC** per creare una nuova soluzione di Visual Studio. Per trovare la procedura guidata, nella finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C++**, selezionare **MFC**, selezionare **Applicazione MFC**, immettere un nome per il progetto e fare clic su **OK**. Scegliere **Fine**.

   > [!NOTE]
   > Se il tipo **Applicazione MFC** non è presente:<br/>
   > **Visual Studio 2017**: selezionare **Apri il programma di installazione di Visual Studio** nel riquadro a sinistra della finestra di dialogo **Nuovo progetto**. Installare l'opzione che si trova in **Sviluppo di applicazioni desktop con C++**, nella sezione dei componenti **Facoltativi**, denominata **MFC Visual C++ per x86 e x64**.<br/>
   > **Visual Studio 2015**: fare clic sul pulsante Start di Windows e digitare **Installazione applicazioni**. Aprire il programma dall'elenco risultati e quindi individuare l'installazione di Microsoft Visual Studio 2015 nell'elenco dei programmi installati. Fare doppio clic, quindi scegliere **Modifica** e selezionare il componente **Microsoft Foundation Classes** in **Visual C++**.

1. Modificare la configurazione attiva della soluzione impostandola su **Rilascio**. Nel menu **Compila** selezionare **Gestione configurazione**. Nella finestra di dialogo **Gestione configurazione** selezionare **Rilascio** nell'elenco a discesa **Configurazione soluzione attiva**. Fare clic su **Chiudi**.

1. Premere **CTRL**+**MAIUSC**+**B** per compilare l'applicazione. Oppure nel menu **Compila** scegliere **Compila soluzione**. La compilazione dell'applicazione consente al progetto di installazione di usare l'output di questo progetto di applicazione MFC.

1. Se non è ancora stato fatto, scaricare l'estensione Microsoft Visual Studio Installer Projects. L'estensione è gratuita per gli sviluppatori di Visual Studio e aggiunge le funzionalità presenti nei modelli di progetto di installazione e distribuzione in Visual Studio. Quando si è connessi a Internet, in Visual Studio scegliere **Strumenti** > **Estensioni e aggiornamenti**. Nella finestra di dialogo **Estensioni e aggiornamenti** selezionare la scheda **Online** e digitare *Microsoft Visual Studio Installer Projects* nella casella di ricerca. Premere **INVIO**, selezionare **Microsoft Visual Studio \<versione> Installer Projects** e fare clic su **Scarica**. Scegliere di eseguire e installare l'estensione e quindi riavviare Visual Studio.

1. Sulla barra dei menu scegliere **File** > **Progetti e soluzioni recenti** e quindi scegliere di riaprire il progetto.

1. Sulla barra dei menu scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Nuovo progetto**. Quindi nel riquadro a sinistra della finestra di dialogo espandere i nodi **Installato** > **Altri tipi di progetto** e selezionare **Programma di installazione di Visual Studio**. Nel riquadro centrale selezionare **Progetto di installazione**.

1. Immettere un nome per il progetto di installazione nella casella **Nome**. Nell'elenco a discesa **Soluzione** selezionare **Aggiungi a soluzione**. Scegliere il pulsante **OK** per creare il progetto di installazione. Nella finestra dell'editor viene aperta una scheda **File Assistant (ProjectName)** (Assistente file - NomeProgetto).

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Output progetto** per aprire la finestra di dialogo **Aggiungi gruppo output progetto**. Nella finestra di dialogo selezionare **Output primario** e fare clic su **OK**. Viene visualizzato un nuovo elemento denominato **Output primario da NomeProgetto (attivo)**.

1. Fare clic con il pulsante destro del mouse sul nodo **Cartella applicazione** e selezionare **Aggiungi** > **Assembly** per aprire la finestra di dialogo **Seleziona componente**. Selezionare e aggiungere eventuali DLL richieste dal programma, come descritto nell'articolo [Determinazione delle DLL da ridistribuire](determining-which-dlls-to-redistribute.md).

1. Selezionare l'elemento **Output primario da NomeProgetto (attivo)**, fare clic con il pulsante destro del mouse e scegliere **Crea collegamento a output primario da NomeProgetto (attivo)**. Viene visualizzato un nuovo elemento denominato **Collegamento a output primario da NomeProgetto (attivo)**. È possibile rinominare l'elemento del collegamento e quindi trascinarlo nel nodo **Menu Programmi dell'utente** sul lato sinistro della finestra.

1. Nella barra dei menu scegliere **Compilazione** > **Gestione configurazione**. Nella tabella **Progetto**, nella colonna **Compilazione** selezionare la casella per il progetto di distribuzione. Fare clic su **Chiudi**.

1. Sulla barra dei menu scegliere **Compila** > **Compila soluzione** per compilare il progetto MFC e il progetto di distribuzione.

1. Nella cartella della soluzione individuare il programma setup.exe compilato dal progetto di distribuzione. È possibile copiare questo file, insieme al file con estensione msi, per installare l'applicazione e i file di libreria necessari in un altro computer. Eseguire il programma di installazione in un secondo computer che non dispone delle librerie Visual C++.

## <a name="see-also"></a>Vedere anche

[Esempi di distribuzione](deployment-examples.md)<br/>
