---
title: Distribuire un'app tramite Redistributable Package (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 37bba00efdf0368973fa4ffbac1cbc6bb6298ce1
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33339154"
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-the-visual-c-redistributable-package"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite Visual C++ Redistributable Package
La procedura dettagliata in questo articolo descrive come usare Visual C++ Redistributable Package per distribuire un'applicazione Visual C++.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare la procedura dettagliata, sono necessari i componenti seguenti:  
  
-   Un computer in cui è installato Visual Studio.  
  
-   Un altro computer che non dispone delle librerie di Visual C++.  
  
### <a name="to-use-the-visual-c-redistributable-package-to-deploy-an-application"></a>Per usare Visual C++ Redistributable Package per distribuire un'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i primi tre passaggi descritti in [Procedura dettagliata: Distribuzione di un'applicazione Visual C++ tramite un progetto di installazione](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
2.  Creare un file, assegnare a questo il nome setup.bat e aggiungere i comandi seguenti. Sostituire `MyMFCApplication` con il nome del progetto.  
  
    ```cmd
    @echo off  
    vcredist_x86.exe  
    mkdir "C:\Program Files\MyMFCApplication"  
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"  
    ```  
  
3.  Creare un file di installazione autoestraente:  
  
    1.  Al prompt dei comandi o nella finestra **Esegui** eseguire iexpress.exe.  
  
    2.  Selezionare **Crea nuovo file SED** e quindi scegliere il pulsante **Avanti**.  
  
    3.  Selezionare **Estrazione file ed esecuzione comando di installazione** e quindi scegliere **Avanti**.  
  
    4.  Nella casella di testo immettere il nome dell'applicazione MFC e quindi scegliere **Avanti**.  
  
    5.  Nella pagina **Richiesta di conferma** selezionare **Nessuna richiesta** e quindi scegliere **Avanti**.  
  
    6.  Nella pagina **Contratto di licenza** selezionare **Non visualizzare alcun contratto** e quindi scegliere **Avanti**.  
  
    7.  Nella pagina **File del pacchetto** aggiungere i file seguenti e quindi scegliere **Avanti**.  
  
        -   Applicazione MFC (file con estensione exe).  
  
        -   vcredist_x86.exe. Questo file si trova in \Programmi\Microsoft SDKs\Windows\v7.0A\Bootstrapper\Packages\vcredist_x86\\.  
  
        -   Il file setup.bat creato nel passaggio precedente.  
  
    8.  Nella casella di testo **Programma di installazione** della pagina **Programma di installazione** immettere la riga di comando seguente e quindi scegliere **Avanti**.  
  
         **cmd.exe /c "setup.bat"**  
  
    9. Nella pagina **Visualizzazione finestra** selezionare **Predefinito** e quindi scegliere **Avanti**.  
  
    10. Nella pagina **Messaggio finale** selezionare **Nessun messaggio** e quindi scegliere **Avanti**.  
  
    11. Nella pagina **Nome e opzioni del pacchetto** immettere un nome per il file di installazione autoestraente, selezionare l'opzione **Salva file con nomi file lunghi all'interno del pacchetto** e quindi scegliere **Avanti**. Il nome del file deve terminare con Setup.exe, ad esempio MyMFCApplicationSetup.exe.  
  
    12. Nella pagina **Configurazione riavvio del computer** selezionare **Nessun riavvio** e quindi scegliere **Avanti**.  
  
    13. Nella pagina **Salvataggio file SED** selezionare **Salva file SED** e quindi scegliere **Avanti**.  
  
    14. Nella pagina **Creazione pacchetto** scegliere **Avanti**.  
  
4.  Testare il file di installazione autoestraente in un altro computer che non ha le librerie Visual C++:  
  
    1.  Nell'altro computer scaricare una copia del file di installazione e quindi eseguire l'installazione eseguendo il file e seguendo i passaggi visualizzati.  
  
    2.  Eseguire l'applicazione MFC.  
  
         Il file di installazione autoestraente installa l'applicazione MFC che si trova nella cartella specificata nel passaggio 2. L'applicazione viene eseguita correttamente, perché il programma di installazione di Visual C++ Redistributable Package è incluso nel file di installazione autoestraente.  
  
        > [!IMPORTANT]
        >  Per determinare quale versione del runtime è installata, il programma di installazione controlla la chiave del Registro di sistema \HKLM\SOFTWARE\Microsoft\VisualStudio\11.0\VC\Runtimes\\[piattaforma]. Se la versione attualmente installata è più recente della versione che il programma di installazione sta tentando di installare, il programma di installazione comunica l'esito positivo dell'installazione senza installare la versione precedente e lascia una voce aggiuntiva nella pagina dei programmi installati nel Pannello di controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)