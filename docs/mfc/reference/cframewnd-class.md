---
title: CFrameWnd (classe) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFrameWnd
- AFXWIN/CFrameWnd
- AFXWIN/CFrameWnd::CFrameWnd
- AFXWIN/CFrameWnd::ActivateFrame
- AFXWIN/CFrameWnd::BeginModalState
- AFXWIN/CFrameWnd::Create
- AFXWIN/CFrameWnd::CreateView
- AFXWIN/CFrameWnd::DockControlBar
- AFXWIN/CFrameWnd::EnableDocking
- AFXWIN/CFrameWnd::EndModalState
- AFXWIN/CFrameWnd::FloatControlBar
- AFXWIN/CFrameWnd::GetActiveDocument
- AFXWIN/CFrameWnd::GetActiveFrame
- AFXWIN/CFrameWnd::GetActiveView
- AFXWIN/CFrameWnd::GetControlBar
- AFXWIN/CFrameWnd::GetDockState
- AFXWIN/CFrameWnd::GetMenuBarState
- AFXWIN/CFrameWnd::GetMenuBarVisibility
- AFXWIN/CFrameWnd::GetMessageBar
- AFXWIN/CFrameWnd::GetMessageString
- AFXWIN/CFrameWnd::GetTitle
- AFXWIN/CFrameWnd::InitialUpdateFrame
- AFXWIN/CFrameWnd::InModalState
- AFXWIN/CFrameWnd::IsTracking
- AFXWIN/CFrameWnd::LoadAccelTable
- AFXWIN/CFrameWnd::LoadBarState
- AFXWIN/CFrameWnd::LoadFrame
- AFXWIN/CFrameWnd::NegotiateBorderSpace
- AFXWIN/CFrameWnd::OnBarCheck
- AFXWIN/CFrameWnd::OnContextHelp
- AFXWIN/CFrameWnd::OnSetPreviewMode
- AFXWIN/CFrameWnd::OnUpdateControlBarMenu
- AFXWIN/CFrameWnd::RecalcLayout
- AFXWIN/CFrameWnd::SaveBarState
- AFXWIN/CFrameWnd::SetActivePreviewView
- AFXWIN/CFrameWnd::SetActiveView
- AFXWIN/CFrameWnd::SetDockState
- AFXWIN/CFrameWnd::SetMenuBarState
- AFXWIN/CFrameWnd::SetMenuBarVisibility
- AFXWIN/CFrameWnd::SetMessageText
- AFXWIN/CFrameWnd::SetProgressBarPosition
- AFXWIN/CFrameWnd::SetProgressBarRange
- AFXWIN/CFrameWnd::SetProgressBarState
- AFXWIN/CFrameWnd::SetTaskbarOverlayIcon
- AFXWIN/CFrameWnd::SetTitle
- AFXWIN/CFrameWnd::ShowControlBar
- AFXWIN/CFrameWnd::ShowOwnedWindows
- AFXWIN/CFrameWnd::OnCreateClient
- AFXWIN/CFrameWnd::OnHideMenuBar
- AFXWIN/CFrameWnd::OnShowMenuBar
- AFXWIN/CFrameWnd::m_bAutoMenuEnable
- AFXWIN/CFrameWnd::rectDefault
dev_langs:
- C++
helpviewer_keywords:
- frame window classes, base class
- single document interface (SDI), frame windows
- frame windows, creating
- CFrameWnd class
ms.assetid: e2220aba-5bf4-4002-b960-fbcafcad01f1
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a82768750e6a7837bb81edd8a51847f83c294c20
ms.openlocfilehash: 06becdd593028e02d45ed68fb8fa5687e1e2dbd1
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="cframewnd-class"></a>CFrameWnd (classe)
Fornisce la funzionalità di un'interfaccia a documento singolo (SDI) di Windows sovrapposta o di una finestra cornice popup, insieme ai membri per gestire la finestra.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFrameWnd : public CWnd  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::CFrameWnd](#cframewnd)|Costruisce un oggetto `CFrameWnd`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::ActivateFrame](#activateframe)|Rende il frame visibile e disponibile per l'utente.|  
|[CFrameWnd::BeginModalState](#beginmodalstate)|Imposta la finestra cornice modale.|  
|[CFrameWnd::Create](#create)|Chiamata per creare e inizializzare la finestra cornice di Windows associata il `CFrameWnd` oggetto.|  
|[CFrameWnd::CreateView](#createview)|Crea una visualizzazione all'interno di un frame che non è derivato da `CView`.|  
|[CFrameWnd:: DockControlBar](#dockcontrolbar)|Ancora una barra di controllo.|  
|[CFrameWnd:: EnableDocking](#enabledocking)|Consente a una barra di controllo sia ancorato.|  
|[CFrameWnd::EndModalState](#endmodalstate)|Termina lo stato modale della finestra cornice. Abilita tutte le finestre disabilitate per `BeginModalState`.|  
|[CFrameWnd:: FloatControlBar](#floatcontrolbar)|Scorre una barra di controllo.|  
|[CFrameWnd::GetActiveDocument](#getactivedocument)|Restituisce l'attiva **CDocument** oggetto.|  
|[CFrameWnd::GetActiveFrame](#getactiveframe)|Restituisce l'attiva `CFrameWnd` oggetto.|  
|[CFrameWnd::GetActiveView](#getactiveview)|Restituisce l'attiva `CView` oggetto.|  
|[CFrameWnd::GetControlBar](#getcontrolbar)|Recupera la barra di controllo.|  
|[CFrameWnd::GetDockState](#getdockstate)|Recupera lo stato di ancoraggio di una finestra cornice.|  
|[CFrameWnd::GetMenuBarState](#getmenubarstate)|Recupera lo stato di visualizzazione del menu dell'applicazione MFC corrente.|  
|[CFrameWnd::GetMenuBarVisibility](#getmenubarvisibility)|Indica se il comportamento predefinito del menu dell'applicazione MFC corrente è nascosto o visibile.|  
|[CFrameWnd::GetMessageBar](#getmessagebar)|Restituisce un puntatore allo stato della barra appartenenti alla finestra cornice.|  
|[CFrameWnd:: GetMessageString](#getmessagestring)|Consente di recuperare messaggio corrispondente a un ID di comando.|  
|[CFrameWnd::GetTitle](#gettitle)|Recupera il titolo della barra di controllo correlato.|  
|[CFrameWnd::InitialUpdateFrame](#initialupdateframe)|Determina il `OnInitialUpdate` funzione membro appartenenti a tutte le visualizzazioni nella finestra cornice da chiamare.|  
|[CFrameWnd::InModalState](#inmodalstate)|Restituisce un valore che indica se è o meno una finestra cornice in uno stato modale.|  
|[CFrameWnd::IsTracking](#istracking)|Determina se la barra di divisione viene spostata.|  
|[CFrameWnd::LoadAccelTable](#loadacceltable)|Chiamata per caricare una tabella di tasti di scelta rapida.|  
|[CFrameWnd:: LoadBarState](#loadbarstate)|Chiamata eseguita per ripristinare le impostazioni della barra di controllo.|  
|[CFrameWnd::LoadFrame](#loadframe)|Chiamata eseguita per creare dinamicamente una finestra cornice da informazioni sulle risorse.|  
|[CFrameWnd::NegotiateBorderSpace](#negotiateborderspace)|Negozia spazio di bordo della finestra cornice.|  
|[CFrameWnd::OnBarCheck](#onbarcheck)|Chiamato ogni volta che viene eseguita un'azione sulla barra di controllo specificato.|  
|[CFrameWnd::OnContextHelp](#oncontexthelp)|Gestisce MAIUSC + F1 Guida per gli elementi sul posto.|  
|[CFrameWnd::OnSetPreviewMode](#onsetpreviewmode)|Imposta finestra cornice principale dell'applicazione in e da una modalità di anteprima di stampa.|  
|[CFrameWnd::OnUpdateControlBarMenu](#onupdatecontrolbarmenu)|Chiamato dal framework quando viene aggiornato il menu associato.|  
|[RecalcLayout](#recalclayout)|Riposiziona le barre di controllo del `CFrameWnd` oggetto.|  
|[SaveBarState](#savebarstate)|Chiamata eseguita per salvare le impostazioni della barra di controllo.|  
|[CFrameWnd::SetActivePreviewView](#setactivepreviewview)|Definisce la vista specificata per la visualizzazione attiva per l'anteprima avanzata.|  
|[CFrameWnd::SetActiveView](#setactiveview)|Imposta attivo `CView` oggetto.|  
|[CFrameWnd::SetDockState](#setdockstate)|Chiamata eseguita per ancorare la finestra cornice nella finestra principale.|  
|[CFrameWnd::SetMenuBarState](#setmenubarstate)|Imposta lo stato di visualizzazione del menu nell'applicazione MFC corrente visualizzato o nascosto.|  
|[CFrameWnd::SetMenuBarVisibility](#setmenubarvisibility)|Imposta il comportamento predefinito del menu dell'applicazione MFC corrente per essere nascosto o visibile.|  
|[CFrameWnd::SetMessageText](#setmessagetext)|Imposta il testo della barra di stato standard.|  
|[CFrameWnd::SetProgressBarPosition](#setprogressbarposition)|Imposta la posizione corrente per Windows 7 indicatore di stati visualizzati sulla barra delle applicazioni.|  
|[CFrameWnd::SetProgressBarRange](#setprogressbarrange)|Imposta l'intervallo per Windows 7 indicatore di stati visualizzati sulla barra delle applicazioni.|  
|[CFrameWnd::SetProgressBarState](#setprogressbarstate)|Imposta il tipo e lo stato dell'indicatore di stato visualizzato su un pulsante della barra delle applicazioni.|  
|[CFrameWnd::SetTaskbarOverlayIcon](#settaskbaroverlayicon)|Di overload. Si applica una sovrapposizione a un pulsante della barra delle applicazioni per indicare lo stato dell'applicazione o una notifica all'utente.|  
|[CFrameWnd::SetTitle](#settitle)|Imposta il titolo della barra di controllo correlato.|  
|[CFrameWnd::ShowControlBar](#showcontrolbar)|Chiamata eseguita per visualizzare la barra di controllo.|  
|[CFrameWnd::ShowOwnedWindows](#showownedwindows)|Mostra tutte le finestre discendono di `CFrameWnd` oggetto.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::OnCreateClient](#oncreateclient)|Crea una finestra del client per il frame.|  
|[CFrameWnd::OnHideMenuBar](#onhidemenubar)|Chiamato prima che il menu dell'applicazione MFC corrente è nascosto.|  
|[CFrameWnd::OnShowMenuBar](#onshowmenubar)|Chiamato prima che venga visualizzato il menu dell'applicazione MFC corrente.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::m_bAutoMenuEnable](#m_bautomenuenable)|I controlli automatici, abilitare e disabilitare la funzionalità per le voci di menu.|  
|[CFrameWnd::rectDefault](#rectdefault)|Passare la variabile statica `CRect` come parametro durante la creazione di un `CFrameWnd` oggetto per consentire a Windows di scegliere le dimensioni iniziali e la posizione della finestra.|  
  
## <a name="remarks"></a>Note  
 Per creare una finestra cornice utili per l'applicazione, derivare una classe da `CFrameWnd`. Aggiungere variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.  
  
 Esistono tre modi per creare una finestra cornice:  
  
-   Costruire direttamente tramite [crea](#create).  
  
-   Costruire direttamente tramite [LoadFrame](#loadframe).  
  
-   Costruire indirettamente tramite un modello di documento.  
  
 Prima di chiamare uno **crea** o `LoadFrame`, è necessario creare l'oggetto finestra cornice nell'heap mediante C++ **nuova** operatore. Prima di chiamare **crea**, è anche possibile registrare una classe di finestra con il [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) funzione globale per impostare gli stili di icona e la classe per il frame.  
  
 Utilizzare il **crea** funzione membro per passare i parametri di creazione del frame immediati come argomenti.  
  
 `LoadFrame`richiede meno argomenti di **crea**e recupera la maggior parte dei relativi valori predefiniti da risorse, tra cui didascalia del frame, icona, tabella di tasti di scelta rapida e menu. Deve essere accessibile da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, **IDR_MAINFRAME**).  
  
 Quando un `CFrameWnd` oggetto contiene documenti e visualizzazioni, vengono creati indirettamente dal framework anziché direttamente dal programmatore. Il `CDocTemplate` oggetto Orchestra la creazione del frame, la creazione delle viste che lo contiene e la connessione delle visualizzazioni per il documento appropriato. I parametri del `CDocTemplate` costruttore specificare il `CRuntimeClass` delle tre classi coinvolti (documenti, frame e visualizzazione). Oggetto `CRuntimeClass` oggetto viene usato dal framework per creare in modo dinamico i frame di nuovo quando l'utente specificato (ad esempio, usando il comando File nuovo o il comando nuova finestra MDI (interfaccia) di documento più).  
  
 Una classe finestra cornice derivata da `CFrameWnd` deve essere dichiarato con `DECLARE_DYNCREATE` affinché sopra `RUNTIME_CLASS` meccanismo per funzionare correttamente.  
  
 Oggetto `CFrameWnd` contiene le implementazioni predefinite per eseguire le funzioni seguenti di una finestra principale in una tipica applicazione per Windows:  
  
-   Oggetto `CFrameWnd` finestra cornice tiene traccia di una vista attualmente attiva che è indipendente dalla finestra attiva di Windows o lo stato attivo di input corrente. Quando viene riattivato il frame, la visualizzazione attiva notifica chiamando `CView::OnActivateView`.  
  
-   Comando messaggi e molti messaggi di notifica di frame comuni, inclusi quelli gestiti dal `OnSetFocus`, `OnHScroll`, e `OnVScroll` funzioni di `CWnd`, vengono delegate da un `CFrameWnd` finestra cornice per la visualizzazione attualmente attiva.  
  
-   La visualizzazione attualmente attiva (o una finestra cornice MDI figlio attiva nel caso di una finestra cornice MDI) può determinare la didascalia della finestra cornice. Questa funzionalità può essere disabilitata disattivando il **FWS_ADDTOTITLE** bit di stile della finestra cornice.  
  
-   Oggetto `CFrameWnd` finestra cornice gestisce il posizionamento di barre di controllo, viste e altre finestre figlio all'interno dell'area client della finestra cornice. Una finestra cornice esegue inoltre l'aggiornamento di tempo di inattività della barra degli strumenti e altri pulsanti della barra di controllo. Oggetto `CFrameWnd` finestra cornice contiene anche le implementazioni predefinite di comandi per l'attivazione e disattivazione di attivare e disattivare la barra degli strumenti e barra di stato.  
  
-   Oggetto `CFrameWnd` finestra cornice gestisce la barra dei menu principale. Quando viene visualizzato un menu a comparsa, la finestra cornice viene utilizzato il **UPDATE_COMMAND_UI** meccanismo per determinare quali elementi di menu devono essere abilitati, disabilitati oppure selezionate. Quando l'utente seleziona una voce di menu, la finestra cornice Aggiorna sulla barra di stato con la stringa di messaggio per il comando.  
  
-   Oggetto `CFrameWnd` finestra cornice contiene una tabella di tasti di scelta rapida facoltativo che converte automaticamente i tasti di scelta rapida.  
  
-   Oggetto `CFrameWnd` finestra cornice dispone di un ID della Guida facoltativo impostato con `LoadFrame` utilizzato per la Guida sensibile al contesto. Una finestra cornice è il principale orchestrator degli Stati semimodali, ad esempio la Guida sensibile al contesto (MAIUSC + F1) e modalità di anteprima di stampa.  
  
-   Oggetto `CFrameWnd` finestra cornice verrà aperto un file in File Manager trascinamento nella finestra cornice. Se un'estensione di file è stata registrata e associata all'applicazione, la finestra cornice risponde alle dynamic data exchange (DDE) richiesta di apertura che si verifica quando l'utente apre un file di dati in File Manager o la **ShellExecute** viene chiamata la funzione di Windows.  
  
-   Se la finestra cornice finestra principale dell'applicazione (vale a dire `CWinThread::m_pMainWnd`), quando l'utente chiude l'applicazione, la finestra cornice richiesto all'utente di salvare i documenti modificati (per `OnClose` e `OnQueryEndSession`).  
  
-   Se la finestra cornice è la finestra principale dell'applicazione, la finestra cornice è il contesto per l'esecuzione di WinHelp. Chiudere la finestra cornice verrà arrestato WINHELP. EXE se all'avvio della Guida per questa applicazione.  
  
 Non utilizzare C++ **eliminare** operatore da eliminare definitivamente una finestra cornice. In alternativa, usare `CWnd::DestroyWindow` . Il `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l'oggetto C++ quando la finestra viene eliminata. Quando l'utente chiude la finestra cornice, il valore predefinito `OnClose` gestore verrà chiamato `DestroyWindow`.  
  
 Per ulteriori informazioni su `CFrameWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CFrameWnd`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="activateframe"></a>CFrameWnd::ActivateFrame  
 Chiamare questa funzione membro per attivare e ripristinare la finestra cornice in modo che sia visibile e disponibile per l'utente.  
  
```  
virtual void ActivateFrame(int nCmdShow = -1);
```  
  
### <a name="parameters"></a>Parametri  
 `nCmdShow`  
 Specifica il parametro da passare al [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow). Per impostazione predefinita, il frame viene visualizzato e ripristinato correttamente.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene chiamata in genere dopo un evento di interfaccia non utente, ad esempio un DDE, OLE o altri eventi che è possono visualizzare la finestra cornice o il relativo contenuto all'utente.  
  
 L'implementazione predefinita attiva il frame e viene visualizzato nella parte superiore dello Z-order e, se necessario, esegue la stessa procedura per la finestra cornice principale dell'applicazione.  
  
 Eseguire l'override di questa funzione membro per modificare la modalità di attivazione di un frame. Ad esempio, è possibile forzare finestre figlio MDI per essere ingrandita. Aggiungere le funzionalità appropriate, quindi chiamare la versione della classe base con un'esplicita `nCmdShow`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n. 1](../../mfc/reference/codesnippet/cpp/cframewnd-class_1.cpp)]  
  
##  <a name="beginmodalstate"></a>CFrameWnd::BeginModalState  
 Chiamare questa funzione membro per impostare lo stato modale per una finestra cornice.  
  
```  
virtual void BeginModalState();
```  
  
##  <a name="cframewnd"></a>CFrameWnd::CFrameWnd  
 Costruisce un `CFrameWnd` dell'oggetto, ma non creare una finestra cornice visibile.  
  
```  
CFrameWnd();
```  
  
### <a name="remarks"></a>Note  
 Chiamare **crea** per creare una finestra visibile.  
  
##  <a name="create"></a>CFrameWnd::Create  
 Chiamata per creare e inizializzare la finestra cornice di Windows associata il `CFrameWnd` oggetto.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle = WS_OVERLAPPEDWINDOW,  
    const RECT& rect = rectDefault,  
    CWnd* pParentWnd = NULL,  
    LPCTSTR lpszMenuName = NULL,  
    DWORD dwExStyle = 0,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con il `AfxRegisterWndClass` funzione globale o **RegisterClass** funzione di Windows. Se **NULL**, utilizza il valore predefinito `CFrameWnd` attributi.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.  
  
 `dwStyle`  
 Specifica la finestra [stile](../../mfc/reference/window-styles.md) attributi. Includere il **FWS_ADDTOTITLE** stile se si desidera barra del titolo per il nome del documento rappresentato nella finestra viene visualizzata automaticamente.  
  
 `rect`  
 Specifica le dimensioni e la posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione della nuova finestra.  
  
 `pParentWnd`  
 Specifica la finestra padre di questa finestra cornice. Questo parametro deve essere **NULL** per finestre cornice di primo livello.  
  
 *lpszMenuName*  
 Identifica il nome della risorsa di menu da utilizzare con la finestra. Utilizzare **MAKEINTRESOURCE** se il menu ha un ID integer anziché una stringa. Questo parametro può essere **NULL**.  
  
 `dwExStyle`  
 Specifica la finestra estesi [stile](../../mfc/reference/extended-window-styles.md) attributi.  
  
 `pContext`  
 Specifica un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Costruire un `CFrameWnd` oggetto in due passaggi. In primo luogo, richiamare il costruttore, che costruisce il `CFrameWnd` e quindi chiamare **crea**, che crea la finestra cornice di Windows e lo collega al `CFrameWnd` oggetto. **Creare** Inizializza il nome di classe della finestra e il nome di finestra e registra i valori predefiniti per lo stile, il relativo padre e menu associata.  
  
 Utilizzare `LoadFrame` anziché **crea** per caricare la finestra cornice da una risorsa, anziché specificare gli argomenti.  
  
##  <a name="createview"></a>CFrameWnd::CreateView  
 Chiamare `CreateView` per creare una visualizzazione all'interno di un frame.  
  
```  
CWnd* CreateView(
    CCreateContext* pContext,  
    UINT nID = AFX_IDW_PANE_FIRST);
```  
  
### <a name="parameters"></a>Parametri  
 `pContext`  
 Specifica il tipo di documento e visualizzazione.  
  
 `nID`  
 Il numero di ID di una vista.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a un `CWnd` oggetto in caso di esito positivo; in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione membro per creare "visualizzazioni" che non sono `CView`-derivate all'interno di un frame. Dopo la chiamata `CreateView`, manualmente deve impostare la visualizzazione attiva e impostarla per essere visibile, queste attività non viene eseguite automaticamente da `CreateView`.  
  
##  <a name="dockcontrolbar"></a>CFrameWnd:: DockControlBar  
 Fa sì che una barra di controllo sia ancorato alla finestra cornice.  
  
```  
void DockControlBar(
    CControlBar* pBar,  
    UINT nDockBarID = 0,  
    LPCRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pBar`  
 Punta alla barra di controllo sia ancorato.  
  
 `nDockBarID`  
 Determina quali lati della finestra cornice da considerare per ancoraggio. Può essere 0, o uno o più delle operazioni seguenti:  
  
- `AFX_IDW_DOCKBAR_TOP`Ancorare il lato superiore della finestra cornice.  
  
- **AFX_IDW_DOCKBAR_BOTTOM** Dock al lato inferiore della finestra cornice.  
  
- `AFX_IDW_DOCKBAR_LEFT`Ancorati al lato sinistro della finestra cornice.  
  
- `AFX_IDW_DOCKBAR_RIGHT`Ancorati al lato destro della finestra cornice.  
  
 Se è 0, la barra di controllo può essere ancorata a qualsiasi lato attivato per l'ancoraggio della finestra cornice di destinazione.  
  
 `lpRect`  
 Determina, in coordinate dello schermo, in cui la barra di controllo finestra risulterà ancorata in un'area della finestra cornice di destinazione.  
  
### <a name="remarks"></a>Note  
 La barra di controllo sarà ancorata a uno dei lati della finestra cornice specificata nelle chiamate a entrambi [CControlBar:: EnableDocking](../../mfc/reference/ccontrolbar-class.md#enabledocking) e [CFrameWnd:: EnableDocking](#enabledocking). Il lato scelto è determinato dal `nDockBarID`.  
  
##  <a name="enabledocking"></a>CFrameWnd:: EnableDocking  
 Chiamare questa funzione per abilitare le barre di controllo ancorabile in una finestra cornice.  
  
```  
void EnableDocking(DWORD dwDockStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `dwDockStyle`  
 Specifica i lati della finestra cornice possono fungere da siti per le barre di controllo di ancoraggio. Può trattarsi di uno o più delle operazioni seguenti:  
  
- `CBRS_ALIGN_TOP`Consente di ancoraggio nella parte superiore dell'area client.  
  
- `CBRS_ALIGN_BOTTOM`Consente di ancoraggio nella parte inferiore dell'area client.  
  
- `CBRS_ALIGN_LEFT`Consente di ancoraggio sul lato sinistro dell'area client.  
  
- `CBRS_ALIGN_RIGHT`Consente di ancoraggio sul lato destro dell'area client.  
  
- `CBRS_ALIGN_ANY`Consente di ancoraggio su qualsiasi lato dell'area client.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, le barre di controllo saranno ancorate a un lato della finestra cornice nell'ordine seguente: superiore, inferiore, sinistra, destro.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [CToolBar:: Create](../../mfc/reference/ctoolbar-class.md#create).  
  
##  <a name="endmodalstate"></a>CFrameWnd::EndModalState  
 Chiamare questa funzione membro per cambiare lo stato di una finestra cornice da modale a non modale.  
  
```  
virtual void EndModalState();
```  
  
### <a name="remarks"></a>Note  
 `EndModalState`Abilita tutte le finestre disabilitate per [BeginModalState](#beginmodalstate).  
  
##  <a name="floatcontrolbar"></a>CFrameWnd:: FloatControlBar  
 Chiamare questa funzione per determinare una barra di controllo non è ancorato alla finestra cornice.  
  
```  
void FloatControlBar(
    CControlBar* pBar,  
    CPoint point,  
    DWORD dwStyle = CBRS_ALIGN_TOP);
```  
  
### <a name="parameters"></a>Parametri  
 `pBar`  
 Punta a barra di controllo è resa mobile.  
  
 `point`  
 Il percorso, nelle coordinate dello schermo, in cui verrà inserito nell'angolo superiore sinistro della barra di controllo.  
  
 `dwStyle`  
 Specifica se allineare la barra di controllo in senso orizzontale o verticale all'interno della nuova finestra cornice. Può essere uno dei seguenti:  
  
- `CBRS_ALIGN_TOP`Imposta l'orientamento verticale la barra di controllo.  
  
- `CBRS_ALIGN_BOTTOM`Imposta l'orientamento verticale la barra di controllo.  
  
- `CBRS_ALIGN_LEFT`Imposta l'orientamento orizzontale la barra di controllo.  
  
- `CBRS_ALIGN_RIGHT`Imposta l'orientamento orizzontale la barra di controllo.  
  
 Se vengono passati gli stili che specifica l'orientamento orizzontale e verticale, la barra degli strumenti sarà orientato orizzontalmente.  
  
### <a name="remarks"></a>Note  
 In genere, questa operazione viene eseguita all'avvio dell'applicazione quando il programma in corso il ripristino delle impostazioni dall'esecuzione precedente.  
  
 Questa funzione viene chiamata dal framework quando l'utente fa sì che un'operazione di rilascio per rilasciare il pulsante sinistro del mouse mentre si trascina la barra di controllo su un percorso che non è disponibile per l'ancoraggio.  
  
##  <a name="getactivedocument"></a>CFrameWnd::GetActiveDocument  
 Chiamare questa funzione membro per ottenere un puntatore all'oggetto corrente **CDocument** collegato alla visualizzazione attiva corrente.  
  
```  
virtual CDocument* GetActiveDocument();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto corrente [CDocument](../../mfc/reference/cdocument-class.md). Se è presente alcun documento corrente, restituisce **NULL**.  
  
##  <a name="getactiveframe"></a>CFrameWnd::GetActiveFrame  
 Chiamare questa funzione membro per ottenere un puntatore a attivo più finestra figlio MDI (interfaccia) del documento di una finestra cornice MDI.  
  
```  
virtual CFrameWnd* GetActiveFrame();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra figlio MDI attiva. Se l'applicazione è un'applicazione SDI o la finestra cornice MDI non è attivo alcun documento, l'operatore implicito **questo** puntatore sarà restituito.  
  
### <a name="remarks"></a>Note  
 Se non è presente alcun elemento figlio MDI attivo o l'applicazione è un'interfaccia a documento singolo (SDI), l'operatore implicita **questo** puntatore viene restituito.  
  
##  <a name="getactiveview"></a>CFrameWnd::GetActiveView  
 Chiamare questa funzione membro per ottenere un puntatore per la visualizzazione attiva (se presente) collegato a una finestra cornice ( `CFrameWnd`).  
  
```  
CView* GetActiveView() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore all'oggetto corrente [CView](../../mfc/reference/cview-class.md). Se è presente alcuna visualizzazione corrente, restituisce **NULL**.  
  
### <a name="remarks"></a>Note  
 Questa funzione restituisce **NULL** quando viene chiamato per una finestra cornice principale MDI ( `CMDIFrameWnd`). In un'applicazione MDI, la finestra cornice principale MDI non dispone di una vista in cui è associata. Al contrario, ogni finestra figlio ( `CMDIChildWnd`) ha uno o più visualizzazioni associate. È possibile ottenere la visualizzazione attiva in un'applicazione MDI, ricerca prima finestra figlio MDI attiva e quindi individuare la visualizzazione attiva per tale finestra figlio. La finestra figlio MDI attiva è reperibile chiamando la funzione `MDIGetActive` o **GetActiveFrame** come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFCWindowing n. 2](../../mfc/reference/codesnippet/cpp/cframewnd-class_2.cpp)]  
  
##  <a name="getcontrolbar"></a>CFrameWnd::GetControlBar  
 Chiamare `GetControlBar` per accedere alla barra di controllo è associata all'ID.  
  
```  
CControlBar* GetControlBar(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 Numero di ID di una barra di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a barra di controllo è associato all'ID.  
  
### <a name="remarks"></a>Note  
 Il `nID` parametro fa riferimento all'identificatore univoco passato al **crea** metodo della barra di controllo. Per ulteriori informazioni sulle barre di controllo, vedere l'argomento relativo alla [barre di controllo](../../mfc/control-bars.md).  
  
 `GetControlBar`Restituisce la barra di controllo anche se non è mobile e pertanto non è attualmente una finestra figlio del frame.  
  
##  <a name="getdockstate"></a>CFrameWnd::GetDockState  
 Chiamare questa funzione membro per archiviare informazioni sullo stato delle barre di controllo della finestra cornice in un `CDockState` oggetto.  
  
```  
void GetDockState(CDockState& state) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `state`  
 Contiene lo stato corrente della finestra cornice barre di controllo al momento della restituzione.  
  
### <a name="remarks"></a>Note  
 È quindi possibile scrivere il contenuto di `CDockState` all'utilizzo di archiviazione `CDockState::SaveState` o `Serialize`. Se in seguito si desidera ripristinare le barre di controllo a uno stato precedente, è possibile caricare lo stato con `CDockState::LoadState` o `Serialize`, quindi chiamare `SetDockState` per applicare lo stato precedente alle barre di controllo della finestra cornice.  
  
##  <a name="getmenubarstate"></a>CFrameWnd::GetMenuBarState  
 Recupera lo stato di visualizzazione del menu dell'applicazione MFC corrente.  
  
```  
virtual DWORD GetMenuBarState();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito può avere i valori seguenti:  
  
-   AFX_MBS_VISIBLE (0x01) - menu è visibile.  
  
-   AFX_MBS_HIDDEN (0x02) - menu è nascosto.  
  
### <a name="remarks"></a>Note  
 Se si verifica un errore di runtime, questo metodo effettua un'asserzione in modalità di Debug e genera un'eccezione derivata dal [CException](../../mfc/reference/cexception-class.md) classe.  
  
##  <a name="getmenubarvisibility"></a>CFrameWnd::GetMenuBarVisibility  
 Indica se lo stato predefinito del menu dell'applicazione MFC corrente è visibile o nascosto.  
  
```  
virtual DWORD CFrameWnd::GetMenuBarVisibility();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce uno dei valori seguenti:  
  
-   AFX_MBV_KEEPVISIBLE (0x01) - viene visualizzato il menu affatto volte e in base al valore predefinito è attivo.  
  
-   AFX_MBV_DISPLAYONFOCUS (0x02) - menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto ALT per visualizzare il menu e assegnargli lo stato attivo. Se il menu viene visualizzato, premere il tasto ALT o ESC per nasconderlo.  
  
-   AFX_MBV_ DISPLAYONFOCUS (0X02) | AFX_MBV_DISPLAYONF10 (0x04) (combinazione bit per bit (OR)) - menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto F10 per visualizzare il menu e assegnargli lo stato attivo. Se il menu viene visualizzato, premere F10 per attivare o disattivare lo stato attivo o disattivare il menu. Il menu viene visualizzato solo quando si preme il tasto ALT o ESC per nasconderlo.  
  
### <a name="remarks"></a>Note  
 Se si verifica un errore di runtime, questo metodo effettua un'asserzione in modalità di Debug e genera un'eccezione derivata dal [CException](../../mfc/reference/cexception-class.md) classe.  
  
##  <a name="getmessagebar"></a>CFrameWnd::GetMessageBar  
 Chiamare questa funzione membro per ottenere un puntatore a barra di stato.  
  
```  
virtual CWnd* GetMessageBar();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra della barra di stato.  
  
##  <a name="getmessagestring"></a>CFrameWnd:: GetMessageString  
 Eseguire l'override di questa funzione per fornire stringhe personalizzate per gli ID di comando.  
  
```  
virtual void GetMessageString(
    UINT nID,  
    CString& rMessage) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 ID di risorsa del messaggio desiderato.  
  
 `rMessage`  
 `CString`oggetto in cui inserire il messaggio.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita carica semplicemente la stringa specificata da `nID` dal file di risorse. Questa funzione viene chiamata dal framework quando è necessario aggiornare la stringa di messaggio nella barra di stato.  
  
##  <a name="gettitle"></a>CFrameWnd::GetTitle  
 Recupera il titolo dell'oggetto window.  
  
```  
CString GetTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente il titolo dell'oggetto finestra corrente.  
  
##  <a name="initialupdateframe"></a>CFrameWnd::InitialUpdateFrame  
 Chiamare **IntitialUpdateFrame** dopo aver creato un nuovo frame con **crea**.  
  
```  
void InitialUpdateFrame(
    CDocument* pDoc,  
    BOOL bMakeVisible);
```  
  
### <a name="parameters"></a>Parametri  
 `pDoc`  
 Punta al documento a cui è associata alla finestra cornice. Può essere **NULL**.  
  
 `bMakeVisible`  
 Se **TRUE**, indica che il frame deve diventare visibile e attivo. Se **FALSE**, non i discendenti vengono rese visibili.  
  
### <a name="remarks"></a>Note  
 In questo modo tutte le visualizzazioni in tale finestra cornice per ricevere i relativi `OnInitialUpdate` chiamate.  
  
 Inoltre, se non esisteva in precedenza una visualizzazione attiva, la visualizzazione della finestra cornice principale viene reso attiva. La visualizzazione primaria è una vista con un ID figlio **AFX_IDW_PANE_FIRST**. Infine, la finestra cornice viene reso visibile se `bMakeVisible` è diverso da zero. Se `bMakeVisible` è 0, l'attivo e stato di visualizzazione della finestra cornice rimarrà invariate. Non è necessario chiamare questa funzione quando si utilizza l'implementazione del framework di nuovi File e apertura File.  
  
##  <a name="inmodalstate"></a>CFrameWnd::InModalState  
 Chiamare questa funzione membro per verificare se una finestra cornice è modale o non modale.  
  
```  
BOOL InModalState() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se Sì. in caso contrario 0.  
  
##  <a name="istracking"></a>CFrameWnd::IsTracking  
 Chiamare questa funzione membro per determinare se la barra di divisione nella finestra viene spostata.  
  
```  
BOOL IsTracking() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un'operazione di divisione è in corso. in caso contrario 0.  
  
##  <a name="loadacceltable"></a>CFrameWnd::LoadAccelTable  
 Chiamata eseguita per caricare la tabella di tasti di scelta rapida specificato.  
  
```  
BOOL LoadAccelTable(LPCTSTR lpszResourceName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszResourceName`  
 Identifica il nome della risorsa tasti di scelta rapida. Utilizzare **MAKEINTRESOURCE** se la risorsa viene identificata con un ID di tipo integer.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la tabella di tasti di scelta rapida è stata caricata; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Solo una tabella può essere caricata contemporaneamente.  
  
 Tabelle di tasti di scelta rapida caricate dalle risorse vengono liberate automaticamente alla chiusura dell'applicazione.  
  
 Se si chiama `LoadFrame` per creare la finestra cornice, il framework carica una tabella di tasti di scelta rapida con le risorse di menu e l'icona e una chiamata successiva a questa funzione membro non è quindi necessaria.  
  
##  <a name="loadbarstate"></a>CFrameWnd:: LoadBarState  
 Chiamare questa funzione per ripristinare le impostazioni di ogni barra di controllo appartiene alla finestra cornice.  
  
```  
void LoadBarState(LPCTSTR lpszProfileName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Nome di una sezione nel file di inizializzazione (INI) o una chiave del Registro di sistema in cui sono memorizzate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Informazioni di ripristino includono visibilità, l'orientamento orizzontale o verticale, lo stato di ancoraggio e posizione della barra di controllo.  
  
 Le impostazioni da ripristinare devono essere scritto nel Registro di sistema prima di chiamare `LoadBarState`. Scrivere le informazioni del Registro di sistema chiamando [CWinApp::SetRegistryKey](../../mfc/reference/cwinapp-class.md#setregistrykey). Scrivere le informazioni nel file INI chiamando [SaveBarState](#savebarstate).  
  
##  <a name="loadframe"></a>CFrameWnd::LoadFrame  
 Chiamata eseguita per creare dinamicamente una finestra cornice da informazioni sulle risorse.  
  
```  
virtual BOOL LoadFrame(
    UINT nIDResource,  
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,  
    CWnd* pParentWnd = NULL,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDResource`  
 L'ID delle risorse condivise associato alla finestra cornice.  
  
 *dwDefaultStyle*  
 Il frame [stile](../../mfc/reference/window-styles.md). Includere il **FWS_ADDTOTITLE** stile se si desidera barra del titolo per il nome del documento rappresentato nella finestra viene visualizzata automaticamente.  
  
 `pParentWnd`  
 Puntatore all'elemento padre del frame.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura. Questo parametro può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 Costruire un `CFrameWnd` oggetto in due passaggi. In primo luogo, richiamare il costruttore, che costruisce il `CFrameWnd` e quindi chiamare `LoadFrame`, che carica la finestra cornice di Windows e le risorse associate e si collega la finestra cornice per la `CFrameWnd` oggetto. Il `nIDResource` parametro specifica il menu, la tabella di tasti di scelta rapida, l'icona e la risorsa di stringa del titolo della finestra cornice.  
  
 Utilizzare il **crea** funzione membro anziché `LoadFrame` quando si desidera specificare tutti i parametri di creazione della finestra cornice.  
  
 Il framework chiama `LoadFrame` quando crea una finestra cornice utilizzando un oggetto modello di documento.  
  
 Il framework utilizza il `pContext` argomento per specificare gli oggetti da collegare alla finestra cornice, inclusi gli eventuali oggetti di visualizzazione di contenuti. È possibile impostare il `pContext` argomento **NULL** quando si chiama `LoadFrame`.  
  
##  <a name="m_bautomenuenable"></a>CFrameWnd::m_bAutoMenuEnable  
 Quando questo membro dati è abilitato (ovvero l'impostazione predefinita), voci di menu che non dispone `ON_UPDATE_COMMAND_UI` o `ON_COMMAND` gestori verranno disabilitati automaticamente quando l'utente preleva un menu a discesa.  
  
```  
BOOL m_bAutoMenuEnable;  
```  
  
### <a name="remarks"></a>Note  
 Voci di menu che hanno un `ON_COMMAND` gestore ma non `ON_UPDATE_COMMAND_UI` gestore verrà attivato automaticamente.  
  
 Quando questo membro dati è impostato, le voci di menu vengono abilitate automaticamente nello stesso modo che siano abilitati i pulsanti della barra degli strumenti.  
  
> [!NOTE]
> `m_bAutoMenuEnable`non ha effetto sulle voci di menu di primo livello.  
  
 Questo membro dati semplifica l'implementazione di comandi facoltativi in base alla selezione corrente e riduce la necessità di scrivere `ON_UPDATE_COMMAND_UI` gestori eventi per l'abilitazione e disabilitazione voci di menu.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n. 3](../../mfc/reference/codesnippet/cpp/cframewnd-class_3.cpp)]  
  
##  <a name="negotiateborderspace"></a>CFrameWnd::NegotiateBorderSpace  
 Chiamare questa funzione membro per la negoziazione di spazio di bordo in una finestra cornice durante l'attivazione sul posto OLE.  
  
```  
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,  
    LPRECT lpRectBorder);
```  
  
### <a name="parameters"></a>Parametri  
 *nBorderCmd*  
 Contiene uno dei seguenti valori dal **enum BorderCmd**:  
  
- **borderGet** = 1  
  
- **borderRequest** = 2  
  
- **borderSet** = 3  
  
 `lpRectBorder`  
 Puntatore a un [RECT](../../mfc/reference/rect-structure1.md) struttura o un [CRect](../../atl-mfc-shared/reference/crect-class.md) oggetto che specifica le coordinate del bordo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro è il **CFrameWnd** implementazione della negoziazione di spazio di bordo OLE.  
  
##  <a name="onbarcheck"></a>CFrameWnd::OnBarCheck  
 Chiamato ogni volta che viene eseguita un'azione sulla barra di controllo specificato.  
  
```  
afx_msg BOOL OnBarCheck(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'ID del controllo barra attualmente visualizzata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la barra di controllo esistente; in caso contrario 0.  
  
##  <a name="oncontexthelp"></a>CFrameWnd::OnContextHelp  
 Gestisce MAIUSC + F1 Guida per gli elementi sul posto.  
  
```  
afx_msg void OnContextHelp();
```  
  
### <a name="remarks"></a>Note  
 Per abilitare la Guida sensibile al contesto, è necessario aggiungere un  
  
 [!code-cpp[NVC_MFCDocViewSDI n. 16](../../mfc/codesnippet/cpp/cframewnd-class_4.cpp)]  
  
 istruzione per il `CFrameWnd` classe mappa dei messaggi e anche aggiungere una voce della tabella di tasti di scelta rapida, in genere MAIUSC + F1, per abilitare questa funzione membro.  
  
 Se l'applicazione è un contenitore di OLE, si `OnContextHelp` inserisce tutti gli elementi sul posto contenuti all'interno dell'oggetto finestra cornice in modalità della Guida. Assume la forma di una freccia e un punto interrogativo e l'utente possono quindi spostare il puntatore del mouse e premere il pulsante sinistro del mouse per selezionare una finestra di dialogo, finestra, menu o pulsante di comando. Questa funzione membro chiama la funzione Windows `WinHelp` con il contesto dell'oggetto sotto il cursore.  
  
##  <a name="oncreateclient"></a>CFrameWnd::OnCreateClient  
 Chiamato dal framework durante l'esecuzione di `OnCreate`.  
  
```  
virtual BOOL OnCreateClient(
    LPCREATESTRUCT lpcs,  
    CCreateContext* pContext);
```  
  
### <a name="parameters"></a>Parametri  
 `lpcs`  
 Un puntatore a un Windows [CREATESTRUCT](../../mfc/reference/createstruct-structure.md) struttura.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Mai chiamare questa funzione.  
  
 L'implementazione predefinita di questa funzione crea un `CView` oggetto dalle informazioni fornite `pContext`, se possibile.  
  
 Eseguire l'override di questa funzione per eseguire l'override di valori passati di `CCreateContext` dell'oggetto o per modificare la funzionalità dei controlli nell'area della finestra cornice principale client vengono creati. Il `CCreateContext` sono descritti i membri che è possibile eseguire l'override nel [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) classe.  
  
> [!NOTE]
>  Non sostituire i valori passati di `CREATESTRUCT` struttura. Sono solo a scopo informativo. Se si desidera sostituire il rettangolo della finestra iniziale, ad esempio, eseguire l'override di `CWnd` funzione membro [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow).  
  
##  <a name="onhidemenubar"></a>CFrameWnd::OnHideMenuBar  
 Questa funzione viene chiamata quando il sistema sta per nascondere la barra dei menu nell'applicazione MFC corrente.  
  
```  
virtual void OnHideMenuBar();
```  
  
### <a name="remarks"></a>Note  
 Questo gestore consente all'applicazione di eseguire azioni personalizzate quando il sistema sta per nascondere il menu. È possibile impedire che il menu nascoste, ma è possibile, ad esempio, chiamare altri metodi per recuperare lo stato o lo stile di menu.  
  
##  <a name="onsetpreviewmode"></a>CFrameWnd::OnSetPreviewMode  
 Chiamare questa funzione membro per impostare la finestra cornice principale dell'applicazione nella modalità di anteprima di stampa ed e al di fuori di essa.  
  
```  
virtual void OnSetPreviewMode(
    BOOL bPreview,  
    CPrintPreviewState* pState);
```  
  
### <a name="parameters"></a>Parametri  
 *bPreview*  
 Specifica se inviare o meno posizionare l'applicazione in modalità anteprima di stampa. Impostare su **TRUE** da inserire in anteprima di stampa, **FALSE** per annullare la modalità di anteprima.  
  
 `pState`  
 Un puntatore a un **CPrintPreviewState** struttura.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita disabilita tutte le barre degli strumenti standard e nasconde il menu principale e la finestra client principale. Finestre cornice MDI questo diventa le finestre cornice SDI temporanee.  
  
 Eseguire l'override di questa funzione membro per personalizzare il nascondere e mostrare di barre di controllo e altre parti della finestra cornice durante l'anteprima di stampa. Chiamare l'implementazione della classe base all'interno della versione sottoposta a override.  
  
##  <a name="onshowmenubar"></a>CFrameWnd::OnShowMenuBar  
 Questa funzione viene chiamata quando il sistema sta per visualizzare la barra dei menu nell'applicazione MFC corrente.  
  
```  
virtual void OnShowMenuBar();
```  
  
### <a name="remarks"></a>Note  
 Questo gestore consente all'applicazione di eseguire azioni personalizzate quando il menu viene visualizzato. È possibile impedire che il menu viene visualizzato, ma è possibile, ad esempio, chiamare altri metodi per recuperare lo stato o lo stile di menu.  
  
##  <a name="onupdatecontrolbarmenu"></a>CFrameWnd::OnUpdateControlBarMenu  
 Chiamato dal framework quando viene aggiornato il menu associato.  
  
```  
afx_msg void OnUpdateControlBarMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore a un [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto che rappresenta il menu che ha generato il comando di aggiornamento. Chiamate del gestore di aggiornamento di [abilitare](../../mfc/reference/ccmdui-class.md#enable) funzione membro del `CCmdUI` mediante `pCmdUI` per aggiornare l'interfaccia utente.  
  
##  <a name="recalclayout"></a>RecalcLayout  
 Chiamato dal framework quando le barre di controllo standard sono attivate o disattivati o quando la finestra cornice viene ridimensionata.  
  
```  
virtual void RecalcLayout(BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bNotify`  
 Determina se l'elemento attivo sul posto per la finestra cornice riceve una notifica di modifica del layout. Se **TRUE**, l'elemento è notificati; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita di questa funzione membro chiama il `CWnd` funzione membro `RepositionBars` per riposizionare le barre di controllo nel frame anche come finestra del client principale (in genere un `CView` o **MDICLIENT**).  
  
 Eseguire l'override di questa funzione membro per controllare l'aspetto e il comportamento di barre di controllo dopo aver modificato il layout della finestra cornice. Ad esempio, chiamarla quando si attivare o disattivare la barre di controllo o aggiunta un'altra barra di controllo.  
  
##  <a name="rectdefault"></a>CFrameWnd::rectDefault  
 Passare la variabile statica `CRect` come parametro durante la creazione di una finestra per consentire a Windows di scegliere le dimensioni iniziali e la posizione della finestra.  
  
```  
static AFX_DATA const CRect rectDefault;  
```  
  
##  <a name="savebarstate"></a>SaveBarState  
 Chiamare questa funzione per archiviare informazioni su ogni barra di controllo appartiene alla finestra cornice.  
  
```  
void SaveBarState(LPCTSTR lpszProfileName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszProfileName`  
 Nome di una sezione nel file di inizializzazione o di una chiave del Registro di sistema in cui sono memorizzate informazioni sullo stato.  
  
### <a name="remarks"></a>Note  
 Queste informazioni possono essere letti dal file di inizializzazione utilizzando [LoadBarState](#loadbarstate). Le informazioni archiviate sono visibilità, l'orientamento orizzontale o verticale, lo stato e posizione della barra di controllo di ancoraggio.  
  
##  <a name="setactivepreviewview"></a>CFrameWnd::SetActivePreviewView  
 Definisce la vista specificata per la visualizzazione attiva per l'anteprima avanzata.  
  
```  
void SetActivePreviewView(CView* pViewNew);
```  
  
### <a name="parameters"></a>Parametri  
 `pViewNew`  
 Un puntatore a una visualizzazione da attivare.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setactiveview"></a>CFrameWnd::SetActiveView  
 Chiamare questa funzione membro per impostare la visualizzazione attiva.  
  
```  
void SetActiveView(
    CView* pViewNew,  
    BOOL bNotify = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 *pViewNew*  
 Specifica un puntatore a un [CView](../../mfc/reference/cview-class.md) oggetto, o **NULL** per nessuna visualizzazione attiva.  
  
 `bNotify`  
 Specifica se la vista deve ricevere una notifica dell'attivazione. Se **TRUE**, `OnActivateView` viene chiamato per la nuova vista; se **FALSE**, non è.  
  
### <a name="remarks"></a>Note  
 Il framework chiamerà la funzione automaticamente come l'utente sposta lo stato attivo su una vista all'interno della finestra cornice. È possibile chiamare in modo esplicito `SetActiveView` per modificare lo stato attivo per la visualizzazione specificata.  
  
##  <a name="setdockstate"></a>CFrameWnd::SetDockState  
 Chiamare questa funzione membro per applicare le informazioni sullo state archiviate in un `CDockState` oggetto alle barre di controllo della finestra cornice.  
  
```  
void SetDockState(const CDockState& state);
```  
  
### <a name="parameters"></a>Parametri  
 `state`  
 Applicare lo stato archiviato alle barre di controllo della finestra cornice.  
  
### <a name="remarks"></a>Note  
 Per ripristinare uno stato precedente delle barre di controllo, è possibile caricare lo stato archiviato con `CDockState::LoadState` o `Serialize`, quindi utilizzare `SetDockState` per applicarlo alle barre di controllo della finestra cornice. Cui è archiviato lo stato precedente il `CDockState` dell'oggetto con`GetDockState`  
  
##  <a name="setmenubarstate"></a>CFrameWnd::SetMenuBarState  
 Imposta lo stato di visualizzazione del menu nell'applicazione MFC corrente visualizzato o nascosto.  
  
```  
virtual BOOL SetMenuBarState(DWORD nState);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nState`|Specifica se visualizzare o nascondere il menu. Il `nState` parametro può avere i valori seguenti:<br /><br /> -AFX_MBS_VISIBLE (0x01) - Visualizza il menu se è nascosto, ma non ha alcun effetto se è visibile.<br />-AFX_MBS_HIDDEN (0x02) - nasconde il menu se è visibile, ma non ha alcun effetto se è nascosto.|  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se questo metodo viene modificato correttamente lo stato di menu; in caso contrario, `false`.  
  
### <a name="remarks"></a>Note  
 Se si verifica un errore di runtime, questo metodo effettua un'asserzione in modalità di Debug e genera un'eccezione derivata dal [CException](../../mfc/reference/cexception-class.md) classe.  
  
##  <a name="setmenubarvisibility"></a>CFrameWnd::SetMenuBarVisibility  
 Imposta il comportamento predefinito del menu dell'applicazione MFC corrente per essere nascosto o visibile.  
  
```  
virtual void SetMenuBarVisibility(DWORD nStyle);
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|[in] `nStyle`|Specifica se il menu di è per impostazione predefinita, nascosto o visibile e ha lo stato attivo. Il `nStyle` parametro può avere i valori seguenti:<br /><br /> -AFX_MBV_KEEPVISIBLE (0X01)<br />     Il menu viene visualizzato in qualsiasi momento e per impostazione predefinita non ha lo stato attivo.<br />-AFX_MBV_DISPLAYONFOCUS (0X02)-<br />     Il menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto ALT per visualizzare il menu e assegnargli lo stato attivo. Se il menu viene visualizzato, premere il tasto ALT o ESC per nascondere i menu.<br />-AFX_MBV_ DISPLAYONFOCUS (0X02) | AFX_MBV_DISPLAYONF10 (0X04)<br />     (combinazione bit per bit (OR)) - menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto F10 per visualizzare il menu e assegnargli lo stato attivo. Se il menu viene visualizzato, premere F10 per attivare o disattivare lo stato attivo o disattivare il menu. Il menu viene visualizzato solo quando si preme il tasto ALT o ESC per nasconderlo.|  
  
### <a name="remarks"></a>Note  
 Se il valore di `nStyle` parametro non è valido, questo metodo effettua un'asserzione in modalità di Debug e genera [CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md) in modalità di rilascio. In caso di altri errori di runtime, questo metodo effettua un'asserzione in modalità di Debug e genera un'eccezione derivata dal [CException](../../mfc/reference/cexception-class.md) classe.  
  
 Questo metodo influisce sullo stato dei menu nelle applicazioni scritte per [!INCLUDE[windowsver](../../build/reference/includes/windowsver_md.md)] e versioni successive.  
  
##  <a name="setmessagetext"></a>CFrameWnd::SetMessageText  
 Chiamare questa funzione per inserire una stringa nel riquadro della barra di stato con ID pari a 0.  
  
```  
void SetMessageText(LPCTSTR lpszText);  
void SetMessageText(UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszText`  
 Punta alla stringa da inserire nella barra di stato.  
  
 `nID`  
 Stringa ID risorsa della stringa da inserire nella barra di stato.  
  
### <a name="remarks"></a>Note  
 Questo è in genere il riquadro di sinistra e più lungo, della barra di stato.  
  
##  <a name="setprogressbarposition"></a>CFrameWnd::SetProgressBarPosition  
 Imposta la posizione corrente per l'indicatore di stato di Windows 7 visualizzato nella barra delle applicazioni.  
  
```  
void SetProgressBarPosition(int nProgressPos);
```  
  
### <a name="parameters"></a>Parametri  
 `nProgressPos`  
 Specifica la posizione da impostare. Deve essere compreso nell'intervallo impostato da `SetProgressBarRange`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setprogressbarrange"></a>CFrameWnd::SetProgressBarRange  
 Imposta l'intervallo per l'indicatore di stato di Windows 7 visualizzato nella barra delle applicazioni.  
  
```  
void SetProgressBarRange(
    int nRangeMin,  
    int nRangeMax);
```  
  
### <a name="parameters"></a>Parametri  
 `nRangeMin`  
 Valore minimo.  
  
 `nRangeMax`  
 Valore massimo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="setprogressbarstate"></a>CFrameWnd::SetProgressBarState  
 Imposta il tipo e lo stato dell'indicatore di stato visualizzato su un pulsante della barra delle applicazioni.  
  
```  
void SetProgressBarState(TBPFLAG tbpFlags);
```  
  
### <a name="parameters"></a>Parametri  
 `tbpFlags`  
 Flag che controllano lo stato corrente del pulsante dello stato. Specificare solo uno dei seguenti flag perché tutti gli stati si escludono a vicenda: TBPF_NOPROGRESS, TBPF_INDETERMINATE, TBPF_NORMAL, TBPF_ERROR, TBPF_PAUSED.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settaskbaroverlayicon"></a>CFrameWnd::SetTaskbarOverlayIcon  
 Di overload. Si applica una sovrapposizione a un pulsante della barra delle applicazioni per indicare lo stato dell'applicazione o per notificare all'utente.  
  
```  
BOOL SetTaskbarOverlayIcon(
    UINT nIDResource,  
    LPCTSTR lpcszDescr);

 
BOOL SetTaskbarOverlayIcon(
    HICON hIcon,  
    LPCTSTR lpcszDescr);
```  
  
### <a name="parameters"></a>Parametri  
 `nIDResource`  
 Specifica l'ID di risorsa di un'icona da utilizzare come la sovrimpressione. Per vedere la descrizione `hIcon` per informazioni dettagliate.  
  
 `lpcszDescr`  
 Un puntatore a una stringa che fornisce una versione di testo alternativo delle informazioni fornite dal sovrapposizione, per facilitare l'accesso.  
  
 `hIcon`  
 L'handle di un'icona da utilizzare come la sovrimpressione. Deve trattarsi di una piccola icona, la misurazione di 16 x 16 pixel 96 punti per pollice (dpi). Se un'icona di sovrapposizione è già stata applicata al pulsante della barra delle applicazioni, tale sovrapposizione esistente viene sostituito. Il valore può essere `NULL`. Come un `NULL` valore viene gestito varia a seconda se il pulsante della barra delle applicazioni rappresenta una singola finestra o un gruppo di windows. È compito dell'applicazione chiamante liberare `hIcon` quando non è più necessario.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se ha esito positivo. `FALSE` se la versione del sistema operativo è inferiore a Windows 7 o se si verifica un errore l'impostazione dell'icona.  
  
### <a name="remarks"></a>Note  
  
##  <a name="settitle"></a>CFrameWnd::SetTitle  
 Imposta il titolo dell'oggetto window.  
  
```  
void SetTitle(LPCTSTR lpszTitle);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszTitle`  
 Puntatore a una stringa di caratteri contenente il titolo dell'oggetto window.  
  
##  <a name="showcontrolbar"></a>CFrameWnd::ShowControlBar  
 Chiamare questa funzione membro per mostrare o nascondere la barra di controllo.  
  
```  
void ShowControlBar(
    CControlBar* pBar,  
    BOOL bShow,  
    BOOL bDelay);
```  
  
### <a name="parameters"></a>Parametri  
 `pBar`  
 Puntatore a barra di controllo per essere visualizzato o nascosto.  
  
 `bShow`  
 Se **TRUE**, specifica che la barra di controllo da visualizzare. Se **FALSE**, specifica che la barra di controllo deve essere nascosto.  
  
 *bDelay*  
 Se **TRUE**, ritardo che mostra la barra di controllo. Se **FALSE**, Visualizza il controllo di bar immediatamente.  
  
##  <a name="showownedwindows"></a>CFrameWnd::ShowOwnedWindows  
 Chiamare questa funzione membro per visualizzare tutte le finestre discendenti di `CFrameWnd` oggetto.  
  
```  
void ShowOwnedWindows(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 `bShow`  
 Specifica se la proprietà di windows devono essere mostrati o nascosti.  
  
## <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWnd (classe)](../../mfc/reference/cwnd-class.md)   
 [CMDIFrameWnd (classe)](../../mfc/reference/cmdiframewnd-class.md)   
 [CMDIChildWnd (classe)](../../mfc/reference/cmdichildwnd-class.md)   
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [CDocTemplate (classe)](../../mfc/reference/cdoctemplate-class.md)   
 [Struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md)

