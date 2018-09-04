---
title: Classe CWinThread | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 784425246c3be99acde2942633ce5190807c59b4
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43689558"
---
# <a name="cwinthread-class"></a>CWinThread (classe)
Rappresenta un thread di esecuzione all'interno di un'applicazione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWinThread : public CCmdTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::CWinThread](#cwinthread)|Costruisce un oggetto `CWinThread`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread:: CreateThread](#createthread)|Avvia l'esecuzione di un `CWinThread` oggetto.|  
|[CWinThread::ExitInstance](#exitinstance)|Eseguire l'override per eseguire la pulizia quando termina il thread.|  
|[CWinThread::GetMainWnd](#getmainwnd)|Recupera un puntatore alla finestra principale per il thread.|  
|[CWinThread::GetThreadPriority](#getthreadpriority)|Ottiene la priorità del thread corrente.|  
|[CWinThread::InitInstance](#initinstance)|Eseguire l'override per eseguire l'inizializzazione dell'istanza di thread.|  
|[CWinThread::IsIdleMessage](#isidlemessage)|Verifica dei messaggi speciali.|  
|[CWinThread::OnIdle](#onidle)|Eseguire l'override per l'elaborazione di tempo di inattività specifico del thread.|  
|[CWinThread::PostThreadMessage](#postthreadmessage)|Invia un messaggio a un altro `CWinThread` oggetto.|  
|[CWinThread::PreTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage).|  
|[CWinThread::ProcessMessageFilter](#processmessagefilter)|Intercetta determinati messaggi prima che raggiungano l'applicazione.|  
|[CWinThread::ProcessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate da gestori di comandi e messaggi del thread.|  
|[CWinThread::PumpMessage](#pumpmessage)|contiene il ciclo di messaggi del thread.|  
|[CWinThread:: ResumeThread](#resumethread)|Conteggio di sospensione decrementa una del thread.|  
|[CWinThread:: Run](#run)|Funzione di controllo per i thread con un message pump. Eseguire l'override per personalizzare il ciclo di messaggi predefinito.|  
|[CWinThread::SetThreadPriority](#setthreadpriority)|Imposta la priorità del thread corrente.|  
|[CWinThread:: SuspendThread](#suspendthread)|Incrementi di un del thread conteggio di sospensione.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::operator HANDLE](#operator_handle)|Recupera l'handle del `CWinThread` oggetto.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinThread::m_bAutoDelete](#m_bautodelete)|Specifica se eliminare l'oggetto alla chiusura del thread.|  
|[CWinThread::m_hThread](#m_hthread)|Handle per il thread corrente.|  
|[CWinThread::m_nThreadID](#m_nthreadid)|ID del thread corrente.|  
|[CWinThread::m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE sul posto attivo.|  
|[CWinThread::m_pMainWnd](#m_pmainwnd)|Contiene un puntatore alla finestra principale dell'applicazione.|  
  
## <a name="remarks"></a>Note  
 Il thread principale dell'esecuzione avviene in genere tramite un oggetto derivato da `CWinApp`; `CWinApp` è derivato da `CWinThread`. Aggiuntive `CWinThread` oggetti consentono più thread all'interno di una determinata applicazione.  
  
 Esistono due tipi generali di thread che `CWinThread` supporta: thread di lavoro e i thread dell'interfaccia utente. Thread di lavoro non dispongono di alcuna message pump: ad esempio, un thread che esegue i calcoli in background in un'applicazione foglio di calcolo. Thread dell'interfaccia utente hanno un message pump ed elaborare i messaggi ricevuti dal sistema. [CWinApp](../../mfc/reference/cwinapp-class.md) e le classi derivate da quest'ultimo sono esempi di thread dell'interfaccia utente. Altri thread dell'interfaccia utente può anche derivare direttamente da `CWinThread`.  
  
 Gli oggetti della classe `CWinThread` generalmente disponibili per la durata del thread. Se si vuole modificare questo comportamento, impostare [m_bAutoDelete](#m_bautodelete) su FALSE.  
  
 Il `CWinThread` classe è necessaria rendere il codice e MFC completamente thread-safe. I dati locali del thread usati dal framework per gestire le informazioni specifiche di un thread gestiti da `CWinThread` oggetti. A causa di questa dipendenza `CWinThread` per gestire i dati locali del thread, qualsiasi thread che utilizza MFC deve essere creata da MFC. Ad esempio, un thread creato tramite la funzione di runtime [beginthread, beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) non è possibile usare qualsiasi API di MFC.  
  
 Per creare un thread, chiamare [AfxBeginThread](application-information-and-management.md#afxbeginthread). Esistono due forme, a seconda che si voglia un thread di lavoro o dell'interfaccia utente. Se si desidera che un thread dell'interfaccia utente, passare a `AfxBeginThread` un puntatore al `CRuntimeClass` del `CWinThread`-classe derivata. Se si desidera creare un thread di lavoro, passare a `AfxBeginThread` un puntatore a funzione di controllo e il parametro alla funzione di controllo. Per i thread di lavoro che thread dell'interfaccia utente, è possibile specificare i parametri facoltativi che modificano la priorità, la dimensione dello stack, flag di creazione e gli attributi di sicurezza. `AfxBeginThread` Restituisce un puntatore al nuovo `CWinThread` oggetto.  
  
 Invece di chiamare `AfxBeginThread`, è possibile costruire una `CWinThread`-derivato l'oggetto e quindi chiamare `CreateThread`. Questo metodo in due fasi costruzione è utile se si desidera riutilizzare il `CWinThread` oggetto tra creazione successiva e le interruzioni di esecuzioni di un thread.  
  
 Per ulteriori informazioni sul `CWinThread`, vedere gli articoli [Multithreading con C++ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md), [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md), [Multithreading: creazione ruolo di lavoro Thread](../../parallel/multithreading-creating-worker-threads.md), e [Multithreading: come usare le classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CWinThread`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="createthread"></a>  CWinThread:: CreateThread  
 Crea un thread da eseguire nello spazio degli indirizzi del processo chiamante.  
  
```  
BOOL CreateThread(
    DWORD dwCreateFlags = 0,  
    UINT nStackSize = 0,  
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *dwCreateFlags*  
 Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori:  
  
- CREATE_SUSPENDED avviare il thread con un conteggio di sospensione di uno. Usare CREATE_SUSPENDED se si desidera inizializzare i dati dei membri di `CWinThread` dell'oggetto, ad esempio [m_bAutoDelete](#m_bautodelete) o i membri della classe derivata, prima che il thread inizi l'esecuzione. Una volta completata l'inizializzazione, utilizzare il [CWinThread:: ResumeThread](#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguita fino `CWinThread::ResumeThread` viene chiamato.  
  
- **0** avviare il thread immediatamente dopo la creazione.  
  
 *nStackSize*  
 Specifica la dimensione in byte dello stack per il nuovo thread. Se **0**, la dimensione dello stack per impostazione predefinita le stesse dimensioni del thread principale del processo.  
  
 *lpSecurityAttrs*  
 Punta a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica gli attributi di sicurezza per il thread.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il thread viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Usare `AfxBeginThread` per creare un oggetto thread ed eseguirlo in un unico passaggio. Usare `CreateThread` se si desidera riutilizzare l'oggetto thread tra creazione successiva e la chiusura di esecuzioni di un thread.  
  
##  <a name="cwinthread"></a>  CWinThread::CWinThread  
 Costruisce un oggetto `CWinThread`.  
  
```  
CWinThread();
```  
  
### <a name="remarks"></a>Note  
 Per avviare l'esecuzione del thread, chiamare il [CreateThread](#createthread) funzione membro. Si creerà in genere i thread chiamando [AfxBeginThread](application-information-and-management.md#afxbeginthread), che verrà chiamato il costruttore e `CreateThread`.  
  
##  <a name="exitinstance"></a>  CWinThread::ExitInstance  
 Chiamato dal framework all'interno di un raramente sottoposti a override [eseguiti](#run) funzione di membro per uscire dall'istanza corrente del thread, o se una chiamata a [InitInstance](#initinstance) ha esito negativo.  
  
```  
virtual int ExitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice di uscita del thread. 0 non indica errori e i valori maggiori di 0 indicano un errore. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).  
  
### <a name="remarks"></a>Note  
 Non chiamare questa funzione membro da qualsiasi posizione ma entro la `Run` funzione membro. Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
 L'implementazione predefinita di questa funzione Elimina il `CWinThread` dell'oggetto se [m_bAutoDelete](#m_bautodelete) è TRUE. Eseguire l'override di questa funzione se si vuole eseguire la pulitura aggiuntiva quando termina il thread. L'implementazione di `ExitInstance` deve chiamare la versione della classe di base dopo l'esecuzione di codice.  
  
##  <a name="getmainwnd"></a>  CWinThread::GetMainWnd  
 Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare direttamente riferimento al `m_pMainWnd` membro dell'oggetto applicazione.  
  
```  
virtual CWnd* GetMainWnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce un puntatore a uno dei due tipi di windows. Se il thread è parte di un server OLE e dispone di un oggetto con stato attivo sul posto all'interno di un contenitore active, questa funzione restituisce il [CWinApp::m_pActiveWnd](../../mfc/reference/cwinapp-class.md#m_pactivewnd) membro dati del `CWinThread` oggetto.  
  
 Se è presente alcun oggetto con stato attivo sul posto all'interno di un contenitore o l'applicazione non è un server OLE, questa funzione restituisce il [m_pMainWnd](#m_pmainwnd) membro dei dati dell'oggetto thread.  
  
### <a name="remarks"></a>Note  
 Per i thread dell'interfaccia utente, ciò equivale a fare riferimento direttamente al `m_pActiveWnd` membro dell'oggetto applicazione.  
  
 Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al membro `m_pMainWnd` dell'oggetto applicazione.  
  
 Eseguire l'override di questa funzione per modificare il comportamento predefinito.  
  
##  <a name="getthreadpriority"></a>  CWinThread::GetThreadPriority  
 Ottiene il livello di priorità di thread corrente di questo thread.  
  
```  
int GetThreadPriority();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il livello di priorità thread corrente entro la relativa classe di priorità. Il valore restituito sarà uno dei seguenti, elencate dalla priorità più alta alla più bassa:  
  
- THREAD_PRIORITY_TIME_CRITICAL  
  
- THREAD_PRIORITY_HIGHEST  
  
- THREAD_PRIORITY_ABOVE_NORMAL  
  
- THREAD_PRIORITY_NORMAL  
  
- THREAD_PRIORITY_BELOW_NORMAL  
  
- THREAD_PRIORITY_LOWEST  
  
- THREAD_PRIORITY_IDLE  
  
 Per altre informazioni su queste priorità, vedere [SetThreadPriority](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel SDK di Windows.  
  
##  <a name="initinstance"></a>  CWinThread::InitInstance  
 `InitInstance` deve essere sottoposto a override per inizializzare ogni nuova istanza di un thread dell'interfaccia utente.  
  
```  
virtual BOOL InitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In genere, si esegue l'override `InitInstance` per eseguire attività che devono essere completate quando un thread viene inizialmente creato.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente. Eseguire l'inizializzazione di thread di lavoro nella funzione di controllo passata a [AfxBeginThread](application-information-and-management.md#afxbeginthread).  
  
##  <a name="isidlemessage"></a>  CWinThread::IsIdleMessage  
 Eseguire l'override di questa funzione per mantenere `OnIdle` venga chiamato dopo la generazione di messaggi specifici.  
  
```  
virtual BOOL IsIdleMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *pMsg*  
 Punti dal messaggio corrente da elaborare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `OnIdle` deve essere chiamato dopo l'elaborazione di messaggi; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non chiama `OnIdle` dopo i messaggi del mouse ridondanti e i messaggi generati da lampeggia accenti circonflessi.  
  
 Se un'applicazione ha creato un timer breve, `OnIdle` verrà chiamato frequentemente, causando problemi di prestazioni. Per migliorare le prestazioni di questo tipo di un'applicazione, eseguire l'override `IsIdleMessage` dell'applicazione `CWinApp`-classe di controllare i messaggi WM_TIMER come indicato di seguito derivata:  
  
 [!code-cpp[NVC_MFCDocView#189](../../mfc/codesnippet/cpp/cwinthread-class_1.cpp)]  
  
 La gestione di WM_TIMER in questo modo migliorerà le prestazioni delle applicazioni che usano i timer breve.  
  
##  <a name="m_bautodelete"></a>  CWinThread::m_bAutoDelete  
 Specifica se l'oggetto `CWinThread` deve essere eliminato automaticamente alla chiusura del thread.  
  
```  
BOOL m_bAutoDelete;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_bAutoDelete` membro dati è una variabile pubblica di tipo BOOL.  
  
 Il valore `m_bAutoDelete` non influisce su come l'handle dei thread sottostanti viene chiuso. L'handle dei thread viene sempre chiuso quando l'oggetto `CWinThread` viene eliminato.  
  
##  <a name="m_hthread"></a>  CWinThread::m_hThread  
 Handle per il thread associato a questo `CWinThread`.  
  
```  
HANDLE m_hThread;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_hThread` membro dati è una variabile pubblica di tipo di HANDLE. È valido solo se sottostante thread attualmente presente.  
  
##  <a name="m_nthreadid"></a>  CWinThread::m_nThreadID  
 ID del thread associato a questo `CWinThread`.  
  
```  
DWORD m_nThreadID;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_nThreadID` membro dati è una variabile pubblica di tipo DWORD. È valido solo se sottostante thread attualmente presente.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [AfxGetThread](application-information-and-management.md#afxgetthread).  
  
##  <a name="m_pactivewnd"></a>  CWinThread::m_pActiveWnd  
 Usare questo membro dei dati per archiviare un puntatore all'oggetto finestra attiva del thread.  
  
```  
CWnd* m_pActiveWnd;  
```  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class viene terminato il thread automaticamente quando la finestra a cui fa riferimento `m_pActiveWnd` viene chiuso. Se il thread è il thread principale di un'applicazione, anche l'applicazione verrà terminata. Se questo membro dati è NULL, la finestra attiva per l'applicazione `CWinApp` oggetto verrà ereditato. `m_pActiveWnd` è una variabile pubblica di tipo `CWnd*`.  
  
 In genere, si imposta questa variabile membro quando esegue l'override `InitInstance`. In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.  
  
##  <a name="m_pmainwnd"></a>  CWinThread::m_pMainWnd  
 Usare questo membro dei dati per archiviare un puntatore all'oggetto della finestra principale del thread.  
  
```  
CWnd* m_pMainWnd;  
```  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class viene terminato il thread automaticamente quando la finestra a cui fa riferimento `m_pMainWnd` viene chiuso. Se il thread è il thread principale di un'applicazione, anche l'applicazione verrà terminata. Se questo membro dati è NULL, la finestra principale dell'applicazione `CWinApp` oggetto verrà utilizzato per determinare quando termina il thread. `m_pMainWnd` è una variabile pubblica di tipo `CWnd*`.  
  
 In genere, si imposta questa variabile membro quando esegue l'override `InitInstance`. In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.  
  
##  <a name="onidle"></a>  CWinThread::OnIdle  
 Eseguire l'override di questa funzione membro per eseguire l'elaborazione di tempo di inattività.  
  
```  
virtual BOOL OnIdle(LONG lCount);
```  
  
### <a name="parameters"></a>Parametri  
 *lCount*  
 Un contatore incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi del thread è vuota. Questo conteggio viene reimpostato su 0 ogni volta che un nuovo messaggio viene elaborato. È possibile usare la *lCount* parametro per determinare il relativo periodo di tempo il thread è rimasto inattivo senza elaborare un messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per la ricezione di più elaborazione tempo di inattività; 0 se è necessario non è più tempo di elaborazione inattive.  
  
### <a name="remarks"></a>Note  
 `OnIdle` viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi del thread è vuota. Usare l'override per chiamare le attività del gestore di inattività di uno sfondo personalizzato.  
  
 `OnIdle` Restituisce 0 per indicare che non è necessario alcun tempo di elaborazione di inattività aggiuntivi. Il *lCount* parametro viene incrementato ogni volta `OnIdle` viene chiamato quando la coda di messaggi è vuota e viene reimpostata su 0 ogni volta che un nuovo messaggio viene elaborato. È possibile chiamare le diverse routine di inattività basate su questo conteggio.  
  
 L'implementazione predefinita di questa funzione membro libera oggetti temporanei e librerie a collegamento dinamico inutilizzate dalla memoria.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
 Poiché l'applicazione non è in grado di elaborare i messaggi finché `OnIdle` restituisce un valore, non eseguire attività di lunga durata in questa funzione.  
  
##  <a name="operator_handle"></a>  CWinThread::operator HANDLE  
 Recupera l'handle del `CWinThread` oggetto.  
  
```  
operator HANDLE() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se l'operazione riesce, l'handle dell'oggetto thread. in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Usare l'handle per chiamare direttamente le API Windows.  
  
##  <a name="postthreadmessage"></a>  CWinThread::PostThreadMessage  
 Chiamato per inviare un messaggio definito dall'utente a un altro `CWinThread` oggetto.  
  
```  
BOOL PostThreadMessage(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 *message*  
 ID del messaggio definito dall'utente.  
  
 *wParam*  
 Primo parametro del messaggio.  
  
 *lParam*  
 Secondo parametro del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Messaggio pubblicato viene eseguito il mapping al gestore messaggi appropriata dalla macro della mappa messaggi ON_THREAD_MESSAGE.  
  
> [!NOTE]
>  Quando si chiama il Windows [PostThreadMessage](https://msdn.microsoft.com/library/windows/desktop/ms644946) funzione all'interno di un'applicazione MFC, il messaggio MFC non vengono chiamati i gestori. Per altre informazioni, vedere l'articolo della Knowledge Base, "PRB: MFC messaggio gestore non chiamato con PostThreadMessage()" (Q142415).  
  
##  <a name="pretranslatemessage"></a>  CWinThread::PreTranslateMessage  
 Eseguire l'override di questa funzione per filtrare i messaggi di finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage).  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *pMsg*  
 Punta a un [struttura MSG](../../mfc/reference/msg-structure1.md) contenente il messaggio da elaborare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato completamente elaborato `PreTranslateMessage` e non devono essere elaborati ulteriormente. Zero se il messaggio deve essere elaborato in modo normale.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
##  <a name="processmessagefilter"></a>  CWinThread::ProcessMessageFilter  
 Funzione di hook del framework chiama questa funzione membro per filtrare e rispondere a determinati messaggi di Windows.  
  
```  
virtual BOOL ProcessMessageFilter(
    int code,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *Codice*  
 Specifica un codice di hook. Questa funzione membro utilizza il codice per determinare la modalità di elaborazione *lpMsg.*  
  
 *lpMsg*  
 Un puntatore a un Windows [struttura MSG](../../mfc/reference/msg-structure1.md).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio viene elaborato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una funzione hook elabora gli eventi prima che vengano inviati al messaggio normale dell'applicazione di elaborazione.  
  
 Se si esegue l'override di questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per mantenere il framework di hook di elaborazione.  
  
##  <a name="processwndprocexception"></a>  CWinThread::ProcessWndProcException  
 Il framework chiama questa funzione membro ogni volta che il gestore non intercettare un'eccezione generata in uno dei messaggi del thread o gestori di comandi.  
  
```  
virtual LRESULT ProcessWndProcException(
    CException* e,  
    const MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *e*  
 Punta a un'eccezione non gestita.  
  
 *pMsg*  
 Punta a un [struttura MSG](../../mfc/reference/msg-structure1.md) contenente informazioni sul messaggio di windows che ha causato il framework generare un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 -1 se viene generata un'eccezione WM_CREATE; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Non chiamare direttamente questa funzione membro.  
  
 L'implementazione predefinita di questa funzione membro gestisce solo le eccezioni generate dai messaggi seguenti:  
  
|Comando|Operazione|  
|-------------|------------|  
|WM_CREATE|Esito negativo.|  
|WM_PAINT|Convalidare la finestra interessata, evitando così che un altro messaggio WM_PAINT vengono generati.|  
  
 Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si vuole visualizzare il comportamento predefinito.  
  
 Questa funzione membro viene utilizzata solo nel thread che hanno un message pump.  
  
##  <a name="pumpmessage"></a>  CWinThread::PumpMessage  
 contiene il ciclo di messaggi del thread.  
  
```  
virtual BOOL PumpMessage();
```  
  
### <a name="remarks"></a>Note  
 `PumpMessage` contiene il ciclo di messaggi del thread. `PumpMessage` viene chiamato da `CWinThread` per elaborare i messaggi del thread. È possibile chiamare `PumpMessage` direttamente per imporre i messaggi da elaborare, oppure è possibile eseguire l'override `PumpMessage` per modificare il comportamento predefinito.  
  
 La chiamata `PumpMessage` direttamente e si esegue l'override del comportamento predefinito è consigliato solo per utenti esperti.  
  
##  <a name="resumethread"></a>  CWinThread:: ResumeThread  
 Chiamato per riprendere l'esecuzione di un thread che è stato sospeso per il [SuspendThread](#suspendthread) funzione membro o un thread creato con il flag CREATE_SUSPENDED.  
  
```  
DWORD ResumeThread();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il thread del precedente sospendere conteggio se ha esito positivo. `0xFFFFFFFF` in caso contrario. Se il valore restituito è zero, il thread corrente non è stata sospesa. Se il valore restituito è uno, il thread è stata sospesa, ma ora viene riavviato. Qualsiasi valore restituito maggiore di uno significa che il thread rimane sospesa.  
  
### <a name="remarks"></a>Note  
 Il conteggio di sospensione del thread corrente viene ridotto di uno. Se il conteggio di sospensione viene ridotto a zero, il thread riprende l'esecuzione; in caso contrario, il thread rimane sospeso.  
  
##  <a name="run"></a>  CWinThread:: Run  
 Fornisce un ciclo di messaggi predefinito per i thread dell'interfaccia utente.  
  
```  
virtual int Run();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un' **int** valore restituito dal thread. Questo valore può essere recuperato chiamando [GetExitCodeThread](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-getexitcodethread).  
  
### <a name="remarks"></a>Note  
 `Run` acquisisce e invia i messaggi di Windows fino a quando l'applicazione riceve un [WM_QUIT](/windows/desktop/winmsg/wm-quit) messaggio. Se la coda di messaggi del thread non contiene attualmente alcun messaggio `Run` chiamate `OnIdle` per eseguire l'elaborazione di tempo di inattività. Passano i messaggi in ingresso per il [PreTranslateMessage](#pretranslatemessage) funzione di membro per un'elaborazione speciale e quindi per la funzione di Windows [TranslateMessage](/windows/desktop/api/winuser/nf-winuser-translatemessage) per la traduzione della tastiera standard. Infine, il [DispatchMessage](/windows/desktop/api/winuser/nf-winuser-dispatchmessage) viene chiamata la funzione di Windows.  
  
 `Run` è raramente sottoposto a override, ma è possibile eseguirne l'override per implementare un comportamento speciale.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
##  <a name="setthreadpriority"></a>  CWinThread::SetThreadPriority  
 La funzione imposta il livello di priorità del thread corrente entro la relativa classe di priorità.  
  
```  
BOOL SetThreadPriority(int nPriority);
```  
  
### <a name="parameters"></a>Parametri  
 *nPriority*  
 Specifica il nuovo livello di priorità di thread all'interno di relativa classe di priorità. Questo parametro deve essere uno dei valori seguenti, elencati dalla priorità più alta alla più bassa:  
  
- THREAD_PRIORITY_TIME_CRITICAL  
  
- THREAD_PRIORITY_HIGHEST  
  
- THREAD_PRIORITY_ABOVE_NORMAL  
  
- THREAD_PRIORITY_NORMAL  
  
- THREAD_PRIORITY_BELOW_NORMAL  
  
- THREAD_PRIORITY_LOWEST  
  
- THREAD_PRIORITY_IDLE  
  
 Per altre informazioni su queste priorità, vedere [SetThreadPriority](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stata completata; (funzione) in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Può essere chiamato solo dopo aver [CreateThread](#createthread) riesce viene restituito.  
  
##  <a name="suspendthread"></a>  CWinThread:: SuspendThread  
 Incrementa l'oggetto corrente thread sospendere conteggio.  
  
```  
DWORD SuspendThread();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il thread del precedente sospendere conteggio se ha esito positivo. `0xFFFFFFFF` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se uno o più thread dispone di un conteggio di suspend superiore a zero, il thread non viene eseguito. Il thread può essere ripresa chiamando il [ResumeThread](#resumethread) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
