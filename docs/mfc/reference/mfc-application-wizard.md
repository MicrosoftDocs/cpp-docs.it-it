---
title: "Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file eseguibili, creazione"
  - "Creazione guidata applicazione MFC"
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La Creazione guidata applicazione MFC genera un'applicazione con cui, al momento della compilazione, vengono implementate le funzionalità di base di un'applicazione eseguibile Windows \(EXE\).  L'applicazione iniziale MFC comprende file di origine C\+\+ \(cpp\), file di risorse \(rc\), file di intestazione \(h\) e un file di progetto \(vcxproj\).  Il codice generato in questi file iniziali è basato su MFC.  
  
> [!NOTE]
>  A seconda delle opzioni selezionate, nel progetto vengono creati file aggiuntivi.  Se ad esempio nella schermata [Funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) si seleziona **Guida sensibile al contesto**, vengono creati i file necessari per compilare i file della Guida per il progetto.  Per ulteriori informazioni sui file che la procedura guidata crea, vedere [Tipi di file creati per i progetti di Visual C\+\+](../../ide/file-types-created-for-visual-cpp-projects.md) e il file Readme.txt nel progetto.  
  
## Panoramica  
 In questa schermata della procedura guidata vengono descritte le impostazioni correnti dell'applicazione MFC in corso di creazione.  Per impostazione predefinita, il progetto creato con la procedura guidata presenta le caratteristiche indicate di seguito.  
  
-   [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md)  
  
    -   Il progetto viene creato con supporto di interfaccia a documenti multipli \(MDI\) a schede.  Per ulteriori informazioni, vedere [SDI e MDI](../../mfc/sdi-and-mdi.md).  
  
    -   Il progetto utilizza l'[Architettura documento\/visualizzazione](../../mfc/document-view-architecture.md).  
  
    -   Il progetto utilizza librerie Unicode.  
  
    -   Il progetto viene creato utilizzando lo stile dei progetti di Visual Studio e consente il cambio dello stile visivo.  
  
    -   Il progetto utilizza MFC in una DLL condivisa.  Per ulteriori informazioni, vedere [DLL in Visual C\+\+](../../build/dlls-in-visual-cpp.md).  
  
-   [Supporto documenti compositi, Creazione guidata applicazione MFC](../../mfc/reference/compound-document-support-mfc-application-wizard.md)  
  
    -   Il progetto non offre alcun supporto per i documenti compositi.  
  
-   [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md)  
  
    -   Il progetto utilizza il nome di progetto per le stringhe del modello di documento predefinite.  
  
-   [Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)  
  
    -   Il progetto non offre alcun supporto per i database.  
  
-   [Funzionalità interfaccia utente, Creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md)  
  
    -   Il progetto implementa funzionalità di interfaccia utente standard di Windows, tra cui un menu di sistema, una barra di stato, pulsanti di ingrandimento e di riduzione a icona, una finestra **Informazioni su**, una barra dei menu standard, una barra degli strumenti ancorata e frame figlio.  
  
-   [Funzionalità avanzate, Creazione guidata applicazione MFC](../../mfc/reference/advanced-features-mfc-application-wizard.md)  
  
    -   Il progetto supporta la stampa e l'anteprima di stampa.  
  
    -   Il progetto supporta i controlli ActiveX.  Per ulteriori informazioni, vedere [Sequenza di operazioni per la creazione di controlli ActiveX](../../mfc/sequence-of-operations-for-creating-activex-controls.md).  
  
    -   Il progetto non offre alcun supporto per [automazione](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows sockets](../../mfc/windows-sockets-in-mfc.md) o Active Accessibility.  
  
    -   Il progetto supporta un riquadro ancorato di tipo **Esplora risorse**, un riquadro ancorato **Output** e un riquadro ancorato **Proprietà**.  
  
-   [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md)  
  
    -   La classe di visualizzazione del progetto deriva dalla [CView Class](../../mfc/reference/cview-class.md).  
  
    -   La classe di applicazione del progetto deriva dalla [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).  
  
    -   La classe di documento del progetto deriva dalla [CDocument Class](../../mfc/reference/cdocument-class.md).  
  
    -   La classe del frame principale del progetto deriva dalla [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).  
  
    -   La classe dei frame figlio del progetto deriva dalla [Classe CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md).  
  
 Per modificare le impostazioni predefinite, fare clic sul titolo della scheda appropriata nella colonna sinistra della procedura guidata e apportare le modifiche desiderate nella schermata visualizzata.  
  
 Dopo aver creato un progetto di applicazione MFC, è possibile aggiungere oggetti o controlli al progetto mediante le [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md) Visual C\+\+.  
  
## Vedere anche  
 [Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)   
 [Applicazioni desktop MFC](../../mfc/mfc-desktop-applications.md)   
 [Utilizzo delle classi per la creazione di applicazioni per Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)