---
title: Informazioni sull'applicazione e gestione
ms.date: 11/04/2016
helpviewer_keywords:
- applications [MFC], managing
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
ms.openlocfilehash: 934e89d928104c33f0c2038f136b5ad0ca48cbd4
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69507777"
---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione

Quando si scrive un'applicazione, viene creato un singolo oggetto derivato da [CWinApp](../../mfc/reference/cwinapp-class.md). In alcuni casi può essere necessario ottenere informazioni su questo oggetto dall'esterno dell' `CWinApp`oggetto derivato da. In alternativa, potrebbe essere necessario accedere ad altri oggetti "Manager" globali.

Il libreria Microsoft Foundation Class fornisce le funzioni globali seguenti che consentono di eseguire queste attività:

### <a name="application-information-and-management-functions"></a>Informazioni sulle applicazioni e funzioni di gestione

|||
|-|-|
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|
|[AfxContextMenuManager](#afxcontextmenumanager)|Puntatore al gestore del [menu di scelta rapida](ccontextmenumanager-class.md)globale.|
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|
|[AfxFindResourceHandle](#afxfindresourcehandle)|Esamina la catena di risorse e individua una risorsa specifica in base all'ID risorsa e al tipo di risorsa. |
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti del modulo della libreria di collegamento dinamico (DLL) caricato; Quando il conteggio dei riferimenti raggiunge zero, viene annullato il mapping del modulo.|
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore all'oggetto singolo `CWinApp` dell'applicazione.|
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un HINSTANCE che rappresenta questa istanza dell'applicazione.|
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra "principale" corrente di un'applicazione non OLE oppure alla finestra cornice sul posto di un'applicazione server.|
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un HINSTANCE all'origine delle risorse predefinite dell'applicazione. Usare questo per accedere direttamente alle risorse dell'applicazione.|
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) corrente.|
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza il controllo Rich Edit della versione 1,0 per l'applicazione.|
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza il controllo Rich Edit della versione 2,0 e successive per l'applicazione.|
|[AfxIsExtendedFrameClass](#afxisextendedframeclass)|Determina se la finestra specificata è un oggetto frame esteso.|
|[AfxIsMFCToolBar](#afxismfctoolbar)|Determina se la finestra specificata è un oggetto della barra degli strumenti.|
|[AfxKeyboardManager](#afxkeyboardmanager)|Puntatore al gestore della [tastiera](ckeyboardmanager-class.md)globale.|
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|
|[AfxMenuTearOffManager](#afxmenutearoffmanager)|Puntatore al gestore di [menu tear](cmenutearoffmanager-class.md)globale.|
|[AfxMouseManager](#afxmousemanager)|Puntatore al [gestore del mouse](cmousemanager-class.md)globale.|
|[AfxRegisterClass](#afxregisterclass)|Registra una classe della finestra in una DLL che utilizza MFC.|
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe della finestra Windows per integrare i registri automaticamente da MFC.|
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).|
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta l'handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.|
|[AfxShellManager](#afxshellmanager)|Puntatore a Global [Shell Manager](cshellmanager-class.md). |
|[AfxSocketInit](#afxsocketinit)|Chiamato in una `CWinApp::InitInstance` sostituzione per inizializzare i socket di Windows.|
|[AfxUserToolsManager](#afxusertoolsmanager)|Puntatore alla [gestione degli strumenti utente](cusertoolsmanager-class.md)globale.|
|[AfxWinInit](#afxwininit)|Chiamato dalla funzione fornita `WinMain` da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC. Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|

##  <a name="afxbeginthread"></a>  AfxBeginThread

Chiamare questa funzione per creare un nuovo thread.

```
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

*pfnThreadProc*<br/>
Punta alla funzione di controllo per il thread di lavoro. Non può essere NULL. Questa funzione deve essere dichiarata come segue:

`UINT __cdecl MyControllingFunction( LPVOID pParam );`

*pThreadClass*<br/>
RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).

*pParam*<br/>
Parametro da passare alla funzione di controllo come illustrato nel parametro alla dichiarazione di funzione in *pfnThreadProc*.

*nPriority*<br/>
Priorità desiderata per il thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

*nStackSize*<br/>
Specifica la dimensione in byte dello stack per il nuovo thread. Se è 0, le dimensioni dello stack vengono predefinite allo stesso stack di dimensioni del thread di creazione.

*dwCreateFlags*<br/>
Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori seguenti:

- CREATE_SUSPENDED avvia il thread con un conteggio di sospensione di uno. Utilizzare CREATE_SUSPENDED se si desidera inizializzare i dati dei membri dell' `CWinThread` oggetto, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o tutti i membri della classe derivata, prima dell'avvio dell'esecuzione del thread. Una volta completata l'inizializzazione, usare [CWinThread:: ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguito fino `CWinThread::ResumeThread` a quando non viene chiamato il metodo.

- **0** avviare il thread immediatamente dopo la creazione.

*lpSecurityAttrs*<br/>
Punta a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica gli attributi di sicurezza per il thread. Se NULL, verranno utilizzati gli stessi attributi di sicurezza del thread di creazione. Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto thread appena creato oppure NULL se si verifica un errore.

### <a name="remarks"></a>Note

La prima forma di `AfxBeginThread` crea un thread di lavoro. Nel secondo form viene creato un thread che può fungere da thread dell'interfaccia utente o come thread di lavoro.

`AfxBeginThread`Crea un nuovo `CWinThread` oggetto, chiama la relativa funzione [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread e restituisce un puntatore al thread. Per assicurarsi che tutti gli oggetti vengano deallocati correttamente, tutte le parti della creazione hanno esito negativo. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) dall'interno del thread o restituire dalla funzione di controllo del thread di lavoro.

Il multithreading deve essere abilitato dall'applicazione; in caso contrario, la funzione avrà esito negativo. Per ulteriori informazioni sull'abilitazione del multithreading, vedere [/MD,/MT,/LD (utilizzare la libreria di Runtime)](../../build/reference/md-mt-ld-use-run-time-library.md) in *Opzioni del compilatore visivo C++* .

Per ulteriori informazioni su `AfxBeginThread`, vedere la pagina [relativa al multithreading degli articoli: Creazione di thread](../../parallel/multithreading-creating-worker-threads.md) di [lavoro e multithreading: Creazione di thread](../../parallel/multithreading-creating-user-interface-threads.md)dell'interfaccia utente.

### <a name="example"></a>Esempio

Vedere l'esempio per [CSocket:: Connetti](../../mfc/reference/csocket-class.md#attach).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxcontextmenumanager"></a> AfxContextMenuManager

Puntatore al gestore del [menu di scelta rapida](ccontextmenumanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```
CContextMenuManager* afxContextMenuManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxcontextmenumanager. h

##  <a name="afxendthread"></a>  AfxEndThread

Chiamare questa funzione per terminare il thread attualmente in esecuzione.

```
void AFXAPI AfxEndThread(
    UINT nExitCode,
    BOOL bDelete  = TRUE);
```

### <a name="parameters"></a>Parametri

*nExitCode*<br/>
Specifica il codice di uscita del thread.

*bDelete*<br/>
Elimina l'oggetto thread dalla memoria.

### <a name="remarks"></a>Note

Deve essere chiamato dall'interno del thread da terminare.

Per ulteriori informazioni su `AfxEndThread`, vedere l'articolo [multithreading: Terminazione di](../../parallel/multithreading-terminating-threads.md)thread.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

  ## <a name="afxfindresourcehandle"></a>AfxFindResourceHandle
Usare `AfxFindResourceHandle` per esaminare la catena di risorse e individuare una risorsa specifica in base all'ID risorsa e al tipo di risorsa.

### <a name="syntax"></a>Sintassi

```
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );
```

### <a name="parameters"></a>Parametri

*lpszName*<br/>
Puntatore a una stringa che contiene l'ID della risorsa.
*lpszType*<br/>
Puntatore al tipo di risorsa. Per un elenco di tipi di risorse, vedere [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcew) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per il modulo che contiene la risorsa.

### <a name="remarks"></a>Note

`AfxFindResourceHandle`trova la risorsa specifica e restituisce un handle al modulo che contiene la risorsa. La risorsa potrebbe trovarsi in qualsiasi DLL di estensione MFC caricata. `AfxFindResourceHandle`indica quale di esse è presente la risorsa.

I moduli vengono ricercati in questo ordine:

1. Il modulo principale (se si tratta di una DLL di estensione MFC).

1. Moduli non di sistema.

1. Moduli specifici della lingua.

1. Il modulo principale (se si tratta di una DLL di sistema).

1. Moduli di sistema.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="afxfreelibrary"></a>AfxFreeLibrary

Sia `AfxFreeLibrary` che `AfxLoadLibrary` mantengono un conteggio dei riferimenti per ogni modulo di libreria caricato.

```
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib);
```

### <a name="parameters"></a>Parametri

*hInstLib*<br/>
Handle del modulo di libreria caricato. [AfxLoadLibrary](#afxloadlibrary) restituisce questo handle.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione ha esito positivo; in caso contrario, FALSE.

### <a name="remarks"></a>Note

`AfxFreeLibrary` decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido. Questo conteggio dei riferimenti viene incrementato ogni volta che viene chiamata `AfxLoadLibrary`.

Prima di disassociare un modulo di libreria, il sistema consente alla DLL di rimuoverlo dai processi che lo stanno utilizzando. Questa operazione consente alla DLL di liberare le risorse allocate per conto del processo corrente. Dopo il completamento della funzione del punto di ingresso, il modulo di libreria viene rimosso dallo spazio degli indirizzi del processo corrente.

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

Assicurarsi di usare `AfxFreeLibrary` e `AfxLoadLibrary` (anziché le funzioni `FreeLibrary` Win32 e `LoadLibrary`) se l'applicazione usa più thread. L' `AfxLoadLibrary` utilizzo `AfxFreeLibrary` di e garantisce che il codice di avvio e di arresto eseguito quando la dll di estensione MFC venga caricato e scaricato non danneggi lo stato globale di MFC.

### <a name="example"></a>Esempio

Vedere l'esempio per [AfxLoadLibrary](#afxloadlibrary).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdll_. h

##  <a name="afxgetapp"></a>  AfxGetApp

Il puntatore restituito da questa funzione può essere utilizzato per accedere alle informazioni sull'applicazione, ad esempio il codice principale di invio del messaggio o la finestra in primo piano.

```
CWinApp* AFXAPI AfxGetApp();
```

### <a name="return-value"></a>Valore restituito

Puntatore al singolo `CWinApp` oggetto per l'applicazione.

### <a name="remarks"></a>Note

Se questo metodo restituisce NULL, potrebbe indicare che la finestra principale dell'applicazione non è stata ancora inizializzata completamente. Potrebbe inoltre indicare un problema.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxgetappname"></a>  AfxGetAppName

La stringa restituita da questa funzione può essere utilizzata per i messaggi di diagnostica o come radice per i nomi di stringa temporanei.

```
LPCTSTR AFXAPI AfxGetAppName();
```

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null che contiene il nome dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#127](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxgetinstancehandle"></a>  AfxGetInstanceHandle

Questa funzione consente di recuperare l'handle dell'istanza dell'applicazione corrente.

```
HINSTANCE  AFXAPI AfxGetInstanceHandle();
```

### <a name="return-value"></a>Valore restituito

Un HINSTANCE all'istanza corrente dell'applicazione. Se viene chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC, viene restituito un HINSTANCE per la DLL.

### <a name="remarks"></a>Note

`AfxGetInstanceHandle`restituisce sempre l'HINSTANCE del file eseguibile (. EXE) a meno che non venga chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC. In questo caso, restituisce un HINSTANCE alla DLL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxgetmainwnd"></a>  AfxGetMainWnd

Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare riferimento direttamente al membro [m_pMainWnd](../../mfc/reference/cwinthread-class.md#m_pmainwnd) dell'oggetto applicazione.

```
CWnd* AFXAPI AfxGetMainWnd();
```

### <a name="return-value"></a>Valore restituito

Se il server dispone di un oggetto che è attivo sul posto all'interno di un contenitore e tale contenitore è attivo, questa funzione restituisce un puntatore all'oggetto finestra cornice contenente il documento attivo sul posto.

Se non è presente alcun oggetto attivo sul posto all'interno di un contenitore o se l'applicazione non è un server OLE, questa funzione restituisce semplicemente il *m_pMainWnd* dell'oggetto applicazione.

Se `AfxGetMainWnd` viene chiamata dal thread principale dell'applicazione, restituisce la finestra principale dell'applicazione sulla base delle regole sopra indicate. Se la funzione viene chiamata da un thread secondario nell'applicazione, la funzione restituisce la finestra principale associata al thread che ha effettuato la chiamata.

### <a name="remarks"></a>Note

Se l'applicazione non è un server OLE, la chiamata a questa funzione equivale a fare riferimento direttamente al membro *m_pMainWnd* dell'oggetto applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxgetperuserregistration"></a>  AfxGetPerUserRegistration

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).

```
BOOL AFXAPI AfxGetPerUserRegistration();
```

### <a name="return-value"></a>Valore restituito

TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo HKCU; FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).

### <a name="remarks"></a>Note

Se si Abilita il reindirizzamento del registro di sistema, il Framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.

Per modificare se l'applicazione reindirizza l'accesso al registro di sistema, usare [AfxSetPerUserRegistration](#afxsetperuserregistration).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxstat_. h

##  <a name="afxgetresourcehandle"></a>  AfxGetResourceHandle

Usare l'handle HINSTANCE restituito da questa funzione per accedere direttamente alle risorse dell'applicazione, ad esempio nelle chiamate alla funzione `FindResource`Windows.

```
extern HINSTANCE  AfxGetResourceHandle();
```

### <a name="return-value"></a>Valore restituito

Handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxgetthread"></a>  AfxGetThread

Chiamare questa funzione per ottenere un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) che rappresenta il thread attualmente in esecuzione.

```
CWinThread* AfxGetThread();
```

### <a name="return-value"></a>Valore restituito

Puntatore al thread attualmente in esecuzione; in caso contrario, NULL.

### <a name="remarks"></a>Note

Deve essere chiamato dall'interno del thread desiderato.

> [!NOTE]
>  Se si esegue il porting di un progetto `AfxGetThread` MFC che C++ chiama da Visual versions 4,2, 5,0 `AfxGetThread` o 6,0, chiama [AfxGetApp](#afxgetapp) se non viene trovato alcun thread. Nelle versioni più recenti del compilatore, `AfxGetThread` restituisce null se non è stato trovato alcun thread. Se si desidera il thread dell'applicazione, è necessario `AfxGetApp`chiamare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxinitrichedit"></a>  AfxInitRichEdit

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 1,0) per l'applicazione.

```
BOOL AFXAPI AfxInitRichEdit();
```

### <a name="remarks"></a>Note

Questa funzione viene fornita per compatibilità con le versioni precedenti. Le nuove applicazioni devono usare [AfxInitRichEdit2](#afxinitrichedit2).

`AfxInitRichEdit`Carica RICHED32. DLL per inizializzare la versione 1,0 del controllo Rich Edit. Per usare la versione 2,0 e 3,0 del controllo Rich Edit, RICHED20. È necessario caricare la DLL. Questa operazione viene eseguita con una chiamata a [AfxInitRichEdit2](#afxinitrichedit2).

Per aggiornare i controlli Rich Edit nelle applicazioni C++ visive esistenti alla versione 2,0, aprire. RC file come testo, modificare il nome della classe di ogni controllo Rich Edit da "RichEdit" a "RichEdit20a". Sostituire quindi la chiamata a `AfxInitRichEdit` con `AfxInitRichEdit2`.

Questa funzione inizializza anche la libreria di controlli comuni, se la libreria non è già stata inizializzata per il processo. Se si utilizza il controllo Rich Edit direttamente dall'applicazione MFC, è necessario chiamare questa funzione per assicurarsi che MFC abbia inizializzato correttamente il runtime del controllo Rich Edit. Se si chiama il metodo create di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxinitrichedit2"></a>  AfxInitRichEdit2

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 2,0 e successive) per l'applicazione.

```
BOOL AFXAPI AfxInitRichEdit2();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per caricare RICHED20. DLL e inizializzare la versione 2,0 del controllo Rich Edit. Se si chiama il metodo create di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

  ## <a name="afxisextendedframeclass"></a>  AfxIsExtendedFrameClass
Determina se la finestra specificata è un oggetto frame esteso.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore a un oggetto derivato da `CWnd`.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra fornita è un oggetto frame esteso; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce TRUE se *pWnd* deriva da una delle classi seguenti:

- `CFrameWndEx`

- `CMDIFrameWndEx`

- `COleIPFrameWndEx`

- `COleDocIPFrameWndEx`

- `CMDIChildWndEx`

Il metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è una finestra frame estesa.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxismfctoolbar"></a> AfxIsMFCToolBar

Determina se la finestra specificata è un oggetto della barra degli strumenti.

### <a name="syntax"></a>Sintassi

```
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
in Puntatore a un oggetto derivato da `CWnd`.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra fornita è un oggetto barra degli strumenti; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce `TRUE` se *pWnd* deriva da `CMFCToolBar`. Questo metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è un oggetto `CMFCToolBar`.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxpriv.h

## <a name="afxkeyboardmanager"></a>AfxKeyboardManager

Puntatore al gestore della [tastiera](ckeyboardmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```
CKeyboardManager* afxKeyboardManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxkeyboardmanager. h

##  <a name="afxloadlibrary"></a>AfxLoadLibrary

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

```
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName);
```

### <a name="parameters"></a>Parametri

*lpszModuleName*<br/>
Punta a una stringa con terminazione null che contiene il nome del modulo (o. DLL o. File EXE). Il nome specificato è il nome file del modulo.

Se la stringa specifica un percorso ma il file non esiste nella directory specificata, la funzione avrà esito negativo.

Se non viene specificato un percorso e l'estensione del nome file viene omessa, l'estensione predefinita. DLL accodata. Tuttavia, la stringa filename può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando non viene specificato alcun percorso, la funzione Cerca il file nella sequenza seguente:

- Directory da cui è stata caricata l'applicazione.

- Directory corrente.

- **Windows 95/98:** Directory di sistema di Windows. **Windows NT:** Directory di sistema Windows a 32 bit. Il nome di questa directory è SYSTEM32.

- **Solo Windows NT:** Directory di sistema di Windows a 16 bit. Non esiste alcuna funzione Win32 che ottenga il percorso di questa directory, ma ne viene eseguita la ricerca. Il nome di questa directory è SYSTEM.

- Directory di Windows.

- Directory elencate nella variabile di ambiente PATH.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. Se la funzione ha esito negativo, il valore restituito è NULL.

### <a name="remarks"></a>Note

Restituisce un handle che può essere usato in [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione di dll. `AfxLoadLibrary`può essere usato anche per eseguire il mapping di altri moduli eseguibili.

Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio di riferimenti viene incrementato ogni `AfxLoadLibrary` volta che viene chiamato e viene decrementato `AfxFreeLibrary` ogni volta che viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.

Assicurarsi di usare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni `LoadLibrary` Win32 e `FreeLibrary`) se l'applicazione usa più thread e se carica dinamicamente una DLL di estensione MFC. Se `AfxLoadLibrary` si `AfxFreeLibrary` utilizza e si garantisce che il codice di avvio e di arresto eseguito quando la dll di estensione MFC venga caricato e scaricato non danneggi lo stato globale di MFC.

L' `AfxLoadLibrary` utilizzo di in un'applicazione richiede un collegamento dinamico alla versione DLL di MFC. il file di intestazione per `AfxLoadLibrary`, Afxdll_. h, è incluso solo se MFC è collegato all'applicazione come dll. Questo è dovuto al fatto che è necessario collegarsi alla versione DLL di MFC per usare o creare DLL di estensione MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdll_. h

## <a name="afxmenutearoffmanager"></a>AfxMenuTearOffManager

Puntatore al gestore di [menu tear](cmenutearoffmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```
CMenuTearOffManager* g_pTearOffMenuManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmenutearoffmanager. h

## <a name="afxmousemanager"></a>  AfxMouseManager

Puntatore al [gestore del mouse](cmousemanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```
CMouseManager* afxMouseManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxmousemanager. h

##  <a name="afxregisterclass"></a>  AfxRegisterClass

Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.

```
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass);
```

### <a name="parameters"></a>Parametri

*lpWndClass*<br/>
Puntatore a una struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) contenente informazioni sulla classe della finestra da registrare. Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

TRUE se la classe è stata registrata correttamente. in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.

Nelle compilazioni non dll, `AfxRegisterClass` l'identificatore viene definito come una macro che esegue il mapping alla `RegisterClass`funzione di Windows, poiché le classi registrate in un'applicazione vengono annullate automaticamente. Se si usa `AfxRegisterClass` `RegisterClass`anziché, il codice può essere usato senza modifiche in un'applicazione e in una dll.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLL#3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxregisterwndclass"></a>  AfxRegisterWndClass

Consente di registrare le proprie classi di finestra.

```
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,
    HCURSOR hCursor = 0,
    HBRUSH hbrBackground = 0,
    HICON hIcon = 0);
```

### <a name="parameters"></a>Parametri

*nClassStyle*<br/>
Specifica lo stile della classe di Windows o la combinazione di stili, creata utilizzando l'operatore OR **&#124;** bit per bit () per la classe Window. Per un elenco degli stili delle classi, vedere la struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) nel Windows SDK. Se è NULL, le impostazioni predefinite verranno impostate nel modo seguente:

- Imposta lo stile del mouse su CS_DBLCLKS, che invia messaggi di doppio clic alla routine della finestra quando l'utente fa doppio clic con il mouse.

- Imposta lo stile del cursore a freccia su IDC_ARROW standard di Windows.

- Imposta il pennello per lo sfondo su NULL, in modo che la finestra non cancelli lo sfondo.

- Imposta l'icona sull'icona del logo Windows standard, con flag di ondeggiamento.

*hCursor*<br/>
Specifica un handle per la risorsa cursore da installare in ogni finestra creata dalla classe Window. Se si usa il valore predefinito **0**, si otterrà il cursore IDC_ARROW standard.

*hbrBackground*<br/>
Specifica un handle per la risorsa pennello da installare in ogni finestra creata dalla classe finestra. Se si usa il valore predefinito **0**, sarà presente un pennello per lo sfondo null e la finestra, per impostazione predefinita, non cancellerà lo sfondo durante l'elaborazione di [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd).

*hIcon*<br/>
Specifica un handle per la risorsa icona da installare in ogni finestra creata dalla classe finestra. Se si usa il valore predefinito **0**, si otterrà l'icona del logo Windows standard e con flag sventolanti.

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null che contiene il nome della classe. È possibile passare questo nome di classe alla `Create` funzione membro in `CWnd` o ad altre classi derivate da **CWnd**per creare una finestra. Il nome viene generato dal libreria Microsoft Foundation Class.

> [!NOTE]
>  Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, assegnarla a una `CString` variabile.

### <a name="remarks"></a>Note

Il libreria Microsoft Foundation Class registra automaticamente varie classi di finestra standard. Chiamare questa funzione se si desidera registrare classi finestra personalizzate.

Il nome registrato per una classe da `AfxRegisterWndClass` dipende esclusivamente dai parametri. Se si chiama `AfxRegisterWndClass` più volte con parametri identici, viene registrata solo una classe alla prima chiamata. Le chiamate successive `AfxRegisterWndClass` a con parametri identici restituiscono semplicemente il NomeClasse già registrato.

Se si chiama `AfxRegisterWndClass` per più classi derivate da CWnd con parametri identici, anziché ottenere una classe di finestra separata per ogni classe, ogni classe condivide la stessa classe di finestra. Ciò può causare problemi se viene utilizzato lo stile della classe CS_CLASSDC. Anziché più classi della finestra CS_CLASSDC, si finisce con una classe della finestra CS_CLASSDC e tutte C++ le finestre che usano tale classe condividono lo stesso controller di dominio. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.

Vedere la Nota [tecnica TN001: Registrazione](../../mfc/tn001-window-class-registration.md) della classe della finestra per ulteriori informazioni sulla registrazione della classe `AfxRegisterWndClass` di finestra e sulla funzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

##  <a name="afxsetperuserregistration"></a>AfxSetPerUserRegistration

Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** ( **HKCU**).

```
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
in TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo HKCU; FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).

### <a name="remarks"></a>Note

Prima di Windows Vista, le applicazioni che accedono al registro di sistema utilizzano in genere il nodo **HKEY_CLASSES_ROOT** . Tuttavia, con Windows Vista o sistemi operativi successivi, è necessario eseguire un'applicazione in modalità con privilegi elevati per scrivere in HKCR.

Questo metodo consente all'applicazione di leggere e scrivere nel registro di sistema senza eseguire in modalità con privilegi elevati reindirizzando l'accesso al registro di sistema da HKCR a HKCU. Per altre informazioni, vedere [Linker Property Pages](../../build/reference/linker-property-pages.md).

Se si Abilita il reindirizzamento del registro di sistema, il Framework reindirizza l'accesso da HKCR a **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.

L'implementazione predefinita accede al registro di sistema in HKCR.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxstat_. h

##  <a name="afxsetresourcehandle"></a>  AfxSetResourceHandle

Usare questa funzione per impostare l'handle HINSTANCE che determina la posizione in cui vengono caricate le risorse predefinite dell'applicazione.

```
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);
```

### <a name="parameters"></a>Parametri

*hInstResource*<br/>
L'istanza o l'handle del modulo per un oggetto. File EXE o DLL da cui vengono caricate le risorse dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="afxshellmanager"></a>  AfxShellManager

Puntatore a Global [Shell Manager](cshellmanager-class.md).

### <a name="syntax"></a>Sintassi

```
CShellManager* afxShellManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxshellmanager. h

##  <a name="afxsocketinit"></a>  AfxSocketInit

Chiamare questa funzione nell' `CWinApp::InitInstance` override per inizializzare Windows Sockets.

```
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);
```

### <a name="parameters"></a>Parametri

*lpwsaData*<br/>
Puntatore a una struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) . Se *lpwsaData* è diverso da null, l'indirizzo della `WSADATA` struttura viene compilato dalla chiamata a. `WSAStartup` Questa funzione garantisce inoltre che `WSACleanup` venga chiamato prima del termine dell'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Quando si usano i socket MFC nei thread secondari in un'applicazione MFC collegata in modo statico, `AfxSocketInit` è necessario chiamare in ogni thread che usa i socket per inizializzare le librerie del socket. Per impostazione predefinita `AfxSocketInit` , viene chiamato solo nel thread primario.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxsock. h

## <a name="afxusertoolsmanager"></a>  AfxUserToolsManager

Puntatore alla [gestione degli strumenti utente](cusertoolsmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```
CUserToolsManager* afxUserToolsManager;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** afxusertoolsmanager. h

##  <a name="afxwininit"></a>  AfxWinInit

Questa funzione viene chiamata dalla funzione fornita `WinMain` da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC.

```
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR lpCmdLine,
    int nCmdShow);
```

### <a name="parameters"></a>Parametri

*hInstance*<br/>
Handle del modulo attualmente in esecuzione.

*hPrevInstance*<br/>
Handle per un'istanza precedente dell'applicazione. Per un'applicazione basata su Win32, questo parametro è sempre **null**.

*lpCmdLine*<br/>
Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.

*nCmdShow*<br/>
Specifica come viene visualizzata la finestra principale di un'applicazione GUI.

### <a name="remarks"></a>Note

Per un'applicazione console, che non utilizza la funzione fornita `WinMain` da MFC, è necessario chiamare `AfxWinInit` direttamente per inizializzare MFC.

Se si chiama `AfxWinInit` manualmente, è necessario dichiarare un'istanza di una `CWinApp` classe. Per un'applicazione console, è possibile scegliere di non derivare la propria classe `CWinApp` da e utilizzare invece direttamente un' `CWinApp` istanza di. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione nell'implementazione del **principale**.

> [!NOTE]
>  Quando crea un contesto di attivazione per un assembly, MFC usa una risorsa di manifesto fornita dal modulo utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per ulteriori informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXWIN. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](mfc-macros-and-globals.md)<br/>
[Classe CWinApp](cwinapp-class.md)<br/>
[Classe CContextMenuManager](ccontextmenumanager-class.md)<br/>
[Classe CWnd](cwnd-class.md)<br/>
[Classe CFrameWndEx](cframewndex-class.md)<br/>
[Classe CMFCToolBar](cmfctoolbar-class.md)<br/>
[Classe CKeyboardManager](ckeyboardmanager-class.md)<br/>
[Classe CMenuTearOffManager](cmenutearoffmanager-class.md)<br/>
[Classe CMouseManager](cmousemanager-class.md)<br/>
[Classe CShellManager](cshellmanager-class.md)<br/>
[Classe CUserToolsManager](cusertoolsmanager-class.md)
