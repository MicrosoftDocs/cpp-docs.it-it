---
title: Installare il supporto per C++ in Visual Studio | Documenti Microsoft
description: Installare il supporto di Visual Studio per Visual C++
ms.custom: mvc
ms.date: 06/08/2018
ms.topic: tutorial
ms.technology:
- devlang-C++
ms.devlang: C++
dev_langs:
- C++
ms.assetid: 45138d70-719d-42dc-90d7-1d0ca31a2f54
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4fd04450b75083152d058aef4a85d83f5635c8d9
ms.sourcegitcommit: 1c2e035f98fb55d9b3c08ec3bb562179a368d0d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/11/2018
ms.locfileid: "35253756"
---
# <a name="install-c-support-in-visual-studio"></a>Installare il supporto per C++ in Visual Studio

Se ancora stato scaricato e installato Visual Studio e gli strumenti di Visual C++ ancora, di seguito viene illustrato come iniziare.

## <a name="prerequisites"></a>Prerequisiti

- Una connessione internet a banda larga. Il programma di installazione di Visual Studio è possibile scaricare molti gigabyte di dati.

- Un computer che esegue Microsoft Windows 7 o versioni successive. Si consiglia di Windows 10 per la migliore esperienza di sviluppo. Assicurarsi che gli ultimi aggiornamenti vengono applicati al sistema prima di installare Visual Studio.

- Spazio libero su disco. Visual Studio richiede almeno 7GB di spazio su disco e può richiedere più di 50GB se sono presenti molte delle opzioni comuni. È consigliabile che installarlo nell'unità c:.

Per informazioni dettagliate sui requisiti di sistema operativo e lo spazio su disco, vedere [requisiti di sistema della famiglia di Visual Studio prodotto](/visualstudio/productinfo/vs2017-system-requirements-vs). Il programma di installazione indica la quantità di spazio su disco necessario per le opzioni selezionate.

## <a name="installation"></a>Installazione

1. Scaricare il programma di installazione Visual Studio 2017 più recente per Windows.

   > [!div class="nextstepaction"]
   > <a target="frameTarget" href="https://www.visualstudio.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017">Installare Visual Studio 2017 Community</a>

   >[!Tip]
   > L'edizione Community è per singoli sviluppatori, per la formazione in classe, la ricerca accademica e per lo sviluppo open source. Per altri usi, installare <a target="frameTarget" href="https://www.visualstudio.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017">Visual Studio 2017 Professional</a> oppure <a target="frameTarget" href="https://www.visualstudio.com/downloads/?utm_medium=microsoft&utm_source=docs.microsoft.com&utm_campaign=button+cta&utm_content=download+vs2017">Visual Studio 2017 Enterprise</a>.

1. Trovare il file di programma di installazione è scaricato ed eseguirlo. Può essere visualizzato nel browser o potrebbe essere nella cartella di download. Il programma di installazione richiede privilegi di amministratore per l'esecuzione. È possibile visualizzare un **controllo dell'Account utente** finestra di dialogo in cui viene richiesto di concedere l'autorizzazione per consentire l'installazione di apportare modifiche al sistema; scegliere **Sì**. Se si riscontrano problemi, trovare il file scaricato in Esplora File, fare doppio clic sull'icona del programma di installazione e scegliere **Esegui come amministratore** dal menu di scelta rapida.

   ![Eseguire il programma di installazione di Visual Studio 2017](../build/media/vscpp-concierge-run-installer.gif "eseguire il programma di installazione di Visual Studio")

1. Il programma di installazione offre un elenco di carichi di lavoro, che sono gruppi di opzioni correlate per aree di sviluppo specifico. Supporto per C++ fa ora parte dei carichi di lavoro facoltativi che non sono installati per impostazione predefinita.

   ![Sviluppo di applicazioni desktop con C++](../build/media/desktop-development-with-cpp.png "sviluppo di applicazioni Desktop con C++")

    Per C++, selezionare il **sviluppo di applicazioni Desktop con C++** carico di lavoro e quindi scegliere **installare**.

   ![Installare lo sviluppo Desktop con carico di lavoro C++](../build/media/vscpp-concierge-choose-workload.gif "installare lo sviluppo Desktop con carico di lavoro di C++")

1. Al termine dell'installazione, scegliere il **avviare** pulsante per avviare Visual Studio.

   La prima volta che si esegue Visual Studio, viene chiesto di accedere con un Account Microsoft. Se non si dispone di uno, è possibile crearne uno gratuitamente. È inoltre necessario scegliere un tema. Non è un problema, è possibile modificarlo in un secondo momento se si desidera. 

   Visual Studio potrebbe richiedere diversi minuti per preparare alla prima di eseguirla. Ecco cosa appare in una rapida personalizzando:

   ![Visual Studio 2017 Accedi](../build/media/vscpp-quickstart-first-run.gif "Visual Studio 2017 Accedi")

   Visual Studio avvia più velocemente quando si esegue nuovamente.

1. Quando si apre Visual Studio, verificare se l'icona del flag nella barra del titolo è evidenziato:

   ![Contrassegno di notifica di Visual Studio 2017](../build/media/vscpp-first-start-page-flag.png "flag di notifica di Visual Studio 2017")

   Se è evidenziato, selezionarla per aprire la **notifiche** finestra. Se sono disponibili aggiornamenti per Visual Studio, è consigliabile che li installa. Al termine dell'installazione, riavviare Visual Studio.

Quando è in esecuzione Visual Studio, si è pronti per continuare con il passaggio successivo.

## <a name="next-steps"></a>Passaggi successivi

> [!div class="nextstepaction"]
> [Creare un progetto C++](vscpp-step-1-create.md)

<iframe src="" height="0" width="0" frameborder="0" name="frameTarget" />
