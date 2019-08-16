---
title: Classe CFrameWnd
ms.date: 11/04/2016
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
helpviewer_keywords:
- CFrameWnd [MFC], CFrameWnd
- CFrameWnd [MFC], ActivateFrame
- CFrameWnd [MFC], BeginModalState
- CFrameWnd [MFC], Create
- CFrameWnd [MFC], CreateView
- CFrameWnd [MFC], DockControlBar
- CFrameWnd [MFC], EnableDocking
- CFrameWnd [MFC], EndModalState
- CFrameWnd [MFC], FloatControlBar
- CFrameWnd [MFC], GetActiveDocument
- CFrameWnd [MFC], GetActiveFrame
- CFrameWnd [MFC], GetActiveView
- CFrameWnd [MFC], GetControlBar
- CFrameWnd [MFC], GetDockState
- CFrameWnd [MFC], GetMenuBarState
- CFrameWnd [MFC], GetMenuBarVisibility
- CFrameWnd [MFC], GetMessageBar
- CFrameWnd [MFC], GetMessageString
- CFrameWnd [MFC], GetTitle
- CFrameWnd [MFC], InitialUpdateFrame
- CFrameWnd [MFC], InModalState
- CFrameWnd [MFC], IsTracking
- CFrameWnd [MFC], LoadAccelTable
- CFrameWnd [MFC], LoadBarState
- CFrameWnd [MFC], LoadFrame
- CFrameWnd [MFC], NegotiateBorderSpace
- CFrameWnd [MFC], OnBarCheck
- CFrameWnd [MFC], OnContextHelp
- CFrameWnd [MFC], OnSetPreviewMode
- CFrameWnd [MFC], OnUpdateControlBarMenu
- CFrameWnd [MFC], RecalcLayout
- CFrameWnd [MFC], SaveBarState
- CFrameWnd [MFC], SetActivePreviewView
- CFrameWnd [MFC], SetActiveView
- CFrameWnd [MFC], SetDockState
- CFrameWnd [MFC], SetMenuBarState
- CFrameWnd [MFC], SetMenuBarVisibility
- CFrameWnd [MFC], SetMessageText
- CFrameWnd [MFC], SetProgressBarPosition
- CFrameWnd [MFC], SetProgressBarRange
- CFrameWnd [MFC], SetProgressBarState
- CFrameWnd [MFC], SetTaskbarOverlayIcon
- CFrameWnd [MFC], SetTitle
- CFrameWnd [MFC], ShowControlBar
- CFrameWnd [MFC], ShowOwnedWindows
- CFrameWnd [MFC], OnCreateClient
- CFrameWnd [MFC], OnHideMenuBar
- CFrameWnd [MFC], OnShowMenuBar
- CFrameWnd [MFC], m_bAutoMenuEnable
- CFrameWnd [MFC], rectDefault
ms.assetid: e2220aba-5bf4-4002-b960-fbcafcad01f1
ms.openlocfilehash: d2e043c8c9f4ad86636cd0e9ea7d695826b6c8fb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69506952"
---
# <a name="cframewnd-class"></a>Classe CFrameWnd

Fornisce la funzionalità di un'interfaccia a documento singolo (SDI) di Windows sovrapposta o di una finestra cornice popup, insieme ai membri per gestire la finestra.

## <a name="syntax"></a>Sintassi

