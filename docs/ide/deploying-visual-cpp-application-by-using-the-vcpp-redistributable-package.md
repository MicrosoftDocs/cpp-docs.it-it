---
title: Distribuire un'app tramite Redistributable Package (C++) | Microsoft Docs
ms.custom: ''
ms.date: 09/17/2018
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- walkthrough, deploying a Visual C++ application by using the redistributable package
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9759811554fd0998a919c9939a0441c63c26a3f8
ms.sourcegitcommit: 338e1ddc2f3869d92ba4b73599d35374cf1d5b69
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/20/2018
ms.locfileid: "46494348"
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-the-visual-c-redistributable-package"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite Visual C++ Redistributable Package

La procedura dettagliata in questo articolo descrive come usare Visual C++ Redistributable Package per distribuire un'applicazione Visual C++.

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, sono necessari i componenti seguenti:

- Un computer in cui è installato Visual Studio.

- Un altro computer che non dispone delle librerie di Visual C++.

### <a name="to-use-the-visual-c-redistributable-package-to-deploy-an-application"></a>Per usare Visual C++ Redistributable Package per distribuire un'applicazione

1.  Creare e compilare un'applicazione MFC seguendo i passaggi descritti in [Procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite un progetto di installazione](walkthrough-deploying-a-visual-cpp-application-by-using-a-setup-project.md).

1. Creare un file, assegnare a questo il nome setup.bat e aggiungere i comandi seguenti. Sostituire `MyMFCApplication` con il nome del progetto.

    ```cmd
    @echo off
    vcredist_x86.exe
    mkdir "C:\Program Files\MyMFCApplication"
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"
    ```

1. Creare un file di installazione autoestraente:

   1. Al prompt dei comandi o nella finestra **Esegui** eseguire iexpress.exe.

   1. Selezionare **Crea nuovo file SED** e quindi scegliere il pulsante **Avanti**.

   1. Selezionare **Estrazione file ed esecuzione comando di installazione** e quindi scegliere **Avanti**.

   1. Nella casella di testo immettere il nome dell'applicazione MFC e quindi scegliere **Avanti**.

   1. Nella pagina **Richiesta di conferma** selezionare **Nessuna richiesta** e quindi scegliere **Avanti**.

   1. Nella pagina **Contratto di licenza** selezionare **Non visualizzare alcun contratto** e quindi scegliere **Avanti**.

   1. Nella pagina **File del pacchetto** aggiungere i file seguenti e quindi scegliere **Avanti**.

      - Applicazione MFC (file con estensione exe).

      - vcredist_x86.exe. Il file si trova in \Programmi (x86)\Microsoft Visual Studio \<versione>\SDK\Bootstrapper\Packages\. È possibile anche scaricarlo da [Microsoft](https://www.microsoft.com/download/confirmation.aspx?id=5555).

      - Il file setup.bat creato nel passaggio precedente.

   1. Nella casella di testo **Programma di installazione** della pagina **Programma di installazione** immettere la riga di comando seguente e quindi scegliere **Avanti**.

      **cmd.exe /c "setup.bat"**

   1. Nella pagina **Visualizzazione finestra** selezionare **Predefinito** e quindi scegliere **Avanti**.

   1. Nella pagina **Messaggio finale** selezionare **Nessun messaggio** e quindi scegliere **Avanti**.

   1. Nella pagina **Nome e opzioni del pacchetto** immettere un nome per il file di installazione autoestraente, selezionare l'opzione **Salva file con nomi file lunghi all'interno del pacchetto** e quindi scegliere **Avanti**. Il nome del file deve terminare con Setup.exe, ad esempio *MyMFCApplicationSetup.exe*.

   1. Nella pagina **Configurazione riavvio del computer** selezionare **Nessun riavvio** e quindi scegliere **Avanti**.

   1. Nella pagina **Salvataggio file SED** selezionare **Salva file SED** e quindi scegliere **Avanti**.

   1. Nella pagina **Creazione pacchetto** scegliere **Avanti**. Scegliere **Fine**.

1. Testare il file di installazione autoestraente in un altro computer che non ha le librerie Visual C++:

   1. Nell'altro computer scaricare una copia del file di installazione e quindi eseguire l'installazione eseguendo il file e seguendo i passaggi visualizzati. A seconda delle opzioni selezionate, è possibile che l'installazione richieda il comando **Esegui come amministratore**.

   1. Eseguire l'applicazione MFC.

      Il file di installazione autoestraente installa l'applicazione MFC che si trova nella cartella specificata nel passaggio 2. L'applicazione viene eseguita correttamente, perché il programma di installazione di Visual C++ Redistributable Package è incluso nel file di installazione autoestraente.

      > [!IMPORTANT]
      > Per determinare quale versione del runtime è installata, il programma di installazione controlla la chiave del Registro di sistema \HKLM\SOFTWARE\Microsoft\VisualStudio\\\<versione>\VC\Runtimes\\<platform>. Se la versione attualmente installata è più recente della versione che il programma di installazione sta tentando di installare, il programma di installazione comunica l'esito positivo dell'installazione senza installare la versione precedente e lascia una voce aggiuntiva nella pagina dei programmi installati nel Pannello di controllo.

## <a name="see-also"></a>Vedere anche

[Esempi di distribuzione](deployment-examples.md)<br/>
