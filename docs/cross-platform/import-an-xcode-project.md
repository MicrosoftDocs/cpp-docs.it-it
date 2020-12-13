---
description: 'Altre informazioni su: importare un progetto Xcode'
title: Importare un progetto Xcode
ms.date: 10/17/2019
ms.assetid: aa4b8161-d98f-4a1a-9db3-520133bfc82f
ms.openlocfilehash: b993e3aa469f93d2bb55604a42ce327e6105ae94
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97333956"
---
# <a name="import-an-xcode-project"></a>Importare un progetto Xcode

Gli strumenti di Visual Studio per lo sviluppo di app per dispositivi mobili multipiattaforma con C++ includono il supporto per lo sviluppo di progetti Xcode in Visual Studio, in cui è possibile creare librerie multipiattaforma e condividere codice con altri progetti. Con la procedura guidata Importa da Xcode viene semplificato il processo di importazione dei progetti e di suddivisione del codice C++ nelle destinazioni di Xcode da usare come libreria statica o progetto di codice condiviso. È possibile gestire il codice specifico di iOS in Visual Studio e continuare a usare Xcode per eseguire storyboard e compilazioni. Per informazioni su come spostare facilmente il codice tra Visual Studio e Xcode, vedere [sincronizzare le modifiche tra Xcode e Visual Studio](sync-changes-between-xcode-and-visual-studio.md).

## <a name="use-the-import-from-xcode-wizard"></a>Usare la procedura guidata Importa da Xcode

Questo articolo illustra come spostare un progetto Xcode in Visual Studio per sfruttare i vantaggi della condivisione del codice e delle soluzioni multipiattaforma. Come prerequisito, è necessario associare il Mac a Visual Studio per importare, esportare e compilare il progetto. Per istruzioni su come configurare l'associazione, vedere [installare e configurare gli strumenti per la compilazione con iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md). È anche necessario condividere il progetto Xcode in rete o spostarlo nel computer di Visual Studio per usare la procedura guidata Importa da Xcode.

### <a name="import-from-xcode"></a>Importa da Xcode

1. Scegliere **nuovo**, **Importa**, **Importa da Xcode dal** menu **file** . Questo comando avvia la finestra **di dialogo Importa da Xcode** Wizard.

   ![Scegliere il progetto di destinazione Xcode da importare](../cross-platform/media/cppmdd-u2-importxcode-choose.png "Scegliere il progetto di destinazione Xcode da importare")

1. Nel riquadro **scegliere un progetto** scegliere il pulsante Sfoglia per selezionare un file Xcode *. pbxproj* . Passare al file di progetto nella finestra di dialogo **Seleziona file di progetto Xcode** , quindi scegliere **Apri**.

   ![Selezionare un file di progetto nella finestra di dialogo Seleziona file di progetto Xcode](../cross-platform/media/cppmdd-u2-importxcode-browse.png "Selezionare un file di progetto nella finestra di dialogo Seleziona file di progetto Xcode")

   Nella procedura guidata Importa da Xcode fare clic su **Avanti**.

1. Nel riquadro **destinazioni di destinazione** scegliere le destinazioni dal progetto Xcode da importare nei progetti di Visual Studio. Le destinazioni Xcode sono simili ai progetti di Visual Studio. la maggior parte è una raccolta di codice e risorse che producono un file binario. La procedura guidata Importa da Xcode consente solo l'importazione di destinazioni che producono un file binario, ma non una libreria statica, come destinazioni di destinazione. Le destinazioni della libreria statica Xcode sono l'oggetto del passaggio successivo.

   ![Riquadro destinazioni di destinazione della procedura guidata Importa da Xcode](../cross-platform/media/cppmdd-u2-importxcode-destination.jpg "Riquadro destinazioni di destinazione della procedura guidata Importa da Xcode")

   Per ogni destinazione selezionata in **Destinazioni da importare**, la procedura guidata rileva automaticamente i file di codice C++ che possono essere suddivisi in un progetto di libreria statica distinto e li inserisce nella sezione **Elementi progetto C++**. Altre risorse e codice vengono lasciati nella sezione **elementi del progetto Xcode** . Al termine del processo di importazione, questi elementi diventano progetti di libreria statica e di applicazioni distinti in Visual Studio. Per impostazione predefinita, le destinazioni unit test e Framework non sono suddivise in progetti distinti dalla procedura guidata.

   Per modificare i file contenuti in ogni progetto, usare i pulsanti Su e Giù. Quando si è soddisfatti dei file in ogni progetto, fare clic su **Avanti** per continuare.

