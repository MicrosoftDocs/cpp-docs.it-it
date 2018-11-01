---
title: Installare il supporto di C++ in Visual Studio 2017
description: Installare il supporto di Visual Studio per Visual C++
ms.custom: mvc
ms.date: 09/17/2018
ms.topic: tutorial
ms.devlang: C++
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
ms.openlocfilehash: 019eadee35829bb546de0a69707520dc98f4077e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507237"
---
# <a name="install-c-support-in-visual-studio"></a>Installare il supporto di C++ in Visual Studio

Se è ancora stato scaricato e installato Visual Studio 2017 e strumenti di Visual C++ ancora, ecco come iniziare a usare.

## <a name="prerequisites"></a>Prerequisiti

- Una connessione internet a banda larga. Il programma di installazione di Visual Studio è possibile scaricare diversi gigabyte di dati.

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo. Assicurarsi che gli aggiornamenti più recenti vengono applicati al sistema prima di installare Visual Studio.

- Spazio libero su disco. Visual Studio richiede almeno 7GB di spazio su disco e può richiedere più di 50GB se sono installate molte opzioni comuni. È consigliabile che installarla nell'unità c:.

Per dettagli sui requisiti del sistema operativo e lo spazio su disco, vedere [requisiti del sistema di famiglia di prodotti di Visual Studio](/visualstudio/productinfo/vs2017-system-requirements-vs). Il programma di installazione indica quanto spazio su disco è necessaria per le opzioni selezionate.

## <a name="visual-studio-2015-installation"></a>Installazione di Visual Studio 2015

Per installare Visual Studio 2015, passare alla pagina per il [download delle versioni precedenti di Visual Studio](https://www.visualstudio.com/vs/older-downloads/). Eseguire il programma di installazione, scegliere **Installazione personalizzata** e quindi scegliere il componente C++. Per aggiungere il supporto di C++ in un'installazione esistente di Visual Studio 2015, fare clic sul pulsante Start di Windows e tipo **Installazione applicazioni**. Aprire il programma dall'elenco dei risultati e quindi individuare l'installazione di Visual Studio 2015 nell'elenco dei programmi installati. Fare doppio clic e quindi scegliere **Modify** e selezionare i componenti di Visual C++ da installare.

In generale, è consigliabile usare Visual Studio 2017 anche se occorre compilare il codice tramite il compilatore di Visual Studio 2015. Per altre informazioni, vedere [Usare multitargeting nativo in Visual Studio per compilare progetti precedenti](../porting/use-native-multi-targeting.md).

## <a name="visual-studio-2017-installation"></a>Installazione di Visual Studio 2017

1. Scaricare il programma di installazione più recente Visual Studio 2017 per Windows.

   > [!div class="nextstepaction"]
   > [Installare Visual Studio 2017 Community](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017)

   >[!Tip]
   > L'edizione Community è per singoli sviluppatori, per la formazione in classe, la ricerca accademica e per lo sviluppo open source. Per altri usi, installare [Visual Studio 2017 Professional](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017) oppure [Visual Studio 2017 Enterprise](https://visualstudio.microsoft.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017).

1. Trovare il file di programma di installazione è scaricato ed eseguirlo. Può essere visualizzato nel browser oppure è possibile trovarlo nella cartella download. Il programma di installazione deve avere privilegi di amministratore per l'esecuzione. È possibile visualizzare un **User Account Control** finestra di dialogo che chiede di concedere l'autorizzazione per consentire il programma di installazione di apportare modifiche al sistema; scegliere **Yes**. Se si verificano problemi, trovare il file scaricato in Esplora File, fare doppio clic sull'icona del programma di installazione e scegliere **Esegui come amministratore** dal menu di scelta rapida.

   ![Eseguire il programma di installazione di Visual Studio 2017](../build/media/vscpp-concierge-run-installer.gif "eseguire il programma di installazione di Visual Studio")

1. Il programma di installazione offre un elenco di carichi di lavoro, che sono gruppi di opzioni correlate per aree di sviluppo specifico. Supporto per C++ è ora parte dei carichi di lavoro facoltative che non sono installati per impostazione predefinita.

   ![Sviluppo di applicazioni desktop con C++](../build/media/desktop-development-with-cpp.png "sviluppo Desktop con C++")

   Per C++, selezionare la **sviluppo di applicazioni Desktop con C++** carico di lavoro e quindi scegliere **installare**.

   ![Installare lo sviluppo Desktop con il carico di lavoro di C++](../build/media/vscpp-concierge-choose-workload.gif "installare lo sviluppo Desktop con il carico di lavoro di C++")

1. Al termine dell'installazione, scegliere il **avviare** per avviare Visual Studio.

   La prima volta che si esegue Visual Studio, viene chiesto di accedere con un Account Microsoft. Se non si dispone di uno, è possibile crearne uno gratuitamente. È anche necessario scegliere un tema. Non preoccuparti, è possibile modificarlo in un secondo momento se si desidera.

   Visual Studio potrebbe richiedere alcuni minuti per preparare per usano la prima volta viene eseguito. Ecco l'effetto in una Guida introduttiva di time-lapse:

   ![Accedi Visual Studio 2017](../build/media/vscpp-quickstart-first-run.gif "Accedi Visual Studio 2017")

   Visual Studio avvia molto più velocemente quando si esegue nuovamente.

1. Quando si apre Visual Studio, verificare se l'icona del flag nella barra del titolo è evidenziato:

   ![Contrassegno di notifica di Visual Studio 2017](../build/media/vscpp-first-start-page-flag.png "flag di notifica di Visual Studio 2017")

   Se è evidenziato, selezionarla per aprire la **notifiche** finestra. Se sono presenti eventuali aggiornamenti disponibili per Visual Studio, è consigliabile che è installarli ora. Al termine dell'installazione, riavviare Visual Studio.

Quando Visual Studio è in esecuzione, si è pronti per continuare con il passaggio successivo.

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Creare un progetto C++](vscpp-step-1-create.md)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
