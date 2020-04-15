---
title: Installare il supporto C++ in Visual Studio
description: Installare il supporto di Visual Studio per Visual C
ms.custom: mvc
ms.date: 04/02/2019
ms.topic: tutorial
ms.devlang: cpp
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: d3018bef9254a8eab557057c035cde84310a2452
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81335362"
---
# <a name="install-c-support-in-visual-studio"></a>Installare il supporto C++ in Visual Studio

Se non hai ancora scaricato e installato Visual Studio e gli strumenti di Visual C, ecco come iniziare.

::: moniker range="vs-2019"

## <a name="visual-studio-2019-installation"></a>Installazione di Visual Studio 2019

Benvenuti in Visual Studio 2019. In questa versione è molto semplice scegliere e installare solo le funzionalità necessarie. Inoltre, grazie alla riduzione del footprint minimo, l'installazione viene eseguita velocemente e con un minore impatto sul sistema.

> [!NOTE]
> Questo argomento si applica all'installazione di Visual Studio in Windows.This topic applies to installation of Visual Studio on Windows. [Visual Studio Code](https://code.visualstudio.com/) è un ambiente di sviluppo leggero e multipiattaforma che viene eseguito su sistemi Windows, Mac e Linux.Visual Studio Code is a lightweight, cross-platform development environment that runs on Windows, Mac, and Linux systems. L'estensione di codice di Microsoft [C/Cè per Visual Studio](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) supporta IntelliSense, debug, formattazione del codice, completamento automatico. Visual Studio per Mac non supporta Microsoft C, ma supporta i linguaggi .NET e lo sviluppo multipiattaforma. Per istruzioni sull'installazione, consultate [Installare Visual Studio per Mac.](/visualstudio/mac/installation/)

Per altre informazioni sulle novità in questa versione, Vedere le [note sulla versione di](/visualstudio/releases/2019/release-notes/)Visual Studio .

Tutto pronto? Sarà illustrata una procedura dettagliata.

### <a name="step-1---make-sure-your-computer-is-ready-for-visual-studio"></a>Passaggio 1: Verificare che il computer sia pronto per Visual Studio

Prima di iniziare l'installazione di Visual Studio:

1. Controllare i [requisiti di sistema](/visualstudio/releases/2019/system-requirements) I requisiti consentono di verificare se il computer supporta Visual Studio 2019.

1. Applicare gli aggiornamenti più recenti di Windows. Tali aggiornamenti consentono di avere la certezza che nel computer siano presenti sia gli aggiornamenti di sicurezza più recenti sia i componenti di sistema necessari per Visual Studio.

1. Riavviare il computer. Il riavvio evita che eventuali installazioni o aggiornamenti in sospeso impediscano l'installazione di Visual Studio.

1. Liberare spazio. Rimuovere le applicazioni e i file non necessari da %SystemDrive% eseguendo, ad esempio, l'app Pulitura disco.

Per domande sull'esecuzione di Visual Studio 2019 side by side con versioni precedenti di Visual Studio, vedere la pagina [Selezione della piattaforma e compatibilità di Visual Studio 2019](/visualstudio/releases/2019/compatibility/).

### <a name="step-2---download-visual-studio"></a>Passaggio 2: Scaricare Visual Studio

Scaricare quindi il file del programma di avvio automatico di Visual Studio. A tale scopo, fare clic sul pulsante seguente, scegliere l'edizione di Visual Studio da scaricare, scegliere **Salva** e quindi scegliere **Apri cartella**.

 > [!div class="button"]
 > [Scaricare Visual Studio](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2019+rc)

### <a name="step-3---install-the-visual-studio-installer"></a>Passaggio 3: Installare il programma di installazione di Visual Studio

Eseguire il file del programma di avvio automatico per installare il programma di installazione di Visual Studio. Questo nuovo programma di installazione semplificato include tutto ciò che occorre per installare e personalizzare Visual Studio.

1. Dalla cartella **Download** fare doppio clic sul file del programma di avvio automatico corrispondente o simile a uno dei file seguenti:

   - **vs_community.exe** per Visual Studio Community
   - **vs_professional.exe** per Visual Studio Professional
   - **vs_enterprise.exe** per Visual Studio Enterprise

   Se viene visualizzata una notifica di Controllo dell'account utente, scegliere **Sì**.

