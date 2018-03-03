---
title: Distribuire un'App usando il pacchetto ridistribuibile (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- walkthrough, deploying a Visual C++ application by using the redistributable package
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 52e3b048f896f0cfd532cb3000617756af2dca92
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-deploying-a-visual-c-application-by-using-the-visual-c-redistributable-package"></a>Procedura dettagliata: distribuire un'applicazione Visual C++ tramite Visual C++ Redistributable Package
In questo articolo viene descritto come usare Visual C++ Redistributable Package per distribuire un'applicazione Visual C++.  
  
## <a name="prerequisites"></a>Prerequisiti  
 È necessario che questi componenti per completare questa procedura dettagliata:  
  
-   Un computer in cui è installato Visual Studio.  
  
-   Un computer aggiuntivo che non dispone delle librerie Visual C++.  
  
### <a name="to-use-the-visual-c-redistributable-package-to-deploy-an-application"></a>Per usare Visual C++ Redistributable Package per distribuire un'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i primi tre passaggi [procedura dettagliata: distribuzione di un Visual C++ applicazione mediante un progetto di installazione](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
2.  Creare un file, denominarla setup.bat e aggiungervi i comandi seguenti. Modifica `MyMFCApplication` per il nome del progetto.  
  
    ```cmd
    @echo off  
    vcredist_x86.exe  
    mkdir "C:\Program Files\MyMFCApplication"  
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"  
    ```  
  
3.  Creare un file autoestraente di programma di installazione:  
  
    1.  A un prompt dei comandi o nel **eseguire** finestra, eseguire iexpress.exe.  
  
    2.  Selezionare **Crea nuovo file SED** e quindi scegliere il **Avanti** pulsante.  
  
    3.  Selezionare **estrarre file ed eseguire un comando di installazione** e quindi scegliere **Avanti**.  
  
    4.  Nella casella di testo, immettere il nome dell'applicazione MFC e quindi scegliere **Avanti**.  
  
    5.  Nel **richiesta di conferma** selezionare **nessuna richiesta** e quindi scegliere **Avanti**.  
  
    6.  Nel **contratto di licenza** selezionare **non è disponibile una licenza** e quindi scegliere **Avanti**.  
  
    7.  Nel **incluso nel pacchetto di file** pagina, aggiungere i file seguenti e quindi scegliere **Avanti**.  
  
        -   Applicazione MFC (file .exe).  
  
        -   vcredist_x86.exe. Questo file si trova in \Programmi\Microsoft SDKs\Windows\v7.0A\Bootstrapper\Packages\vcredist_x86\\.  
  
        -   Il file setup.bat che è stato creato nel passaggio precedente.  
  
    8.  Nel **programma di installazione** nella pagina di **programma di installazione** casella di testo, immettere la riga di comando seguente e quindi scegliere **Avanti**.  
  
         **cmd.exe /c "setup.bat"**  
  
    9. Nel **Mostra finestra** selezionare **predefinito** e quindi scegliere **Avanti**.  
  
    10. Nel **messaggio finale** selezionare **alcun messaggio** e quindi scegliere **Avanti**.  
  
    11. Nel **nome del pacchetto e le opzioni** pagina, immettere un nome per il file autoestraente il programma di installazione, seleziona il **archiviare i file con nomi File lunghi all'interno del pacchetto** opzione e quindi scegliere **Avanti**. La fine del nome file deve essere Setup.exe—for esempio MyMFCApplicationSetup.exe.  
  
    12. Nel **configurare riavvio** selezionare **Nessun riavvio** e quindi scegliere **Avanti**.  
  
    13. Nel **salvare SED** selezionare **file Salva Self estrazione direttiva SED** e quindi scegliere **Avanti**.  
  
    14. Nel **creare il pacchetto** pagina, scegliere **Avanti**.  
  
4.  Verificare il file di programma di installazione autoestraente in altro computer, che non include le librerie Visual C++:  
  
    1.  In altro computer, scaricare una copia del file di installazione e quindi installarlo in esecuzione, e seguendo i passaggi che offre.  
  
    2.  Eseguire l'applicazione MFC.  
  
         Il file di programma di installazione autoestraente installa l'applicazione MFC che si trova nella cartella specificata nel passaggio 2. L'applicazione verrà eseguita correttamente perché il programma di installazione di Visual C++ Redistributable Package è incluso nel file di installazione autoestraente.  
  
        > [!IMPORTANT]
        >  Per determinare la versione del runtime installata, il programma di installazione controlla il \HKLM\SOFTWARE\Microsoft\VisualStudio\11.0\VC\Runtimes chiave del Registro di sistema\\[piattaforma]. Se la versione attualmente installata è più recente della versione che si sta tentando di installare il programma di installazione, il programma di installazione ha esito positivo senza installare la versione precedente e lascia una voce aggiuntiva nella pagina dei programmi installati nel Pannello di controllo.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)