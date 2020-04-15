---
title: Classe CWinThread
ms.date: 11/04/2016
f1_keywords:
- CWinThread
- AFXWIN/CWinThread
- AFXWIN/CWinThread::CWinThread
- AFXWIN/CWinThread::CreateThread
- AFXWIN/CWinThread::ExitInstance
- AFXWIN/CWinThread::GetMainWnd
- AFXWIN/CWinThread::GetThreadPriority
- AFXWIN/CWinThread::InitInstance
- AFXWIN/CWinThread::IsIdleMessage
- AFXWIN/CWinThread::OnIdle
- AFXWIN/CWinThread::PostThreadMessage
- AFXWIN/CWinThread::PreTranslateMessage
- AFXWIN/CWinThread::ProcessMessageFilter
- AFXWIN/CWinThread::ProcessWndProcException
- AFXWIN/CWinThread::PumpMessage
- AFXWIN/CWinThread::ResumeThread
- AFXWIN/CWinThread::Run
- AFXWIN/CWinThread::SetThreadPriority
- AFXWIN/CWinThread::SuspendThread
- AFXWIN/CWinThread::m_bAutoDelete
- AFXWIN/CWinThread::m_hThread
- AFXWIN/CWinThread::m_nThreadID
- AFXWIN/CWinThread::m_pActiveWnd
- AFXWIN/CWinThread::m_pMainWnd
helpviewer_keywords:
- CWinThread [MFC], CWinThread
- CWinThread [MFC], CreateThread
- CWinThread [MFC], ExitInstance
- CWinThread [MFC], GetMainWnd
- CWinThread [MFC], GetThreadPriority
- CWinThread [MFC], InitInstance
- CWinThread [MFC], IsIdleMessage
- CWinThread [MFC], OnIdle
- CWinThread [MFC], PostThreadMessage
- CWinThread [MFC], PreTranslateMessage
- CWinThread [MFC], ProcessMessageFilter
- CWinThread [MFC], ProcessWndProcException
- CWinThread [MFC], PumpMessage
- CWinThread [MFC], ResumeThread
- CWinThread [MFC], Run
- CWinThread [MFC], SetThreadPriority
- CWinThread [MFC], SuspendThread
- CWinThread [MFC], m_bAutoDelete
- CWinThread [MFC], m_hThread
- CWinThread [MFC], m_nThreadID
- CWinThread [MFC], m_pActiveWnd
- CWinThread [MFC], m_pMainWnd
ms.assetid: 10cdc294-4057-4e76-ac7c-a8967a89af0b
ms.openlocfilehash: f2e95dd3ba8be31633590e37d95dedc8749ebdd8
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367411"
---
# <a name="cwinthread-class"></a>Classe CWinThread

