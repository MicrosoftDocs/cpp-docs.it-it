---
title: Sincronizzare le modifiche tra Xcode e Visual Studio
ms.date: 10/17/2019
ms.assetid: c71a4d7c-120e-4559-a114-3a99c4b860a9
ms.openlocfilehash: ab941551c519acee49f658d8a8ff1b9fe0e4ba49
ms.sourcegitcommit: a673f6a54cc97e3d4cd032b10aa8dce7f0539d39
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/28/2020
ms.locfileid: "78177535"
---
# <a name="sync-changes-between-xcode-and-visual-studio"></a>Sincronizzare le modifiche tra Xcode e Visual Studio

Lo sviluppo di applicazioni C++ per dispositivi mobili con componenti in Visual Studio include funzionalità remote per sincronizzare il lavoro tra il PC e il Mac. Quando si abbinano i computer Visual Studio e Mac, sono disponibili nuove opzioni per i progetti di applicazioni iOS in Visual Studio che è possibile usare per aprire il progetto in Xcode, spostare il codice tra Xcode e Visual Studio e pulire la directory temporanea del progetto Xcode.

Per usare le opzioni Computer remoto, il progetto deve essere un progetto di applicazione iOS e Visual Studio deve essere associato al Mac. Per informazioni sui prerequisiti e istruzioni su come eseguire l'associazione di un Mac, vedere [Installare e configurare gli strumenti per la compilazione con iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md).

## <a name="the-remote-machine-menu"></a>Menu Computer remoto

In **Esplora soluzioni** fare clic con il pulsante destro del mouse su un progetto di applicazione iOS per visualizzare il menu di scelta rapida. Selezionare **Computer remoto** per visualizzare le opzioni remote disponibili.

![Voce di menu computer remoto in Esplora soluzioni](../cross-platform/media/cppmdd-u2-remotemachine-menu.jpg "Voce di menu computer remoto in Esplora soluzioni")

Questi comandi consentono di aprire il progetto in Xcode, spostare le modifiche locali o l'intero progetto tra Visual Studio e Xcode e pulire i file temporanei nel computer remoto.

## <a name="open-in-xcode"></a>Apri in Xcode

Per aprire il progetto in Xcode da Visual Studio, nel sottomenu **computer remoto** scegliere **Apri in Xcode** per aprire il progetto selezionato nel computer remoto associato. Il server di `vcremote` viene usato per aprire Xcode nel Mac e passare a una directory temporanea creata nel Mac che contiene una copia del progetto. Verrà visualizzata una finestra di dialogo di Visual Studio che mostra la directory temporanea usata per il progetto. Le azioni eseguite nel computer remoto sono anche indicate nella finestra **Output** di Visual Studio. Per visualizzarle, può essere necessario selezionare **Computer remoto Visual C++** nell'elenco a discesa **Mostra output di**, disponibile nella parte superiore della finestra **Output**.

![La finestra output Mostra le azioni del computer remoto.](../cross-platform/media/cppmdd-u2-remotemachine-output.png "La finestra output Mostra le azioni del computer remoto")

Nel Mac è possibile usare tutti gli strumenti di Xcode per modificare il codice e le risorse, gli storyboard e le azioni. In Visual Studio il progetto di applicazione iOS viene annotato con "aperto in Xcode" per indicare che le modifiche possono essere apportate nel computer remoto. Dopo aver completato le modifiche, è possibile usare i comandi Pull da computer remoto o Pull incrementale da computer remoto per copiare nuovamente le modifiche nel progetto di Visual Studio.

## <a name="push-to-remote-and-incremental-push-to-remote"></a>Push in computer remoto e Push incrementale in computer remoto

Se sono state apportate modifiche al progetto di applicazione iOS in Visual Studio, è possibile usare i comandi Push in computer remoto e Push incrementale in computer remoto per spostare i file di progetto modificati nel computer remoto associato. Il comando Push in computer remoto copia tutti i file di progetto nel computer remoto. Il comando Push incrementale in computer remoto copia solo i file modificati nel computer remoto. Per i progetti di grandi dimensioni con piccole modifiche, il comando incrementale consente di risparmiare tempo e larghezza di banda.

Per copiare i file di progetto nel Mac, in **Esplora soluzioni** di Visual Studio fare clic con il pulsante destro del mouse sul progetto di applicazione iOS per aprire il menu di scelta rapida. Selezionare **Computer remoto**, quindi scegliere **Push in computer remoto** o **Push incrementale in computer remoto** per copiare i file di progetto da Visual Studio nel Mac.

## <a name="pull-from-remote-and-incremental-pull-from-remote"></a>Pull da computer remoto e Pull incrementale da computer remoto

Dopo aver apportato modifiche al progetto in Xcode, spostare di nuovo le modifiche in Visual Studio per garantire la sincronizzazione dei progetti.

Per copiare i file di progetto dal Mac, in **Esplora soluzioni** di Visual Studio fare clic con il pulsante destro del mouse sul progetto di applicazione iOS per aprire il menu di scelta rapida. Selezionare **Computer remoto**, quindi scegliere **Pull da computer remoto** o **Pull incrementale da computer remoto** per copiare i file di progetto dal Mac in Visual Studio.

## <a name="clean-remote"></a>Pulisci computer remoto

È possibile usare il comando Pulisci computer remoto per eliminare i file nella directory temporanea del progetto nel computer remoto. Il contenuto della directory, inclusi eventuali file di origine o prodotti di compilazione, viene rimosso dal Mac. Prima di usare il comando Pulisci computer remoto, assicurarsi di avere sincronizzato le modifiche da mantenere in Visual Studio tramite il comando Pull da computer remoto o Pull incrementale da computer remoto.

Per pulire la directory temporanea del progetto nel computer remoto, in **Esplora soluzioni** di Visual Studio fare clic sul progetto di applicazione iOS per aprire il menu di scelta rapida. Selezionare **Computer remoto** quindi scegliere **Pulisci computer remoto** per rimuovere i file della directory del progetto dal Mac.
