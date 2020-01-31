---
title: Informazioni sull'applicazione e gestione
description: Riferimento alle funzioni di gestione e alle informazioni sull'applicazione MFC (Microsoft Foundation Class Library).
ms.date: 01/27/2020
helpviewer_keywords:
- applications [MFC], managing
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
ms.openlocfilehash: c372f43bc5184349e70f29b6c0ae6a490f2102ed
ms.sourcegitcommit: b8c22e6d555cf833510753cba7a368d57e5886db
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/29/2020
ms.locfileid: "76821870"
---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione

Quando si scrive un'applicazione, viene creato un singolo oggetto derivato da [CWinApp](../../mfc/reference/cwinapp-class.md). In alcuni casi può essere necessario ottenere informazioni su questo oggetto dall'esterno dell'oggetto derivato da `CWinApp`. In alternativa, potrebbe essere necessario accedere ad altri oggetti "Manager" globali.

Il libreria Microsoft Foundation Class fornisce le funzioni globali seguenti che consentono di eseguire queste attività:

## <a name="application-information-and-management-functions"></a>Informazioni sulle applicazioni e funzioni di gestione

|||
|-|-|
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|
|[AfxContextMenuManager](#afxcontextmenumanager)|Puntatore al gestore del [menu di scelta rapida](ccontextmenumanager-class.md)globale.|
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|
|[AfxFindResourceHandle](#afxfindresourcehandle)|Esamina la catena di risorse e individua una risorsa specifica in base all'ID risorsa e al tipo di risorsa. |
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti del modulo della libreria di collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti raggiunge zero, viene annullato il mapping del modulo.|
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore all'oggetto `CWinApp` singolo dell'applicazione.|
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un HINSTANCE che rappresenta questa istanza dell'applicazione.|
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra "principale" corrente di un'applicazione non OLE oppure alla finestra cornice sul posto di un'applicazione server.|
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).|
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un HINSTANCE all'origine delle risorse predefinite dell'applicazione. Usare per accedere direttamente alle risorse dell'applicazione.|
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) corrente.|
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza il controllo Rich Edit della versione 1,0 per l'applicazione.|
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza il controllo Rich Edit della versione 2,0 e successive per l'applicazione.|
|[AfxIsExtendedFrameClass](#afxisextendedframeclass)|Determina se la finestra specificata è un oggetto frame esteso.|
|[AfxIsMFCToolBar](#afxismfctoolbar)|Determina se la finestra specificata è un oggetto della barra degli strumenti.|
|[AfxKeyboardManager](#afxkeyboardmanager)|Puntatore al gestore della [tastiera](ckeyboardmanager-class.md)globale.|
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|
|[AfxLoadLibraryEx](#afxloadlibraryex)|Esegue il mapping di un modulo DLL utilizzando le opzioni specificate e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|
|[AfxMenuTearOffManager](#afxmenutearoffmanager)|Puntatore al gestore dei [menu di strappo](cmenutearoffmanager-class.md)globale.|
|[AfxMouseManager](#afxmousemanager)|Puntatore al [gestore del mouse](cmousemanager-class.md)globale.|
|[AfxRegisterClass](#afxregisterclass)|Registra una classe della finestra in una DLL che utilizza MFC.|
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe della finestra di Windows per integrare quelle registrate automaticamente da MFC.|
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).|
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta l'handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.|
|[AfxShellManager](#afxshellmanager)|Puntatore a Global [Shell Manager](cshellmanager-class.md). |
|[AfxSocketInit](#afxsocketinit)|Chiamato in un override di `CWinApp::InitInstance` per inizializzare i socket di Windows.|
|[AfxUserToolsManager](#afxusertoolsmanager)|Puntatore alla [gestione degli strumenti utente](cusertoolsmanager-class.md)globale.|
|[AfxWinInit](#afxwininit)|Chiamato dalla funzione `WinMain` fornita da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC. Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|

## <a name="afxbeginthread"></a>  AfxBeginThread

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

\ *pfnThreadProc*
Punta alla funzione di controllo per il thread di lavoro. Il puntatore non può essere NULL. Questa funzione deve essere dichiarata come segue:

`UINT __cdecl MyControllingFunction( LPVOID pParam );`

\ *pThreadClass*
RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).

\ *pParam*
Parametro da passare alla funzione di controllo.

\ *nPriority*
Priorità da impostare per il thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

\ *nStackSize*
Specifica la dimensione in byte dello stack per il nuovo thread. Se è 0, le dimensioni dello stack vengono predefinite allo stesso stack di dimensioni del thread di creazione.

\ *dwCreateFlags*
Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori seguenti:

- CREATE_SUSPENDED avviare il thread con un conteggio di sospensione di uno. Utilizzare CREATE_SUSPENDED se si desidera inizializzare i dati dei membri dell'oggetto `CWinThread`, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o tutti i membri della classe derivata, prima dell'avvio dell'esecuzione del thread. Una volta completata l'inizializzazione, usare [CWinThread:: ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare il thread in esecuzione. Il thread non viene eseguito fino a quando non viene chiamato `CWinThread::ResumeThread`.

- **0** avviare il thread immediatamente dopo la creazione.

\ *lpSecurityAttrs*
Punta a una struttura di [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica gli attributi di sicurezza per il thread. Se NULL, vengono usati gli stessi attributi di sicurezza del thread di creazione. Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

Puntatore all'oggetto thread appena creato oppure NULL se si verifica un errore.

### <a name="remarks"></a>Note

La prima forma di `AfxBeginThread` crea un thread di lavoro. Nel secondo form viene creato un thread che può fungere da thread dell'interfaccia utente o come thread di lavoro.

`AfxBeginThread` crea un nuovo oggetto `CWinThread`, chiama la funzione [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) per avviare l'esecuzione del thread e restituisce un puntatore al thread. Per assicurarsi che tutti gli oggetti vengano deallocati correttamente, tutte le parti della creazione hanno esito negativo. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) dall'interno del thread o restituire dalla funzione di controllo del thread di lavoro.

Il multithreading deve essere abilitato dall'applicazione; in caso contrario, la funzione avrà esito negativo. Per ulteriori informazioni sull'abilitazione del multithreading, vedere [/MD,/MT,/LD (utilizzare la libreria di Runtime)](../../build/reference/md-mt-ld-use-run-time-library.md).

Per altre informazioni su `AfxBeginThread`, vedere gli articoli [multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md) e [multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CSocket:: Connetti](../../mfc/reference/csocket-class.md#attach).

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxcontextmenumanager"></a> AfxContextMenuManager

Puntatore al gestore del [menu di scelta rapida](ccontextmenumanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```cpp
CContextMenuManager* afxContextMenuManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxcontextmenumanager. h

## <a name="afxendthread"></a>  AfxEndThread

Chiamare questa funzione per terminare il thread attualmente in esecuzione.

```cpp
void AFXAPI AfxEndThread(
    UINT nExitCode,
    BOOL bDelete  = TRUE);
```

### <a name="parameters"></a>Parametri

\ *nExitCode*
Specifica il codice di uscita del thread.

\ *bElimina*
Elimina l'oggetto thread dalla memoria.

### <a name="remarks"></a>Note

Deve essere chiamato dall'interno del thread da terminare.

Per ulteriori informazioni su `AfxEndThread`, vedere l'articolo [multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md).

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxfindresourcehandle"></a>AfxFindResourceHandle

Usare `AfxFindResourceHandle` per esaminare la catena di risorse e individuare una risorsa specifica in base all'ID risorsa e al tipo di risorsa.

### <a name="syntax"></a>Sintassi

```cpp
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );
```

### <a name="parameters"></a>Parametri

\ *lpszName*
Puntatore a una stringa che contiene l'ID della risorsa.
\ *lpszType*
Puntatore al tipo di risorsa. Per un elenco di tipi di risorse, vedere [FindResource](/windows/win32/api/winbase/nf-winbase-findresourcea) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per il modulo che contiene la risorsa.

### <a name="remarks"></a>Note

`AfxFindResourceHandle` trova la risorsa specifica e restituisce un handle al modulo che contiene la risorsa. La risorsa potrebbe trovarsi in qualsiasi DLL di estensione MFC caricata. `AfxFindResourceHandle` indica quale è la risorsa.

I moduli vengono ricercati in questo ordine:

1. Il modulo principale, se si tratta di una DLL di estensione MFC.

1. Moduli non di sistema.

1. Moduli specifici della lingua.

1. Il modulo principale, se si tratta di una DLL di sistema.

1. Moduli di sistema.

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxwin.h

## <a name="afxfreelibrary"></a>AfxFreeLibrary

Sia `AfxFreeLibrary` che `AfxLoadLibrary` mantengono un conteggio dei riferimenti per ogni modulo di libreria caricato.

```cpp
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib);
```

### <a name="parameters"></a>Parametri

\ *hInstLib*
Handle del modulo di libreria caricato. [AfxLoadLibrary](#afxloadlibrary) restituisce questo handle.

### <a name="return-value"></a>Valore restituito

TRUE se la funzione viene eseguita correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

`AfxFreeLibrary` decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido. Questo conteggio dei riferimenti viene incrementato ogni volta che viene chiamata `AfxLoadLibrary`.

Prima di disassociare un modulo di libreria, il sistema consente alla DLL di rimuoverlo dai processi che lo stanno utilizzando. In questo modo si offre alla DLL la possibilità di eseguire la pulizia delle risorse allocate per il processo corrente. Dopo il completamento della funzione del punto di ingresso, il modulo di libreria viene rimosso dallo spazio degli indirizzi del processo corrente.

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

Assicurarsi di usare `AfxFreeLibrary` e `AfxLoadLibrary`, anziché le funzioni Win32 `FreeLibrary` e `LoadLibrary`, se l'applicazione usa più thread. L'utilizzo di `AfxLoadLibrary` e `AfxFreeLibrary` garantisce che il codice di avvio e di arresto eseguito quando la DLL dell'estensione MFC venga caricata e scaricata non danneggi lo stato globale di MFC.

### <a name="example"></a>Esempio

Vedere l'esempio per [AfxLoadLibrary](#afxloadlibrary).

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxdll_. h

## <a name="afxgetapp"></a>  AfxGetApp

Il puntatore restituito da questa funzione può essere utilizzato per accedere alle informazioni sull'applicazione, ad esempio il codice principale di invio del messaggio o la finestra in primo piano.

```cpp
CWinApp* AFXAPI AfxGetApp();
```

### <a name="return-value"></a>Valore restituito

Puntatore al singolo oggetto `CWinApp` per l'applicazione.

### <a name="remarks"></a>Note

Se questo metodo restituisce NULL, potrebbe indicare che la finestra principale dell'applicazione non è stata ancora inizializzata completamente. Potrebbe inoltre indicare un problema.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxgetappname"></a>  AfxGetAppName

La stringa restituita può essere utilizzata per i messaggi di diagnostica o come radice per i nomi di stringa temporanei.

```cpp
LPCTSTR AFXAPI AfxGetAppName();
```

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null che contiene il nome dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#127](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxgetinstancehandle"></a>  AfxGetInstanceHandle

Questa funzione consente di recuperare l'handle dell'istanza dell'applicazione corrente.

```cpp
HINSTANCE  AFXAPI AfxGetInstanceHandle();
```

### <a name="return-value"></a>Valore restituito

Un HINSTANCE all'istanza corrente dell'applicazione. Se viene chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC, viene restituito un HINSTANCE per la DLL.

### <a name="remarks"></a>Note

`AfxGetInstanceHandle` restituisce sempre l'HINSTANCE del file eseguibile (. EXE) a meno che non venga chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC. In questo caso, restituisce un HINSTANCE alla DLL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxgetmainwnd"></a>  AfxGetMainWnd

Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione. Utilizzare questo risultato anziché fare riferimento direttamente al membro [m_pMainWnd](../../mfc/reference/cwinthread-class.md#m_pmainwnd) dell'oggetto applicazione.

```cpp
CWnd* AFXAPI AfxGetMainWnd();
```

### <a name="return-value"></a>Valore restituito

Restituisce un puntatore all'oggetto finestra cornice che contiene il documento attivo sul posto, se il server dispone di un oggetto attivo sul posto all'interno di un contenitore attivo.

Se non è presente alcun oggetto attivo sul posto all'interno di un contenitore o se l'applicazione non è un server OLE, questa funzione restituisce il *m_pMainWnd* dell'oggetto applicazione.

Se `AfxGetMainWnd` viene chiamata dal thread principale dell'applicazione, restituisce la finestra principale dell'applicazione sulla base delle regole sopra indicate. Se la funzione viene chiamata da un thread secondario nell'applicazione, la funzione restituisce la finestra principale associata al thread che ha effettuato la chiamata.

### <a name="remarks"></a>Note

Se l'applicazione non è un server OLE, la chiamata a questa funzione equivale a fare riferimento direttamente al membro *m_pMainWnd* dell'oggetto applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxgetperuserregistration"></a>  AfxGetPerUserRegistration

Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

```cpp
BOOL AFXAPI AfxGetPerUserRegistration();
```

### <a name="return-value"></a>Valore restituito

TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="remarks"></a>Note

Se si Abilita il reindirizzamento del registro di sistema, il Framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER \SOFTWARE\classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.

Per modificare se l'applicazione reindirizza l'accesso al registro di sistema, usare [AfxSetPerUserRegistration](#afxsetperuserregistration).

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxstat_. h

## <a name="afxgetresourcehandle"></a>  AfxGetResourceHandle

Usare l'handle HINSTANCE restituito da questa funzione per accedere direttamente alle risorse dell'applicazione, ad esempio nelle chiamate alla funzione di Windows `FindResource`.

```cpp
extern HINSTANCE  AfxGetResourceHandle();
```

### <a name="return-value"></a>Valore restituito

Handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxgetthread"></a>  AfxGetThread

Chiamare questa funzione per ottenere un puntatore all'oggetto [CWinThread](../../mfc/reference/cwinthread-class.md) che rappresenta il thread attualmente in esecuzione.

```cpp
CWinThread* AfxGetThread();
```

### <a name="return-value"></a>Valore restituito

Puntatore al thread attualmente in esecuzione; in caso contrario, NULL.

### <a name="remarks"></a>Note

Deve essere chiamato dall'interno del thread.

> [!NOTE]
> Se si esegue il porting di un progetto MFC che chiama C++ `AfxGetThread` da Visual versions 4,2, 5,0 o 6,0, `AfxGetThread` chiama [AfxGetApp](#afxgetapp) se non viene trovato alcun thread. Nelle versioni più recenti del compilatore `AfxGetThread` restituisce NULL se non è stato trovato alcun thread. Se si desidera il thread dell'applicazione, è necessario chiamare `AfxGetApp`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxinitrichedit"></a>  AfxInitRichEdit

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 1,0) per l'applicazione.

```cpp
BOOL AFXAPI AfxInitRichEdit();
```

### <a name="remarks"></a>Note

Questa funzione viene fornita per compatibilità con le versioni precedenti. Le nuove applicazioni devono usare [AfxInitRichEdit2](#afxinitrichedit2).

`AfxInitRichEdit` Carica RICHED32. DLL per inizializzare la versione 1,0 del controllo Rich Edit. Per usare la versione 2,0 e 3,0 del controllo Rich Edit, RICHED20. È necessario caricare la DLL. Viene caricato effettuando una chiamata a [AfxInitRichEdit2](#afxinitrichedit2).

Per aggiornare i controlli Rich Edit nelle applicazioni C++ visive esistenti alla versione 2,0, aprire. RC file come testo, modificare il nome della classe di ogni controllo Rich Edit da "RichEdit" a "RichEdit20a". Sostituire quindi la chiamata a `AfxInitRichEdit` con `AfxInitRichEdit2`.

Questa funzione inizializza anche la libreria di controlli comuni, se la libreria non è già stata inizializzata per il processo. Se si utilizza il controllo Rich Edit direttamente dall'applicazione MFC, chiamare questa funzione per assicurarsi che MFC abbia inizializzato correttamente il runtime del controllo Rich Edit. Se si chiama il metodo `Create` di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxinitrichedit2"></a>  AfxInitRichEdit2

Chiamare questa funzione per inizializzare il controllo Rich Edit (versione 2,0 e successive) per l'applicazione.

```cpp
BOOL AFXAPI AfxInitRichEdit2();
```

### <a name="remarks"></a>Note

Chiamare questa funzione per caricare RICHED20. DLL e inizializzare la versione 2,0 del controllo Rich Edit. Se si chiama il metodo `Create` di [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md)o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxisextendedframeclass"></a>  AfxIsExtendedFrameClass

Determina se la finestra specificata è un oggetto frame esteso.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );
```

### <a name="parameters"></a>Parametri

\ *pWnd*
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

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxpriv.h

## <a name="afxismfctoolbar"></a> AfxIsMFCToolBar

Determina se la finestra specificata è un oggetto della barra degli strumenti.

### <a name="syntax"></a>Sintassi

```cpp
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

\ *pWnd*
in Puntatore a un oggetto derivato da `CWnd`.

### <a name="return-value"></a>Valore restituito

TRUE se la finestra fornita è un oggetto barra degli strumenti; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Questo metodo restituisce `TRUE` se *pWnd* deriva da `CMFCToolBar`. Questo metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è un oggetto `CMFCToolBar`.

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxpriv.h

## <a name="afxkeyboardmanager"></a>AfxKeyboardManager

Puntatore al gestore della [tastiera](ckeyboardmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```cpp
CKeyboardManager* afxKeyboardManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxkeyboardmanager. h

## <a name="afxloadlibrary"></a>AfxLoadLibrary

Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.

```cpp
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName);
```

### <a name="parameters"></a>Parametri

\ *lpszModuleName*
Punta a una stringa con terminazione null che contiene il nome del modulo (o. DLL o. File EXE). Il nome specificato è il nome file del modulo.

Se la stringa specifica un percorso ma il file non esiste nella directory specificata, la funzione avrà esito negativo.

Se non si specifica un percorso e l'estensione del nome file viene omessa, l'estensione predefinita. DLL accodata. Tuttavia, la stringa filename può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando non viene specificato alcun percorso, la funzione usa l' [ordine di ricerca per le applicazioni desktop](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications).

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. In caso di errore, il valore restituito è NULL.

### <a name="remarks"></a>Note

Restituisce un handle che può essere usato in [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione di dll. `AfxLoadLibrary` può essere utilizzato anche per eseguire il mapping di altri moduli eseguibili.

Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio di riferimenti viene incrementato ogni volta che viene chiamato `AfxLoadLibrary` e viene decrementato ogni volta che viene chiamato `AfxFreeLibrary`. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.

Assicurarsi di usare `AfxLoadLibrary` e `AfxFreeLibrary`, anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary`, se l'applicazione usa più thread e se carica dinamicamente una DLL di estensione MFC. Se si utilizza `AfxLoadLibrary` e `AfxFreeLibrary` si garantisce che il codice di avvio e di arresto eseguito quando la DLL dell'estensione MFC venga caricata e scaricata non danneggi lo stato globale di MFC.

L'uso di `AfxLoadLibrary` in un'applicazione richiede un collegamento dinamico alla versione DLL di MFC. Il file di intestazione per `AfxLoadLibrary`, Afxdll_. h, è incluso solo se MFC è collegato all'applicazione come DLL. Questo requisito è da progettazione, perché è necessario collegarsi alla versione DLL di MFC per usare o creare DLL di estensione MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxdll_. h

## <a name="afxloadlibraryex"></a>AfxLoadLibraryEx

Utilizzare `AfxLoadLibraryEx` per eseguire il mapping di un modulo DLL.

```cpp
HINSTANCE AFXAPI AfxLoadLibraryEx(LPCTSTR lpFileName, HANDLE hFile, DWORD dwFlags);
```

### <a name="parameters"></a>Parametri

\ *lpFileName*
Punta a una stringa con terminazione null che contiene il nome del modulo (o. DLL o. File EXE). Il nome specificato è il nome file del modulo.

Se la stringa specifica un percorso ma il file non esiste nella directory specificata, la funzione avrà esito negativo.

Se non si specifica un percorso e l'estensione del nome file viene omessa, l'estensione predefinita. DLL accodata. Tuttavia, la stringa filename può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando non viene specificato alcun percorso, la funzione usa l' [ordine di ricerca per le applicazioni desktop](/windows/win32/dlls/dynamic-link-library-search-order#search-order-for-desktop-applications).

\ *hFile*
Tale parametro è riservato per utilizzi futuri. Deve essere NULL.

\ *dwFlags*
Azione da intraprendere durante il caricamento del modulo. Se non viene specificato alcun flag, il comportamento di questa funzione è identico a quello della funzione `AfxLoadLibrary`. I valori possibili di questo parametro sono descritti nella documentazione di [LoadLibraryEx](/windows/win32/api/libloaderapi/nf-libloaderapi-loadlibraryexw) .

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. In caso di errore, il valore restituito è NULL.

### <a name="remarks"></a>Note

`AfxLoadLibraryEx` restituisce un handle che può essere utilizzato in [GetProcAddress](/windows/win32/api/libloaderapi/nf-libloaderapi-getprocaddress) per ottenere l'indirizzo di una funzione di dll. `AfxLoadLibraryEx` può essere utilizzato anche per eseguire il mapping di altri moduli eseguibili.

Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio di riferimenti viene incrementato ogni volta che viene chiamato `AfxLoadLibraryEx` e viene decrementato ogni volta che viene chiamato `AfxFreeLibrary`. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.

Assicurarsi di usare `AfxLoadLibraryEx` e `AfxFreeLibrary`, anziché le funzioni Win32 `LoadLibraryEx` e `FreeLibrary`, se l'applicazione usa più thread e se carica dinamicamente una DLL di estensione MFC. L'utilizzo di `AfxLoadLibraryEx` e `AfxFreeLibrary` garantisce che il codice di avvio e di arresto eseguito quando la DLL dell'estensione MFC venga caricata e scaricata non danneggi lo stato globale di MFC.

L'uso di `AfxLoadLibraryEx` in un'applicazione richiede un collegamento dinamico alla versione DLL di MFC. Il file di intestazione per `AfxLoadLibraryEx`, Afxdll_. h, è incluso solo se MFC è collegato all'applicazione come DLL. Questo requisito è da progettazione, perché è necessario collegarsi alla versione DLL di MFC per usare o creare DLL di estensione MFC.

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxdll_. h

## <a name="afxmenutearoffmanager"></a>AfxMenuTearOffManager

Puntatore al gestore dei [menu di strappo](cmenutearoffmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```cpp
CMenuTearOffManager* g_pTearOffMenuManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxmenutearoffmanager. h

## <a name="afxmousemanager"></a>  AfxMouseManager

Puntatore al [gestore del mouse](cmousemanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```cpp
CMouseManager* afxMouseManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxmousemanager. h

## <a name="afxregisterclass"></a>  AfxRegisterClass

Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.

```cpp
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass);
```

### <a name="parameters"></a>Parametri

\ *lpWndClass*
Puntatore a una struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) contenente informazioni sulla classe della finestra da registrare. Per ulteriori informazioni su questa struttura, vedere la Windows SDK.

### <a name="return-value"></a>Valore restituito

TRUE se la classe è registrata correttamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.

Nelle compilazioni non DLL, l'identificatore `AfxRegisterClass` viene definito come una macro che esegue il mapping alla funzione di Windows `RegisterClass`, poiché le classi registrate in un'applicazione vengono automaticamente annullate. Se si usa `AfxRegisterClass` anziché `RegisterClass`, il codice può essere usato senza modifiche in un'applicazione e in una DLL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_DLL#3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxregisterwndclass"></a>  AfxRegisterWndClass

Consente di registrare le proprie classi di finestra.

```cpp
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,
    HCURSOR hCursor = 0,
    HBRUSH hbrBackground = 0,
    HICON hIcon = 0);
```

### <a name="parameters"></a>Parametri

\ *nClassStyle*
Specifica lo stile della classe di Windows o la combinazione di stili, creata utilizzando l'operatore OR **&#124;** bit per bit () per la classe Window. Per un elenco degli stili delle classi, vedere la struttura [WNDCLASS](/windows/win32/api/winuser/ns-winuser-wndclassw) nel Windows SDK. Se è NULL, le impostazioni predefinite vengono impostate nel modo seguente:

- Imposta lo stile del mouse su CS_DBLCLKS, che invia messaggi di doppio clic alla routine della finestra quando l'utente fa doppio clic con il mouse.

- Imposta lo stile del cursore a freccia sulla IDC_ARROW standard di Windows.

- Imposta il pennello per lo sfondo su NULL, in modo che la finestra non cancelli lo sfondo.

- Imposta l'icona sull'icona del logo Windows standard, con flag di ondeggiamento.

\ *hCursor*
Specifica un handle per la risorsa cursore da installare in ogni finestra creata dalla classe Window. Se si usa il valore predefinito **0**, si otterrà il cursore di IDC_ARROW standard.

\ *hbrBackground*
Specifica un handle per la risorsa pennello da installare in ogni finestra creata dalla classe finestra. Se si usa il valore predefinito **0**, sarà presente un pennello per lo sfondo null e, per impostazione predefinita, la finestra non cancellerà lo sfondo durante l'elaborazione [WM_ERASEBKGND](/windows/win32/winmsg/wm-erasebkgnd).

\ *HICON*
Specifica un handle per la risorsa icona da installare in ogni finestra creata dalla classe finestra. Se si usa il valore predefinito **0**, si otterrà l'icona del logo Windows standard e con flag sventolanti.

### <a name="return-value"></a>Valore restituito

Stringa con terminazione null che contiene il nome della classe. È possibile passare questo nome di classe alla funzione membro `Create` in `CWnd` o altre classi derivate da **CWnd**per creare una finestra. Il nome viene generato dal libreria Microsoft Foundation Class.

> [!NOTE]
> Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, assegnarla a una variabile `CString`.

### <a name="remarks"></a>Note

Il libreria Microsoft Foundation Class registra automaticamente varie classi di finestra standard. Chiamare questa funzione se si desidera registrare classi finestra personalizzate.

Il nome registrato per una classe da `AfxRegisterWndClass` dipende esclusivamente dai parametri. Se si chiama `AfxRegisterWndClass` più volte con parametri identici, viene registrata solo una classe alla prima chiamata. Le chiamate successive a `AfxRegisterWndClass` con parametri identici restituiscono il NomeClasse già registrato.

Se si chiama `AfxRegisterWndClass` per più classi derivate da CWnd con parametri identici, anziché ottenere una classe di finestra separata per ogni classe, ogni classe condivide la stessa classe di finestra. Questa condivisione può causare problemi se viene utilizzato lo stile della classe CS_CLASSDC. Anziché più classi CS_CLASSDC finestra, si finisce con una sola classe CS_CLASSDC finestra. Tutte C++ le finestre che usano tale classe condividono lo stesso controller di dominio. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.

Per ulteriori informazioni sulla registrazione della classe di finestra e sulla funzione `AfxRegisterWndClass`, vedere la nota tecnica [TN001: registrazione della classe di finestra](../../mfc/tn001-window-class-registration.md) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxsetperuserregistration"></a>AfxSetPerUserRegistration

Imposta un valore che indica se l'applicazione reindirizza l'accesso al registro di sistema al nodo **HKEY_CURRENT_USER** (**HKCU**).

```cpp
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```

### <a name="parameters"></a>Parametri

\ *bEnable*
in TRUE indica che le informazioni del registro di sistema vengono indirizzate al nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del registro di sistema nel nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** (**HKCR**).

### <a name="remarks"></a>Note

Prima di Windows Vista, le applicazioni che accedevano al registro usavano comunemente il nodo **HKEY_CLASSES_ROOT** . Tuttavia, con Windows Vista o sistemi operativi successivi, è necessario eseguire un'applicazione in modalità con privilegi elevati per scrivere in HKCR.

Questo metodo consente all'applicazione di leggere e scrivere nel registro di sistema senza eseguire in modalità con privilegi elevati. Funziona reindirizzando l'accesso al registro di sistema da HKCR a HKCU. Per altre informazioni, vedere [Linker Property Pages](../../build/reference/linker-property-pages.md).

Se si Abilita il reindirizzamento del registro di sistema, il Framework reindirizza l'accesso da HKCR a **HKEY_CURRENT_USER \SOFTWARE\classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.

L'implementazione predefinita accede al registro di sistema in HKCR.

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxstat_. h

## <a name="afxsetresourcehandle"></a>  AfxSetResourceHandle

Usare questa funzione per impostare l'handle HINSTANCE che determina la posizione in cui vengono caricate le risorse predefinite dell'applicazione.

```cpp
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);
```

### <a name="parameters"></a>Parametri

\ *hInstResource*
L'istanza o l'handle del modulo per un oggetto. File EXE o DLL da cui vengono caricate le risorse dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="afxshellmanager"></a>  AfxShellManager

Puntatore a Global [Shell Manager](cshellmanager-class.md).

### <a name="syntax"></a>Sintassi

```cpp
CShellManager* afxShellManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxshellmanager. h

## <a name="afxsocketinit"></a>  AfxSocketInit

Chiamare questa funzione nell'override del `CWinApp::InitInstance` per inizializzare i socket di Windows.

```cpp
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);
```

### <a name="parameters"></a>Parametri

\ *lpwsaData*
Puntatore a una struttura [WSADATA](/windows/win32/api/winsock2/ns-winsock2-wsadata) . Se *lpwsaData* non è uguale a null, l'indirizzo della struttura `WSADATA` viene riempito dalla chiamata a `WSAStartup`. Questa funzione garantisce inoltre che `WSACleanup` venga chiamato prima del termine dell'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Note

Quando si usano socket MFC nei thread secondari in un'applicazione MFC collegata in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie del socket. Per impostazione predefinita, `AfxSocketInit` viene chiamata solo nel thread primario.

### <a name="requirements"></a>Requisiti di

  **Intestazione** afxsock. h

## <a name="afxusertoolsmanager"></a>  AfxUserToolsManager

Puntatore alla [gestione degli strumenti utente](cusertoolsmanager-class.md)globale.

### <a name="syntax"></a>Sintassi

```cpp
CUserToolsManager* afxUserToolsManager;
```

### <a name="requirements"></a>Requisiti di

**Intestazione:** afxusertoolsmanager. h

## <a name="afxwininit"></a>  AfxWinInit

Questa funzione viene chiamata dalla funzione `WinMain` fornita da MFC, come parte dell'inizializzazione di [CWinApp](../../mfc/reference/cwinapp-class.md) di un'applicazione basata su GUI, per inizializzare MFC.

```cpp
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPTSTR lpCmdLine,
    int nCmdShow);
```

### <a name="parameters"></a>Parametri

\ *HINSTANCE*
Handle del modulo attualmente in esecuzione.

\ *hPrevInstance*
Handle per un'istanza precedente dell'applicazione. Per un'applicazione basata su Win32, questo parametro è sempre **null**.

\ *lpCmdLine*
Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.

\ *nCmdShow*
Specifica come viene visualizzata la finestra principale di un'applicazione GUI.

### <a name="remarks"></a>Note

Per un'applicazione console, che non utilizza la funzione `WinMain` fornita da MFC, è necessario chiamare direttamente `AfxWinInit` per inizializzare MFC.

Se si chiama `AfxWinInit` manualmente, è necessario dichiarare un'istanza di una classe `CWinApp`. Per un'applicazione console, è possibile scegliere di non derivare la propria classe da `CWinApp` e utilizzare invece un'istanza di `CWinApp` direttamente. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione nell'implementazione del **principale**.

> [!NOTE]
> Quando crea un contesto di attivazione per un assembly, MFC usa una risorsa di manifesto fornita dal modulo utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per ulteriori informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]

### <a name="requirements"></a>Requisiti di

  **Intestazione** AFXWIN. h

## <a name="see-also"></a>Vedere anche

[Macro e globali](mfc-macros-and-globals.md)\
[Classe CWinApp](cwinapp-class.md)\
[Classe CContextMenuManager](ccontextmenumanager-class.md)\
\ della [classe CWnd](cwnd-class.md)
[Classe CFrameWndEx](cframewndex-class.md)\
[Classe CMFCToolBar](cmfctoolbar-class.md)\
[Classe CKeyboardManager](ckeyboardmanager-class.md)\
[Classe CMenuTearOffManager](cmenutearoffmanager-class.md)\
[Classe CMouseManager](cmousemanager-class.md)\
[Classe CShellManager](cshellmanager-class.md)\
[Classe CUserToolsManager](cusertoolsmanager-class.md)