```
class CFrameWnd : public CWnd
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFrameWnd:: CFrameWnd](#cframewnd)|Costruisce un oggetto `CFrameWnd`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CFrameWnd::ActivateFrame](#activateframe)|Rende il frame visibile e disponibile per l'utente.|
|[CFrameWnd::BeginModalState](#beginmodalstate)|Imposta la finestra cornice su modale.|
|[CFrameWnd::Create](#create)|Chiamare per creare e inizializzare la finestra cornice di Windows associata `CFrameWnd` all'oggetto.|
|[CFrameWnd::CreateView](#createview)|Crea una visualizzazione all'interno di un frame non derivato da `CView`.|
|[CFrameWnd::DockControlBar](#dockcontrolbar)|Ancora una barra di controllo.|
|[CFrameWnd::EnableDocking](#enabledocking)|Consente l'ancoraggio di una barra di controllo.|
|[CFrameWnd::EndModalState](#endmodalstate)|Termina lo stato modale della finestra cornice. Abilita tutte le finestre disabilitate da `BeginModalState`.|
|[CFrameWnd::FloatControlBar](#floatcontrolbar)|Fluttua una barra di controllo.|
|[CFrameWnd::GetActiveDocument](#getactivedocument)|Restituisce l'oggetto `CDocument` attivo.|
|[CFrameWnd::GetActiveFrame](#getactiveframe)|Restituisce l'oggetto `CFrameWnd` attivo.|
|[CFrameWnd::GetActiveView](#getactiveview)|Restituisce l'oggetto `CView` attivo.|
|[CFrameWnd::GetControlBar](#getcontrolbar)|Recupera la barra di controllo.|
|[CFrameWnd::GetDockState](#getdockstate)|Recupera lo stato di ancoraggio di una finestra cornice.|
|[CFrameWnd::GetMenuBarState](#getmenubarstate)|Recupera lo stato di visualizzazione del menu nell'applicazione MFC corrente.|
|[CFrameWnd::GetMenuBarVisibility](#getmenubarvisibility)|Indica se il comportamento predefinito del menu nell'applicazione MFC corrente è nascosto o visibile.|
|[CFrameWnd::GetMessageBar](#getmessagebar)|Restituisce un puntatore alla barra di stato appartenente alla finestra cornice.|
|[CFrameWnd::GetMessageString](#getmessagestring)|Recupera il messaggio corrispondente a un ID di comando.|
|[CFrameWnd::GetTitle](#gettitle)|Recupera il titolo della barra di controllo correlata.|
|[CFrameWnd::InitialUpdateFrame](#initialupdateframe)|Determina la `OnInitialUpdate` chiamata della funzione membro che appartiene a tutte le visualizzazioni nella finestra cornice.|
|[CFrameWnd::InModalState](#inmodalstate)|Restituisce un valore che indica se una finestra cornice è in uno stato modale.|
|[CFrameWnd::IsTracking](#istracking)|Determina se è in corso lo spostamento della barra di divisione.|
|[CFrameWnd:: LoadAccelTable](#loadacceltable)|Chiamare per caricare una tabella dei tasti di scelta rapida.|
|[CFrameWnd::LoadBarState](#loadbarstate)|Chiamare per ripristinare le impostazioni della barra di controllo.|
|[CFrameWnd:: LoadFrame](#loadframe)|Chiamare per creare dinamicamente una finestra cornice dalle informazioni sulle risorse.|
|[CFrameWnd::NegotiateBorderSpace](#negotiateborderspace)|Negozia lo spazio del bordo nella finestra cornice.|
|[CFrameWnd::OnBarCheck](#onbarcheck)|Chiamato ogni volta che viene eseguita un'azione sulla barra di controllo specificata.|
|[CFrameWnd::OnContextHelp](#oncontexthelp)|Gestisce la Guida di MAIUSC + F1 per gli elementi sul posto.|
|[CFrameWnd:: OnSetPreviewMode](#onsetpreviewmode)|Imposta la finestra cornice principale dell'applicazione all'interno e all'esterno della modalità di anteprima di stampa.|
|[CFrameWnd::OnUpdateControlBarMenu](#onupdatecontrolbarmenu)|Chiamata eseguita dal framework quando il menu associato viene aggiornato.|
|[CFrameWnd::RecalcLayout](#recalclayout)|Riposiziona le barre di controllo dell' `CFrameWnd` oggetto.|
|[CFrameWnd::SaveBarState](#savebarstate)|Chiamare per salvare le impostazioni della barra di controllo.|
|[CFrameWnd::SetActivePreviewView](#setactivepreviewview)|Indica che la visualizzazione specificata è la visualizzazione attiva per l'anteprima avanzata.|
|[CFrameWnd::SetActiveView](#setactiveview)|Imposta l'oggetto `CView` attivo.|
|[CFrameWnd::SetDockState](#setdockstate)|Chiamare per ancorare la finestra cornice nella finestra principale.|
|[CFrameWnd::SetMenuBarState](#setmenubarstate)|Imposta lo stato di visualizzazione del menu nell'applicazione MFC corrente su nascosto o visualizzato.|
|[CFrameWnd::SetMenuBarVisibility](#setmenubarvisibility)|Imposta il comportamento predefinito del menu nell'applicazione MFC corrente in modo che sia nascosto o visibile.|
|[CFrameWnd::SetMessageText](#setmessagetext)|Imposta il testo di una barra di stato standard.|
|[CFrameWnd::SetProgressBarPosition](#setprogressbarposition)|Imposta la posizione corrente per la barra di stato di Windows 7 visualizzata sulla barra delle applicazioni.|
|[CFrameWnd::SetProgressBarRange](#setprogressbarrange)|Imposta l'intervallo per l'indicatore di stato di Windows 7 visualizzato sulla barra delle applicazioni.|
|[CFrameWnd::SetProgressBarState](#setprogressbarstate)|Imposta il tipo e lo stato dell'indicatore di stato visualizzato su un pulsante della barra delle applicazioni.|
|[CFrameWnd::SetTaskbarOverlayIcon](#settaskbaroverlayicon)|Di overload. Applica una sovrapposizione a un pulsante della barra delle applicazioni per indicare lo stato dell'applicazione o una notifica all'utente.|
|[CFrameWnd::SetTitle](#settitle)|Imposta il titolo della barra di controllo correlata.|
|[CFrameWnd::ShowControlBar](#showcontrolbar)|Chiamare per visualizzare la barra di controllo.|
|[CFrameWnd::ShowOwnedWindows](#showownedwindows)|Mostra tutte le finestre che sono discendenti dell' `CFrameWnd` oggetto.|

### <a name="protected-methods"></a>Metodi protetti

|Name|Descrizione|
|----------|-----------------|
|[CFrameWnd::OnCreateClient](#oncreateclient)|Crea una finestra client per il frame.|
|[CFrameWnd::OnHideMenuBar](#onhidemenubar)|Chiamato prima che il menu nell'applicazione MFC corrente sia nascosto.|
|[CFrameWnd::OnShowMenuBar](#onshowmenubar)|Chiamato prima che venga visualizzato il menu nell'applicazione MFC corrente.|

### <a name="public-data-members"></a>Membri dati pubblici

|NOME|Descrizione|
|----------|-----------------|
|[CFrameWnd::m_bAutoMenuEnable](#m_bautomenuenable)|Controlla la funzionalità di abilitazione e disabilitazione automatica per le voci di menu.|
|[CFrameWnd::rectDefault](#rectdefault)|Passare questo oggetto `CRect` statico come parametro durante la creazione `CFrameWnd` di un oggetto per consentire a Windows di scegliere le dimensioni e la posizione iniziali della finestra.|

## <a name="remarks"></a>Note

Per creare una finestra cornice utile per l'applicazione, derivare una classe `CFrameWnd`da. Aggiungere le variabili membro alla classe derivata per archiviare i dati specifici dell'applicazione. Implementare funzioni membro di gestione dei messaggi e una mappa messaggi nella classe derivata per specificare cosa succede quando i messaggi vengono indirizzati alla finestra.

Esistono tre modi per costruire una finestra cornice:

- Costruirla direttamente usando [create](#create).

- Costruirla direttamente usando [LoadFrame](#loadframe).

- Costruirlo indirettamente usando un modello di documento.

Prima di chiamare `Create` o `LoadFrame`, è necessario creare l'oggetto finestra cornice nell'heap usando l' C++ operatore **New** . Prima di `Create`chiamare, è anche possibile registrare una classe della finestra con la funzione globale [AfxRegisterWndClass](../../mfc/reference/application-information-and-management.md#afxregisterwndclass) per impostare gli stili dell'icona e della classe per il frame.

Usare la `Create` funzione membro per passare i parametri di creazione del frame come argomenti immediati.

`LoadFrame`richiede un numero di `Create`argomenti inferiore a quello di e recupera invece la maggior parte dei valori predefiniti dalle risorse, incluse la didascalia, l'icona, la tabella di tasti di scelta rapida e il menu del frame. Per essere accessibile da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa (ad esempio, IDR_MAINFRAME).

Quando un `CFrameWnd` oggetto contiene viste e documenti, questi vengono creati indirettamente dal Framework anziché direttamente dal programmatore. L' `CDocTemplate` oggetto orchestra la creazione del frame, la creazione delle visualizzazioni contenenti e la connessione delle visualizzazioni al documento appropriato. I parametri del `CDocTemplate` Costruttore specificano le `CRuntimeClass` delle tre classi necessarie (documento, frame e visualizzazione). Un `CRuntimeClass` oggetto viene utilizzato dal Framework per creare in modo dinamico nuovi frame quando viene specificato dall'utente, ad esempio tramite il comando file nuovo o il nuovo comando finestra interfaccia a documenti multipli (MDI).

Una classe della finestra cornice derivata da `CFrameWnd` deve essere dichiarata con DECLARE_DYNCREATE affinché il meccanismo RUNTIME_CLASS precedente funzioni correttamente.

Un `CFrameWnd` oggetto contiene le implementazioni predefinite per eseguire le funzioni seguenti di una finestra principale in un'applicazione tipica per Windows:

- Una `CFrameWnd` finestra cornice tiene traccia di una visualizzazione attualmente attiva indipendente dalla finestra attiva di Windows o dallo stato attivo per l'input corrente. Quando il frame viene riattivato, la visualizzazione attiva riceve una notifica chiamando `CView::OnActivateView`.

- I messaggi di comando e molti messaggi comuni di notifica frame, inclusi quelli gestiti `OnSetFocus`dalle `OnHScroll`funzioni, `OnVScroll` e di `CWnd`, sono delegati da `CFrameWnd` una finestra cornice alla visualizzazione attualmente attiva.

- La visualizzazione attualmente attiva (o la finestra cornice figlio MDI attualmente attiva nel caso di un frame MDI) può determinare la didascalia della finestra cornice. Questa funzionalità può essere disabilitata disattivando il bit di stile FWS_ADDTOTITLE della finestra cornice.

- Una `CFrameWnd` finestra cornice gestisce il posizionamento delle barre di controllo, delle visualizzazioni e di altre finestre figlio all'interno dell'area client della finestra cornice. Una finestra cornice esegue anche l'aggiornamento del tempo di inattività della barra degli strumenti e di altri pulsanti della barra di controllo. Una `CFrameWnd` finestra cornice dispone inoltre di implementazioni predefinite dei comandi per attivare e disattivare la barra degli strumenti e la barra di stato.

- Una `CFrameWnd` finestra cornice gestisce la barra dei menu principale. Quando viene visualizzato un menu popup, la finestra cornice usa il meccanismo UPDATE_COMMAND_UI per determinare quali voci di menu devono essere abilitate, disabilitate o controllate. Quando l'utente seleziona una voce di menu, la finestra cornice aggiorna la barra di stato con la stringa di messaggio per quel comando.

- Una `CFrameWnd` finestra cornice dispone di una tabella di tasti di scelta rapida facoltativa che converte automaticamente gli acceleratori della tastiera.

- Una `CFrameWnd` finestra cornice dispone di un ID della guida facoltativo `LoadFrame` impostato con usato per la Guida sensibile al contesto. Una finestra cornice è l'agente di orchestrazione principale degli Stati semimodali, ad esempio la Guida sensibile al contesto (MAIUSC + F1) e le modalità di anteprima di stampa.

- Una `CFrameWnd` finestra cornice apre un file trascinato da Gestione file e viene rilasciato nella finestra cornice. Se un'estensione di file è registrata e associata all'applicazione, la finestra cornice risponde alla richiesta di apertura di Dynamic Data Exchange (DDE) che si verifica quando l'utente apre un file di dati in gestione file o quando `ShellExecute` viene chiamata la funzione di Windows.

- Se la finestra cornice è la finestra principale dell'applicazione (ovvero, `CWinThread::m_pMainWnd`) quando l'utente chiude l'applicazione, la finestra cornice chiede all'utente di salvare eventuali documenti modificati (per `OnClose` e `OnQueryEndSession`).

- Se la finestra cornice è la finestra principale dell'applicazione, la finestra cornice è il contesto per l'esecuzione di WinHelp. Chiudendo la finestra cornice si arresterà WINHELP. EXE se è stato avviato per la guida per questa applicazione.

Non usare l' C++ operatore **Delete per eliminare** definitivamente una finestra cornice. In alternativa, utilizzare `CWnd::DestroyWindow`. L' `CFrameWnd` implementazione di `PostNcDestroy` eliminerà l' C++ oggetto quando la finestra viene distrutta. Quando l'utente chiude la finestra cornice, viene chiamato `OnClose` `DestroyWindow`il gestore predefinito.

Per altre informazioni su `CFrameWnd`, vedere [finestre cornice](../../mfc/frame-windows.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWnd](../../mfc/reference/cwnd-class.md)

`CFrameWnd`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="activateframe"></a>  CFrameWnd::ActivateFrame

Chiamare questa funzione membro per attivare e ripristinare la finestra cornice in modo che sia visibile e disponibile per l'utente.

```
virtual void ActivateFrame(int nCmdShow = -1);
```

### <a name="parameters"></a>Parametri

*nCmdShow*<br/>
Specifica il parametro da passare a [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow). Per impostazione predefinita, il frame viene visualizzato e ripristinato correttamente.

### <a name="remarks"></a>Note

Questa funzione membro viene in genere chiamata dopo un evento di interfaccia non utente, ad esempio un DDE, un OLE o un altro evento che può visualizzare la finestra cornice o il relativo contenuto all'utente.

L'implementazione predefinita attiva il frame e lo porta all'inizio dell'ordine Z e, se necessario, esegue gli stessi passaggi per la finestra cornice principale dell'applicazione.

Eseguire l'override di questa funzione membro per modificare la modalità di attivazione di un frame. Ad esempio, è possibile forzare l'ingrandimento delle finestre figlio MDI. Aggiungere la funzionalità appropriata, quindi chiamare la versione della classe base con un *nCmdShow*esplicito.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#1](../../mfc/reference/codesnippet/cpp/cframewnd-class_1.cpp)]

##  <a name="beginmodalstate"></a>CFrameWnd:: BeginModalState

Chiamare questa funzione membro per impostare lo stato modale per una finestra cornice.

```
virtual void BeginModalState();
```

##  <a name="cframewnd"></a>CFrameWnd:: CFrameWnd

Costruisce un `CFrameWnd` oggetto, ma non crea la finestra cornice visibile.

```
CFrameWnd();
```

### <a name="remarks"></a>Note

Chiamare `Create` per creare la finestra visibile.

##  <a name="create"></a>  CFrameWnd::Create

Chiamare per creare e inizializzare la finestra cornice di Windows associata `CFrameWnd` all'oggetto.

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

*lpszClassName*<br/>
Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con `AfxRegisterWndClass` la funzione globale o `RegisterClass` la funzione di Windows. Se è null, USA gli attributi predefiniti `CFrameWnd` predefiniti.

*lpszWindowName*<br/>
Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra. Utilizzato come testo per la barra del titolo.

*dwStyle*<br/>
Specifica gli attributi di [stile](../../mfc/reference/styles-used-by-mfc.md#window-styles) della finestra. Includere lo stile FWS_ADDTOTITLE se si vuole che la barra del titolo visualizzi automaticamente il nome del documento rappresentato nella finestra.

*rect*<br/>
Specifica le dimensioni e la posizione della finestra. Il valore *rectDefault Windows* consente a Windows di specificare le dimensioni e la posizione della nuova finestra.

*pParentWnd*<br/>
Specifica la finestra padre della finestra cornice. Questo parametro deve essere NULL per le finestre cornice di primo livello.

*lpszMenuName*<br/>
Identifica il nome della risorsa di menu da usare con la finestra. Usare MAKEINTRESOURCE se il menu ha un ID integer anziché una stringa. Questo parametro può essere NULL.

*dwExStyle*<br/>
Specifica gli attributi di [stile](../../mfc/reference/styles-used-by-mfc.md#extended-window-styles) esteso della finestra.

*pContext*<br/>
Specifica un puntatore a una struttura [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) . Questo parametro può essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Costruire un `CFrameWnd` oggetto in due passaggi. Prima di tutto, richiamare il costruttore, che costruisce l' `CFrameWnd` oggetto, quindi chiamare `Create`, che crea la finestra cornice di Windows e la `CFrameWnd` collega all'oggetto. `Create`Inizializza il nome della classe della finestra e il nome della finestra e registra i valori predefiniti per il relativo stile, padre e il menu associato.

`LoadFrame` Usare`Create` anziché caricare la finestra cornice da una risorsa anziché specificarne gli argomenti.

##  <a name="createview"></a>  CFrameWnd::CreateView

Chiamare `CreateView` per creare una visualizzazione in un frame.

```
CWnd* CreateView(
    CCreateContext* pContext,
    UINT nID = AFX_IDW_PANE_FIRST);
