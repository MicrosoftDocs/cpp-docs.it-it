---
title: Informazioni sull'applicazione e gestione
description: Riferimento alle informazioni e alle funzioni di gestione dell'applicazione della libreria MFC (Microsoft Foundation Class).
ms.date: 01/27/2020
helpviewer_keywords:
- applications [MFC], managing
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
ms.openlocfilehash: fc0b4b09f6c48da68bebe4a2825f49bcf6ab7e23
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372505"
---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione

Quando si scrive un'applicazione, si crea un singolo oggetto derivato da [CWinApp.When](../../mfc/reference/cwinapp-class.md)you write an application, you create a single CWinApp-derived object. A volte, è possibile ottenere informazioni su `CWinApp`questo oggetto dall'esterno dell'oggetto derivato da . Oppure potrebbe essere necessario accedere ad altri oggetti "manager" globali.

La libreria Microsoft Foundation Class fornisce le seguenti funzioni globali che consentono di eseguire queste attività:

## <a name="application-information-and-management-functions"></a>Informazioni sull'applicazione e funzioni di gestione

|||
|-|-|
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|
|[AfxContextMenuManager](#afxcontextmenumanager)|Puntatore al [gestore](ccontextmenumanager-class.md)del menu di scelta rapida globale .|
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|
|[AfxFindResourceHandle](#afxfindresourcehandle)|Scorre la catena di risorse e individua una risorsa specifica in base all'ID e al tipo di risorsa. |
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti del modulo DLL (Dynamic-Link Library) caricato. Quando il conteggio dei riferimenti raggiunge lo zero, il modulo non viene mappato.|
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore al `CWinApp` singolo oggetto dell'applicazione.|
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un HINSTANCE che rappresenta questa istanza dell'applicazione.|
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra "principale" corrente di un'applicazione non OLE o alla finestra cornice sul posto di un'applicazione server.|
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).|
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un HINSTANCE all'origine delle risorse predefinite dell'applicazione. Utilizzare per accedere direttamente alle risorse dell'applicazione.|
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) corrente.|
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza il controllo Rich Edit della versione 1.0 per l'applicazione.|
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza il controllo Rich Edit della versione 2.0 e successive per l'applicazione.|
|[AfxIsExtendedFrameClass](#afxisextendedframeclass)|Determina se la finestra specificata è un oggetto frame esteso.|
|[AfxIsMFCToolBar](#afxismfctoolbar)|Determina se la finestra specificata è un oggetto della barra degli strumenti.|
|[AfxKeyboardManager (informazioni in lingua inlingua](#afxkeyboardmanager)|Puntatore al [gestore della tastiera](ckeyboardmanager-class.md)globale .|
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione DLL.|
|[AfxLoadLibraryEx (informazioni in stati incommiino in modo in](#afxloadlibraryex)|Esegue il mapping di un modulo DLL utilizzando le opzioni specificate e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione DLL.|
|[AfxMenuTearOffManager](#afxmenutearoffmanager)|Puntatore al gestore globale del [menu tear-off](cmenutearoffmanager-class.md).|
|[AfxMouseManager](#afxmousemanager)|Puntatore al [gestore globale del mouse](cmousemanager-class.md).|
|[AfxRegisterClass](#afxregisterclass)|Registra una classe finestra in una DLL che utilizza MFC.|
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe finestra di Windows per integrare quelli registrati automaticamente da MFC.|
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).|
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta l'handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.|
|[AfxShellManager](#afxshellmanager)|Puntatore al [gestore della shell](cshellmanager-class.md)globale . |
|[AfxSocketInit](#afxsocketinit)|Chiamato in `CWinApp::InitInstance` un override per inizializzare Windows Sockets.|
|[AfxUserToolsManager (informazioni in due)](#afxusertoolsmanager)|Puntatore al [gestore](cusertoolsmanager-class.md)globale degli strumenti utente .|
|[AfxWinInit](#afxwininit)|Chiamato dalla `WinMain` funzione fornita da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC. Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|

## <a name="afxbeginthread"></a><a name="afxbeginthread"></a>Afxbeginthread

Chiamare questa funzione per creare un nuovo thread.

```cpp
CWinThread* AfxBeginThread(
    AFX_THREADPROC pfnThreadProc,
    LPVOID pParam,
    int nPriority = THREAD_PRIORITY_NORMAL,
    UINT nStackSize = 0,
    DWORD dwCreateFlags = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);

CWinThread* AfxBeginThread(
    CRuntimeClass* pThreadClass,
    int nPriority = THREAD_PRIORITY_NORMAL,
    UINT nStackSize = 0,
    DWORD dwCreateFlags = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```

### <a name="parameters"></a>Parametri

*PfnThreadProc (PfnThreadProc)*\
Punta alla funzione di controllo per il thread di lavoro. Il puntatore non può essere NULL. Questa funzione deve essere dichiarata come segue:This function must be declared as follows:

`UINT __cdecl MyControllingFunction( LPVOID pParam );`

*pThreadClass (classe pThreadClass)*\
Il RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).

*paramedi*\
Parametro da passare alla funzione di controllo.

*nPriorità*\
Priorità da impostare per il thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in Windows SDK.

*nStackSize (informazioni in base a un confronto e*\
Specifica la dimensione in byte dello stack per il nuovo thread. Se 0, la dimensione dello stack viene ridimensionata per impostazione predefinita allo stack delle stesse dimensioni del thread di creazione.

*dwCreateFlags (informazioni in chiave)*\
Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori seguenti:This flag can contain one of two values:

- CREATE_SUSPENDED Avviare il thread con un conteggio delle sospensioni pari a uno. Utilizzare CREATE_SUSPENDED se si desidera inizializzare `CWinThread` i dati dei membri dell'oggetto, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o i membri della classe derivata, prima che il thread inizi l'esecuzione. Al termine dell'inizializzazione, usare [CWinThread::ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare l'esecuzione del thread. Il thread non verrà `CWinThread::ResumeThread` eseguito finché non viene chiamato.

- **0** Avviare il thread immediatamente dopo la creazione.

*lpSecurityAttrs*\
Punta a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica gli attributi di sicurezza per il thread. Se NULL, vengono utilizzati gli stessi attributi di sicurezza del thread di creazione. Per ulteriori informazioni su questa struttura, vedere Windows SDK.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto thread appena creato o NULL se si verifica un errore.

### <a name="remarks"></a>Osservazioni

La prima `AfxBeginThread` forma di crea un thread di lavoro. Il secondo form crea un thread che può essere utilizzato come thread dell'interfaccia utente o come thread di lavoro.

`AfxBeginThread`crea un `CWinThread` nuovo oggetto, chiama la funzione [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread e restituisce un puntatore al thread. Durante la procedura vengono eseguiti controlli per assicurarsi che tutti gli oggetti vengano deallocati correttamente in caso di errore di qualsiasi parte della creazione. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) dall'interno del thread o restituire dalla funzione di controllo del thread di lavoro.

Il multithreading deve essere abilitato dall'applicazione; in caso contrario, questa funzione avrà esito negativo. Per ulteriori informazioni sull'abilitazione del multithreading, vedere [/MD, /MT, /LD (Usa libreria di runtime)](../../build/reference/md-mt-ld-use-run-time-library.md).

Per ulteriori `AfxBeginThread`informazioni su , vedere gli articoli [Multithreading: creazione di thread](../../parallel/multithreading-creating-worker-threads.md) di lavoro e [multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CSocket::Attach](../../mfc/reference/csocket-class.md#attach).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxcontextmenumanager"></a><a name="afxcontextmenumanager"></a>AfxContextMenuManager

Puntatore al [gestore](ccontextmenumanager-class.md)del menu di scelta rapida globale .

### <a name="syntax"></a>Sintassi

```cpp
CContextMenuManager* afxContextMenuManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcontextmenumanager.h

## <a name="afxendthread"></a><a name="afxendthread"></a>AfxEndThread

Chiamare questa funzione per terminare il thread attualmente in esecuzione.

```cpp
void AFXAPI AfxEndThread(
    UINT nExitCode,
    BOOL bDelete  = TRUE);
```

### <a name="parameters"></a>Parametri

*nExitCode (Codice di uscita)*\
Specifica il codice di uscita del thread.

*Belimina*\
Elimina l'oggetto thread dalla memoria.

### <a name="remarks"></a>Osservazioni

Deve essere chiamato dall'interno del thread per essere terminato.

Per ulteriori `AfxEndThread`informazioni su , vedere l'articolo [Multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxfindresourcehandle"></a><a name="afxfindresourcehandle"></a>AfxFindResourceHandle

Utilizzare `AfxFindResourceHandle` per esaminare la catena di risorse e individuare una risorsa specifica in base all'ID e al tipo di risorsa.

### <a name="syntax"></a>Sintassi

```cpp
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );
```

### <a name="parameters"></a>Parametri

*LpszName (nome di lpsz)*\
Puntatore a una stringa contenente l'ID risorsa.
*lpszType (tipo lpsz)*\
Puntatore al tipo di risorsa. Per un elenco dei tipi di risorse, vedere [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per il modulo che contiene la risorsa.

### <a name="remarks"></a>Osservazioni

`AfxFindResourceHandle`trova la risorsa specifica e restituisce un handle al modulo che contiene la risorsa. La risorsa potrebbe trovarsi in qualsiasi DLL di estensione MFC caricata. `AfxFindResourceHandle`ti dice quale ha la risorsa.

I moduli vengono cercati in questo ordine:

1. Il modulo principale, se si tratta di una DLL di estensione MFC.

1. Moduli non di sistema.

1. Moduli specifici del linguaggio.

1. Il modulo principale, se si tratta di una DLL di sistema.

1. Moduli di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="afxfreelibrary"></a><a name="afxfreelibrary"></a>Libreria afxFree

Sia `AfxFreeLibrary` che `AfxLoadLibrary` mantengono un conteggio dei riferimenti per ogni modulo di libreria caricato.

```cpp
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib);
```

### <a name="parameters"></a>Parametri

*hInstLib*\
Handle del modulo di libreria caricato. [AfxLoadLibrary](#afxloadlibrary) restituisce questo handle.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione viene eseguita correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

`AfxFreeLibrary` decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido. Questo conteggio dei riferimenti viene incrementato ogni volta che viene chiamata `AfxLoadLibrary`.

Prima di disassociare un modulo di libreria, il sistema consente alla DLL di rimuoverlo dai processi che lo stanno utilizzando. In questo modo la DLL ha la possibilità di pulire le risorse allocate per il processo corrente. Dopo il completamento della funzione del punto di ingresso, il modulo di libreria viene rimosso dallo spazio degli indirizzi del processo corrente.

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

Assicurarsi di `AfxFreeLibrary` `AfxLoadLibrary` utilizzare e (anziché `FreeLibrary` le `LoadLibrary`funzioni Win32 e ) se l'applicazione utilizza più thread. L'utilizzo `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto che viene eseguito quando la DLL di estensione MFC viene caricata e scaricata non danneggia lo stato globale MFC.

### <a name="example"></a>Esempio

Vedere l'esempio per [AfxLoadLibrary](#afxloadlibrary).

### <a name="requirements"></a>Requisiti

  **Afxdll_.h dell'intestazione**

## <a name="afxgetapp"></a><a name="afxgetapp"></a>AfxGetApp

Il puntatore restituito da questa funzione può essere utilizzato per accedere alle informazioni dell'applicazione, ad esempio il codice di invio del messaggio principale o la finestra in primo piano.

```cpp
CWinApp* AFXAPI AfxGetApp();
```

### <a name="return-value"></a>Valore restituito

Puntatore al `CWinApp` singolo oggetto per l'applicazione.

### <a name="remarks"></a>Osservazioni

Se questo metodo restituisce NULL, potrebbe indicare che la finestra principale dell'applicazione non è stata ancora completamente inizializzata. Potrebbe anche indicare un problema.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxgetappname"></a><a name="afxgetappname"></a>NomeapAfxGetAppName

La stringa restituita può essere utilizzata per i messaggi di diagnostica o come radice per i nomi di stringa temporanei.

```cpp
LPCTSTR AFXAPI AfxGetAppName();
```

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null contenente il nome dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#127](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxgetinstancehandle"></a><a name="afxgetinstancehandle"></a>AfxGetInstanceHandle

Questa funzione consente di recuperare l'handle dell'istanza dell'applicazione corrente.

```cpp
HINSTANCE  AFXAPI AfxGetInstanceHandle();
```

### <a name="return-value"></a>Valore restituito

Oggetto HINSTANCE all'istanza corrente dell'applicazione. Se viene chiamato dall'interno di una DLL collegata alla versione USRDLL di MFC, viene restituito un HINSTANCE alla DLL.

### <a name="remarks"></a>Osservazioni

`AfxGetInstanceHandle`restituisce sempre l'HINSTANCE del file eseguibile (. EXE) a meno che non venga chiamato dall'interno di una DLL collegata alla versione USRDLL di MFC. In questo caso, restituisce un HINSTANCE alla DLL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxgetmainwnd"></a><a name="afxgetmainwnd"></a>AfxGetMainWnd

Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione. Utilizzare questo risultato anziché fare riferimento direttamente al [membro m_pMainWnd](../../mfc/reference/cwinthread-class.md#m_pmainwnd) dell'oggetto applicazione.

```cpp
CWnd* AFXAPI AfxGetMainWnd();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto finestra cornice che contiene il documento attivo sul posto, se il server dispone di un oggetto attivo sul posto all'interno di un contenitore attivo.

Se non è presente alcun oggetto attivo sul posto all'interno di un contenitore o l'applicazione non è un server OLE, questa funzione restituisce il *m_pMainWnd* dell'oggetto applicazione.

Se `AfxGetMainWnd` viene chiamata dal thread principale dell'applicazione, restituisce la finestra principale dell'applicazione sulla base delle regole sopra indicate. Se la funzione viene chiamata da un thread secondario nell'applicazione, la funzione restituisce la finestra principale associata al thread che ha effettuato la chiamata.

### <a name="remarks"></a>Osservazioni

Se l'applicazione non è un server OLE, la chiamata a questa funzione equivale a fare riferimento direttamente al *membro m_pMainWnd* dell'oggetto applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxgetperuserregistration"></a><a name="afxgetperuserregistration"></a>AfxGetPerUserRegistration

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

```cpp
BOOL AFXAPI AfxGetPerUserRegistration();
```

### <a name="return-value"></a>Valore restituito

TRUE indica che le informazioni del Registro di sistema vengono indirizzate al nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="remarks"></a>Osservazioni

Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER .** Solo i framework MFC e ATL sono interessati dal reindirizzamento.

Per modificare se l'applicazione reindirizza l'accesso al Registro di sistema, utilizzare [AfxSetPerUserRegistration](#afxsetperuserregistration).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxstat_.h

## <a name="afxgetresourcehandle"></a><a name="afxgetresourcehandle"></a>AfxGetResourceHandle

Utilizzare l'handle HINSTANCE restituito da questa funzione per accedere direttamente alle risorse dell'applicazione, ad esempio nelle chiamate alla funzione `FindResource`Windows .

```cpp
extern HINSTANCE  AfxGetResourceHandle();
```

### <a name="return-value"></a>Valore restituito

Un handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxgetthread"></a><a name="afxgetthread"></a>AfxGetThread

Chiamare questa funzione per ottenere un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) che rappresenta il thread attualmente in esecuzione.

```cpp
CWinThread* AfxGetThread();
```

### <a name="return-value"></a>Valore restituito

Puntatore al thread attualmente in esecuzione; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Deve essere chiamato dall'interno del thread.

> [!NOTE]
> Se si esegue il porting di un progetto MFC che chiama `AfxGetThread` da Visual C, versioni 4.2, 5.0 o 6.0, `AfxGetThread` chiama [AfxGetApp](#afxgetapp) se non viene trovato alcun thread. Nelle versioni più recenti `AfxGetThread` del compilatore, restituisce NULL se non è stato trovato alcun thread. Se si desidera il thread `AfxGetApp`dell'applicazione, è necessario chiamare .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxinitrichedit"></a><a name="afxinitrichedit"></a>AfxInitRichModifica

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 1.0) per l'applicazione.

```cpp
BOOL AFXAPI AfxInitRichEdit();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene fornita per compatibilità con le versioni precedenti. Le nuove applicazioni devono utilizzare [AfxInitRichEdit2](#afxinitrichedit2).

`AfxInitRichEdit`carica RICHED32. DLL per inizializzare la versione 1.0 del controllo Rich Edit. Per utilizzare le versioni 2.0 e 3.0 del controllo Rich Edit, RICHED20. DLL deve essere caricato. Viene caricato effettuando una chiamata ad [AfxInitRichEdit2](#afxinitrichedit2).

Per aggiornare alla versione 2.0 i controlli Rich Edit nelle applicazioni visual c'è della versione 2.0, aprire il file . RC come testo, modificare il nome della classe di ogni controllo Rich Edit da "RICHEDIT" a "RichEdit20a". Sostituire quindi la `AfxInitRichEdit` `AfxInitRichEdit2`chiamata a con .

Questa funzione inizializza anche la libreria di controlli comuni, se la libreria non è già stata inizializzata per il processo. Se si utilizza il controllo Rich Edit direttamente dall'applicazione MFC, chiamare questa funzione per assicurarsi che MFC abbia inizializzato correttamente il runtime del controllo Rich Edit. Se si `Create` chiama il metodo di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessaria.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxinitrichedit2"></a><a name="afxinitrichedit2"></a>AfxInitRichModifica2

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 2.0 e successive) per l'applicazione.

```cpp
BOOL AFXAPI AfxInitRichEdit2();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per caricare il RICHED20. DLL e inizializzare la versione 2.0 del controllo Rich Edit. Se si `Create` chiama il metodo di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessaria.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxisextendedframeclass"></a><a name="afxisextendedframeclass"></a>AfxIsExtendedFrameClass

Determina se la finestra specificata è un oggetto frame esteso.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*\
[in] Puntatore a un oggetto `CWnd`derivato da .

### <a name="return-value"></a>Valore restituito

TRUESe la finestra fornita è un oggetto frame esteso. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo restituisce TRUE se *pWnd* deriva da una delle seguenti classi:

- `CFrameWndEx`

- `CMDIFrameWndEx`

- `COleIPFrameWndEx`

- `COleDocIPFrameWndEx`

- `CMDIChildWndEx`

Il metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è una finestra frame estesa.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxismfctoolbar"></a><a name="afxismfctoolbar"></a>AfxIsMFCToolBar

Determina se la finestra specificata è un oggetto della barra degli strumenti.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*\
[in] Puntatore a un oggetto `CWnd`derivato da .

### <a name="return-value"></a>Valore restituito

TRUESe la finestra fornita è un oggetto barra degli strumenti. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Questo metodo `TRUE` restituisce se *pWnd* deriva da `CMFCToolBar`. Questo metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è un oggetto `CMFCToolBar`.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxkeyboardmanager"></a><a name="afxkeyboardmanager"></a>AfxKeyboardManager (informazioni in lingua inlingua

Puntatore al [gestore della tastiera](ckeyboardmanager-class.md)globale .

### <a name="syntax"></a>Sintassi

```cpp
CKeyboardManager* afxKeyboardManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxkeyboardmanager.h

## <a name="afxloadlibrary"></a><a name="afxloadlibrary"></a>AfxLoadLibrary (libreria di informazioni su afxLoad)

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

```cpp
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName);
```

### <a name="parameters"></a>Parametri

*lpszNome modulo*\
Punta a una stringa con terminazione null che contiene il nome del modulo (oggetto . DLL o . EXE). Il nome specificato è il nome del file del modulo.

Se la stringa specifica un percorso ma il file non esiste nella directory specificata, la funzione ha esito negativo.

Se non viene specificato un percorso e l'estensione del nome file viene omessa, l'estensione predefinita . DLL viene aggiunta. Tuttavia, la stringa del nome file può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando non viene specificato alcun percorso, la funzione utilizza [l'ordine di ricerca per](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications)le applicazioni desktop .

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. In caso di errore, il valore restituito è NULL.

### <a name="remarks"></a>Osservazioni

Restituisce un handle che può essere utilizzato in [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione DLL. `AfxLoadLibrary`può essere utilizzato anche per mappare altri moduli eseguibili.

Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio dei riferimenti `AfxLoadLibrary` viene incrementato ogni volta `AfxFreeLibrary` che viene chiamato e viene decrementato ogni volta che viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.

Assicurarsi di `AfxLoadLibrary` `AfxFreeLibrary` utilizzare e (anziché `LoadLibrary` le `FreeLibrary`funzioni Win32 e ) se l'applicazione utilizza più thread e se carica dinamicamente una DLL di estensione MFC. Utilizzo `AfxLoadLibrary` `AfxFreeLibrary` e assicura che il codice di avvio e arresto che viene eseguito quando la DLL di estensione MFC viene caricata e scaricata non danneggia lo stato globale MFC.

L'utilizzo `AfxLoadLibrary` in un'applicazione richiede il collegamento dinamico alla versione DLL di MFC. Il file `AfxLoadLibrary`di intestazione per , Afxdll_.h, viene incluso solo se MFC è collegato all'applicazione come DLL. Questo requisito è legato, perché è necessario collegare alla versione DLL di MFC per utilizzare o creare DLL di estensione MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]

### <a name="requirements"></a>Requisiti

  **Afxdll_.h dell'intestazione**

## <a name="afxloadlibraryex"></a><a name="afxloadlibraryex"></a>AfxLoadLibraryEx (informazioni in stati incommiino in modo in

Utilizzare `AfxLoadLibraryEx` per eseguire il mapping di un modulo DLL.

```cpp
HINSTANCE AFXAPI AfxLoadLibraryEx(LPCTSTR lpFileName, HANDLE hFile, DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

*LpNomeFile*\
Punta a una stringa con terminazione null che contiene il nome del modulo (oggetto . DLL o . EXE). Il nome specificato è il nome del file del modulo.

Se la stringa specifica un percorso ma il file non esiste nella directory specificata, la funzione ha esito negativo.

Se non viene specificato un percorso e l'estensione del nome file viene omessa, l'estensione predefinita . DLL viene aggiunta. Tuttavia, la stringa del nome file può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando non viene specificato alcun percorso, la funzione utilizza [l'ordine di ricerca per](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications)le applicazioni desktop .

*hFile (File)*\
Questo parametro è riservato per usi futuri. Deve essere NULL.

*Dwflags*\
Azione da eseguire durante il caricamento del modulo. Se non viene specificato alcun flag, il `AfxLoadLibrary` comportamento di questa funzione è identico alla funzione. I valori possibili di questo parametro sono descritti nella documentazione di [LoadLibraryEx.](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw)

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. In caso di errore, il valore restituito è NULL.

### <a name="remarks"></a>Osservazioni

`AfxLoadLibraryEx`restituisce un handle che può essere utilizzato in [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione DLL. `AfxLoadLibraryEx`può essere utilizzato anche per mappare altri moduli eseguibili.

Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio dei riferimenti `AfxLoadLibraryEx` viene incrementato ogni volta `AfxFreeLibrary` che viene chiamato e viene decrementato ogni volta che viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.

Assicurarsi di `AfxLoadLibraryEx` `AfxFreeLibrary` utilizzare e (anziché `LoadLibraryEx` le `FreeLibrary`funzioni Win32 e ) se l'applicazione utilizza più thread e se carica dinamicamente una DLL di estensione MFC. L'utilizzo `AfxLoadLibraryEx` e `AfxFreeLibrary` assicura che il codice di avvio e arresto che viene eseguito quando la DLL di estensione MFC viene caricata e scaricata non danneggia lo stato globale MFC.

L'utilizzo `AfxLoadLibraryEx` in un'applicazione richiede il collegamento dinamico alla versione DLL di MFC. Il file `AfxLoadLibraryEx`di intestazione per , Afxdll_.h, viene incluso solo se MFC è collegato all'applicazione come DLL. Questo requisito è legato, perché è necessario collegare alla versione DLL di MFC per utilizzare o creare DLL di estensione MFC.

### <a name="requirements"></a>Requisiti

  **Afxdll_.h dell'intestazione**

## <a name="afxmenutearoffmanager"></a><a name="afxmenutearoffmanager"></a>AfxMenuTearOffManager

Puntatore al gestore globale del [menu tear-off](cmenutearoffmanager-class.md).

### <a name="syntax"></a>Sintassi

```cpp
CMenuTearOffManager* g_pTearOffMenuManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmenutearoffmanager.h

## <a name="afxmousemanager"></a><a name="afxmousemanager"></a>AfxMouseManager

Puntatore al [gestore globale del mouse](cmousemanager-class.md).

### <a name="syntax"></a>Sintassi

```cpp
CMouseManager* afxMouseManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmousemanager.h

## <a name="afxregisterclass"></a><a name="afxregisterclass"></a>Classe AfxRegisterClass

Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.

```cpp
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass);
```

### <a name="parameters"></a>Parametri

*Classe lpWndClass*\
Puntatore a una struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) contenente informazioni sulla classe finestra da registrare. Per ulteriori informazioni su questa struttura, vedere Windows SDK.

### <a name="return-value"></a>Valore restituito

TRUE se la classe è registrata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.

Nelle compilazioni non DLL, l'identificatore `AfxRegisterClass` viene definito come `RegisterClass`una macro che esegue il mapping alla funzione di Windows , poiché le classi registrate in un'applicazione vengono automaticamente annullate. Se si `AfxRegisterClass` utilizza `RegisterClass`al posto di , il codice può essere utilizzato senza modifiche sia in un'applicazione che in una DLL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLL#3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxregisterwndclass"></a><a name="afxregisterwndclass"></a>Classe AfxRegisterWndClass

Consente di registrare le proprie classi di finestra.

```cpp
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,
    HCURSOR hCursor = 0,
    HBRUSH hbrBackground = 0,
    HICON hIcon = 0);
```

### <a name="parameters"></a>Parametri

*NClassStyle (stile)*\
Specifica lo stile della classe Windows o la combinazione di stili, creata utilizzando l'operatore OR bit per bit (**&#124;), **per la classe finestra. Per un elenco degli stili di classe, vedere la struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) in Windows SDK. Se NULL, i valori predefiniti vengono impostati come segue:

- Imposta lo stile del mouse su CS_DBLCLKS, che invia messaggi doppio clic alla routine della finestra quando l'utente fa doppio clic con il mouse.

- Imposta lo stile del cursore a freccia sul IDC_ARROW standard di Windows.

- Imposta il pennello di sfondo su NULL, in modo che la finestra non cancellerà lo sfondo.

- Imposta l'icona sull'icona del logo di Windows standard waving-flag.

*hCursore (cursore)*\
Specifica un handle per la risorsa cursore da installare in ogni finestra creata dalla classe finestra. Se si utilizza il valore predefinito **0**, si otterrà il cursore IDC_ARROW standard.

*hbrBackground (informazioni in background)*\
Specifica un handle per la risorsa pennello da installare in ogni finestra creata dalla classe finestra. Se si utilizza il valore predefinito **0**, si diploma di sfondo NULL e, per impostazione predefinita, la finestra non cancellerà lo sfondo durante l'elaborazione [di WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd).

*Hicon*\
Specifica un handle per la risorsa icona da installare in ogni finestra creata dalla classe finestra. Se si utilizza il valore predefinito **0**, si otterrà l'icona del logo di Windows standard waving-flag.

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null contenente il nome della classe. È possibile passare questo `Create` nome di `CWnd` classe alla funzione membro o altre classi derivate **CWnd-per**creare una finestra. Il nome viene generato dalla libreria Microsoft Foundation Class.

> [!NOTE]
> Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, `CString` assegnarla a una variabile.

### <a name="remarks"></a>Osservazioni

La libreria Microsoft Foundation Class registra automaticamente diverse classi di finestre standard. Chiamare questa funzione se si desidera registrare le proprie classi di finestra.

Il nome registrato per `AfxRegisterWndClass` una classe da dipende esclusivamente dai parametri. Se si `AfxRegisterWndClass` chiama più volte con parametri identici, registra solo una classe alla prima chiamata. Le chiamate `AfxRegisterWndClass` successive a con parametri identici restituiscono il nome di classe già registrato.

Se si `AfxRegisterWndClass` chiama più classi derivate da CWnd con parametri identici, anziché ottenere una classe finestra separata per ogni classe, ogni classe condivide la stessa classe finestra. Questa condivisione può causare problemi se viene utilizzato lo stile di classe CS_CLASSDC. Invece di più classi finestra CS_CLASSDC, si finisce con una sola CS_CLASSDC classe finestra. Tutte le finestre di C, che utilizzano tale classe, condividono lo stesso controller di dominio. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.

Fare riferimento alla nota tecnica [TN001: Registrazione della](../../mfc/tn001-window-class-registration.md) `AfxRegisterWndClass` classe finestra per ulteriori informazioni sulla registrazione della classe finestra e la funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxsetperuserregistration"></a><a name="afxsetperuserregistration"></a>AfxSetPerUserRegistration

Imposta se l'applicazione reindirizza l'accesso del Registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

```cpp
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bAbilita*\
[in] TRUE indica che le informazioni del Registro di sistema vengono indirizzate al nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="remarks"></a>Osservazioni

Prima di Windows Vista, le applicazioni che accedevano al Registro di sistema utilizzavano comunemente il nodo **HKEY_CLASSES_ROOT.** Tuttavia, con Windows Vista o sistemi operativi successivi, è necessario eseguire un'applicazione in modalità elevata per scrivere in HKCR.

Questo metodo consente all'applicazione di leggere e scrivere nel Registro di sistema senza essere eseguito in modalità elevata. Funziona reindirizzando l'accesso al Registro di sistema da HKCR a HKCU. Per ulteriori informazioni, vedere [Pagine delle proprietà del linker](../../build/reference/linker-property-pages.md).

Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da HKCR a **HKEY_CURRENT_USER software**classes . Solo i framework MFC e ATL sono interessati dal reindirizzamento.

L'implementazione predefinita accede al Registro di sistema in HKCR.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxstat_.h

## <a name="afxsetresourcehandle"></a><a name="afxsetresourcehandle"></a>AfxSetResourceHandle

Utilizzare questa funzione per impostare l'handle HINSTANCE che determina dove vengono caricate le risorse predefinite dell'applicazione.

```cpp
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);
```

### <a name="parameters"></a>Parametri

*hInstResource*\
Handle dell'istanza o del modulo per un oggetto . EXE o DLL da cui vengono caricate le risorse dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="afxshellmanager"></a><a name="afxshellmanager"></a>AfxShellManager

Puntatore al [gestore della shell](cshellmanager-class.md)globale .

### <a name="syntax"></a>Sintassi

```cpp
CShellManager* afxShellManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxshellmanager.h

## <a name="afxsocketinit"></a><a name="afxsocketinit"></a>AfxSocketInit (informazioni in questo stati in ainsocket)

Chiamare questa funzione `CWinApp::InitInstance` nell'override per inizializzare Windows Sockets.Call this function in your override to initialize Windows Sockets.

```cpp
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);
```

### <a name="parameters"></a>Parametri

*lpwsaData (informazioni in base alla protezione dell'utente)*\
Puntatore a una struttura [WSADATA.](/windows/win32/api/winsock2/ns-winsock2-wsadata) Se *lpwsaData* non è uguale a NULL, l'indirizzo della `WSADATA` struttura viene compilato dalla chiamata a `WSAStartup`. Questa funzione assicura `WSACleanup` inoltre che viene chiamato automaticamente prima che l'applicazione termina.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Quando si utilizzano socket MFC in thread secondari in `AfxSocketInit` un'applicazione MFC collegata in modo statico, è necessario chiamare ogni thread che utilizza i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread primario.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxsock.h

## <a name="afxusertoolsmanager"></a><a name="afxusertoolsmanager"></a>AfxUserToolsManager (informazioni in due)

Puntatore al [gestore](cusertoolsmanager-class.md)globale degli strumenti utente .

### <a name="syntax"></a>Sintassi

```cpp
CUserToolsManager* afxUserToolsManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxusertoolsmanager.h

## <a name="afxwininit"></a><a name="afxwininit"></a>AfxWinInit (informazioni in questo oggetto utente)

Questa funzione viene chiamata dalla `WinMain` funzione fornita da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC.

```cpp
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR lpCmdLine,
    int nCmdShow);
```

### <a name="parameters"></a>Parametri

*Hinstance*\
Handle del modulo attualmente in esecuzione.

*HPrevIstanza*\
Handle a un'istanza precedente dell'applicazione. Per un'applicazione basata su Win32, questo parametro è sempre **NULL.**

*LpCmdLine (linea di comando)*\
Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.

*nCmdShow (in stato di opzione)*\
Specifica la modalità di visualizzazione della finestra principale di un'applicazione GUI.

### <a name="remarks"></a>Osservazioni

Per un'applicazione console, che non utilizza `WinMain` la funzione fornita `AfxWinInit` da MFC, è necessario chiamare direttamente per inizializzare MFC.

Se si `AfxWinInit` chiama se stessi, è `CWinApp` necessario dichiarare un'istanza di una classe. Per un'applicazione console, è possibile scegliere `CWinApp` di non derivare `CWinApp` la propria classe da e utilizzare invece un'istanza di direttamente. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione nell'implementazione di **main**.

> [!NOTE]
> Quando crea un contesto di attivazione per un assembly, MFC utilizza una risorsa di manifesto fornita dal modulo utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per ulteriori informazioni, vedere Supporto per i contesti di [attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxwin.h

## <a name="see-also"></a>Vedere anche

[Macro e globali](mfc-macros-and-globals.md)\
[Classe CWinApp](cwinapp-class.md)\
[Classe CContextMenuManager](ccontextmenumanager-class.md)\
[Classe CWnd](cwnd-class.md)\
[Classe CFrameWndEx](cframewndex-class.md)\
[CMFCToolBar (classe)](cmfctoolbar-class.md)\
[Classe CKeyboardManager](ckeyboardmanager-class.md)\
[Classe CMenuTearOffManager](cmenutearoffmanager-class.md)\
[Classe CMouseManager](cmousemanager-class.md)\
[Classe CShellManager](cshellmanager-class.md)\
[Classe CUserToolsManager](cusertoolsmanager-class.md)
