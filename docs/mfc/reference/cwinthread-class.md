---
description: 'Altre informazioni su: classe CWinThread'
title: CWinThread (classe)
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
ms.openlocfilehash: f9f89aa6397f44c95e8958d077fe18258e3c17f3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342608"
---
# <a name="cwinthread-class"></a>CWinThread (classe)

Rappresenta un thread di esecuzione all'interno di un'applicazione.

## <a name="syntax"></a>Sintassi

```
class CWinThread : public CCmdTarget
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWinThread:: CWinThread](#cwinthread)|Costruisce un oggetto `CWinThread`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinThread:: CreateThread](#createthread)|Avvia l'esecuzione di un `CWinThread` oggetto.|
|[CWinThread:: ExitInstance](#exitinstance)|Eseguire l'override di per eseguire la pulizia al termine del thread.|
|[CWinThread:: GetMainWnd](#getmainwnd)|Recupera un puntatore alla finestra principale per il thread.|
|[CWinThread:: GetThreadPriority](#getthreadpriority)|Ottiene la priorità del thread corrente.|
|[CWinThread:: InitInstance](#initinstance)|Eseguire l'override per eseguire l'inizializzazione dell'istanza del thread|
|[CWinThread:: IsIdleMessage](#isidlemessage)|Verifica la presenza di messaggi speciali.|
|[CWinThread:: OnIdle](#onidle)|Eseguire l'override di per eseguire l'elaborazione del tempo di inattività specifico del thread.|
|[CWinThread::P ostThreadMessage](#postthreadmessage)|Invia un messaggio a un altro `CWinThread` oggetto.|
|[CWinThread::P reTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinThread::P rocessMessageFilter](#processmessagefilter)|Intercetta alcuni messaggi prima che raggiungano l'applicazione.|
|[CWinThread::P rocessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate dai gestori di messaggi e comandi del thread.|
|[CWinThread::P umpMessage](#pumpmessage)|Contiene il ciclo di messaggi del thread.|
|[CWinThread:: ResumeThread](#resumethread)|Decrementa il conteggio di sospensione di un thread.|
|[CWinThread:: Run](#run)|Controllo della funzione per i thread con un message pump. Eseguire l'override di per personalizzare il ciclo di messaggi predefinito.|
|[CWinThread:: SetThreadPriority](#setthreadpriority)|Imposta la priorità del thread corrente.|
|[CWinThread:: SuspendThread](#suspendthread)|Incrementa il conteggio di sospensione di un thread.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-----------------|
|[HANDLE CWinThread:: operator](#operator_handle)|Recupera l'handle dell' `CWinThread` oggetto.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Description|
|----------|-----------------|
|[CWinThread:: m_bAutoDelete](#m_bautodelete)|Specifica se eliminare definitivamente l'oggetto alla chiusura del thread.|
|[CWinThread:: m_hThread](#m_hthread)|Handle per il thread corrente.|
|[CWinThread:: m_nThreadID](#m_nthreadid)|ID del thread corrente.|
|[CWinThread:: m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|
|[CWinThread:: m_pMainWnd](#m_pmainwnd)|Include un puntatore alla finestra principale dell'applicazione.|

## <a name="remarks"></a>Commenti

Il thread principale di esecuzione viene in genere fornito da un oggetto derivato `CWinApp` da `CWinApp` . è derivato da `CWinThread` . `CWinThread`Oggetti aggiuntivi consentono più thread all'interno di una determinata applicazione.

Sono disponibili due tipi generali di thread che `CWinThread` supportano: thread di lavoro e thread dell'interfaccia utente. I thread di lavoro non dispongono di message pump, ad esempio un thread che esegue calcoli in background in un'applicazione del foglio di calcolo. I thread dell'interfaccia utente hanno un message pump ed elaborano i messaggi ricevuti dal sistema. [CWinApp](../../mfc/reference/cwinapp-class.md) e le classi derivate da questo sono esempi di thread dell'interfaccia utente. Altri thread dell'interfaccia utente possono anche essere derivati direttamente da `CWinThread` .

Gli oggetti della classe sono `CWinThread` in genere disponibili per la durata del thread. Se si desidera modificare questo comportamento, impostare [m_bAutoDelete](#m_bautodelete) su false.

La `CWinThread` classe è necessaria per rendere il codice e MFC completamente thread-safe. I dati locali dei thread usati dal Framework per gestire informazioni specifiche del thread vengono gestiti dagli `CWinThread` oggetti. A causa di questa dipendenza `CWinThread` da per gestire i dati locali del thread, qualsiasi thread che Usa MFC deve essere creato da MFC. Ad esempio, un thread creato dalla funzione di run-time [_beginthread, _beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) non può utilizzare alcuna API MFC.

Per creare un thread, chiamare [AfxBeginThread](application-information-and-management.md#afxbeginthread). Esistono due formati, a seconda che si desideri un thread di lavoro o di interfaccia utente. Se si vuole un thread dell'interfaccia utente, passare a `AfxBeginThread` un puntatore all'oggetto `CRuntimeClass` della `CWinThread` classe derivata da. Se si desidera creare un thread di lavoro, passare a `AfxBeginThread` un puntatore alla funzione di controllo e al parametro alla funzione di controllo. Per i thread di lavoro e i thread dell'interfaccia utente, è possibile specificare parametri facoltativi che modificano priorità, dimensioni dello stack, flag di creazione e attributi di sicurezza. `AfxBeginThread` restituirà un puntatore al nuovo `CWinThread` oggetto.

Anziché chiamare `AfxBeginThread` , è possibile costruire un `CWinThread` oggetto derivato da, quindi chiamare `CreateThread` . Questo metodo di costruzione in due fasi è utile se si desidera riutilizzare l' `CWinThread` oggetto tra la creazione e la chiusura successive delle esecuzioni dei thread.

Per altre informazioni su `CWinThread` , vedere gli articoli [multithreading con C++ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md), [multithreading: creazione di User-Interface thread](../../parallel/multithreading-creating-user-interface-threads.md), [multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md)e [multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

`CWinThread`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cwinthreadcreatethread"></a><a name="createthread"></a> CWinThread:: CreateThread

Crea un thread da eseguire nello spazio degli indirizzi del processo chiamante.

```
BOOL CreateThread(
    DWORD dwCreateFlags = 0,
    UINT nStackSize = 0,
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```

### <a name="parameters"></a>Parametri

*dwCreateFlags*<br/>
Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori seguenti:

- CREATE_SUSPENDED avviare il thread con un conteggio di sospensione di uno. Utilizzare CREATE_SUSPENDED se si desidera inizializzare i dati dei membri dell' `CWinThread` oggetto, ad esempio [m_bAutoDelete](#m_bautodelete) o tutti i membri della classe derivata, prima dell'avvio dell'esecuzione del thread. Una volta completata l'inizializzazione, usare [CWinThread:: ResumeThread](#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguito fino a quando non `CWinThread::ResumeThread` viene chiamato il metodo.

- **0** avviare il thread immediatamente dopo la creazione.

*nStackSize*<br/>
Specifica la dimensione in byte dello stack per il nuovo thread. Se è **0**, le dimensioni dello stack vengono predefinite con le stesse dimensioni di quelle del thread primario del processo.

*lpSecurityAttrs*<br/>
Punta a una struttura di [SECURITY_ATTRIBUTES](/previous-versions/windows/desktop/legacy/aa379560\(v=vs.85\)) che specifica gli attributi di sicurezza per il thread.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il thread viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Utilizzare `AfxBeginThread` per creare un oggetto thread ed eseguirlo in un unico passaggio. Utilizzare `CreateThread` se si desidera riutilizzare l'oggetto thread tra la creazione e la chiusura successive delle esecuzioni dei thread.

## <a name="cwinthreadcwinthread"></a><a name="cwinthread"></a> CWinThread:: CWinThread

Costruisce un oggetto `CWinThread`.

```
CWinThread();
```

### <a name="remarks"></a>Commenti

Per iniziare l'esecuzione del thread, chiamare la funzione membro [CreateThread](#createthread) . I thread vengono in genere creati chiamando [AfxBeginThread](application-information-and-management.md#afxbeginthread), che chiamerà questo costruttore e `CreateThread` .

## <a name="cwinthreadexitinstance"></a><a name="exitinstance"></a> CWinThread:: ExitInstance

Viene chiamato dal Framework dall'interno di una funzione membro di [esecuzione](#run) raramente sottoposta a override per uscire da questa istanza del thread o se una chiamata a [InitInstance](#initinstance) ha esito negativo.

```
virtual int ExitInstance();
```

### <a name="return-value"></a>Valore restituito

Codice di uscita del thread. 0 indica che non sono presenti errori e che i valori maggiori di 0 indicano un errore. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### <a name="remarks"></a>Commenti

Non chiamare questa funzione membro da un punto qualsiasi, ma all'interno della `Run` funzione membro. Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

`CWinThread`Se [M_BAUTODELETE](#m_bautodelete) è true, l'implementazione predefinita di questa funzione comporta l'eliminazione dell'oggetto. Eseguire l'override di questa funzione se si desidera eseguire una pulizia aggiuntiva al termine del thread. L'implementazione di `ExitInstance` deve chiamare la versione della classe base dopo l'esecuzione del codice.

## <a name="cwinthreadgetmainwnd"></a><a name="getmainwnd"></a> CWinThread:: GetMainWnd

Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare riferimento direttamente al `m_pMainWnd` membro dell'oggetto applicazione.

```
virtual CWnd* GetMainWnd();
```

### <a name="return-value"></a>Valore restituito

Questa funzione restituisce un puntatore a uno dei due tipi di finestre. Se il thread fa parte di un server OLE e dispone di un oggetto attivo sul posto all'interno di un contenitore attivo, questa funzione restituisce il membro dei dati [CWinApp:: m_pActiveWnd](../../mfc/reference/cwinapp-class.md#m_pactivewnd) dell' `CWinThread` oggetto.

Se non è presente alcun oggetto attivo sul posto all'interno di un contenitore o se l'applicazione non è un server OLE, questa funzione restituisce il [m_pMainWnd](#m_pmainwnd) membro dati dell'oggetto thread.

### <a name="remarks"></a>Commenti

Per i thread dell'interfaccia utente, equivale a fare riferimento direttamente al `m_pActiveWnd` membro dell'oggetto applicazione.

Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al membro `m_pMainWnd` dell'oggetto applicazione.

Eseguire l'override di questa funzione per modificare il comportamento predefinito.

## <a name="cwinthreadgetthreadpriority"></a><a name="getthreadpriority"></a> CWinThread:: GetThreadPriority

Ottiene il livello di priorità del thread corrente del thread.

```
int GetThreadPriority();
```

### <a name="return-value"></a>Valore restituito

Livello di priorità corrente del thread all'interno della relativa classe di priorità. Il valore restituito sarà uno dei seguenti, elencati dalla priorità più alta a quella più bassa:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

## <a name="cwinthreadinitinstance"></a><a name="initinstance"></a> CWinThread:: InitInstance

`InitInstance` deve essere sottoposto a override per inizializzare ogni nuova istanza di un thread dell'interfaccia utente.

```
virtual BOOL InitInstance();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

In genere, si esegue l'override `InitInstance` di per eseguire le attività che devono essere completate quando un thread viene creato per la prima volta.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente. Eseguire l'inizializzazione dei thread di lavoro nella funzione di controllo passata a [AfxBeginThread](application-information-and-management.md#afxbeginthread).

## <a name="cwinthreadisidlemessage"></a><a name="isidlemessage"></a> CWinThread:: IsIdleMessage

Eseguire l'override di questa funzione per evitare che `OnIdle` venga chiamato dopo la generazione di messaggi specifici.

```
virtual BOOL IsIdleMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Punta al messaggio corrente in fase di elaborazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se `OnIdle` deve essere chiamato dopo l'elaborazione del messaggio; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'implementazione predefinita non viene chiamata `OnIdle` dopo i messaggi del mouse ridondanti e i messaggi generati da un punto di inserimento intermittente.

Se un'applicazione ha creato un breve timer, `OnIdle` viene chiamato frequentemente, causando problemi di prestazioni. Per migliorare le prestazioni di un'applicazione di questo tipo, eseguire l'override `IsIdleMessage` nella `CWinApp` classe derivata dall'applicazione per verificare la presenza di WM_TIMER messaggi nel modo seguente:

[!code-cpp[NVC_MFCDocView#189](../../mfc/codesnippet/cpp/cwinthread-class_1.cpp)]

La gestione di WM_TIMER in questo modo consente di migliorare le prestazioni delle applicazioni che utilizzano timer brevi.

## <a name="cwinthreadm_bautodelete"></a><a name="m_bautodelete"></a> CWinThread:: m_bAutoDelete

Specifica se l'oggetto `CWinThread` deve essere eliminato automaticamente alla chiusura del thread.

```
BOOL m_bAutoDelete;
```

### <a name="remarks"></a>Commenti

Il `m_bAutoDelete` membro dati è una variabile pubblica di tipo bool.

Il valore di `m_bAutoDelete` non influisce sulla modalità di chiusura dell'handle del thread sottostante, ma influisce sulla tempistica di chiusura dell'handle. L'handle dei thread viene sempre chiuso quando l'oggetto `CWinThread` viene eliminato definitivamente.

## <a name="cwinthreadm_hthread"></a><a name="m_hthread"></a> CWinThread:: m_hThread

Handle per il thread associato a questo `CWinThread` .

```
HANDLE m_hThread;
```

### <a name="remarks"></a>Commenti

Il `m_hThread` membro dati è una variabile pubblica di tipo handle. È valido solo se l'oggetto thread del kernel sottostante esiste attualmente e l'handle non è stato ancora chiuso.

Il distruttore CWinThread chiama CloseHandle on `m_hThread` . Se [m_bAutoDelete](#m_bautodelete) è true quando il thread termina, l'oggetto CWinThread viene eliminato definitivamente, che invalida tutti i puntatori all'oggetto CWinThread e le relative variabili membro. Potrebbe essere necessario il `m_hThread` membro per verificare il valore di uscita del thread o per attendere un segnale. Per mantenere l'oggetto CWinThread e il relativo `m_hThread` membro durante l'esecuzione del thread e dopo che è stato terminato, impostare `m_bAutoDelete` su false prima di consentire l'esecuzione del thread per continuare. In caso contrario, il thread può terminare, eliminare l'oggetto CWinThread e chiudere l'handle prima di provare a usarlo. Se si usa questa tecnica, l'utente è responsabile dell'eliminazione dell'oggetto CWinThread.

## <a name="cwinthreadm_nthreadid"></a><a name="m_nthreadid"></a> CWinThread:: m_nThreadID

ID del thread associato a questo `CWinThread` .

```
DWORD m_nThreadID;
```

### <a name="remarks"></a>Commenti

Il `m_nThreadID` membro dati è una variabile pubblica di tipo DWORD. È valido solo se l'oggetto thread del kernel sottostante è attualmente esistente.
Vedere anche la sezione Osservazioni sulla durata [m_hThread](#m_hthread) .

### <a name="example"></a>Esempio

  Vedere l'esempio per [AfxGetThread](application-information-and-management.md#afxgetthread).

## <a name="cwinthreadm_pactivewnd"></a><a name="m_pactivewnd"></a> CWinThread:: m_pActiveWnd

Usare questo membro dati per archiviare un puntatore all'oggetto finestra attivo del thread.

```
CWnd* m_pActiveWnd;
```

### <a name="remarks"></a>Commenti

Il libreria Microsoft Foundation Class terminerà automaticamente il thread quando la finestra a cui viene fatto riferimento da `m_pActiveWnd` viene chiusa. Se il thread è il thread principale di un'applicazione, verrà terminata anche l'applicazione. Se il membro dati è NULL, la finestra attiva per l'oggetto dell'applicazione `CWinApp` verrà ereditata. `m_pActiveWnd` è una variabile pubblica di tipo `CWnd*` .

Questa variabile membro viene in genere impostata quando si esegue l'override di `InitInstance` . In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.

## <a name="cwinthreadm_pmainwnd"></a><a name="m_pmainwnd"></a> CWinThread:: m_pMainWnd

Usare questo membro dati per archiviare un puntatore all'oggetto finestra principale del thread.

```
CWnd* m_pMainWnd;
```

### <a name="remarks"></a>Commenti

Il libreria Microsoft Foundation Class terminerà automaticamente il thread quando la finestra a cui viene fatto riferimento da `m_pMainWnd` viene chiusa. Se il thread è il thread principale di un'applicazione, verrà terminata anche l'applicazione. Se il membro dati è NULL, verrà utilizzata la finestra principale per l' `CWinApp` oggetto dell'applicazione per determinare quando terminare il thread. `m_pMainWnd` è una variabile pubblica di tipo `CWnd*` .

Questa variabile membro viene in genere impostata quando si esegue l'override di `InitInstance` . In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.

## <a name="cwinthreadonidle"></a><a name="onidle"></a> CWinThread:: OnIdle

Eseguire l'override di questa funzione membro per eseguire l'elaborazione del tempo di inattività.

```
virtual BOOL OnIdle(LONG lCount);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Il contatore viene incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi del thread è vuota. Questo conteggio viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile utilizzare il parametro *lCount* per determinare la durata relativa del tempo in cui il thread è rimasto inattivo senza elaborare un messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero per ricevere più tempo di elaborazione inattivo; 0 se non è necessario più tempo di elaborazione inattivo.

### <a name="remarks"></a>Commenti

`OnIdle` viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi del thread è vuota. Usare la sostituzione per chiamare le attività del gestore inattivo in background.

`OnIdle` deve restituire 0 per indicare che non è richiesto alcun tempo di elaborazione inattivo aggiuntivo. Il parametro *lCount* viene incrementato ogni volta `OnIdle` che viene chiamato quando la coda di messaggi è vuota e viene reimpostata su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le diverse routine inattive in base a questo conteggio.

L'implementazione predefinita di questa funzione membro libera dalla memoria oggetti temporanei e librerie a collegamento dinamico inutilizzate.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

Poiché l'applicazione non è in grado di elaborare i messaggi fino a quando non viene `OnIdle` restituito, non eseguire attività di lunga durata in questa funzione.

## <a name="cwinthreadoperator-handle"></a><a name="operator_handle"></a> HANDLE CWinThread:: operator

Recupera l'handle dell' `CWinThread` oggetto.

```
operator HANDLE() const;
```

### <a name="return-value"></a>Valore restituito

Se ha esito positivo, l'handle dell'oggetto thread; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Usare l'handle per chiamare direttamente le API di Windows.

## <a name="cwinthreadpostthreadmessage"></a><a name="postthreadmessage"></a> CWinThread::P ostThreadMessage

Chiamato per inserire un messaggio definito dall'utente in un altro `CWinThread` oggetto.

```
BOOL PostThreadMessage(
    UINT message,
    WPARAM wParam,
    LPARAM lParam);
```

### <a name="parameters"></a>Parametri

*message*<br/>
ID del messaggio definito dall'utente.

*wParam*<br/>
Primo parametro del messaggio.

*lParam*<br/>
Secondo parametro del messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

Il messaggio inviato viene mappato al gestore di messaggi appropriato mediante la macro della mappa messaggi ON_THREAD_MESSAGE.

> [!NOTE]
> Quando si chiama [PostThreadMessage](/windows/win32/api/winuser/nf-winuser-postthreadmessagew), il messaggio viene inserito nella coda di messaggi del thread. Tuttavia, poiché i messaggi inviati in questo modo non sono associati a una finestra, MFC non li invierà ai gestori di messaggi o comandi. Per gestire questi messaggi, eseguire l'override della `PreTranslateMessage()` funzione della classe derivata da CWinApp e gestire manualmente i messaggi.

## <a name="cwinthreadpretranslatemessage"></a><a name="pretranslatemessage"></a> CWinThread::P reTranslateMessage

Eseguire l'override di questa funzione per filtrare i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Punta a una [struttura di messaggi](/windows/win32/api/winuser/ns-winuser-msg) contenente il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato elaborato completamente in `PreTranslateMessage` e non deve essere ulteriormente elaborato. Zero se il messaggio deve essere elaborato in modo normale.

### <a name="remarks"></a>Commenti

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

## <a name="cwinthreadprocessmessagefilter"></a><a name="processmessagefilter"></a> CWinThread::P rocessMessageFilter

La funzione hook del Framework chiama questa funzione membro per filtrare e rispondere a determinati messaggi di Windows.

```
virtual BOOL ProcessMessageFilter(
    int code,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*code*<br/>
Specifica un codice hook. Questa funzione membro usa il codice per determinare come elaborare *lpMsg.*

*lpMsg*<br/>
Puntatore a una struttura di [messaggi](/windows/win32/api/winuser/ns-winuser-msg)di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Una funzione hook elabora gli eventi prima che vengano inviati all'elaborazione normale dei messaggi dell'applicazione.

Se si sostituisce questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per gestire l'elaborazione dell'hook del Framework.

## <a name="cwinthreadprocesswndprocexception"></a><a name="processwndprocexception"></a> CWinThread::P rocessWndProcException

Il Framework chiama questa funzione membro ogni volta che il gestore non rileva un'eccezione generata in uno dei gestori di messaggi o comandi del thread.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*e*<br/>
Punta a un'eccezione non gestita.

*pMsg*<br/>
Punta a una [struttura MSG](/windows/win32/api/winuser/ns-winuser-msg) contenente informazioni sul messaggio di Windows che ha causato la generazione di un'eccezione da parte del Framework.

### <a name="return-value"></a>Valore restituito

-1 se viene generata un'eccezione WM_CREATE; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Non chiamare direttamente questa funzione membro.

L'implementazione predefinita di questa funzione membro gestisce solo le eccezioni generate dai messaggi seguenti:

|Comando|Azione|
|-------------|------------|
|WM_CREATE|Operazione non riuscita.|
|WM_PAINT|Convalidare la finestra interessata, impedendo così la generazione di un altro messaggio WM_PAINT.|

Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera visualizzare il comportamento predefinito.

Questa funzione membro viene utilizzata solo nei thread che dispongono di un message pump.

## <a name="cwinthreadpumpmessage"></a><a name="pumpmessage"></a> CWinThread::P umpMessage

Contiene il ciclo di messaggi del thread.

```
virtual BOOL PumpMessage();
```

### <a name="remarks"></a>Commenti

`PumpMessage` contiene il ciclo di messaggi del thread. `PumpMessage` viene chiamato da `CWinThread` per pompare i messaggi del thread. È possibile chiamare `PumpMessage` direttamente per forzare l'elaborazione dei messaggi oppure è possibile eseguire l'override `PumpMessage` di per modificare il comportamento predefinito.

`PumpMessage`La chiamata diretta e l'override del comportamento predefinito sono consigliate solo per utenti avanzati.

## <a name="cwinthreadresumethread"></a><a name="resumethread"></a> CWinThread:: ResumeThread

Chiamato per riprendere l'esecuzione di un thread che è stato sospeso dalla funzione membro [SuspendThread](#suspendthread) o di un thread creato con il flag CREATE_SUSPENDED.

```
DWORD ResumeThread();
```

### <a name="return-value"></a>Valore restituito

Conteggio di sospensione precedente del thread in caso di esito positivo; `0xFFFFFFFF` in caso contrario,. Se il valore restituito è zero, il thread corrente non è stato sospeso. Se il valore restituito è uno, il thread è stato sospeso, ma ora viene riavviato. Qualsiasi valore restituito maggiore di uno indica che il thread rimane sospeso.

### <a name="remarks"></a>Commenti

Il numero di sospensione del thread corrente viene ridotto di uno. Se il conteggio di sospensione viene ridotto a zero, il thread riprende l'esecuzione; in caso contrario, il thread rimarrà sospeso.

## <a name="cwinthreadrun"></a><a name="run"></a> CWinThread:: Run

Fornisce un ciclo di messaggi predefinito per i thread dell'interfaccia utente.

```
virtual int Run();
```

### <a name="return-value"></a>Valore restituito

**`int`** Valore restituito dal thread. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/win32/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).

### <a name="remarks"></a>Commenti

`Run` acquisisce e invia messaggi di Windows fino a quando l'applicazione non riceve un messaggio di [WM_QUIT](/windows/win32/winmsg/wm-quit) . Se la coda di messaggi del thread non contiene attualmente alcun messaggio, le `Run` chiamate `OnIdle` a eseguono l'elaborazione del tempo di inattività. I messaggi in arrivo passano alla funzione membro [PreTranslateMessage](#pretranslatemessage) per un'elaborazione speciale, quindi alla funzione Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) per la conversione della tastiera standard. Infine, viene chiamata la funzione [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) di Windows.

`Run` viene ignorato raramente, ma è possibile eseguirne l'override per implementare un comportamento speciale.

Questa funzione membro viene utilizzata solo nei thread dell'interfaccia utente.

## <a name="cwinthreadsetthreadpriority"></a><a name="setthreadpriority"></a> CWinThread:: SetThreadPriority

Questa funzione imposta il livello di priorità del thread corrente all'interno della relativa classe di priorità.

```
BOOL SetThreadPriority(int nPriority);
```

### <a name="parameters"></a>Parametri

*nPriority*<br/>
Specifica il nuovo livello di priorità del thread all'interno della relativa classe di priorità. Questo parametro deve essere uno dei valori seguenti, elencato dalla priorità più alta a quella più bassa:

- THREAD_PRIORITY_TIME_CRITICAL

- THREAD_PRIORITY_HIGHEST

- THREAD_PRIORITY_ABOVE_NORMAL

- THREAD_PRIORITY_NORMAL

- THREAD_PRIORITY_BELOW_NORMAL

- THREAD_PRIORITY_LOWEST

- THREAD_PRIORITY_IDLE

Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](/windows/win32/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se la funzione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Può essere chiamato solo dopo che [CreateThread](#createthread) ha restituito correttamente.

## <a name="cwinthreadsuspendthread"></a><a name="suspendthread"></a> CWinThread:: SuspendThread

Incrementa il conteggio di sospensione del thread corrente.

```
DWORD SuspendThread();
```

### <a name="return-value"></a>Valore restituito

Conteggio di sospensione precedente del thread in caso di esito positivo; `0xFFFFFFFF` in caso contrario,.

### <a name="remarks"></a>Commenti

Se un thread ha un conteggio di sospensione superiore a zero, il thread non viene eseguito. Il thread può essere ripreso chiamando la funzione membro [ResumeThread](#resumethread) .

## <a name="see-also"></a>Vedi anche

[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWinApp](../../mfc/reference/cwinapp-class.md)<br/>
[CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)