```

### <a name="parameters"></a>Parametri

*pContext*<br/>
Specifica il tipo di visualizzazione e documento.

*nID*<br/>
Numero di ID di una visualizzazione.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CWnd` oggetto in caso di esito positivo; in caso contrario null.

### <a name="remarks"></a>Note

Usare questa funzione membro per creare "viste" che non `CView`sono derivate all'interno di un frame. Dopo la `CreateView`chiamata a, è necessario impostare manualmente la visualizzazione su attivo e impostarla in modo che sia visibile. queste attività non `CreateView`vengono eseguite automaticamente da.

##  <a name="dockcontrolbar"></a>  CFrameWnd::DockControlBar

Determina l'ancoraggio di una barra di controllo alla finestra cornice.

```
void DockControlBar(
    CControlBar* pBar,
    UINT nDockBarID = 0,
    LPCRECT lpRect = NULL);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
Punta alla barra di controllo da ancorare.

*nDockBarID*<br/>
Determina i lati della finestra cornice da considerare per l'ancoraggio. Può essere 0 o uno o più degli elementi seguenti:

- AFX_IDW_DOCKBAR_TOP ancorato al lato superiore della finestra cornice.

- AFX_IDW_DOCKBAR_BOTTOM ancorato al lato inferiore della finestra cornice.

- AFX_IDW_DOCKBAR_LEFT ancorato al lato sinistro della finestra cornice.

- AFX_IDW_DOCKBAR_RIGHT ancorato al lato destro della finestra cornice.

Se è 0, la barra di controllo può essere ancorata a qualsiasi lato abilitato per l'ancoraggio nella finestra cornice di destinazione.

*lpRect*<br/>
Determina, in coordinate dello schermo, il punto in cui la barra di controllo sarà ancorata nell'area non client della finestra cornice di destinazione.

### <a name="remarks"></a>Note

La barra di controllo sarà ancorata a uno dei lati della finestra cornice specificata nelle chiamate a [CControlBar:: EnableDocking](../../mfc/reference/ccontrolbar-class.md#enabledocking) e [CFrameWnd:: EnableDocking](#enabledocking). Il lato scelto è determinato da *nDockBarID*.

##  <a name="enabledocking"></a>  CFrameWnd::EnableDocking

Chiamare questa funzione per abilitare le barre di controllo ancorabili in una finestra cornice.

```
void EnableDocking(DWORD dwDockStyle);
```

### <a name="parameters"></a>Parametri

*dwDockStyle*<br/>
Specifica i lati della finestra cornice che possono essere usati come siti di ancoraggio per le barre di controllo. Può essere uno o più degli elementi seguenti:

- CBRS_ALIGN_TOP consente l'ancoraggio nella parte superiore dell'area client.

- CBRS_ALIGN_BOTTOM consente l'ancoraggio nella parte inferiore dell'area client.

- CBRS_ALIGN_LEFT consente l'ancoraggio sul lato sinistro dell'area client.

- CBRS_ALIGN_RIGHT consente l'ancoraggio sul lato destro dell'area client.

- CBRS_ALIGN_ANY consente l'ancoraggio su qualsiasi lato dell'area client.

### <a name="remarks"></a>Note

Per impostazione predefinita, le barre di controllo saranno ancorate a un lato della finestra cornice nell'ordine seguente: in alto, in basso, a sinistra, a destra.

### <a name="example"></a>Esempio

  Vedere l'esempio per [CToolBar:: create](../../mfc/reference/ctoolbar-class.md#create).

##  <a name="endmodalstate"></a>CFrameWnd:: EndModalState

Chiamare questa funzione membro per cambiare lo stato di una finestra cornice da modale a non modale.

```
virtual void EndModalState();
```

### <a name="remarks"></a>Note

`EndModalState`Abilita tutte le finestre disabilitate da [BeginModalState](#beginmodalstate).

##  <a name="floatcontrolbar"></a>  CFrameWnd::FloatControlBar

Chiamare questa funzione per fare in modo che una barra di controllo non sia ancorata alla finestra cornice.

```
void FloatControlBar(
    CControlBar* pBar,
    CPoint point,
    DWORD dwStyle = CBRS_ALIGN_TOP);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
