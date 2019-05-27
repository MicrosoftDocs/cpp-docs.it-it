---
title: File di intestazione e di origine di un controllo o di un programma MFC
ms.date: 11/04/2016
helpviewer_keywords:
- file types [C++], MFC source and header
ms.assetid: f61419a8-bf69-4bbb-8f7c-1734be5e6db6
ms.openlocfilehash: 6a6561e993016e70764186114e1f7cabd93cdc2d
ms.sourcegitcommit: fc1de63a39f7fcbfe2234e3f372b5e1c6a286087
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/15/2019
ms.locfileid: "65707452"
---
# <a name="mfc-program-or-control-source-and-header-files"></a>File di intestazione e di origine di un controllo o di un programma MFC

I file seguenti vengono creati quando si crea un progetto MFC in Visual Studio, a seconda delle opzioni selezionate per il progetto creato. Ad esempio, il progetto contiene i file *Projname*dlg.cpp e *Projname*dlg.h solo se si crea un progetto o una classe basata su finestre di dialogo.

Tutti questi file si trovano nella directory *Projname* e anche nella cartella File di intestazione (file con estensione h) oppure nella cartella File di origine (file con estensione cpp) in Esplora soluzioni.

|Nome file|Description|
|---------------|-----------------|
|*Projname*.h|File di inclusione principale per il programma o la DLL. Contiene tutti i simboli globali e le direttive `#include` per altri file di intestazione. Deriva la classe `CPrjnameApp` da `CWinApp` e dichiara una funzione membro `InitInstance`. Per un controllo, la classe `CPrjnameApp` viene derivata da `COleControlModule`.|
|*Projname*.cpp|Il file di origine principale del programma. Crea un oggetto della classe `CPrjnameApp`, che viene derivata da `CWinApp` ed esegue l'override della funzione membro `InitInstance`.<br /><br /> Per i file eseguibili, `CPrjnameApp::InitInstance` esegue diverse operazioni. Registra i modelli di documento, che fungono da connessione tra documenti e visualizzazioni, e crea una finestra cornice principale e un documento vuoto o apre un documento, se ne è specificato uno come argomento della riga di comando per l'applicazione.<br /><br /> Per le DLL e i controlli ActiveX (in precedenza OLE), `CProjNameApp::InitInstance` registra l'object factory del controllo con OLE chiamando `COleObjectFactory::RegisterAll` ed effettua una chiamata a `AfxOLEInit`. La funzione membro `CProjNameApp::ExitInstance`, poi, viene usata per scaricare il controllo dalla memoria tramite una chiamata a **AfxOleTerm**.<br /><br /> Questo file, poi, registra e annulla la registrazione del controllo nel database di registrazione di Windows mediante l'implementazione delle funzioni `DllRegisterServer` e `DllUnregisterServer`.|
|*Projname*ctrl.h, *Projname*ctrl.cpp|Dichiarano e implementano la classe `CProjnameCtrl`. `CProjnameCtrl` viene derivata da `COleControl`. Vengono definite strutture di implementazioni di alcune funzioni membro che inizializzano, disegnano e serializzano (caricamento e salvataggio) il controllo. Vengono anche definite mappe messaggi ed eventi, nonché mappe di invio.|
|*Projname*dlg.cpp, *Projname*dlg.h|Creati se si sceglie un'applicazione basata su finestre di dialogo. I file derivano e implementano la classe di finestre di dialogo denominata `CProjnameDlg` e includono strutture di funzioni membro per inizializzare le finestre di dialogo ed eseguire le funzioni DDX (Dialog Data Exchange). In questi file, anziché in *Projname*.cpp, è presente anche la classe della finestra di dialogo Informazioni su.|
|Dlgproxy.cpp, Dlgproxy.h|In un programma basato su finestre di dialogo, file di implementazione e di intestazione per la classe proxy di automazione del progetto per la finestra di dialogo principale. Usato solo se si è scelto il supporto dell'automazione.|
|*Projname*doc.cpp, *Projname*doc.h|Derivano e implementano la classe documento, denominata `CProjnameDoc`, e includono la struttura di funzioni membro per inizializzare e serializzare (salvataggio e caricamento) un documento e per implementare la diagnostica di debug.|
|*Projname*set.h/.cpp|Creato se si crea un programma che supporta un database e contiene la classe recordset.|
|*Projname*view.cpp, *Projname*view.h|Derivano e implementano la classe di visualizzazione, denominata `CProjnameView`, usata per visualizzare e stampare i dati dei documenti. La classe `CProjnameView` viene derivata da una delle classi MFC seguenti:<br /><br />- [CEditView](../../mfc/reference/ceditview-class.md)<br />- [CFormView](../../mfc/reference/cformview-class.md)<br />- [CRecordView](../../mfc/reference/crecordview-class.md)<br />- [COleDBRecordView](../../mfc/reference/coledbrecordview-class.md)<br />- [CTreeView](../../mfc/reference/ctreeview-class.md)<br />- [CListView](../../mfc/reference/clistview-class.md)<br />- [CRichEditView](../../mfc/reference/cricheditview-class.md)<br />- [CScrollView](../../mfc/reference/cscrollview-class.md)<br />- [CView](../../mfc/reference/cview-class.md)<br />- [CHTMLView](../../mfc/reference/chtmlview-class.md)<br />- [CHTMLEditView](../../mfc/reference/chtmleditview-class.md)<br /><br /> La classe di visualizzazione del progetto contiene la struttura di funzioni membro per disegnare la visualizzazione e implementare la diagnostica di debug. Se è stato abilitato il supporto per la stampa, vengono aggiunte le voci della mappa messaggi per i messaggi relativi a comandi di stampa, impostazione della stampa e anteprima di stampa. Queste voci chiamano le funzioni membro corrispondenti nella classe di visualizzazione di base.|
|*Projname*PropPage.h, *Projname*PropPage.cpp|Dichiarano e implementano la classe `CProjnamePropPage`. `CProjnamePropPage` viene derivata da `COlePropertyPage` e viene fornita la struttura della funzione membro `DoDataExchange` per l'implementazione dello scambio e della convalida dei dati.|
|IPframe.cpp, IPframe.h|Creati se viene selezionata l'opzione Server ridotto o Server completo nella pagina **Opzioni di automazione** (passaggio 3 di 6) della procedura guidata dell'applicazione. I file derivano e implementano la classe di finestre cornice sul posto, **CInPlaceFrame**, usata quando il server è attivato sul posto da un programma contenitore.|
|Mainfrm.cpp, Mainfrm.h|Derivano la classe **CMainFrame** dal [CFrameWnd](../../mfc/reference/cframewnd-class.md) (per le applicazioni SDI) o da [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md) (per le applicazioni MDI). La classe **CMainFrame** gestisce la creazione dei pulsanti della barra degli strumenti e della barra di stato, se le opzioni corrispondenti vengono selezionate nella pagina **Opzioni applicazione** (passaggio 4 di 6) della procedura guidata dell'applicazione. Per informazioni sull'uso di **CMainFrame**, vedere [Classi di finestre cornice create dalla Creazione guidata applicazione](../../mfc/frame-window-classes-created-by-the-application-wizard.md).|
|Childfrm.cpp, Childfrm.h|Derivano la classe **CChildFrame** da [CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md). La classe **CChildFrame** viene usata per le finestre cornice di documenti MDI. Questi file vengono sempre creati se si seleziona l'opzione MDI.|

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual Studio C++](file-types-created-for-visual-cpp-projects.md)<br>
[File di intestazione e di origine di un controllo o programma ATL](atl-program-or-control-source-and-header-files.md)<br>
[Progetti CLR](files-created-for-clr-projects.md)