Rappresenta un thread di esecuzione all'interno di un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CWinThread : public CCmdTarget
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinThread::CWinThreadCWinThread::CWinThread](#cwinthread)|Costruisce un oggetto `CWinThread`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinThread::CreateThread](#createthread)|Avvia l'esecuzione di un `CWinThread` oggetto.|
|[CWinThread::ExitInstance](#exitinstance)|Eseguire l'override per pulire quando il thread termina.|
|[CWinThread::GetMainWnd](#getmainwnd)|Recupera un puntatore alla finestra principale per il thread.|
|[CWinThread::GetThreadPriority](#getthreadpriority)|Ottiene la priorità del thread corrente.|
|[CWinThread::InitInstance](#initinstance)|Eseguire l'override per eseguire l'inizializzazione dell'istanza del thread.|
|[CWinThread::IsIdleMessage](#isidlemessage)|Verifica la presenza di messaggi speciali.|
|[CWinThread::OnIdle](#onidle)|Eseguire l'override per eseguire l'elaborazione del tempo di inattività specifico del thread.|
|[CWinThread::PostThreadMessage](#postthreadmessage)|Pubblica un messaggio `CWinThread` a un altro oggetto.|
|[CWinThread::PreTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinThread::ProcessMessageFilter](#processmessagefilter)|Intercetta alcuni messaggi prima che raggiungano l'applicazione.|
|[CWinThread::ProcessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate dal messaggio del thread e dai gestori di comandi.|
|[CWinThread::PumpMessage](#pumpmessage)|Contiene il ciclo di messaggi del thread.|
|[CWinThread::ResumeThread](#resumethread)|Decrementa il conteggio delle sospensioni di un thread.|
|[CWinThread::Esecuzione](#run)|Funzione di controllo per i thread con un message pump. Eseguire l'override per personalizzare il ciclo di messaggi predefinito.|
|[CWinThread::SetThreadPriority](#setthreadpriority)|Imposta la priorità del thread corrente.|
|[CWinThread::SuspendThread](#suspendthread)|Incrementa il conteggio delle sospensioni di un thread.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinThread::operatore HANDLE](#operator_handle)|Recupera l'handle `CWinThread` dell'oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinThread::m_bAutoDelete](#m_bautodelete)|Specifica se eliminare l'oggetto alla terminazione del thread.|
|[CWinThread::m_hThread](#m_hthread)|Handle al thread corrente.|
|[CWinThread::m_nThreadID](#m_nthreadid)|ID del thread corrente.|
|[CWinThread::m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|
|[CWinThread::m_pMainWnd](#m_pmainwnd)|Contiene un puntatore alla finestra principale dell'applicazione.|

## <a name="remarks"></a>Osservazioni

Il thread principale di esecuzione viene in `CWinApp`genere fornito da un oggetto derivato da ; `CWinApp` deriva da `CWinThread`. Gli `CWinThread` oggetti aggiuntivi consentono più thread all'interno di una determinata applicazione.

Esistono due tipi generali `CWinThread` di thread che supportano: thread di lavoro e thread dell'interfaccia utente. I thread di lavoro non dispongono di message pump, ad esempio un thread che esegue calcoli in background in un'applicazione foglio di calcolo. I thread dell'interfaccia utente dispongono di un message pump ed elaborano i messaggi ricevuti dal sistema. [CWinApp](../../mfc/reference/cwinapp-class.md) e le classi derivate da esso sono esempi di thread dell'interfaccia utente. Altri thread dell'interfaccia utente possono `CWinThread`anche essere derivati direttamente da .

Gli oggetti `CWinThread` della classe in genere esistono per la durata del thread. Se si desidera modificare questo comportamento, [impostare m_bAutoDelete](#m_bautodelete) su FALSE.

La `CWinThread` classe è necessaria per rendere il codice e MFC completamente thread-safe. I dati locali del thread utilizzati dal framework `CWinThread` per gestire le informazioni specifiche del thread vengono gestiti dagli oggetti. A causa di `CWinThread` questa dipendenza da cui gestire i dati locali del thread, qualsiasi thread che utilizza MFC deve essere creato da MFC. Ad esempio, un thread creato dalla funzione di runtime [_beginthread, _beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) non può utilizzare le API MFC.

Per creare un thread, chiamare [AfxBeginThread](application-information-and-management.md#afxbeginthread). Esistono due forme, a seconda che si desideri un thread di lavoro o un thread dell'interfaccia utente. Se si desidera un thread dell'interfaccia utente, passare a `AfxBeginThread` un puntatore alla `CRuntimeClass` della `CWinThread`classe derivata. Se si desidera creare un thread `AfxBeginThread` di lavoro, passare a un puntatore alla funzione di controllo e il parametro alla funzione di controllo. Sia per i thread di lavoro che per i thread dell'interfaccia utente, è possibile specificare parametri facoltativi che modificano la priorità, le dimensioni dello stack, i flag di creazione e gli attributi di sicurezza. `AfxBeginThread`restituirà un puntatore `CWinThread` al nuovo oggetto.

Anziché `AfxBeginThread`chiamare , è `CWinThread`possibile costruire un `CreateThread`oggetto derivato da -e quindi chiamare . Questo metodo di costruzione in due fasi è `CWinThread` utile se si desidera riutilizzare l'oggetto tra la creazione successiva e le terminazioni delle esecuzioni di thread.

Per ulteriori `CWinThread`informazioni su , vedere gli articoli [Multithreading con C,](../../parallel/multithreading-with-cpp-and-mfc.md) [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md), [Multithreading: creazione di thread](../../parallel/multithreading-creating-worker-threads.md)di lavoro e [Multithreading: utilizzo delle classi](../../parallel/multithreading-how-to-use-the-synchronization-classes.md)di sincronizzazione .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CWinThread`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cwinthreadcreatethread"></a><a name="createthread"></a>CWinThread::CreateThread

Crea un thread da eseguire all'interno dello spazio degli indirizzi del processo chiamante.

```
BOOL CreateThread(
    DWORD dwCreateFlags = 0,
    UINT nStackSize = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```

### <a name="parameters"></a>Parametri

*dwCreateFlags (informazioni in chiave)*<br/>
Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori seguenti:This flag can contain one of two values:

- CREATE_SUSPENDED Avviare il thread con un conteggio delle sospensioni pari a uno. Utilizzare CREATE_SUSPENDED se si desidera inizializzare `CWinThread` i dati dei membri dell'oggetto, ad esempio [m_bAutoDelete](#m_bautodelete) o i membri della classe derivata, prima che il thread inizi l'esecuzione. Al termine dell'inizializzazione, utilizzare [CWinThread::ResumeThread](#resumethread) per avviare l'esecuzione del thread. Il thread non `CWinThread::ResumeThread` verrà eseguito fino a quando non viene chiamato.

- **0** Avviare il thread immediatamente dopo la creazione.

*nStackSize (informazioni in base a un confronto e*<br/>
Specifica la dimensione in byte dello stack per il nuovo thread. Se **0**, la dimensione dello stack corrisponde alle stesse dimensioni del thread principale del processo.

*lpSecurityAttrs*<br/>
Punta a una struttura [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica gli attributi di sicurezza per il thread.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il thread viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Utilizzare `AfxBeginThread` per creare un oggetto thread ed eseguirlo in un unico passaggio. Utilizzare `CreateThread` questa opzione se si desidera riutilizzare l'oggetto thread tra la creazione successiva e la terminazione delle esecuzioni dei thread.

## <a name="cwinthreadcwinthread"></a><a name="cwinthread"></a>CWinThread::CWinThreadCWinThread::CWinThread

Costruisce un oggetto `CWinThread`.

```
CWinThread();
```

### <a name="remarks"></a>Osservazioni

Per avviare l'esecuzione del thread, chiamare la funzione membro [CreateThread.To](#createthread) begin the thread's execution, call the CreateThread member function. I thread vengono in genere creati chiamando [AfxBeginThread](application-information-and-management.md#afxbeginthread), che chiamerà questo costruttore e `CreateThread`.

## <a name="cwinthreadexitinstance"></a><a name="exitinstance"></a>CWinThread::ExitInstance

Chiamato dal framework dall'interno di una funzione membro [Run](#run) raramente sottoposta a override per uscire da questa istanza del thread o se una chiamata a [InitInstance](#initinstance) ha esito negativo.

```
virtual int ExitInstance();
```

### <a name="return-value"></a>Valore restituito

Codice di uscita del thread; 0 indica nessun errore e i valori maggiori di 0 indicano un errore. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### <a name="remarks"></a>Osservazioni

Non chiamare questa funzione membro da `Run` qualsiasi punto ma all'interno della funzione membro. Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

L'implementazione predefinita di `CWinThread` questa funzione elimina l'oggetto se [m_bAutoDelete](#m_bautodelete) è TRUE. Eseguire l'override di questa funzione se si desidera eseguire la pulizia aggiuntiva quando il thread termina. L'implementazione di `ExitInstance` deve chiamare la versione della classe base dopo l'esecuzione del codice.

## <a name="cwinthreadgetmainwnd"></a><a name="getmainwnd"></a>CWinThread::GetMainWnd

Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore `m_pMainWnd` alla finestra principale attiva dell'applicazione anziché fare riferimento direttamente al membro dell'oggetto applicazione.

```
virtual CWnd* GetMainWnd();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce un puntatore a uno dei due tipi di finestre. Se il thread fa parte di un server OLE e dispone di un oggetto attivo sul posto all'interno `CWinThread` di un contenitore attivo, questa funzione restituisce il [cWinApp::m_pActiveWnd](../../mfc/reference/cwinapp-class.md#m_pactivewnd) membro dati dell'oggetto.

Se non è presente alcun oggetto attivo sul posto all'interno di un contenitore o l'applicazione non è un server OLE, questa funzione restituisce il [m_pMainWnd](#m_pmainwnd) membro dati dell'oggetto thread.

### <a name="remarks"></a>Osservazioni

Per i thread dell'interfaccia utente, ciò equivale a fare riferimento direttamente al `m_pActiveWnd` membro dell'oggetto applicazione.

Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al membro `m_pMainWnd` dell'oggetto applicazione.

Eseguire l'override di questa funzione per modificare il comportamento predefinito.

## <a name="cwinthreadgetthreadpriority"></a><a name="getthreadpriority"></a>CWinThread::GetThreadPriority

Ottiene il livello di priorità del thread corrente di questo thread.

```
int GetThreadPriority();
```

### <a name="return-value"></a>Valore restituito

Livello di priorità del thread corrente all'interno della relativa classe di priorità. Il valore restituito sarà uno dei seguenti, elencati dalla priorità più alta alla più bassa:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in Windows SDK.

## <a name="cwinthreadinitinstance"></a><a name="initinstance"></a>CWinThread::InitInstance

`InitInstance`deve essere sottoposto a override per inizializzare ogni nuova istanza di un thread dell'interfaccia utente.

```
virtual BOOL InitInstance();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

In genere, `InitInstance` si esegue l'override per eseguire attività che devono essere completate quando un thread viene creato per la prima volta.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente. Eseguire l'inizializzazione dei thread di lavoro nella funzione di controllo passata ad [AfxBeginThread](application-information-and-management.md#afxbeginthread).

## <a name="cwinthreadisidlemessage"></a><a name="isidlemessage"></a>CWinThread::IsIdleMessage

Eseguire l'override `OnIdle` di questa funzione per evitare che venga chiamato dopo la generazione di messaggi specifici.

```
virtual BOOL IsIdleMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Punta al messaggio corrente in fase di elaborazione.

### <a name="return-value"></a>Valore restituito

Diverso da `OnIdle` zero se deve essere chiamato dopo l'elaborazione del messaggio; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita `OnIdle` non chiama dopo i messaggi ridondanti del mouse e i messaggi generati dai cursori lampeggianti.

Se un'applicazione ha creato `OnIdle` un timer breve, verrà chiamato frequentemente, causando problemi di prestazioni. Per migliorare le prestazioni di `IsIdleMessage` tale applicazione, `CWinApp`eseguire l'override nella classe derivata dall'applicazione per verificare la presenza di WM_TIMER messaggi come segue:

[!code-cpp[NVC_MFCDocView#189](../../mfc/codesnippet/cpp/cwinthread-class_1.cpp)]

La gestione di WM_TIMER in questo modo migliorerà le prestazioni delle applicazioni che utilizzano timer brevi.

## <a name="cwinthreadm_bautodelete"></a><a name="m_bautodelete"></a>CWinThread::m_bAutoDelete

Specifica se l'oggetto `CWinThread` deve essere eliminato automaticamente alla chiusura del thread.

```
BOOL m_bAutoDelete;
```

### <a name="remarks"></a>Osservazioni

Il `m_bAutoDelete` membro dati è una variabile pubblica di tipo BOOL.

Il valore `m_bAutoDelete` di non influisce sul modo in cui l'handle del thread sottostante viene chiuso, ma influisce sulla temporizzazione della chiusura dell'handle. L'handle dei thread viene sempre chiuso quando l'oggetto `CWinThread` viene eliminato definitivamente.

## <a name="cwinthreadm_hthread"></a><a name="m_hthread"></a>CWinThread::m_hThread

Manico al thread collegato `CWinThread`a questo oggetto .

```
HANDLE m_hThread;
```

### <a name="remarks"></a>Osservazioni

Il `m_hThread` membro dati è una variabile pubblica di tipo HANDLE. È valido solo se l'oggetto thread del kernel sottostante esiste attualmente e l'handle non è ancora stato chiuso.

Il distruttore CWinThread chiama `m_hThread`CloseHandle su . Se [m_bAutoDelete](#m_bautodelete) è TRUE quando il thread termina, il CWinThread oggetto viene eliminato, che invalida tutti i puntatori al CWinThread oggetto e le relative variabili membro. Potrebbe essere `m_hThread` necessario il membro per controllare il valore di uscita del thread o per attendere un segnale. Per mantenere l'oggetto CWinThread e il relativo `m_hThread` membro `m_bAutoDelete` durante l'esecuzione del thread e dopo la terminazione, impostare su FALSE prima di consentire la continuazione dell'esecuzione del thread. In caso contrario, il thread potrebbe terminare, eliminare l'oggetto CWinThread e chiudere l'handle prima di tentare di utilizzarlo. Se si utilizza questa tecnica, si è responsabili dell'eliminazione dell'oggetto CWinThread.

## <a name="cwinthreadm_nthreadid"></a><a name="m_nthreadid"></a>CWinThread::m_nThreadID

ID del thread collegato `CWinThread`a questo oggetto .

```
DWORD m_nThreadID;
```

### <a name="remarks"></a>Osservazioni

Il `m_nThreadID` membro dati è una variabile pubblica di tipo DWORD. È valido solo se esiste un oggetto thread del kernel sottostante.
Vedere anche le osservazioni sulla [m_hThread](#m_hthread) durata.

### <a name="example"></a>Esempio

  Vedere l'esempio per [AfxGetThread](application-information-and-management.md#afxgetthread).

## <a name="cwinthreadm_pactivewnd"></a><a name="m_pactivewnd"></a>CWinThread::m_pActiveWnd

Utilizzare questo membro dati per archiviare un puntatore all'oggetto finestra attivo del thread.

```
CWnd* m_pActiveWnd;
```

### <a name="remarks"></a>Osservazioni

La libreria Microsoft Foundation Class terminerà automaticamente il `m_pActiveWnd` thread quando la finestra a cui viene visualizzata la chiusura. Se questo thread è il thread principale per un'applicazione, anche l'applicazione verrà terminata. Se questo membro dati è NULL, verrà `CWinApp` ereditata la finestra attiva per l'oggetto dell'applicazione. `m_pActiveWnd`è una variabile `CWnd*`pubblica di tipo .

In genere, questa variabile membro `InitInstance`viene impostata quando si esegue l'override di . In un thread di lavoro, il valore di questo membro dati viene ereditato dal thread padre.

## <a name="cwinthreadm_pmainwnd"></a><a name="m_pmainwnd"></a>CWinThread::m_pMainWnd

Utilizzare questo membro dati per archiviare un puntatore all'oggetto finestra principale del thread.

```
CWnd* m_pMainWnd;
```

### <a name="remarks"></a>Osservazioni

La libreria Microsoft Foundation Class terminerà automaticamente il `m_pMainWnd` thread quando la finestra a cui viene visualizzata la chiusura. Se questo thread è il thread principale per un'applicazione, anche l'applicazione verrà terminata. Se questo membro dati è NULL, la `CWinApp` finestra principale per l'oggetto dell'applicazione verrà utilizzata per determinare quando terminare il thread. `m_pMainWnd`è una variabile `CWnd*`pubblica di tipo .

In genere, questa variabile membro `InitInstance`viene impostata quando si esegue l'override di . In un thread di lavoro, il valore di questo membro dati viene ereditato dal thread padre.

## <a name="cwinthreadonidle"></a><a name="onidle"></a>CWinThread::OnIdle

Eseguire l'override di questa funzione membro per eseguire l'elaborazione in tempo di inattività.

```
virtual BOOL OnIdle(LONG lCount);
```

### <a name="parameters"></a>Parametri

*lCount (conteggio)*<br/>
Un contatore incrementato ogni volta `OnIdle` viene chiamato quando la coda di messaggi del thread è vuota. Questo conteggio viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile utilizzare il parametro *lCount* per determinare il periodo di tempo relativo per cui il thread è rimasto inattivo senza elaborare un messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero per ricevere più tempo di elaborazione inattivo; 0 se non è necessario più tempo di elaborazione inattivo.

### <a name="remarks"></a>Osservazioni

`OnIdle`viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi del thread è vuota. Usare l'override per chiamare le attività del gestore di inattività in background.

`OnIdle`deve restituire 0 per indicare che non è necessario alcun tempo di elaborazione inattivo aggiuntivo. Il *lCount* parametro viene `OnIdle` incrementato ogni volta che viene chiamato quando la coda di messaggi è vuota e viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le diverse routine di inattività in base a questo conteggio.

L'implementazione predefinita di questa funzione membro libera dalla memoria gli oggetti temporanei e le librerie a collegamento dinamico inutilizzate.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

Poiché l'applicazione `OnIdle` non può elaborare messaggi fino alla restituzione, non eseguire attività lunghe in questa funzione.

## <a name="cwinthreadoperator-handle"></a><a name="operator_handle"></a>CWinThread::operatore HANDLE

Recupera l'handle `CWinThread` dell'oggetto.

```
operator HANDLE() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'handle dell'oggetto thread; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare l'handle per chiamare direttamente le API di Windows.Use the handle to directly call Windows APIs.

## <a name="cwinthreadpostthreadmessage"></a><a name="postthreadmessage"></a>CWinThread::PostThreadMessage

Chiamato per inviare un messaggio `CWinThread` definito dall'utente a un altro oggetto.

```
BOOL PostThreadMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*Messaggio*<br/>
ID del messaggio definito dall'utente.

*wParam*<br/>
Primo parametro del messaggio.

*lParam*<br/>
Secondo parametro del messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Il messaggio inviato viene mappato al gestore messaggi corretto dalla macro della mappa messaggi ON_THREAD_MESSAGE.

> [!NOTE]
> Quando si chiama [PostThreadMessage](/windows/win32/api/winuser/nf-winuser-postthreadmessagew), il messaggio viene inserito nella coda dei messaggi del thread. Tuttavia, poiché i messaggi inviati in questo modo non sono associati a una finestra, MFC non li invierà ai gestori di messaggi o di comando. Per gestire questi messaggi, `PreTranslateMessage()` eseguire l'override della funzione della classe derivata da CWinApp e gestire i messaggi manualmente.

## <a name="cwinthreadpretranslatemessage"></a><a name="pretranslatemessage"></a>CWinThread::PreTranslateMessage

Eseguire l'override di questa funzione per filtrare i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Punta a una [struttura MSG](/windows/win32/api/winuser/ns-winuser-msg) contenente il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `PreTranslateMessage` messaggio è stato completamente elaborato e non deve essere elaborato ulteriormente. zero se il messaggio deve essere elaborato nel modo normale.

### <a name="remarks"></a>Osservazioni

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

## <a name="cwinthreadprocessmessagefilter"></a><a name="processmessagefilter"></a>CWinThread::ProcessMessageFilter

La funzione hook del framework chiama questa funzione membro per filtrare e rispondere a determinati messaggi di Windows.The framework's hook function calls this member function to filter and respond to certain Windows messages.

```
virtual BOOL ProcessMessageFilter(
    int code,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*Codice*<br/>
Specifica un codice hook. Questa funzione membro utilizza il codice per determinare come elaborare *lpMsg.*

*lpMsg*<br/>
Puntatore a una [struttura Windows MSG](/windows/win32/api/winuser/ns-winuser-msg).

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Una funzione hook elabora gli eventi prima che vengano inviati alla normale elaborazione dei messaggi dell'applicazione.

Se si esegue l'override di questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per mantenere l'elaborazione hook del framework.

## <a name="cwinthreadprocesswndprocexception"></a><a name="processwndprocexception"></a>CWinThread::ProcessWndProcException

Il framework chiama questa funzione membro ogni volta che il gestore non rileva un'eccezione generata in uno dei gestori di messaggi o di comando del thread.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*e*<br/>
Punta a un'eccezione non gestita.

*pMsg*<br/>
Punta a una [struttura MSG](/windows/win32/api/winuser/ns-winuser-msg) contenente informazioni sul messaggio di windows che ha causato la generazione di un'eccezione da parte del framework.

### <a name="return-value"></a>Valore restituito

-1 se viene generata un'eccezione WM_CREATE; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Non chiamare direttamente questa funzione membro.

L'implementazione predefinita di questa funzione membro gestisce solo le eccezioni generate dai messaggi seguenti:

|Comando|Azione|
|-------------|------------|
|Wm_create|Operazione non riuscita.|
|Wm_paint|Convalidare la finestra interessata, impedendo così la generazione di un altro messaggio di WM_PAINT.|

Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera visualizzare il comportamento predefinito.

Questa funzione membro viene utilizzata solo nei thread che dispongono di un message pump.

## <a name="cwinthreadpumpmessage"></a><a name="pumpmessage"></a>CWinThread::PumpMessage

Contiene il ciclo di messaggi del thread.

```
virtual BOOL PumpMessage();
```

### <a name="remarks"></a>Osservazioni

`PumpMessage`contiene il ciclo di messaggi del thread. `PumpMessage`viene chiamato `CWinThread` da per pompare i messaggi del filo. È possibile `PumpMessage` chiamare direttamente per forzare l'elaborazione dei messaggi oppure eseguire l'override `PumpMessage` per modificarne il comportamento predefinito.

La `PumpMessage` chiamata diretta e l'override del comportamento predefinito è consigliata solo per gli utenti avanzati.

## <a name="cwinthreadresumethread"></a><a name="resumethread"></a>CWinThread::ResumeThread

Chiamato per riprendere l'esecuzione di un thread sospeso dalla funzione membro [SuspendThread](#suspendthread) o di un thread creato con il flag CREATE_SUSPENDED.

```
DWORD ResumeThread();
```

### <a name="return-value"></a>Valore restituito

Conteggio delle sospensioni precedenti del thread se ha esito positivo; `0xFFFFFFFF` in caso contrario. Se il valore restituito è zero, il thread corrente non è stato sospeso. Se il valore restituito è uno, il thread è stato sospeso, ma ora viene riavviato. Qualsiasi valore restituito maggiore di uno indica che il thread rimane sospeso.

### <a name="remarks"></a>Osservazioni

Il conteggio delle sospensioni del thread corrente viene ridotto di uno. Se il conteggio delle sospensioni viene ridotto a zero, il thread riprende l'esecuzione; in caso contrario, il thread rimane sospeso.

## <a name="cwinthreadrun"></a><a name="run"></a>CWinThread::Esecuzione

Fornisce un ciclo di messaggi predefinito per i thread dell'interfaccia utente.

```
virtual int Run();
```

### <a name="return-value"></a>Valore restituito

Valore **int** restituito dal thread. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### <a name="remarks"></a>Osservazioni

`Run`acquisisce e invia messaggi di Windows fino a quando l'applicazione non riceve un messaggio [di WM_QUIT.](/windows/win32/winmsg/wm-quit) Se la coda di messaggi del `Run` thread `OnIdle` attualmente non contiene messaggi, le chiamate per eseguire l'elaborazione in tempo di inattività. I messaggi in arrivo passano alla funzione membro [PreTranslateMessage](#pretranslatemessage) per l'elaborazione speciale e quindi alla funzione Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) per la conversione da tastiera standard. Infine, viene chiamata la funzione Windows DispatchMessage.Finally, the [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) Windows function is called.

`Run`viene raramente sottoposto a override, ma è possibile eseguirne l'override per implementare un comportamento speciale.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

## <a name="cwinthreadsetthreadpriority"></a><a name="setthreadpriority"></a>CWinThread::SetThreadPriority

Questa funzione imposta il livello di priorità del thread corrente all'interno della relativa classe di priorità.

```
BOOL SetThreadPriority(int nPriority);
```

### <a name="parameters"></a>Parametri

*nPriorità*<br/>
Specifica il nuovo livello di priorità del thread all'interno della relativa classe di priorità. Questo parametro deve essere uno dei valori seguenti, elencati dalla priorità più alta alla più bassa:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Diverso da zero se la funzione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Può essere chiamato solo dopo la restituzione di [CreateThread.](#createthread)

## <a name="cwinthreadsuspendthread"></a><a name="suspendthread"></a>CWinThread::SuspendThread

Incrementa il conteggio delle sospensioni del thread corrente.

```
DWORD SuspendThread();
```

### <a name="return-value"></a>Valore restituito

Conteggio delle sospensioni precedenti del thread se ha esito positivo; `0xFFFFFFFF` in caso contrario.

### <a name="remarks"></a>Osservazioni

Se un thread ha un conteggio delle sospensioni superiore a zero, tale thread non viene eseguito. Il thread può essere ripreso chiamando il [ResumeThread](#resumethread) funzione membro.

## <a name="see-also"></a>Vedere anche

[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)<br/>
[Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