Punta alla barra di controllo per la virgola mobile.

*point*<br/>
Posizione, in coordinate dello schermo, in cui verrà inserito l'angolo superiore sinistro della barra di controllo.

*dwStyle*<br/>
Specifica se allineare la barra di controllo orizzontalmente o verticalmente all'interno della nuova finestra cornice. Può essere uno dei seguenti:

- CBRS_ALIGN_TOP orienta la barra di controllo verticalmente.

- CBRS_ALIGN_BOTTOM orienta la barra di controllo verticalmente.

- CBRS_ALIGN_LEFT orienta la barra di controllo orizzontalmente.

- CBRS_ALIGN_RIGHT orienta la barra di controllo orizzontalmente.

Se gli stili vengono passati specificando l'orientamento orizzontale e verticale, la barra degli strumenti sarà orientata orizzontalmente.

### <a name="remarks"></a>Note

Questa operazione viene in genere eseguita all'avvio dell'applicazione quando il programma ripristina le impostazioni dall'esecuzione precedente.

Questa funzione viene chiamata dal framework quando l'utente causa un'operazione DROP rilasciando il pulsante sinistro del mouse mentre si trascina la barra di controllo su una posizione non disponibile per l'ancoraggio.

##  <a name="getactivedocument"></a>  CFrameWnd::GetActiveDocument

Chiamare questa funzione membro per ottenere un puntatore all'oggetto corrente `CDocument` collegato alla visualizzazione attiva corrente.

```
virtual CDocument* GetActiveDocument();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla corrente [CDocument](../../mfc/reference/cdocument-class.md). Se non è presente alcun documento corrente, restituisce NULL.

##  <a name="getactiveframe"></a>  CFrameWnd::GetActiveFrame

Chiamare questa funzione membro per ottenere un puntatore alla finestra figlio dell'interfaccia a documenti multipli (MDI) attiva di una finestra cornice MDI.

```
virtual CFrameWnd* GetActiveFrame();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra figlio MDI attiva. Se l'applicazione è un'applicazione SDI o la finestra cornice MDI non contiene alcun documento attivo, verrà restituito il puntatore implicito **this** .

### <a name="remarks"></a>Note

Se non è presente alcun elemento figlio MDI attivo o l'applicazione è un'interfaccia a documento singolo (SDI) , viene restituito il puntatore implicito.

##  <a name="getactiveview"></a>  CFrameWnd::GetActiveView

Chiamare questa funzione membro per ottenere un puntatore alla visualizzazione attiva (se presente) collegata a una finestra cornice ( `CFrameWnd`).