1. Verrà richiesto di confermare le [Condizioni di licenza](https://visualstudio.microsoft.com/license-terms/) e l'[Informativa sulla privacy](https://privacy.microsoft.com/privacystatement) di Microsoft. Scegliere **Continua**.

### <a name="step-4---choose-workloads"></a>Passaggio 4: Scegliere i carichi di lavoro

Dopo aver installato il programma di installazione, è possibile utilizzarlo per personalizzare l'installazione selezionando *i carichi*di lavoro o i set di funzionalità desiderati. Ecco come.

1. Individuare il carico di lavoro che si vuole installare nella schermata d'**installazione di Visual Studio**.

   ![Visual Studio 2019: Installare un carico di lavoro](../get-started/media/vs-installer-workloads.png)

   Per il supporto di base di C, scegliere il carico di lavoro "Sviluppo desktop con C" . Include l'editor principale predefinito che offre supporto di base per la modifica del codice per oltre 20 linguaggi, la possibilità di aprire e modificare il codice da qualsiasi cartella senza che sia necessario un progetto e il controllo del codice sorgente integrato.

   I carichi di lavoro aggiuntivi supportano altri tipi di sviluppo in C. Ad esempio, scegli il carico di lavoro "Sviluppo piattaforma Windows universale" per creare app che usano Windows Runtime per Microsoft Store. Scegli "Sviluppo di giochi con C' per creare giochi che usano DirectX, Unreal e Cocos2d. Scegliere "Sviluppo Linux con C" per indirizzare le piattaforme Linux, incluso lo sviluppo IoT.

   Nel riquadro **dei dettagli dell'installazione** sono elencati i componenti inclusi e facoltativi installati da ogni carico di lavoro. È possibile selezionare o deselezionare i componenti facoltativi in questo elenco. Ad esempio, per supportare lo sviluppo utilizzando i set di strumenti del compilatore di Visual Studio 2017 o 2015, scegliere i componenti facoltativi MSVC v141 o MSVC v140. È possibile aggiungere il supporto per MFC, l'estensione del linguaggio Modules sperimentale, IncrediBuild e altro ancora.

1. Dopo aver scelto i carichi di lavoro e i componenti facoltativi desiderati, scegliere **Installa**.

   A questo punto si apriranno diverse schermate di stato in cui sarà visualizzato l'avanzamento dell'installazione di Visual Studio.

> [!TIP]
> In qualsiasi momento dopo l'installazione, è possibile installare i carichi di lavoro o i componenti che non sono stati installati inizialmente. Se Visual Studio è aperto, passare a Strumenti Get Tools and Features... che apre il programma di installazione di Visual Studio.If you have Visual Studio open, go to **Tools** > **Get Tools and Features...** which opens the Visual Studio Installer. In alternativa, aprire **il programma di installazione di Visual Studio** dal menu Start. Da qui, è possibile scegliere i carichi di lavoro o i componenti che si vogliono installare. Scegliere quindi **Modifica**.

### <a name="step-5---choose-individual-components-optional"></a>Passaggio 5: Scegliere singoli componenti (facoltativo)

Se non si vuole usare la funzionalità Carichi di lavoro per personalizzare l'installazione di Visual Studio o aggiungere più componenti rispetto all'installazione di un carico di lavoro, è possibile farlo installando o aggiungendo singoli componenti dalla scheda **Singoli componenti.** Scegliere ciò che si desidera e quindi seguire le istruzioni visualizzate.

  ![Visual Studio 2019 - Installare singoli componenti](../get-started/media/vs-installer-individual-components.png "Installare i singoli componenti di Visual StudioInstall Visual Studio individual components")

### <a name="step-6---install-language-packs-optional"></a>Passaggio 6: Installare i Language Pack (facoltativo)

Per impostazione predefinita, alla prima esecuzione il programma di installazione tenta di trovare una corrispondenza con la lingua del sistema operativo. Per installare Visual Studio in un linguaggio specifico, scegliere la scheda **Language Pack** nel programma di installazione di Visual Studio e quindi seguire le istruzioni visualizzate.

  ![Visual Studio 2019 - Installare i Language Pack](../get-started/media/vs-installer-language-packs.png "Installare i Language Pack di Visual Studio")

#### <a name="change-the-installer-language-from-the-command-line"></a>Modificare la lingua del programma di installazione dalla riga di comando

Un altro modo per poter modificare la lingua predefinita consiste nell'eseguire il programma di installazione dalla riga di comando. Ad esempio, usare il comando seguente per forzare l'esecuzione in inglese del programma di installazione: `vs_installer.exe --locale en-US`. Il programma di installazione ricorderà questa impostazione quando verrà eseguita la volta successiva. Il programma di installazione supporta i token delle lingue seguenti: zh-cn, zh-tw, cs-cz, en-us, es-es, fr-fr, de-de, it-it, ja-jp, ko-kr, pl-pl, pt-br, ru-ru e tr-tr.

### <a name="step-7---change-the-installation-location-optional"></a>Passaggio 7: Cambiare il percorso di installazione (facoltativo)

È possibile ridurre lo spazio occupato dall'installazione di Visual Studio nell'unità di sistema. È possibile scegliere di spostare la Download Cache, i componenti condivisi, gli SDK e gli strumenti in unità diverse e mantenere Visual Studio nell'unità che lo esegue più rapidamente.

  ![Visual Studio 2019 - Modificare i percorsi di installazione](../get-started/media/vs-installer-installation-locations.png "Modificare il percorso di installazione")

> [!IMPORTANT]
> È possibile selezionare un'unità diversa solo quando si installa Visual Studio per la prima volta. Se Visual Studio è già stato installato e si vuole modificare l'unità, è necessario disinstallarlo e quindi reinstallarlo.

### <a name="step-8---start-developing"></a>Passaggio 8: Avviare lo sviluppo

1. Al termine dell'installazione di Visual Studio, fare clic sul pulsante **Avvia** per iniziare a sviluppare con Visual Studio.

1. Nella finestra di avvio scegliere **Crea un nuovo progetto.**

1. Nella casella di ricerca immettere il tipo di app da creare per visualizzare un elenco dei modelli disponibili. L'elenco dei modelli dipende dai carichi di lavoro che sono stati scelti durante l'installazione. Per visualizzare modelli diversi, è possibile scegliere carichi di lavoro differenti.

   È anche possibile filtrare la ricerca in base a un linguaggio di programmazione specifico usando l'elenco a discesa **Linguaggio** e applicare filtri usando gli elenchi **Piattaforma** e **Tipo di progetto**.

1. Il nuovo progetto verrà aperto in Visual Studio e sarà possibile iniziare a scrivere codice.

::: moniker-end

::: moniker range="<=vs-2017"

## <a name="visual-studio-2017-installation"></a>Installazione di Visual Studio 2017

In Visual Studio 2017 è facile scegliere e installare solo le funzionalità necessarie. Inoltre, grazie alla riduzione del footprint minimo, l'installazione viene eseguita velocemente e con un minore impatto sul sistema.

### <a name="prerequisites"></a>Prerequisiti

- Una connessione internet a banda larga. Il programma di installazione di Visual Studio può scaricare diversi gigabyte di dati.

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia Windows 10 per un'esperienza di sviluppo ottimale. Assicurarsi che gli aggiornamenti più recenti vengano applicati al sistema prima di installare Visual Studio.

- Spazio libero su disco sufficiente. Visual Studio richiede almeno 7 GB di spazio su disco e può richiedere 50 GB o più se sono installate molte opzioni comuni. Si consiglia di installarlo sull'unità C:.

Per informazioni dettagliate sullo spazio su disco e sui requisiti del sistema operativo, vedere Requisiti di sistema della famiglia di prodotti [Visual Studio](/visualstudio/productinfo/vs2017-system-requirements-vs). Il programma di installazione segnala la quantità di spazio su disco necessaria per le opzioni selezionate.

### <a name="download-and-install"></a>Download e installazione

1. Scaricare il programma di installazione più recente di Visual Studio 2017 per Windows.Download the latest Visual Studio 2017 installer for Windows.

   > [!div class="nextstepaction"]
   > [Installare Visual Studio 2017 Community](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017)

   >[!Tip]
   > L'edizione Community è per singoli sviluppatori, per la formazione in classe, la ricerca accademica e per lo sviluppo open source. Per altri usi, installare [Visual Studio 2017 Professional](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017) oppure [Visual Studio 2017 Enterprise](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017).

1. Individuare il file del programma di installazione scaricato ed eseguirlo. Potrebbe essere visualizzato nel browser o potrebbe essere presente nella cartella Download. Il programma di installazione deve disporre dei privilegi di amministratore per l'esecuzione. È possibile che venga visualizzata una finestra di dialogo **Controllo dell'account utente** che richiede di concedere l'autorizzazione per consentire al programma di installazione di apportare modifiche al sistema; scegliere **Sì**. In caso di problemi, trova il file scaricato in Esplora file, fai clic con il pulsante destro del mouse sull'icona del programma di installazione e scegli **Esegui come amministratore** dal menu di scelta rapida.

   ![Scaricare e installare il programma di installazione di Visual StudioDownload and install the Visual Studio Installer](media/vscpp-concierge-run-installer.gif "Scaricare e installare il programma di installazione di Visual StudioDownload and install the Visual Studio Installer")

1. Il programma di installazione offre un elenco di carichi di lavoro, che sono gruppi di opzioni correlate per aree di sviluppo specifico. Il supporto per c'è ora parte di carichi di lavoro facoltativi che non sono installati per impostazione predefinita.

   ![Sviluppo di desktop con carico di lavoro in C](media/desktop-development-with-cpp.png "Sviluppo per desktop con C++")

   Per il linguaggio C, selezionare lo sviluppo del desktop con il carico di lavoro **di C,** quindi scegliere **Installa**.

   ![Installare lo sviluppo per i desktop con il carico di lavoro in C](media/vscpp-concierge-choose-workload.gif "Installare lo sviluppo per i desktop con il carico di lavoro in C")

1. Al termine dell'installazione, scegliere il pulsante Avvia per avviare Visual Studio.When the installation completes, choose the **Launch** button to start Visual Studio.

   La prima volta che si esegue Visual Studio, viene chiesto di accedere con un account Microsoft. Se non si dispone di una tale organizzazione, è possibile crearne una gratuitamente. È inoltre necessario scegliere un tema. Non preoccuparti, puoi cambiarlo in un secondo momento, se vuoi.

   Potrebbero essere necessario alcuni minuti per prepararsi all'uso la prima volta che viene eseguito. Ecco come appare in un breve time-lapse:

   ![Accesso a Visual Studio 2017](media/vscpp-quickstart-first-run.gif "Accesso a Visual Studio 2017")

   Visual Studio viene avviato molto più velocemente quando si esegue nuovamente.

1. Quando si apre Visual Studio, verificare se l'icona del flag nella barra del titolo è evidenziata:

   ![Flag di notifica di Visual Studio 2017](media/vscpp-first-start-page-flag.png "Flag di notifica di Visual Studio 2017")

   Se è evidenziata, selezionarla per aprire la finestra **Notifiche.** Se sono disponibili aggiornamenti per Visual Studio, è consigliabile installarli ora. Al termine dell'installazione, riavviare Visual Studio.Once the installation is complete, restart Visual Studio.

::: moniker-end

::: moniker range="<vs-2017"

## <a name="visual-studio-2015-installation"></a>Installazione di Visual Studio 2015

Per installare Visual Studio 2015, passare alla pagina per il [download delle versioni precedenti di Visual Studio](https://www.visualstudio.com/vs/older-downloads/). Eseguire il programma di installazione, scegliere **Installazione personalizzata** e quindi scegliere il componente C++. Per aggiungere il supporto di Visual Studio 2015 esistente, fare clic sul pulsante Start di Windows e digitare **Installazione applicazioni**. Aprire il programma dall'elenco dei risultati e quindi trovare l'installazione di Visual Studio 2015 nell'elenco dei programmi installati. Fare doppio clic su di esso, quindi scegliere **Modifica** e selezionare i componenti di Visual C.

In generale, è consigliabile usare Visual Studio 2017 anche se occorre compilare il codice tramite il compilatore di Visual Studio 2015. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](../porting/use-native-multi-targeting.md).

::: moniker-end

Quando Visual Studio è in esecuzione, è possibile continuare con il passaggio successivo.

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Creazione di un progetto in C](vscpp-step-1-create.md)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
