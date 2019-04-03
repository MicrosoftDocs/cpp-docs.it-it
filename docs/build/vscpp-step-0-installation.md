---
title: Installare il supporto di C++ in Visual Studio
description: Installare il supporto di Visual Studio per Visual C++
ms.custom: mvc
ms.date: 04/02/2019
ms.topic: tutorial
ms.devlang: cpp
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 2c2bed4063194bdc3c0f3fbc405be6bf9a4031e7
ms.sourcegitcommit: 5fc76f5b3c4c3ee49f38f05b37261a324591530b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/02/2019
ms.locfileid: "58870780"
---
# <a name="install-c-support-in-visual-studio"></a>Installare il supporto di C++ in Visual Studio

Se è ancora stato scaricato e installato Visual Studio e gli strumenti di Visual C++ ancora, ecco come iniziare a usare.

::: moniker range="vs-2019"

## <a name="visual-studio-2019-installation"></a>Installazione di Visual Studio 2019

Benvenuti a Visual Studio 2019. In questa versione, è facile scegliere e installare solo le funzionalità che necessarie. E a causa di relativo ridotto footprint minimo, installa velocemente e con minore impatto sul sistema.

> [!NOTE]
> Questo argomento si applica all'installazione di Visual Studio in Windows. [Visual Studio Code](https://code.visualstudio.com/) è un ambiente di sviluppo leggero e multipiattaforma, che viene eseguito nei sistemi Windows, Mac e Linux. Microsoft [C/C++ per Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) estensione supporta IntelliSense, debug, formattazione del codice, completamento automatico. Visual Studio per Mac non supporta Microsoft C++, ma supporta i linguaggi .NET e lo sviluppo multipiattaforma. Per istruzioni sull'installazione, vedere [installazione di Visual Studio per Mac](/visualstudio/mac/installation/).

Per altre informazioni sulle novità in questa versione, Vedere Visual Studio [note sulla versione](/visualstudio/releases/2019/release-notes/).

Tutto pronto? Sarà illustrata una procedura dettagliata.

### <a name="step-1---make-sure-your-computer-is-ready-for-visual-studio"></a>Passaggio 1: Verificare che il computer sia pronto per Visual Studio

Prima di iniziare l'installazione di Visual Studio:

1. Controllare i [requisiti di sistema](/visualstudio/releases/2019/system-requirements) I requisiti consentono di sapere se il computer supporta Visual Studio 2019.

1. Applicare gli aggiornamenti più recenti di Windows. Tali aggiornamenti consentono di avere la certezza che nel computer siano presenti sia gli aggiornamenti di sicurezza più recenti sia i componenti di sistema necessari per Visual Studio.

1. Riavviare il computer. Il riavvio evita che eventuali installazioni o aggiornamenti in sospeso impediscano l'installazione di Visual Studio.

1. Liberare spazio. Rimuovere le applicazioni e i file non necessari da %SystemDrive% eseguendo, ad esempio, l'app Pulitura disco.

Per domande sull'esecuzione di versioni precedenti di Visual Studio affiancate con Visual Studio 2019, vedere la [Visual Studio 2019 piattaforme di destinazione e compatibilità](/visualstudio/releases/2019/compatibility/) pagina.

### <a name="step-2---download-visual-studio"></a>Passaggio 2: Scaricare Visual Studio

Scaricare quindi il file del programma di avvio automatico di Visual Studio. A tale scopo, fare clic sul pulsante seguente, scegliere l'edizione di Visual Studio desiderata, scegliere **salvare**, quindi scegliere **Apri cartella**.

 > [!div class="button"]
 > [Scaricare Visual Studio](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2019+rc)

### <a name="step-3---install-the-visual-studio-installer"></a>Passaggio 3: Installare il programma di installazione di Visual Studio

Eseguire il file di programma di avvio automatico per installare l'installazione di Visual Studio. Questo nuovo programma di installazione semplificato include tutto il che necessario per installare e personalizzare Visual Studio.