```
CView* GetActiveView() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto [CView](../../mfc/reference/cview-class.md)corrente. Se non è presente alcuna visualizzazione corrente, restituisce NULL.

### <a name="remarks"></a>Note

Questa funzione restituisce NULL quando viene chiamata per una finestra cornice principale MDI `CMDIFrameWnd`(). In un'applicazione MDI, alla finestra cornice principale MDI non è associata alcuna visualizzazione. Ogni singola finestra figlio ( `CMDIChildWnd`) dispone invece di una o più visualizzazioni associate. La visualizzazione attiva in un'applicazione MDI può essere ottenuta individuando prima la finestra figlio MDI attiva e quindi individuando la visualizzazione attiva per la finestra figlio. È possibile trovare la finestra figlio MDI attiva chiamando la funzione `MDIGetActive` o `GetActiveFrame` come illustrato nell'esempio seguente:

[!code-cpp[NVC_MFCWindowing#2](../../mfc/reference/codesnippet/cpp/cframewnd-class_2.cpp)]

##  <a name="getcontrolbar"></a>  CFrameWnd::GetControlBar

Chiamare `GetControlBar` per ottenere l'accesso alla barra di controllo associata all'ID.

```
CControlBar* GetControlBar(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
Numero di ID di una barra di controllo.

### <a name="return-value"></a>Valore restituito

Puntatore alla barra di controllo associata all'ID.

### <a name="remarks"></a>Note

Il parametro *NID* si riferisce all'identificatore univoco passato `Create` al metodo della barra di controllo. Per ulteriori informazioni sulle barre di controllo, vedere l'argomento intitolato [barre di controllo](../../mfc/control-bars.md).

`GetControlBar`restituirà la barra di controllo anche se è mobile e pertanto non è attualmente una finestra figlio del frame.

##  <a name="getdockstate"></a>  CFrameWnd::GetDockState

Chiamare questa funzione membro per archiviare le informazioni sullo stato sulle barre di controllo della finestra cornice `CDockState` in un oggetto.

```
void GetDockState(CDockState& state) const;
```

### <a name="parameters"></a>Parametri

*state*<br/>
Contiene lo stato corrente delle barre di controllo della finestra cornice al momento della restituzione.

### <a name="remarks"></a>Note

È quindi possibile scrivere il contenuto di `CDockState` nell'archivio usando `CDockState::SaveState` o `Serialize`. Se in seguito si desidera ripristinare le barre di controllo a uno stato precedente, caricare lo stato `CDockState::LoadState` con `Serialize`o, quindi `SetDockState` chiamare per applicare lo stato precedente alle barre di controllo della finestra cornice.

##  <a name="getmenubarstate"></a>  CFrameWnd::GetMenuBarState

Recupera lo stato di visualizzazione del menu nell'applicazione MFC corrente.

```
virtual DWORD GetMenuBarState();
```

### <a name="return-value"></a>Valore restituito

Il valore restituito può includere i valori seguenti:

- AFX_MBS_VISIBLE (0x01): il menu è visibile.

- AFX_MBS_HIDDEN (0x02): il menu è nascosto.

### <a name="remarks"></a>Note

Se si verifica un errore di runtime, questo metodo esegue l'asserzione in modalità debug e genera un'eccezione derivata dalla classe [CException](../../mfc/reference/cexception-class.md) .

##  <a name="getmenubarvisibility"></a>CFrameWnd:: GetMenuBarVisibility

Indica se lo stato predefinito del menu nell'applicazione MFC corrente è nascosto o visibile.

```
virtual DWORD CFrameWnd::GetMenuBarVisibility();
```

### <a name="return-value"></a>Valore restituito

Questo metodo restituisce uno dei valori seguenti:

- AFX_MBV_KEEPVISIBLE (0x01): il menu viene visualizzato in qualsiasi momento e, per impostazione predefinita, non ha lo stato attivo.

- AFX_MBV_DISPLAYONFOCUS (0x02): il menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto ALT per visualizzare il menu e assegnargli lo stato attivo. Se il menu è visualizzato, premere il tasto ALT o ESC per nasconderlo.

- AFX_MBV_ DISPLAYONFOCUS (0x02) &#124; AFX_MBV_DISPLAYONF10 (0x04) (combinazione bit per bit (o)): il menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto F10 per visualizzare il menu e assegnargli lo stato attivo. Se il menu è visualizzato, premere il tasto F10 per attivare o disattivare lo stato attivo nel menu. Il menu viene visualizzato fino a quando non si preme il tasto ALT o ESC per nasconderlo.

### <a name="remarks"></a>Note

Se si verifica un errore di runtime, questo metodo esegue l'asserzione in modalità debug e genera un'eccezione derivata dalla classe [CException](../../mfc/reference/cexception-class.md) .

##  <a name="getmessagebar"></a>  CFrameWnd::GetMessageBar

Chiamare questa funzione membro per ottenere un puntatore alla barra di stato.

```
virtual CWnd* GetMessageBar();
```

### <a name="return-value"></a>Valore restituito

Puntatore alla finestra della barra di stato.

##  <a name="getmessagestring"></a>  CFrameWnd::GetMessageString

Eseguire l'override di questa funzione per fornire stringhe personalizzate per gli ID di comando.

```
virtual void GetMessageString(
    UINT nID,
    CString& rMessage) const;
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID risorsa del messaggio desiderato.

*rMessage*<br/>
`CString`oggetto in cui inserire il messaggio.

### <a name="remarks"></a>Note

L'implementazione predefinita carica semplicemente la stringa specificata da *NID* dal file di risorse. Questa funzione viene chiamata dal framework quando è necessario aggiornare la stringa di messaggio nella barra di stato.

##  <a name="gettitle"></a>CFrameWnd:: getTitle

Recupera il titolo dell'oggetto finestra.

```
CString GetTitle() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) che contiene il titolo corrente dell'oggetto finestra.

##  <a name="initialupdateframe"></a>  CFrameWnd::InitialUpdateFrame

Chiamare `IntitialUpdateFrame` dopo la creazione di un nuovo `Create`frame con.

```
void InitialUpdateFrame(
    CDocument* pDoc,
    BOOL bMakeVisible);
```

### <a name="parameters"></a>Parametri

*pDoc*<br/>
Punta al documento a cui è associata la finestra cornice. Può essere NULL.

*bMakeVisible*<br/>
Se TRUE, indica che il frame dovrebbe essere visibile e attivo. Se FALSE, non viene reso visibile alcun discendente.

### <a name="remarks"></a>Note

In questo modo, tutte le visualizzazioni nella finestra cornice riceveranno le `OnInitialUpdate` chiamate.

Inoltre, se in precedenza non era presente una visualizzazione attiva, la visualizzazione principale della finestra cornice viene resa attiva. La vista primaria è una vista con ID figlio AFX_IDW_PANE_FIRST. Infine, la finestra cornice viene resa visibile se *bMakeVisible* è diverso da zero. Se *bMakeVisible* è 0, lo stato attivo e lo stato visibile correnti della finestra cornice rimarranno invariati. Non è necessario chiamare questa funzione quando si usa l'implementazione del Framework del file nuovo e del file aperto.

##  <a name="inmodalstate"></a>CFrameWnd:: InModalState

Chiamare questa funzione membro per verificare se una finestra cornice è modale o non modale.

```
BOOL InModalState() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sì; in caso contrario, 0.

##  <a name="istracking"></a>CFrameWnd:: untracking

Chiamare questa funzione membro per determinare se la barra di divisione nella finestra è attualmente in fase di spostamento.

```
BOOL IsTracking() const;
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è in corso un'operazione di divisione. in caso contrario, 0.

##  <a name="loadacceltable"></a>CFrameWnd:: LoadAccelTable

Chiamare per caricare la tabella dei tasti di scelta rapida specificata.

```
BOOL LoadAccelTable(LPCTSTR lpszResourceName);
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Identifica il nome della risorsa del tasto di scelta rapida. Utilizzare MAKEINTRESOURCE se la risorsa viene identificata con un ID di tipo Integer.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la tabella dei tasti di scelta rapida è stata caricata correttamente. in caso contrario, 0.

### <a name="remarks"></a>Note

È possibile caricare solo una tabella alla volta.

Le tabelle dei tasti di scelta rapida caricate dalle risorse vengono liberate automaticamente al termine dell'applicazione.

Se si chiama `LoadFrame` per creare la finestra cornice, il Framework carica una tabella dei tasti di scelta rapida insieme alle risorse di menu e icone e una chiamata successiva a questa funzione membro non è necessaria.

##  <a name="loadbarstate"></a>  CFrameWnd::LoadBarState

Chiamare questa funzione per ripristinare le impostazioni di ogni barra di controllo di proprietà della finestra cornice.

```
void LoadBarState(LPCTSTR lpszProfileName);
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Nome di una sezione del file di inizializzazione (INI) o di una chiave nel registro di sistema di Windows in cui vengono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Note

Le informazioni ripristinate includono visibilità, orientamento orizzontale/verticale, stato di ancoraggio e posizione della barra di controllo.

