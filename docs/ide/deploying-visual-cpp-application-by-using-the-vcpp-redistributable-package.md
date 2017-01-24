---
title: "Procedura dettagliata: distribuire un&#39;applicazione Visual C++ tramite Visual C++ Redistributable Package | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "procedura dettagliata, distribuzione di un'applicazione Visual C++ tramite il pacchetto ridistribuibile"
ms.assetid: e59becbf-b8c6-4c8e-bab3-b69cc1ed3e5e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Procedura dettagliata: distribuire un&#39;applicazione Visual C++ tramite Visual C++ Redistributable Package
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo dettagliato viene descritto come utilizzare Visual C\+\+ Redistributable Package per distribuire un'applicazione di Visual C\+\+.  
  
## Prerequisiti  
 È necessario che questi componenti per completare questa procedura dettagliata:  
  
-   Un computer con Visual Studio installata.  
  
-   Un computer aggiuntivo che non dispone delle librerie Visual C\+\+.  
  
### Per utilizzare Visual C\+\+ Redistributable Package per distribuire un'applicazione  
  
1.  Creare e compilare un'applicazione MFC seguendo i primi tre passaggi in [Walkthrough: Deploying a Visual C\+\+ Application By Using a Setup Project](../ide/deploying-visual-cpp-application-by-using-the-vcpp-redistributable-package.md).  
  
2.  Creare un file, denominarlo setup.bat e aggiungere i controlli seguenti a.  Modificare `MyMFCApplication` al nome del progetto.  
  
    ```  
    @echo off  
    vcredist_x86.exe  
    mkdir "C:\Program Files\MyMFCApplication"  
    copy MyMFCApplication.exe "C:\Program Files\MyMFCApplication"  
    ```  
  
3.  Creare un file di installazione autoestraente:  
  
    1.  Al prompt dei comandi o nella finestra **Esegui**, eseguire iexpress.exe.  
  
    2.  **Crea nuovo file SED** quindi selezionare il pulsante **Avanti**.  
  
    3.  **Estrazione file ed esecuzione comando di installazione** quindi scegliere **Avanti**.  
  
    4.  Nella casella di testo, il nome dell'applicazione MFC e quindi scegliere **Avanti**.  
  
    5.  Nella pagina **Richiesta di conferma**, **Senza richiesta** quindi scegliere **Avanti**.  
  
    6.  Nella pagina **Contratto di Licenza**, **Non visualizzare alcun contratto** quindi scegliere **Avanti**.  
  
    7.  Nella pagina **File del pacchetto** aggiungere i file seguenti, quindi scegliere **Avanti**.  
  
        -   L'applicazione MFC \(file EXE\).  
  
        -   vcredist\_x86.exe.  Questo file si trova in \\Program Files\\Microsoft SDKs\\Windows\\v7.0A\\Bootstrapper\\Packages\\vcredist\_x86\\.  
  
        -   Il file setup.bat creato al passaggio precedente.  
  
    8.  Nella pagina **Programma di installazione**, nella casella di testo **Programma di installazione**, immettere la seguente riga di comando e quindi scegliere **Avanti**.  
  
         **cmd.exe \/c "setup.bat"**  
  
    9. Nella pagina **Mostra finestra**, **Predefinito** quindi scegliere **Avanti**.  
  
    10. Nella pagina **Messaggio finale**, **Nessun messaggio** selezionato quin**Avanti**.  
  
    11. Nella pagina **Nome e opzioni del pacchetto** l, un nome per il file di installazione autoestraente, selezionare l'opzione **Salva file con nomi file lunghi all'interno del pacchetto** quindi scegliere **Avanti**.  La fine del nome file deve essere esempio di Setup.exe\-for, MyMFCApplicationSetup.exe.  
  
    12. Nella pagina **Configurazione riavvio del computer**, **Nessun riavvio** quindi scegliere **Avanti**.  
  
    13. Nella pagina **Salvataggio file SED**, **Salva file SED** quindi scegliere **Avanti**.  
  
    14. Nella pagina **Crea pacchetto**, scegliere **Avanti**.  
  
4.  Verificare il file di installazione autoestraente in un altro computer, che non dispone delle librerie di Visual C\+\+:  
  
    1.  Un altro computer, scaricare una copia del file di installazione e quindi installarlo eseguendolo e dopo i passaggi che garantiscono.  
  
    2.  Eseguire l'applicazione MFC.  
  
         Il file di installazione autoestraente installa l'applicazione MFC situato nella cartella specificata nel passaggio 2.  L'applicazione verrà eseguita correttamente perché il programma di installazione Visual C\+\+ Redistributable Package è incluso nel file di installazione autoestraente.  
  
        > [!IMPORTANT]
        >  Per determinare la versione del runtime viene installato, il programma di installazione controlla la chiave del Registro di sistema \\HKLM\\SOFTWARE\\Microsoft\\VisualStudio\\11.0\\VC\\Runtimes\\\[platform\].  Se la versione attualmente installata è più recente della versione che il programma di installazione tenta di installare, il programma di installazione restituisce il successo senza installare la versione precedente e consente una voce aggiuntiva nella pagina installata di programmi nel Pannello di controllo.  
  
## Vedere anche  
 [Esempi di distribuzione](../ide/deployment-examples.md)