1. Dalla cartella **Download** fare doppio clic sul file del programma di avvio automatico corrispondente o simile a uno dei file seguenti:

   * **vs_community.exe** per Visual Studio Community
   * **vs_professional.exe** per Visual Studio Professional
   * **vs_enterprise.exe** per Visual Studio Enterprise

   Se si riceve un avviso di controllo dell'Account utente, scegliere **Sì**.

1. Verrà richiesto di confermare le [Condizioni di licenza](https://visualstudio.microsoft.com/license-terms/) e l'[Informativa sulla privacy](https://privacy.microsoft.com/privacystatement) di Microsoft. Scegli **continuare**.

### <a name="step-4---choose-workloads"></a>Passaggio 4: scegliere i carichi di lavoro

Dopo aver installato il programma di installazione, è possibile usarlo per personalizzare l'installazione selezionando il *carichi di lavoro*, o una funzionalità set, che si desidera. Ecco come fare.

1. Individuare il carico di lavoro che si vuole installare nella schermata d'**installazione di Visual Studio**.

   ![Visual Studio 2019: Installare un carico di lavoro](../get-started/media/vs-installer-workloads.png)

   Per il supporto di base C++, scegliere il carico di lavoro "Sviluppo per Desktop con C++". Include l'editor principale predefinito che offre supporto di base per la modifica del codice per oltre 20 linguaggi, la possibilità di aprire e modificare il codice da qualsiasi cartella senza che sia necessario un progetto e il controllo del codice sorgente integrato.

   Altri carichi di lavoro supportano altri tipi di sviluppo in C++. Ad esempio, scegliere il carico di lavoro "Sviluppo per Universal Windows Platform" per creare App che usano il Runtime di Windows per i Microsoft Store. Scegliere "Sviluppo di giochi con C++" per creare giochi che usano DirectX, Unreal e Cocos2d. Scegliere "Sviluppo di applicazioni Linux con C++" in piattaforme di destinazione Linux, incluso lo sviluppo IoT.

   Il **dettagli installazione** riquadro sono elencati i componenti inclusi e facoltativi installati per ogni carico di lavoro. È possibile selezionare o deselezionare i componenti facoltativi in questo elenco. Ad esempio, per supportare lo sviluppo con il Visual Studio 2017 o 2015 compilatore i set di strumenti, scegliere il MSVC v141 o i componenti facoltativi di MSVC v140. È possibile aggiungere il supporto di MFC, l'estensione del linguaggio moduli sperimentale, IncrediBuild e altro ancora.

1. Dopo avere scelto il carico di lavoro e componenti facoltativi desiderati, scegliere **installare**.

    A questo punto si apriranno diverse schermate di stato in cui sarà visualizzato l'avanzamento dell'installazione di Visual Studio.

> [!TIP]
> In qualsiasi momento dopo l'installazione, è possibile installare i carichi di lavoro o i componenti che non sono stati installati inizialmente. Se si ha Visual Studio aperto, passare a **Strumenti** > **Ottieni strumenti e funzionalità** che apre il programma di installazione di Visual Studio. In alternativa, aprire **il programma di installazione di Visual Studio** dal menu Start. Da qui, è possibile scegliere i carichi di lavoro o componenti che si vuole installare. Quindi, scegliere **Modify**.

## <a name="step-5---choose-individual-components-optional"></a>Passaggio 5: scegliere i singoli componenti (facoltativo)

Se non si desidera utilizzare la funzionalità carichi di lavoro per personalizzare l'installazione di Visual Studio o si desidera aggiungere più componenti viene installato un carico di lavoro, è possibile farlo mediante l'installazione o aggiunta di singoli componenti dal **isingolicomponenti** scheda. Scegliere ciò che desidera e quindi seguire le istruzioni visualizzate.

  ![Visual Studio 2019 - installare singoli componenti](../get-started/media/vs-installer-individual-components.png "singoli componenti di installazione di Visual Studio")

## <a name="step-6---install-language-packs-optional"></a>Passaggio 6: Installare i Language Pack (facoltativo)

Per impostazione predefinita, alla prima esecuzione il programma di installazione tenta di trovare una corrispondenza con la lingua del sistema operativo. Per installare Visual Studio in un linguaggio di propria scelta, scegliere il **Language Pack** scheda da Visual Studio Installer e quindi seguire le istruzioni.

  ![Visual Studio 2019 - installare i language pack](../get-started/media/vs-installer-language-packs.png "installare Visual Studio language pack")

### <a name="change-the-installer-language-from-the-command-line"></a>Modificare la lingua del programma di installazione dalla riga di comando

Un altro modo per poter modificare la lingua predefinita consiste nell'eseguire il programma di installazione dalla riga di comando. Ad esempio, usare il comando seguente per forzare l'esecuzione in inglese del programma di installazione: `vs_installer.exe --locale en-US`. Il programma di installazione memorizza questa impostazione quando viene eseguita la volta successiva. Il programma di installazione supporta i token delle lingue seguenti: zh-cn, zh-tw, cs-cz, en-us, es-es, fr-fr, de-de, it-it, ja-jp, ko-kr, pl-pl, pt-br, ru-ru e tr-tr.

### <a name="step-7---change-the-installation-location-optional"></a>Passaggio 7: Cambiare il percorso di installazione (facoltativo)

È possibile ridurre il footprint di installazione di Visual Studio nell'unità di sistema. È possibile scegliere di spostare la Download Cache, i componenti condivisi, gli SDK e gli strumenti in unità diverse e mantenere Visual Studio nell'unità che lo esegue più rapidamente.

  ![Visual Studio 2019 - percorsi di installazione di modifica](../get-started/media/vs-installer-installation-locations.png "modificare il percorso di installazione")

> [!IMPORTANT]
> È possibile selezionare un'altra unità solo quando si installa prima di tutto Visual Studio. Se già stato installato e si desidera modificare le unità, è necessario disinstallare Visual Studio e quindi reinstallarlo.

## <a name="step-8---start-developing"></a>Passaggio 8: Avviare lo sviluppo

1. Al termine dell'installazione di Visual Studio, scegliere il **avviare** pulsante per iniziare a sviluppare con Visual Studio.

1. Nella finestra iniziale scegliere **Crea un nuovo progetto**.

1. Nella casella di ricerca, immettere il tipo di app che si desidera creare per visualizzare un elenco dei modelli disponibili. Nell'elenco dei modelli dipende dal carico di lavoro che si è scelto durante l'installazione. Per visualizzare modelli diversi, è possibile scegliere diversi carichi di lavoro.

   È anche possibile filtrare la ricerca di un linguaggio di programmazione specifico usando il **linguaggio** elenco a discesa. È possibile filtrare usando i **piattaforma** elenco e il **tipo di progetto** elencare, troppo.

1. Visual Studio apre il nuovo progetto e si è pronti per codice!

::: moniker-end

::: moniker range="<=vs-2017"

## <a name="visual-studio-2017-installation"></a>Installazione di Visual Studio 2017

In Visual Studio 2017, è facile scegliere e installare solo le funzionalità che necessarie. E a causa di relativo ridotto footprint minimo, installa velocemente e con minore impatto sul sistema.

### <a name="prerequisites"></a>Prerequisiti

- Una connessione internet a banda larga. Il programma di installazione di Visual Studio è possibile scaricare diversi gigabyte di dati.

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo. Assicurarsi che gli aggiornamenti più recenti vengono applicati al sistema prima di installare Visual Studio.

- Spazio libero su disco. Visual Studio richiede almeno 7 GB di spazio su disco e può richiedere più di 50 GB se sono installate molte opzioni comuni. È consigliabile che installarla nell'unità c:.

Per dettagli sui requisiti del sistema operativo e lo spazio su disco, vedere [requisiti del sistema di famiglia di prodotti di Visual Studio](/visualstudio/productinfo/vs2017-system-requirements-vs). Il programma di installazione indica quanto spazio su disco è necessaria per le opzioni selezionate.

### <a name="download-and-install"></a>Scaricare e installare

1. Scaricare il programma di installazione più recente Visual Studio 2017 per Windows.

   > [!div class="nextstepaction"]
   > [Installare Visual Studio Community 2017](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017)

   >[!Tip]
   > L'edizione Community è per singoli sviluppatori, per la formazione in classe, la ricerca accademica e per lo sviluppo open source. Per altri usi, installare [Visual Studio 2017 Professional](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017) oppure [Visual Studio 2017 Enterprise](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017).

1. Trovare il file di programma di installazione è scaricato ed eseguirlo. Può essere visualizzato nel browser oppure è possibile trovarlo nella cartella download. Il programma di installazione deve avere privilegi di amministratore per l'esecuzione. È possibile visualizzare un **User Account Control** finestra di dialogo che chiede di concedere l'autorizzazione per consentire il programma di installazione di apportare modifiche al sistema; scegliere **Yes**. Se si verificano problemi, trovare il file scaricato in Esplora File, fare doppio clic sull'icona del programma di installazione e scegliere **Esegui come amministratore** dal menu di scelta rapida.

   ![Scaricare e installare Visual Studio Installer](media/vscpp-concierge-run-installer.gif "scaricare e installare l'installazione di Visual Studio")

1. Il programma di installazione offre un elenco di carichi di lavoro, che sono gruppi di opzioni correlate per aree di sviluppo specifico. Supporto per C++ è ora parte dei carichi di lavoro facoltative che non sono installati per impostazione predefinita.

   ![Sviluppo di applicazioni desktop con il carico di lavoro di C++](media/desktop-development-with-cpp.png "sviluppo Desktop con C++")

   Per C++, selezionare la **sviluppo di applicazioni Desktop con C++** carico di lavoro e quindi scegliere **installare**.

   ![Installare lo sviluppo Desktop con il carico di lavoro di C++](media/vscpp-concierge-choose-workload.gif "installare lo sviluppo Desktop con il carico di lavoro di C++")

1. Al termine dell'installazione, scegliere il **avviare** per avviare Visual Studio.

   La prima volta che si esegue Visual Studio, viene chiesto di accedere con un Account Microsoft. Se non si dispone di uno, è possibile crearne uno gratuitamente. È anche necessario scegliere un tema. Non preoccuparti, è possibile modificarlo in un secondo momento se si desidera.

   Visual Studio potrebbe richiedere alcuni minuti per preparare per usano la prima volta viene eseguito. Ecco l'effetto in una Guida introduttiva di time-lapse:

   ![Visual Studio 2017 sign in](media/vscpp-quickstart-first-run.gif "Visual Studio 2017 sign in")

   Visual Studio avvia molto più velocemente quando si esegue nuovamente.

1. Quando si apre Visual Studio, verificare se l'icona del flag nella barra del titolo è evidenziato:

   ![Contrassegno di notifica di Visual Studio 2017](media/vscpp-first-start-page-flag.png "flag di notifica di Visual Studio 2017")

   Se è evidenziato, selezionarla per aprire la **notifiche** finestra. Se sono presenti eventuali aggiornamenti disponibili per Visual Studio, è consigliabile che è installarli ora. Al termine dell'installazione, riavviare Visual Studio.

::: moniker-end

::: moniker range="<vs-2017"

## <a name="visual-studio-2015-installation"></a>Installazione di Visual Studio 2015

Per installare Visual Studio 2015, passare alla pagina per il [download delle versioni precedenti di Visual Studio](https://www.visualstudio.com/vs/older-downloads/). Eseguire il programma di installazione, scegliere **Installazione personalizzata** e quindi scegliere il componente C++. Per aggiungere il supporto di C++ in un'installazione esistente di Visual Studio 2015, fare clic sul pulsante Start di Windows e tipo **Installazione applicazioni**. Aprire il programma dall'elenco dei risultati e quindi individuare l'installazione di Visual Studio 2015 nell'elenco dei programmi installati. Fare doppio clic e quindi scegliere **Modify** e selezionare i componenti di Visual C++ da installare.

In generale, è consigliabile usare Visual Studio 2017 anche se occorre compilare il codice tramite il compilatore di Visual Studio 2015. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](../porting/use-native-multi-targeting.md).

::: moniker-end

Quando Visual Studio è in esecuzione, si è pronti per continuare con il passaggio successivo.

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Creare un progetto C++](vscpp-step-1-create.md)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
