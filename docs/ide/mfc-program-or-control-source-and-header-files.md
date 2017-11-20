---
title: File di intestazione e di origine di un controllo o programma MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-ide
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: file types [C++], MFC source and header
ms.assetid: f61419a8-bf69-4bbb-8f7c-1734be5e6db6
caps.latest.revision: "6"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 81964c410f01505ef49c75b51ef2629daed2f6ba
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="mfc-program-or-control-source-and-header-files"></a>File di intestazione e di origine di un controllo o di un programma MFC
I seguenti file vengono creati quando si crea un progetto MFC in Visual Studio, a seconda delle opzioni selezionate per il progetto creato. Ad esempio, il progetto contiene *Projname*Dlg. cpp e *Projname*Dlg file solo se si crea un progetto basato su finestra di dialogo o una classe.  
  
 Tutti questi file si trovano nel *Projname* directory e nella cartella file di intestazione (file con estensione h) o di cartella di origine (file con estensione cpp) in Esplora soluzioni.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|*NomeProgetto*. h|File di inclusione principale per il programma o DLL. Contiene tutti i simboli globali e `#include` le istruzioni per altri file di intestazione. Deriva la `CPrjnameApp` classe `CWinApp` e dichiara un `InitInstance` funzione membro. Per un controllo, il `CPrjnameApp` viene derivata da `COleControlModule`.|  
|*NomeProgetto*. cpp|Il file di origine del programma principale. Crea un oggetto della classe `CPrjnameApp`, che deriva da `CWinApp`ed esegue l'override di `InitInstance` funzione membro.<br /><br /> Per i file eseguibili, `CPrjnameApp::InitInstance` esegue diverse operazioni. Consente di registrare i modelli di documento, che fungono da una connessione tra documenti e viste. Crea una finestra cornice principale. e crea un documento vuoto (o apre un documento, se è specificata come argomento della riga di comando per l'applicazione).<br /><br /> Per i controlli ActiveX (precedentemente OLE) e DLL, `CProjNameApp::InitInstance` registra l'object factory del controllo con OLE chiamando `COleObjectFactory::RegisterAll` ed effettua una chiamata a `AfxOLEInit`. Inoltre, la funzione membro `CProjNameApp::ExitInstance` viene utilizzato per scaricare il controllo dalla memoria mediante una chiamata a **AfxOleTerm**.<br /><br /> Questo file registra inoltre e Annulla la registrazione di controllo nel database di registrazione di Windows mediante l'implementazione di `DllRegisterServer` e `DllUnregisterServer` funzioni.|  
|*NomeProgetto*CTRL. h, *Projname*CTRL|Dichiarare e implementare la `CProjnameCtrl` classe. `CProjnameCtrl`derivato da `COleControl`, e le implementazioni di base di alcune funzioni membro sono definite che inizializzano, disegnare e serializzare (caricamento e salvataggio) il controllo. Messaggio di evento e mappe di invio vengono definite anche.|  
|*NomeProgetto*Dlg. cpp, *Projname*Dlg|Se si sceglie un'applicazione basata su finestra di dialogo creata. I file derivano e implementano la classe di finestra di dialogo, denominata `CProjnameDlg`e includere scheletri di funzioni membro per inizializzare una finestra di dialogo e di esecuzione dialog data exchange (DDX). Classe della finestra di dialogo informazioni su viene inoltre inserita in questi file anziché in *Projname*. cpp.|  
|Dlgproxy.cpp, Dlgproxy.h|In un finestra di dialogo file basato su programma, l'implementazione e l'intestazione per la classe proxy di automazione del progetto per la finestra di dialogo principale. Viene utilizzato solo se si è scelto di supporto di automazione.|  
|*NomeProgetto*doc.cpp, *Projname*doc.h|Derivare e implementare la classe di documento, denominata `CProjnameDoc`e includere scheletri di funzioni membro per inizializzare un documento, la serializzazione (salvataggio e caricamento) un documento e per implementare la diagnostica di debug.|  
|*NomeProgetto*set.h/.cpp|Se si crea un programma che supporta un database e contiene la classe recordset creato.|  
|*NomeProgetto*view.cpp, *Projname*view.h|Derivare e implementare la classe di visualizzazione, denominata `CProjnameView`, che consente di visualizzare e stampare i dati del documento. Il `CProjnameView` è derivata da una delle classi MFC seguenti:<br /><br /> -   [CEditView](../mfc/reference/ceditview-class.md)<br />-   [CFormView](../mfc/reference/cformview-class.md)<br />-   [CRecordView](../mfc/reference/crecordview-class.md)<br />-   [COleDBRecordView](../mfc/reference/coledbrecordview-class.md)<br />-   [CTreeView](../mfc/reference/ctreeview-class.md)<br />-   [CListView](../mfc/reference/clistview-class.md)<br />-   [CRichEditView](../mfc/reference/cricheditview-class.md)<br />-   [CScrollView](../mfc/reference/cscrollview-class.md)<br />-   [CView](../mfc/reference/cview-class.md)<br />-   [CHTMLView](../mfc/reference/chtmlview-class.md)<br />-   [CHTMLEditView](../mfc/reference/chtmleditview-class.md)<br /><br /> Classe di visualizzazione del progetto contiene scheletri di funzioni membro per disegnare la visualizzazione e implementare la diagnostica di debug. Se è stato abilitato il supporto per la stampa, le voci della mappa messaggi vengono aggiunti per la stampa, Imposta stampante e i messaggi di comando Anteprima di stampa. Queste voci vengono chiamate le funzioni membro corrispondente nella classe di visualizzazione di base.|  
|*NomeProgetto*PropPage.h, *Projname*PropPage.cpp|Dichiarare e implementare la `CProjnamePropPage` classe. `CProjnamePropPage`derivato da `COlePropertyPage` e una funzione membro di struttura, `DoDataExchange`, per implementare lo scambio di dati e la convalida.|  
|IPframe.cpp, IpFrame. H|Se è selezionata l'opzione Server ridotto o Server completo della procedura guidata dell'applicazione creato **opzioni di automazione** (passaggio 3 di 6). I file derivano e implementano la classe di finestra cornice sul posto, denominata **CInPlaceFrame**, utilizzato quando il server è attivato sul posto da un programma contenitore.|  
|MainFrm.cpp, MainFrm|Derivare la **CMainFrame** classe dal [CFrameWnd](../mfc/reference/cframewnd-class.md) (per le applicazioni SDI) o [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) (per le applicazioni MDI). Il **CMainFrame** classe gestisce la creazione di pulsanti della barra degli strumenti e barra di stato, se vengono selezionate le opzioni corrispondenti della procedura guidata applicazione **Opzioni applicazione** (passaggio 4 di 6). Per informazioni sull'utilizzo **CMainFrame**, vedere [classi di finestre cornice create tramite la creazione guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md).|  
|ChildFrm. cpp, h|Derivare la **CChildFrame** classe [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md). Il **CChildFrame** classe viene utilizzata per le finestre cornice documento MDI. Questi file vengono sempre creati se si seleziona l'opzione MDI.|  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di file creati per i progetti Visual C++](../ide/file-types-created-for-visual-cpp-projects.md)   
 [File di intestazione e di origine di un controllo o programma ATL](../ide/atl-program-or-control-source-and-header-files.md)   
 [Progetti CLR](../ide/files-created-for-clr-projects.md)