1. Nel riquadro **destinazioni libreria** scegliere le destinazioni della libreria statica dal progetto Xcode da importare nei progetti di Visual Studio. In questo riquadro è possibile scegliere i file da inserire in un progetto di codice condiviso e quello da inserire in un progetto di libreria statica. In ognuna delle destinazioni nell'elenco **destinazioni da importare** è possibile controllare quali file inserire negli elementi del progetto di **codice condiviso** e negli elementi di **progetto della libreria statica** usando i pulsanti su e giù.

   ![Importa dal riquadro Destinazioni libreria Xcode](../cross-platform/media/cppmdd-u2-importxcode-library.jpg "Importa dal riquadro Destinazioni libreria Xcode")

   Un progetto di codice condiviso è un modo per condividere un set di file di origine tra progetti in Visual Studio. Il codice viene compilato come parte del progetto in cui è incluso, non come un progetto indipendente. I progetti che includono il codice condiviso possono avere architetture e configurazioni diverse. Un progetto di codice condiviso è il modo migliore per fornire un singolo progetto che contiene codice che può essere compilato per molti tipi di piattaforme.

   Quando si è soddisfatti dei file in ogni progetto, fare clic su **Avanti** per continuare.

1. Usare il riquadro **proprietà globali** per impostare un percorso di ricerca del Framework e un percorso di ricerca dell'intestazione di inclusione per tutti i progetti iOS in Visual Studio. Visual Studio usa questi percorsi per l'esplorazione del codice sorgente e per IntelliSense. Questi percorsi globali sono utili quando si creano progetti iOS che usano un set comune di intestazioni e framework.

   ![Importa dal riquadro proprietà globali di Xcode](../cross-platform/media/cppmdd-u2-importxcode-global.jpg "Importa dal riquadro proprietà globali di Xcode")

   Questi percorsi globali possono anche essere impostati nella finestra di dialogo **Opzioni** di Visual Studio. Per individuarli, scegliere **Opzioni** dal menu **Strumenti**. Nella finestra di dialogo **Opzioni** espandere **multipiattaforma**  >  **C++**  >  **iOS**  >  **proprietà globali**.

   Scegliere **Avanti** per continuare.

1. Il riquadro **Framework** viene usato per configurare i percorsi usati da Visual Studio per l'esplorazione e IntelliSense per il progetto. I percorsi devono essere accessibili a Visual Studio per ogni Framework a cui fa riferimento il progetto Xcode. La procedura guidata controlla i riferimenti al Framework nei progetti Xcode e visualizza se Visual Studio è in grado di trovare il Framework. Qualsiasi percorso che è già stato impostato in Proprietà globali verrà individuato da Visual Studio. Le eccezioni sono elencate nell'elenco Framework. Per ciascun framework elencato con una X, specificare un percorso accessibile nel PC in cui Visual Studio può individuare il framework. È possibile usare il pulsante Sfoglia **…** per aprire la finestra di dialogo **Selezione cartella** e specificare il percorso. Il percorso del framework può fare riferimento a una copia locale o a una condivisione di rete accessibile sul Mac.

   ![Riquadro Importa da Framework di Xcode](../cross-platform/media/cppmdd-u2-importxcode-frameworks.jpg "Riquadro Importa da Framework di Xcode")

   Scegliere **Avanti** per continuare.

1. Il riquadro **Impostazioni progetto** consente di modificare il framework e di includere le impostazioni del percorso di ricerca intestazioni incluse per ogni progetto creato. Usare questo riquadro per impostare i percorsi specifici del progetto che differiscono dalle impostazioni globali.

   Per impostare un percorso per un progetto specifico, nell'elenco a discesa **progetto di destinazione** selezionare il file di progetto. Impostare quindi i valori nei controlli percorso di ricerca **Framework** e **percorso di ricerca intestazione di inclusione** . È possibile usare il pulsante Sfoglia **...** accanto a ogni controllo per usare una finestra di dialogo **Seleziona cartella** per trovare il percorso.

   ![Importa dal riquadro progetti Xcode](../cross-platform/media/cppmdd-u2-importxcode-projects.jpg "Importa dal riquadro progetti Xcode")

   Se nessun Mac remoto è stato associato a questo PC in Visual Studio, viene visualizzato il collegamento **configura un computer remoto** . Per istruzioni su come configurare l'associazione, vedere [installare e configurare gli strumenti per la compilazione con iOS](../cross-platform/install-and-configure-tools-to-build-using-ios.md).

   Per importare il progetto Xcode usando le impostazioni della procedura guidata, scegliere **Importa**.

   La procedura guidata Importa da Xcode crea progetti in Visual Studio che corrispondono alle destinazioni del progetto Xcode selezionate. Il codice che può essere condiviso con altri progetti C++ è suddiviso in progetti di codice condiviso e di libreria statica distinti. Il codice rimanente viene inserito in progetti di libreria e di applicazioni iOS, che possono essere compilati in remoto da Visual Studio. Per altre informazioni sullo trasferimento di codice tra Visual Studio e Xcode, vedere [sincronizzare le modifiche tra Xcode e Visual Studio](../cross-platform/sync-changes-between-xcode-and-visual-studio.md).

## <a name="see-also"></a>Vedi anche

- [Installare lo sviluppo di app per dispositivi mobili multipiattaforma con C++](../cross-platform/install-visual-cpp-for-cross-platform-mobile-development.md)