Le impostazioni che si desidera ripristinare devono essere scritte nel registro di sistema prima di `LoadBarState`chiamare. Scrivere le informazioni nel registro di sistema chiamando [CWinApp:: SetRegistryKey](../../mfc/reference/cwinapp-class.md#setregistrykey). Scrivere le informazioni nel file INI chiamando [SaveBarState](#savebarstate).

##  <a name="loadframe"></a>CFrameWnd:: LoadFrame

Chiamare per creare dinamicamente una finestra cornice dalle informazioni sulle risorse.

```
virtual BOOL LoadFrame(
    UINT nIDResource,
    DWORD dwDefaultStyle = WS_OVERLAPPEDWINDOW | FWS_ADDTOTITLE,
    CWnd* pParentWnd = NULL,
    CCreateContext* pContext = NULL);
```

### <a name="parameters"></a>Parametri

*nIDResource*<br/>
ID delle risorse condivise associate alla finestra cornice.

*dwDefaultStyle*<br/>
[Stile](../../mfc/reference/styles-used-by-mfc.md#window-styles)del frame. Includere lo stile FWS_ADDTOTITLE se si vuole che la barra del titolo visualizzi automaticamente il nome del documento rappresentato nella finestra.

*pParentWnd*<br/>
Puntatore all'elemento padre del frame.

*pContext*<br/>
Puntatore a una struttura [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) . Questo parametro può essere NULL.

### <a name="remarks"></a>Note

Costruire un `CFrameWnd` oggetto in due passaggi. Prima di tutto, richiamare il costruttore, che costruisce l' `CFrameWnd` oggetto, quindi chiamare `LoadFrame`, che carica la finestra cornice di Windows e le risorse associate e associa `CFrameWnd` la finestra cornice all'oggetto. Il parametro *nIDResource* specifica il menu, la tabella dei tasti di scelta rapida, l'icona e la risorsa di stringa del titolo per la finestra cornice.

Utilizzare la `Create` funzione membro `LoadFrame` anziché quando si desidera specificare tutti i parametri di creazione della finestra cornice.

Il Framework chiama `LoadFrame` quando crea una finestra cornice usando un oggetto modello di documento.

Il Framework usa l'argomento *pContext* per specificare gli oggetti da connettere alla finestra cornice, inclusi tutti gli oggetti visualizzazione contenuti. È possibile impostare l'argomento *pContext* su null quando si chiama `LoadFrame`.

##  <a name="m_bautomenuenable"></a>  CFrameWnd::m_bAutoMenuEnable

Quando questo membro dati è abilitato (impostazione predefinita), le voci di menu che non dispongono di gestori ON_UPDATE_COMMAND_UI o ON_COMMAND verranno disabilitate automaticamente quando l'utente estrae un menu.

```
BOOL m_bAutoMenuEnable;
```

### <a name="remarks"></a>Note

Le voci di menu che dispongono di un gestore ON_COMMAND ma senza gestore ON_UPDATE_COMMAND_UI verranno abilitate automaticamente.

Quando questo membro dati è impostato, le voci di menu vengono abilitate automaticamente nello stesso modo in cui sono abilitati i pulsanti della barra degli strumenti.

> [!NOTE]
> `m_bAutoMenuEnable`non ha alcun effetto sulle voci di menu di primo livello.

Questo membro dati semplifica l'implementazione dei comandi facoltativi in base alla selezione corrente e riduce la necessità di scrivere gestori ON_UPDATE_COMMAND_UI per l'abilitazione e la disabilitazione delle voci di menu.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#3](../../mfc/reference/codesnippet/cpp/cframewnd-class_3.cpp)]

##  <a name="negotiateborderspace"></a>  CFrameWnd::NegotiateBorderSpace

Chiamare questa funzione membro per negoziare lo spazio del bordo in una finestra cornice durante l'attivazione del sistema OLE.

```
virtual BOOL NegotiateBorderSpace(
    UINT nBorderCmd,
    LPRECT lpRectBorder);
```

### <a name="parameters"></a>Parametri

*nBorderCmd*<br/>
Contiene uno dei valori seguenti da `enum BorderCmd`:

- `borderGet` = 1

- `borderRequest` = 2

- `borderSet` = 3

*lpRectBorder*<br/>
Puntatore a una struttura [Rect](/windows/win32/api/windef/ns-windef-rect) o a un oggetto [CRect](../../atl-mfc-shared/reference/crect-class.md) che specifica le coordinate del bordo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Questa funzione membro è l' `CFrameWnd` implementazione della negoziazione dello spazio del bordo OLE.

##  <a name="onbarcheck"></a>CFrameWnd:: OnBarCheck

Chiamato ogni volta che viene eseguita un'azione sulla barra di controllo specificata.

```
afx_msg BOOL OnBarCheck(UINT nID);
```

### <a name="parameters"></a>Parametri

*nID*<br/>
ID della barra di controllo visualizzata.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la barra di controllo esiste; in caso contrario, 0.

##  <a name="oncontexthelp"></a>  CFrameWnd::OnContextHelp

Gestisce la Guida di MAIUSC + F1 per gli elementi sul posto.

```
afx_msg void OnContextHelp();
```

### <a name="remarks"></a>Note

Per abilitare la Guida sensibile al contesto, è necessario aggiungere un

[!code-cpp[NVC_MFCDocViewSDI#16](../../mfc/codesnippet/cpp/cframewnd-class_4.cpp)]

per la `CFrameWnd` mappa messaggi della classe e aggiungere anche una voce della tabella di tasti di scelta rapida, in genere Shift + F1, per abilitare questa funzione membro.

Se l'applicazione è un contenitore OLE, `OnContextHelp` inserisce tutti gli elementi sul posto contenuti all'interno dell'oggetto finestra cornice in modalità guida. Il cursore assume la forma di una freccia e un punto interrogativo e l'utente può quindi spostare il puntatore del mouse e premere il pulsante sinistro del mouse per selezionare una finestra di dialogo, una finestra, un menu o un pulsante di comando. Questa funzione membro chiama la funzione `WinHelp` di Windows con il contesto della Guida dell'oggetto sotto il cursore.

##  <a name="oncreateclient"></a>  CFrameWnd::OnCreateClient

Chiamata eseguita dal Framework durante l'esecuzione di `OnCreate`.

```
virtual BOOL OnCreateClient(
    LPCREATESTRUCT lpcs,
    CCreateContext* pContext);
```

### <a name="parameters"></a>Parametri

*lpcs*<br/>
Puntatore a una struttura [struttura CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) di Windows.

*pContext*<br/>
Puntatore a una struttura [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

Non chiamare mai questa funzione.

L'implementazione predefinita di questa funzione crea un `CView` oggetto dalle informazioni fornite in *pContext*, se possibile.

Eseguire l'override di questa funzione per eseguire l' `CCreateContext` override dei valori passati nell'oggetto o per modificare la modalità di creazione dei controlli nell'area client principale della finestra cornice. I `CCreateContext` membri di cui è possibile eseguire l'override sono descritti nella classe [CCreateContext](../../mfc/reference/ccreatecontext-structure.md) .

> [!NOTE]
>  Non sostituire i valori passati nella `CREATESTRUCT` struttura. Sono destinate esclusivamente all'utilizzo informativo. Se si desidera eseguire l'override del rettangolo della finestra iniziale, ad esempio, `CWnd` eseguire l'override della funzione membro [PreCreateWindow](../../mfc/reference/cwnd-class.md#precreatewindow).

##  <a name="onhidemenubar"></a>  CFrameWnd::OnHideMenuBar

Questa funzione viene chiamata quando il sistema sta per nascondere la barra dei menu nell'applicazione MFC corrente.

```
virtual void OnHideMenuBar();
```

### <a name="remarks"></a>Note

Questo gestore eventi consente all'applicazione di eseguire azioni personalizzate quando il sistema sta per nascondere il menu. Non è possibile impedire che il menu venga nascosto, ma è possibile, ad esempio, chiamare altri metodi per recuperare lo stile o lo stato dei menu.

##  <a name="onsetpreviewmode"></a>CFrameWnd:: OnSetPreviewMode

Chiamare questa funzione membro per impostare la finestra cornice principale dell'applicazione nella modalità di anteprima di stampa ed e al di fuori di essa.

```
virtual void OnSetPreviewMode(
    BOOL bPreview,
    CPrintPreviewState* pState);
```

### <a name="parameters"></a>Parametri

*bPreview*<br/>
Specifica se collocare l'applicazione in modalità di anteprima di stampa. Impostare su TRUE per inserire l'anteprima di stampa, FALSE per annullare la modalità di anteprima.

*pState*<br/>
Puntatore a una `CPrintPreviewState` struttura.

### <a name="remarks"></a>Note

L'implementazione predefinita Disabilita tutte le barre degli strumenti standard e nasconde il menu principale e la finestra principale del client. Questo consente di trasformare le finestre cornice MDI in finestre cornice SDI temporanee.

Eseguire l'override di questa funzione membro per personalizzare l'occultamento e la visualizzazione delle barre di controllo e di altre parti della finestra cornice durante l'anteprima di stampa. Chiamare l'implementazione della classe di base dall'interno della versione sottoposta a override.

##  <a name="onshowmenubar"></a>CFrameWnd:: OnShowMenuBar

Questa funzione viene chiamata quando il sistema sta per visualizzare la barra dei menu nell'applicazione MFC corrente.

```
virtual void OnShowMenuBar();
```

### <a name="remarks"></a>Note

Questo gestore eventi consente all'applicazione di eseguire azioni personalizzate quando il menu sta per essere visualizzato. Non è possibile impedire la visualizzazione del menu, ma è possibile, ad esempio, chiamare altri metodi per recuperare lo stile o lo stato dei menu.

##  <a name="onupdatecontrolbarmenu"></a>CFrameWnd:: OnUpdateControlBarMenu

Chiamata eseguita dal framework quando il menu associato viene aggiornato.

```
afx_msg void OnUpdateControlBarMenu(CCmdUI* pCmdUI);
```

### <a name="parameters"></a>Parametri

*pCmdUI*<br/>
Puntatore a un oggetto [CCmdUI](../../mfc/reference/ccmdui-class.md) che rappresenta il menu che ha generato il comando di aggiornamento. Il gestore di aggiornamento chiama la funzione membro [Enable](../../mfc/reference/ccmdui-class.md#enable) dell' `CCmdUI` oggetto tramite *pCmdUI* per aggiornare l'interfaccia utente.

##  <a name="recalclayout"></a>  CFrameWnd::RecalcLayout

Chiamata eseguita dal framework quando le barre di controllo standard vengono attivate o disattivate o quando la finestra cornice viene ridimensionata.

```
virtual void RecalcLayout(BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*bNotify*<br/>
Determina se l'elemento attivo sul posto per la finestra cornice riceve la notifica della modifica del layout. Se TRUE, l'elemento riceve una notifica. in caso contrario, FALSE.

### <a name="remarks"></a>Note

L'implementazione predefinita di questa funzione membro chiama la `CWnd` funzione `RepositionBars` membro per riposizionare tutte le barre di controllo nel frame e nella finestra del client principale (in genere a `CView` o MDICLIENT).

Eseguire l'override di questa funzione membro per controllare l'aspetto e il comportamento delle barre di controllo dopo che il layout della finestra cornice è stato modificato. Ad esempio, chiamarlo quando si attiva o disattiva le barre di controllo o si aggiunge un'altra barra di controllo.

##  <a name="rectdefault"></a>  CFrameWnd::rectDefault

Passare questo oggetto `CRect` statico come parametro durante la creazione di una finestra per consentire a Windows di scegliere le dimensioni e la posizione iniziali della finestra.

```
static AFX_DATA const CRect rectDefault;
```

##  <a name="savebarstate"></a>  CFrameWnd::SaveBarState

Chiamare questa funzione per archiviare le informazioni su ogni barra di controllo di proprietà della finestra cornice.

```
void SaveBarState(LPCTSTR lpszProfileName) const;
```

### <a name="parameters"></a>Parametri

*lpszProfileName*<br/>
Nome di una sezione nel file di inizializzazione o una chiave nel registro di sistema di Windows in cui vengono archiviate le informazioni sullo stato.

### <a name="remarks"></a>Note

Queste informazioni possono essere lette dal file di inizializzazione tramite [LoadBarState](#loadbarstate). Le informazioni archiviate includono visibilità, orientamento orizzontale/verticale, stato di ancoraggio e posizione della barra di controllo.

##  <a name="setactivepreviewview"></a>  CFrameWnd::SetActivePreviewView

Indica che la visualizzazione specificata è la visualizzazione attiva per l'anteprima avanzata.

```
void SetActivePreviewView(CView* pViewNew);
```

### <a name="parameters"></a>Parametri

*pViewNew*<br/>
Puntatore a una visualizzazione da attivare.

### <a name="remarks"></a>Note

##  <a name="setactiveview"></a>  CFrameWnd::SetActiveView

Chiamare questa funzione membro per impostare la visualizzazione attiva.

```
void SetActiveView(
    CView* pViewNew,
    BOOL bNotify = TRUE);
```

### <a name="parameters"></a>Parametri

*pViewNew*<br/>
Specifica un puntatore a un oggetto [CView](../../mfc/reference/cview-class.md) o null per nessuna visualizzazione attiva.

*bNotify*<br/>
Specifica se la visualizzazione deve ricevere notifiche di attivazione. Se true, `OnActivateView` viene chiamato per la nuova visualizzazione; se false, non lo è.

### <a name="remarks"></a>Note

Il Framework chiamerà questa funzione automaticamente quando l'utente passa lo stato attivo a una visualizzazione all'interno della finestra cornice. È possibile chiamare `SetActiveView` in modo esplicito per impostare lo stato attivo sulla visualizzazione specificata.

##  <a name="setdockstate"></a>  CFrameWnd::SetDockState

Chiamare questa funzione membro per applicare le informazioni sullo stato archiviate in un `CDockState` oggetto alle barre di controllo della finestra cornice.

```
void SetDockState(const CDockState& state);
```

### <a name="parameters"></a>Parametri

*state*<br/>
Applicare lo stato archiviato alle barre di controllo della finestra cornice.

### <a name="remarks"></a>Note

Per ripristinare uno stato precedente delle barre di controllo, è possibile caricare lo stato archiviato con `CDockState::LoadState` o `Serialize`, quindi utilizzare `SetDockState` per applicarlo alle barre di controllo della finestra cornice. Lo stato precedente viene archiviato nell' `CDockState` oggetto con`GetDockState`

##  <a name="setmenubarstate"></a>  CFrameWnd::SetMenuBarState

Imposta lo stato di visualizzazione del menu nell'applicazione MFC corrente su nascosto o visualizzato.

```
virtual BOOL SetMenuBarState(DWORD nState);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nState*|in Specifica se visualizzare o nascondere il menu. Il parametro *nState* può avere i valori seguenti:<br /><br />-AFX_MBS_VISIBLE (0x01)-Visualizza il menu se è nascosto, ma non ha alcun effetto se è visibile.<br />-AFX_MBS_HIDDEN (0x02): nasconde il menu se è visibile, ma non ha alcun effetto se è nascosto.|

### <a name="return-value"></a>Valore restituito

TRUE se questo metodo modifica correttamente lo stato del menu; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se si verifica un errore di runtime, questo metodo esegue l'asserzione in modalità debug e genera un'eccezione derivata dalla classe [CException](../../mfc/reference/cexception-class.md) .

##  <a name="setmenubarvisibility"></a>CFrameWnd:: SetMenuBarVisibility

Imposta il comportamento predefinito del menu nell'applicazione MFC corrente in modo che sia nascosto o visibile.

```
virtual void SetMenuBarVisibility(DWORD nStyle);
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*nStyle*|in Specifica se il menu è nascosto per impostazione predefinita oppure è visibile e presenta lo stato attivo. Il parametro *nStyle* può avere i valori seguenti:<br /><br />-AFX_MBV_KEEPVISIBLE (0x01)-<br />     Il menu viene visualizzato in qualsiasi momento e, per impostazione predefinita, non ha lo stato attivo.<br />-AFX_MBV_DISPLAYONFOCUS (0x02)-<br />     Il menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto ALT per visualizzare il menu e assegnargli lo stato attivo. Se il menu è visualizzato, premere il tasto ALT o ESC per nascondere il menu.<br />-AFX_MBV_ DISPLAYONFOCUS (0x02) &#124; AFX_MBV_DISPLAYONF10 (0x04)<br />     (combinazione bit per bit (o)): il menu è nascosto per impostazione predefinita. Se il menu è nascosto, premere il tasto F10 per visualizzare il menu e assegnargli lo stato attivo. Se il menu è visualizzato, premere il tasto F10 per attivare o disattivare lo stato attivo nel menu. Il menu viene visualizzato fino a quando non si preme il tasto ALT o ESC per nasconderlo.|

### <a name="remarks"></a>Note

Se il valore del parametro *nStyle* non è valido, questo metodo esegue l'asserzione in modalità debug e genera [CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md) in modalità di rilascio. In caso di altri errori di runtime, questo metodo esegue l'asserzione in modalità debug e genera un'eccezione derivata dalla classe [CException](../../mfc/reference/cexception-class.md) .

Questo metodo influiscono sullo stato dei menu nelle applicazioni scritte per Windows Vista e versioni successive.

##  <a name="setmessagetext"></a>  CFrameWnd::SetMessageText

Chiamare questa funzione per inserire una stringa nel riquadro della barra di stato con ID 0.

```
void SetMessageText(LPCTSTR lpszText);
void SetMessageText(UINT nID);
```

### <a name="parameters"></a>Parametri

*lpszText*<br/>
Punta alla stringa da posizionare sulla barra di stato.

*nID*<br/>
ID risorsa stringa della stringa da inserire sulla barra di stato.

### <a name="remarks"></a>Note

Si tratta in genere del riquadro più a sinistra e più lungo della barra di stato.

##  <a name="setprogressbarposition"></a>  CFrameWnd::SetProgressBarPosition

Imposta la posizione corrente per l'indicatore di stato di Windows 7 visualizzato sulla barra delle applicazioni.

```
void SetProgressBarPosition(int nProgressPos);
```

### <a name="parameters"></a>Parametri

*nProgressPos*<br/>
Specifica la posizione da impostare. Deve essere compreso nell'intervallo impostato da `SetProgressBarRange`.

### <a name="remarks"></a>Note

##  <a name="setprogressbarrange"></a>  CFrameWnd::SetProgressBarRange

Imposta l'intervallo per l'indicatore di stato di Windows 7 visualizzato sulla barra delle applicazioni.

```
void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax);
```

### <a name="parameters"></a>Parametri

*nRangeMin*<br/>
Valore minimo.

*nRangeMax*<br/>
Valore massimo.

### <a name="remarks"></a>Note

##  <a name="setprogressbarstate"></a>  CFrameWnd::SetProgressBarState

Imposta il tipo e lo stato dell'indicatore di stato visualizzato su un pulsante della barra delle applicazioni.

```
void SetProgressBarState(TBPFLAG tbpFlags);
```

### <a name="parameters"></a>Parametri

*tbpFlags*<br/>
Flag che controllano lo stato corrente del pulsante di avanzamento. Specificare solo uno dei flag seguenti perché tutti gli Stati si escludono a vicenda: TBPF_NOPROGRESS, TBPF_INDETERMINATE, TBPF_NORMAL, TBPF_ERROR, TBPF_PAUSED.

### <a name="remarks"></a>Note

##  <a name="settaskbaroverlayicon"></a>  CFrameWnd::SetTaskbarOverlayIcon

Di overload. Applica una sovrapposizione a un pulsante della barra delle applicazioni per indicare lo stato dell'applicazione o per inviare una notifica all'utente.

```
BOOL SetTaskbarOverlayIcon(
    UINT nIDResource,
    LPCTSTR lpcszDescr);

BOOL SetTaskbarOverlayIcon(
    HICON hIcon,
    LPCTSTR lpcszDescr);
```

### <a name="parameters"></a>Parametri

*nIDResource*<br/>
Specifica l'ID risorsa di un'icona da usare come sovrimpressione. Per informazioni dettagliate, vedere la descrizione di *HICON* .

*lpcszDescr*<br/>
Puntatore a una stringa che fornisce una versione del testo alternativo delle informazioni trasmesse dalla sovrimpressione per finalità di accessibilità.

*hIcon*<br/>
Handle di un'icona da utilizzare come sovrimpressione. Si tratta di un'icona di piccole dimensioni, che misura 16x16 pixel a 96 punti per pollice (dpi). Se un'icona di sovrapposizione è già applicata al pulsante della barra delle applicazioni, la sovrapposizione esistente viene sostituita. Questo valore può essere NULL. Il modo in cui viene gestito un valore NULL varia a seconda che il pulsante della barra delle applicazioni rappresenti una singola finestra o un gruppo di finestre. È responsabilità dell'applicazione chiamante liberare *HICON* quando non è più necessario.

### <a name="return-value"></a>Valore restituito

TRUE se l'operazione ha esito positivo; FALSE se la versione del sistema operativo è inferiore a Windows 7 o se si verifica un errore durante l'impostazione dell'icona.

### <a name="remarks"></a>Note

##  <a name="settitle"></a>CFrameWnd:: toTitle

Imposta il titolo dell'oggetto finestra.

```
void SetTitle(LPCTSTR lpszTitle);
```

### <a name="parameters"></a>Parametri

*lpszTitle*<br/>
Puntatore a una stringa di caratteri contenente il titolo dell'oggetto finestra.

##  <a name="showcontrolbar"></a>  CFrameWnd::ShowControlBar

Chiamare questa funzione membro per mostrare o nascondere la barra di controllo.

```
void ShowControlBar(
    CControlBar* pBar,
    BOOL bShow,
    BOOL bDelay);
```

### <a name="parameters"></a>Parametri

*pBar*<br/>
Puntatore alla barra di controllo da visualizzare o nascondere.

*bShow*<br/>
Se TRUE, specifica che la barra di controllo deve essere visualizzata. Se FALSE, specifica che la barra di controllo deve essere nascosta.

*bDelay*<br/>
Se TRUE, ritardare la visualizzazione della barra di controllo. Se FALSE, visualizzare immediatamente la barra di controllo.

##  <a name="showownedwindows"></a>  CFrameWnd::ShowOwnedWindows

Chiamare questa funzione membro per mostrare tutte le finestre che sono discendenti dell' `CFrameWnd` oggetto.

```
void ShowOwnedWindows(BOOL bShow);
```

### <a name="parameters"></a>Parametri

*bShow*<br/>
Specifica se le finestre di proprietà devono essere visualizzate o nascoste.

## <a name="see-also"></a>Vedere anche

[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWnd](../../mfc/reference/cwnd-class.md)<br/>
[Classe CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)<br/>
[Classe CMDIChildWnd](../../mfc/reference/cmdichildwnd-class.md)<br/>
[Classe CView](../../mfc/reference/cview-class.md)<br/>
[Classe CDocTemplate](../../mfc/reference/cdoctemplate-class.md)<br/>
[Struttura CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md)
