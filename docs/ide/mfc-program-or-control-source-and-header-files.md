---
title: "File di intestazione e di origine di un controllo o di un programma MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tipi di file [C++], origine e intestazione MFC"
ms.assetid: f61419a8-bf69-4bbb-8f7c-1734be5e6db6
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# File di intestazione e di origine di un controllo o di un programma MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I file riportati di seguito vengono creati al momento della creazione di un progetto MFC in Visual Studio, a seconda delle opzioni selezionate per il progetto.  Ad esempio, il progetto contiene i file *Projname*dlg.cpp e *Projname*dlg.h solo se si crea una classe o un progetto a finestre.  
  
 Tutti questi file si trovano nella directory *Projname*, nella cartella dei file di intestazione \(file H\) o in quella dei file di origine \(file CPP\) di Esplora soluzioni.  
  
|Nome file|Descrizione|  
|---------------|-----------------|  
|*Projname*.h|File di inclusione principale per il programma o la DLL.  Contiene tutti i simboli globali e le direttive `#include` per gli altri file di intestazione.  Deriva la classe `CPrjnameApp` da `CWinApp` e dichiara una funzione membro `InitInstance`.  Per un controllo, la classe `CPrjnameApp` viene derivata da `COleControlModule`.|  
|*Projname*.cpp|File di origine principale del programma.  Crea un oggetto della classe `CPrjnameApp` derivata da `CWinApp` ed esegue l'override della funzione membro `InitInstance`.<br /><br /> Per i file eseguibili, `CPrjnameApp::InitInstance` effettua numerose operazioni:  registra i modelli di documento, che collegano documenti e visualizzazioni, crea una finestra cornice principale e un documento vuoto oppure apre il documento eventualmente specificato come argomento della riga di comando per l'applicazione.<br /><br /> Per i controlli ActiveX \(denominati in precedenza OLE\) e DLL, `CProjNameApp::InitInstance` registra l'object factory del controllo con OLE chiamando `COleObjectFactory::RegisterAll` ed effettua una chiamata ad `AfxOLEInit`.  La funzione membro `CProjNameApp::ExitInstance` viene invece utilizzata per scaricare il controllo dalla memoria mediante una chiamata ad **AfxOleTerm**.<br /><br /> Questo file inoltre effettua e annulla la registrazione del controllo nel database di registrazione di Windows mediante l'implementazione delle funzioni `DllRegisterServer` e `DllUnregisterServer`.|  
|*Projname*ctrl.h, *Projname*ctrl.cpp|Dichiarare e implementare la classe `CProjnameCtrl`,  che viene derivata da `COleControl`. Vengono inoltre definiti scheletri di implementazioni di alcune funzioni membro che inizializzano, disegnano e serializzano \(effettuando operazioni di caricamento e di salvataggio\) il controllo.  nonché messaggi, eventi e mappe Dispatch.|  
|*Projname*dlg.cpp, *Projname*dlg.h|Vengono creati se si seleziona un'applicazione a finestre.  I file derivano e implementano la classe di finestre di dialogo denominata `CProjnameDlg` e comprendono scheletri di funzioni membro per l'inizializzazione di una finestra di dialogo e l'esecuzione di DDX \(Dialog Data Exchange\).  Anche la classe della finestra Informazioni su viene inserita in questi file anziché in *Projname*.cpp.|  
|Dlgproxy.cpp, Dlgproxy.h|In un programma a finestre, il file di intestazione e di implementazione per la classe proxy di automazione del progetto per la finestra di dialogo principale.  Viene utilizzato solo se si è scelto il supporto per l'automazione.|  
|*Projname*doc.cpp, *Projname*doc.h|Derivano e implementano la classe documento, denominata `CProjnameDoc`, e comprendono scheletri di funzioni membro per inizializzare e serializzare \(effettuando operazioni di salvataggio e caricamento\) un documento e per implementare la diagnostica di debug.|  
|*Projname*set.h\/.cpp|Vengono creati se si crea un programma dotato di supporto per database e contenente la classe recordset.|  
|*Projname*view.cpp, *Projname*view.h|Derivano e implementano la classe di visualizzazione, denominata `CProjnameView`, la quale viene utilizzata per visualizzare e stampare i dati del documento  e viene derivata da una delle seguenti classi MFC:<br /><br /> -   [CEditView](../mfc/reference/ceditview-class.md)<br />-   [CFormView](../mfc/reference/cformview-class.md)<br />-   [CRecordView](../mfc/reference/crecordview-class.md)<br />-   [COleDBRecordView](../mfc/reference/coledbrecordview-class.md)<br />-   [CTreeView](../mfc/reference/ctreeview-class.md)<br />-   [CListView](../mfc/reference/clistview-class.md)<br />-   [CRichEditView](../mfc/reference/cricheditview-class.md)<br />-   [CScrollView](../mfc/reference/cscrollview-class.md)<br />-   [CView](../mfc/reference/cview-class.md)<br />-   [CHTMLView](../mfc/reference/chtmlview-class.md)<br />-   [CHTMLEditView](../mfc/reference/chtmleditview-class.md)<br /><br /> La classe di visualizzazione del progetto contiene scheletri di funzioni membro per la definizione della visualizzazione e l'implementazione della diagnostica di debug.  Se è stato attivato il supporto di stampa, vengono aggiunte voci della mappa messaggi per i messaggi dei comandi di anteprima di stampa, di impostazione della stampante e di stampa.  Tramite queste voci vengono chiamate le funzioni membro corrispondenti nella classe base di visualizzazione.|  
|*Projname*PropPage.h, *Projname*PropPage.cpp|Dichiarare e implementare la classe `CProjnamePropPage`,  che viene derivata da `COlePropertyPage`. Viene fornito uno scheletro di funzione membro, `DoDataExchange`, per implementare lo scambio e la convalida dei dati.|  
|IPframe.cpp, IPframe.h|Vengono creati se si seleziona l'opzione Server ridotto o Server completo nella schermata relativa alle **opzioni di automazione** della creazione guidata applicazione \(passaggio 3 di 6\).  I file derivano e implementano la classe finestra cornice sul posto, denominata **CInPlaceFrame**, utilizzata quando il server viene attivato sul posto da un programma contenitore.|  
|Mainfrm.cpp, Mainfrm.h|Derivano la classe **CMainFrame** da [CFrameWnd](../mfc/reference/cframewnd-class.md) per le applicazioni SDI o da [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md) per le applicazioni MDI.  La classe **CMainFrame** consente di gestire la creazione dei pulsanti della barra degli strumenti e della barra di stato, se le opzioni corrispondenti vengono selezionate nella schermata **Opzioni applicazione** della creazione guidata applicazione \(passaggio 4 di 6\).  Per informazioni sull'utilizzo di **CMainFrame**, vedere [Classi di finestre cornice create tramite la Creazione guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md).|  
|Childfrm.cpp, Childfrm.h|Derivano la classe **CChildFrame** da [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  La classe **CChildFrame** viene utilizzata per le finestre cornice dei documenti MDI.  Questi file vengono creati ogni volta che si seleziona l'opzione MDI.|  
  
## Vedere anche  
 [Tipi di file creati per i progetti di Visual C\+\+](../ide/file-types-created-for-visual-cpp-projects.md)   
 [File di intestazione e di origine di un controllo o programma ATL](../ide/atl-program-or-control-source-and-header-files.md)   
 [Progetti CLR](../ide/files-created-for-clr-projects.md)