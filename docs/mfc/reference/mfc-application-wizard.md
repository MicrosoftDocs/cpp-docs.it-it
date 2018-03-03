---
title: Creazione guidata applicazione MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.appwiz.mfc.exe.overview
dev_langs:
- C++
helpviewer_keywords:
- MFC Application Wizard
- executable files, creating
ms.assetid: 227ac090-921d-4b2f-be0a-66a5f4cab0d4
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 9d4997d2d793102119e5021ba1110db2674e1b42
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="mfc-application-wizard"></a>Creazione guidata applicazione MFC
La creazione guidata applicazione MFC genera un'applicazione che, quando viene compilato, implementa la funzionalità di base di un'applicazione eseguibile (.exe) di Windows. L'applicazione iniziale MFC include i file di origine (. cpp) di C++, file di risorse (RC), file di intestazione (h) e un file di progetto (vcxproj). Il codice che viene generato in questi file di avvio è basato su MFC.  
  
> [!NOTE]
>  A seconda delle opzioni selezionate, la procedura guidata Crea file aggiuntivi nel progetto. Ad esempio, se si seleziona **Guida sensibile al contesto** sul [funzionalità avanzate](../../mfc/reference/advanced-features-mfc-application-wizard.md) pagina, la procedura guidata crea i file necessari per compilare i file della Guida del progetto. Per ulteriori informazioni sui file creati nella procedura guidata, vedere [tipi di File creati per progetti di Visual C++](../../ide/file-types-created-for-visual-cpp-projects.md)e vedere il file Readme nel progetto.  
  
## <a name="overview"></a>Panoramica  
 Questa pagina della procedura guidata descrive le impostazioni correnti per l'applicazione MFC che si sta creando. Per impostazione predefinita, la procedura guidata crea un progetto come indicato di seguito:  
  
-   [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md)  
  
    -   Il progetto viene creato con il supporto di interfaccia a documenti multipli a schede (MDI). Per ulteriori informazioni, vedere [SDI e MDI](../../mfc/sdi-and-mdi.md).  
  
    -   Il progetto utilizza il [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).  
  
    -   Il progetto utilizza librerie Unicode.  
  
    -   Il progetto viene creato usando lo stile di progetto di Visual Studio e consente il cambio dello stile di visualizzazione.  
  
    -   Il progetto utilizza MFC in una DLL condivisa. Per altre informazioni, vedere [DLL in Visual C++](../../build/dlls-in-visual-cpp.md).  
  
-   [Supporto documenti compositi, Creazione guidata applicazione MFC](../../mfc/reference/compound-document-support-mfc-application-wizard.md)  
  
    -   Il progetto non fornisce supporto per i documenti compositi.  
  
-   [Stringhe modello documento, Creazione guidata applicazione MFC](../../mfc/reference/document-template-strings-mfc-application-wizard.md)  
  
    -   Il progetto utilizza il nome del progetto per le stringhe di modello di documento predefinito.  
  
-   [Supporto database, Creazione guidata applicazione MFC](../../mfc/reference/database-support-mfc-application-wizard.md)  
  
    -   Il progetto non fornisce supporto per i database.  
  
-   [Funzionalità interfaccia utente, Creazione guidata applicazione MFC](../../mfc/reference/user-interface-features-mfc-application-wizard.md)  
  
    -   Il progetto implementa standard di Windows dotato di interfaccia utente, ad esempio un menu di sistema, una barra di stato, ingrandire e ridurre al minimo le caselle, un **su** casella, una barra dei menu standard e ancoraggio della barra degli strumenti e frame figlio.  
  
-   [Funzionalità avanzate, Creazione guidata applicazione MFC](../../mfc/reference/advanced-features-mfc-application-wizard.md)  
  
    -   Il progetto supporta la stampa e anteprima di stampa.  
  
    -   Il progetto supporta i controlli ActiveX. Per ulteriori informazioni, vedere [sequenza di operazioni per la creazione di controlli ActiveX](../../mfc/sequence-of-operations-for-creating-activex-controls.md).  
  
    -   Il progetto non fornisce supporto per [automazione](../../mfc/automation.md), [MAPI](../../mfc/mapi-support-in-mfc.md), [Windows Sockets](../../mfc/windows-sockets-in-mfc.md), o Active Accessibility.  
  
    -   Il progetto supporta un **Explorer** riquadro ancorato, un **output** riquadro ancorato e un **proprietà** riquadro ancorato.  
  
-   [Classi generate, Creazione guidata applicazione MFC](../../mfc/reference/generated-classes-mfc-application-wizard.md)  
  
    -   Classe di visualizzazione del progetto viene derivata dal [classe CView](../../mfc/reference/cview-class.md).  
  
    -   Classe di applicazione del progetto viene derivata dal [CWinAppEx Class](../../mfc/reference/cwinappex-class.md).  
  
    -   Classe di documento del progetto viene derivata dal [CDocument (classe)](../../mfc/reference/cdocument-class.md).  
  
    -   Deriva dalla classe frame principale del progetto di [classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md).  
  
    -   Del progetto figlio fotogramma viene derivata dal [classe CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md).  
  
 Per modificare queste impostazioni predefinite, fare clic sul titolo della scheda appropriata nella colonna sinistra della procedura guidata e apportare le modifiche nella pagina visualizzata.  
  
 Dopo aver creato un progetto di applicazione MFC, è possibile aggiungere oggetti o controlli al progetto usando Visual C++ [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Creazione di un'applicazione MFC](../../mfc/reference/creating-an-mfc-application.md)   
 [Applicazioni Desktop MFC](../../mfc/mfc-desktop-applications.md)   
 [Uso delle classi per la creazione di applicazioni per Windows](../../mfc/using-the-classes-to-write-applications-for-windows.md)
