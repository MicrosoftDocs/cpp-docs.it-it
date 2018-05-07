---
title: CWinThread (classe) | Documenti Microsoft
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
ms.openlocfilehash: b7cbdcc1c5534d8dd9ba5d4f895af70a8ec16ac5
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[CWinThread::OnIdle](#onidle)|Eseguire l'override per l'elaborazione e tempo di inattività specifico del thread.|  
|[CWinThread::PostThreadMessage](#postthreadmessage)|Invia un messaggio a un altro `CWinThread` oggetto.|  
|[CWinThread::PreTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CWinThread::ProcessMessageFilter](#processmessagefilter)|Intercetta determinati messaggi prima che raggiungano l'applicazione.|  
|[CWinThread::ProcessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate da gestori di comandi e di messaggio del thread.|  
|[CWinThread::PumpMessage](#pumpmessage)|Contiene il ciclo di messaggi del thread.|  
|[CWinThread:: ResumeThread](#resumethread)|Decrementa un del thread conteggio di sospensione.|  
|[CWinThread:: Run](#run)|Funzione di controllo per i thread con una message pump. Eseguire l'override per personalizzare il ciclo di messaggi predefinito.|  
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
|[CWinThread::m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|  
|[CWinThread::m_pMainWnd](#m_pmainwnd)|Contiene un puntatore alla finestra principale dell'applicazione.|  
  
## <a name="remarks"></a>Note  
 Il thread principale di esecuzione viene in genere fornito da un oggetto derivato da `CWinApp`; `CWinApp` è derivato da `CWinThread`. Ulteriori `CWinThread` oggetti consentono più thread all'interno di una determinata applicazione.  
  
 Esistono due tipi generali di thread che `CWinThread` supporta: thread di lavoro e i thread dell'interfaccia utente. Thread di lavoro non dispone di alcun message pump: ad esempio, un thread che esegue i calcoli in background in un foglio di calcolo. Thread dell'interfaccia utente dispone di un message pump ed elaborare i messaggi ricevuti dal sistema. [CWinApp](../../mfc/reference/cwinapp-class.md) e le classi derivate da quest'ultimo sono esempi di thread dell'interfaccia utente. Altri thread dell'interfaccia utente è anche possibile derivare direttamente da `CWinThread`.  
  
 Gli oggetti della classe `CWinThread` in genere esiste per la durata del thread. Se si desidera modificare questo comportamento, impostare [m_bAutoDelete](#m_bautodelete) a **FALSE**.  
  
 La `CWinThread` classe è necessaria eseguire il codice e MFC completamente thread-safe. Dati locali del thread usati dal framework per gestire le informazioni specifiche di un thread gestiti da `CWinThread` oggetti. A causa di questa dipendenza `CWinThread` per gestire i dati locali del thread, è necessario creare un thread che utilizza MFC da MFC. Ad esempio, un thread creato tramite la funzione di runtime [beginthread, beginthreadex](../../c-runtime-library/reference/beginthread-beginthreadex.md) non è possibile utilizzare le API di MFC.  
  
 Per creare un thread, chiamare [AfxBeginThread](application-information-and-management.md#afxbeginthread). Esistono due modi, a seconda se si desidera che un thread di lavoro o dell'interfaccia utente. Se si desidera che un thread di interfaccia utente, passare a `AfxBeginThread` un puntatore al `CRuntimeClass` del `CWinThread`-classe derivata. Se si desidera creare un thread di lavoro, passare a `AfxBeginThread` un puntatore a funzione di controllo e il parametro alla funzione di controllo. Per i thread di lavoro e il thread dell'interfaccia utente, è possibile specificare i parametri facoltativi che modificano la priorità, dimensione dello stack, flag di creazione e gli attributi di sicurezza. `AfxBeginThread` Restituisce un puntatore al nuovo `CWinThread` oggetto.  
  
 Anziché chiamare `AfxBeginThread`, è possibile costruire un `CWinThread`-oggetto e quindi chiamare derivati `CreateThread`. Questo metodo due fasi è utile se si desidera riutilizzare il `CWinThread` oggetto tra creazione successiva e interruzioni di esecuzioni di thread.  
  
 Per ulteriori informazioni su `CWinThread`, vedere gli articoli [Multithreading con C++ e MFC](../../parallel/multithreading-with-cpp-and-mfc.md), [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md), [Multithreading: creazione di lavoro Thread](../../parallel/multithreading-creating-worker-threads.md), e [Multithreading: utilizzo delle classi di sincronizzazione](../../parallel/multithreading-how-to-use-the-synchronization-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 `CWinThread`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="createthread"></a>  CWinThread:: CreateThread  
 Crea un thread da eseguire all'interno di spazio degli indirizzi del processo chiamante.  
  
```  
BOOL CreateThread(
    DWORD dwCreateFlags = 0,  
    UINT nStackSize = 0,  
    LPSECURITY_ATTRIBUTES lpSecurityAttrs = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `dwCreateFlags`  
 Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori:  
  
- **CREATE_SUSPENDED** avviare il thread con un conteggio di sospensione di uno. Utilizzare **CREATE_SUSPENDED** se si desidera inizializzare tutti i dati del membro di `CWinThread` dell'oggetto, ad esempio [m_bAutoDelete](#m_bautodelete) o i membri della classe derivata, prima che il thread inizia l'esecuzione. Una volta completata l'inizializzazione, utilizzare il [CWinThread:: ResumeThread](#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguite fino al `CWinThread::ResumeThread` viene chiamato.  
  
- **0** avviare il thread subito dopo la creazione.  
  
 `nStackSize`  
 Specifica le dimensioni in byte dello stack per il nuovo thread. Se **0**, la dimensione dello stack per impostazione predefinita la stessa dimensione del thread principale del processo.  
  
 `lpSecurityAttrs`  
 Punta a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica gli attributi di sicurezza per il thread.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il thread viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Utilizzare `AfxBeginThread` per creare un oggetto thread ed eseguirlo in un unico passaggio. Utilizzare `CreateThread` se si desidera riutilizzare l'oggetto thread tra successiva creazione e la chiusura di esecuzioni di thread.  
  
##  <a name="cwinthread"></a>  CWinThread::CWinThread  
 Costruisce un oggetto `CWinThread`.  
  
```  
CWinThread();
```  
  
### <a name="remarks"></a>Note  
 Per avviare l'esecuzione del thread, chiamare il [CreateThread](#createthread) funzione membro. In genere si creerà thread chiamando [AfxBeginThread](application-information-and-management.md#afxbeginthread), verrà chiamato il costruttore e `CreateThread`.  
  
##  <a name="exitinstance"></a>  CWinThread::ExitInstance  
 Chiamato dal framework all'interno di un override raramente [eseguire](#run) funzione membro per uscire dall'istanza corrente del thread o se una chiamata a [InitInstance](#initinstance) ha esito negativo.  
  
```  
virtual int ExitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice di uscita del thread. 0 non indica errori, e i valori maggiori di 0 indicano un errore. Questo valore può essere recuperato chiamando [GetExitCodeThread](http://msdn.microsoft.com/library/windows/desktop/ms683190).  
  
### <a name="remarks"></a>Note  
 Non chiamare questa funzione membro ovunque ma entro il **eseguire** funzione membro. Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
 L'implementazione predefinita di questa funzione Elimina il `CWinThread` oggetto se [m_bAutoDelete](#m_bautodelete) è **TRUE**. Eseguire l'override di questa funzione se si desidera eseguire la pulitura aggiuntiva quando termina il thread. L'implementazione di `ExitInstance` deve chiamare la versione della classe di base dopo l'esecuzione di codice.  
  
##  <a name="getmainwnd"></a>  CWinThread::GetMainWnd  
 Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare riferimento direttamente al `m_pMainWnd` membro dell'oggetto applicazione.  
  
```  
virtual CWnd* GetMainWnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Questa funzione restituisce un puntatore a uno dei due tipi di windows. Se il thread fa parte di un server OLE e dispone di un oggetto che è attivo sul posto all'interno di un contenitore active, questa funzione restituisce il [CWinApp::m_pActiveWnd](../../mfc/reference/cwinapp-class.md#m_pactivewnd) membro dati di `CWinThread` oggetto.  
  
 Se è presente alcun oggetto con stato attivo sul posto all'interno di un contenitore o l'applicazione non è un server OLE, questa funzione restituisce il [m_pMainWnd](#m_pmainwnd) membro dati dell'oggetto thread.  
  
### <a name="remarks"></a>Note  
 Per i thread dell'interfaccia utente, equivale a fare riferimento direttamente al `m_pActiveWnd` membro dell'oggetto applicazione.  
  
 Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al membro `m_pMainWnd` dell'oggetto applicazione.  
  
 Eseguire l'override di questa funzione per modificare il comportamento predefinito.  
  
##  <a name="getthreadpriority"></a>  CWinThread::GetThreadPriority  
 Ottiene il livello di priorità di thread corrente di questo thread.  
  
```  
int GetThreadPriority();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il livello di priorità thread corrente entro la relativa classe di priorità. Il valore restituito sarà uno dei seguenti, elencati dalla priorità più alta alla più bassa:  
  
- **THREAD_PRIORITY_TIME_CRITICAL**  
  
- **THREAD_PRIORITY_HIGHEST**  
  
- **THREAD_PRIORITY_ABOVE_NORMAL**  
  
- **THREAD_PRIORITY_NORMAL**  
  
- **THREAD_PRIORITY_BELOW_NORMAL**  
  
- **THREAD_PRIORITY_LOWEST**  
  
- **THREAD_PRIORITY_IDLE**  
  
 Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in Windows SDK.  
  
##  <a name="initinstance"></a>  CWinThread::InitInstance  
 `InitInstance` deve essere sottoposto a override per inizializzare ogni nuova istanza di un thread dell'interfaccia utente.  
  
```  
virtual BOOL InitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In genere, si esegue l'override `InitInstance` per eseguire attività che deve essere completata quando viene creato un thread.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente. Eseguire l'inizializzazione di thread di lavoro nella funzione di controllo passata a [AfxBeginThread](application-information-and-management.md#afxbeginthread).  
  
##  <a name="isidlemessage"></a>  CWinThread::IsIdleMessage  
 Eseguire l'override di questa funzione per mantenere **OnIdle** venga chiamato dopo che vengono generati messaggi specifici.  
  
```  
virtual BOOL IsIdleMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Punta al messaggio corrente in fase di elaborazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se `OnIdle` deve essere chiamato dopo l'elaborazione messaggio; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita non chiama **OnIdle** dopo i messaggi del mouse ridondanti e messaggi generati da lampeggiante accenti circonflessi.  
  
 Se un'applicazione ha creato un timer breve, **OnIdle** verrà chiamato spesso problemi di prestazioni. Per migliorare le prestazioni di questo tipo di un'applicazione, eseguire l'override `IsIdleMessage` dell'applicazione `CWinApp`-derivata per cercare `WM_TIMER` messaggi come indicato di seguito:  
  
 [!code-cpp[NVC_MFCDocView#189](../../mfc/codesnippet/cpp/cwinthread-class_1.cpp)]  
  
 Gestione `WM_TIMER` in questo modo migliorerà le prestazioni delle applicazioni che utilizzano i timer breve.  
  
##  <a name="m_bautodelete"></a>  CWinThread::m_bAutoDelete  
 Specifica se l'oggetto `CWinThread` deve essere eliminato automaticamente alla chiusura del thread.  
  
```  
BOOL m_bAutoDelete;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_bAutoDelete` (membro dati) è una variabile pubblica di tipo **BOOL**.  
  
 Il valore `m_bAutoDelete` non influisce su come l'handle dei thread sottostanti viene chiuso. L'handle dei thread viene sempre chiuso quando l'oggetto `CWinThread` viene eliminato.  
  
##  <a name="m_hthread"></a>  CWinThread::m_hThread  
 Handle per il thread associato a questo `CWinThread`.  
  
```  
HANDLE m_hThread;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_hThread` (membro dati) è una variabile pubblica di tipo `HANDLE`. È valido solo se sottostante thread attualmente esiste.  
  
##  <a name="m_nthreadid"></a>  CWinThread::m_nThreadID  
 ID del thread associato a questo `CWinThread`.  
  
```  
DWORD m_nThreadID;  
```  
  
### <a name="remarks"></a>Note  
 Il **m_nThreadID** (membro dati) è una variabile pubblica di tipo `DWORD`. È valido solo se sottostante thread attualmente esiste.  
  
### <a name="example"></a>Esempio  
  Per vedere l'esempio [AfxGetThread](application-information-and-management.md#afxgetthread).  
  
##  <a name="m_pactivewnd"></a>  CWinThread::m_pActiveWnd  
 Utilizzare questo membro dati per archiviare un puntatore a oggetto finestra attiva del thread.  
  
```  
CWnd* m_pActiveWnd;  
```  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class termina automaticamente i thread quando la finestra a cui fa riferimento a `m_pActiveWnd` viene chiuso. Se il thread è il thread principale di un'applicazione, l'applicazione verrà terminata. Se il membro dati è **NULL**, la finestra attiva per l'applicazione `CWinApp` oggetto verrà ereditato. `m_pActiveWnd` è una variabile pubblica di tipo **CWnd\***.  
  
 In genere, si imposta questa variabile membro quando esegue l'override `InitInstance`. In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.  
  
##  <a name="m_pmainwnd"></a>  CWinThread::m_pMainWnd  
 Utilizzare questo membro dati per archiviare un puntatore a oggetto finestra principale del thread.  
  
```  
CWnd* m_pMainWnd;  
```  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class termina automaticamente i thread quando la finestra a cui fa riferimento a `m_pMainWnd` viene chiuso. Se il thread è il thread principale di un'applicazione, l'applicazione verrà terminata. Se il membro dati è **NULL**, la finestra principale per l'applicazione `CWinApp` verrà utilizzato l'oggetto per determinare quando il thread di interruzione. `m_pMainWnd` è una variabile pubblica di tipo **CWnd\***.  
  
 In genere, si imposta questa variabile membro quando esegue l'override `InitInstance`. In un thread di lavoro, il valore di questo membro dati viene ereditato dal relativo thread padre.  
  
##  <a name="onidle"></a>  CWinThread::OnIdle  
 Eseguire l'override di questa funzione membro per l'elaborazione e tempo di inattività.  
  
```  
virtual BOOL OnIdle(LONG lCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lCount`  
 Un contatore incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi del thread è vuota. Ogni volta che viene elaborato un nuovo messaggio, questo conteggio viene reimpostato su 0. È possibile utilizzare il `lCount` parametro per determinare il relativo periodo di tempo il thread è rimasto inattivo senza elaborazione di un messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per la ricezione di più elaborazione tempo di inattività; 0 se è necessario tempo di elaborazione non è più inattivo.  
  
### <a name="remarks"></a>Note  
 `OnIdle` viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi del thread è vuota. Utilizzare la sostituzione per chiamare uno sfondo personalizzato attività del gestore di inattività.  
  
 `OnIdle` Restituisce 0 per indicare che non è necessario alcun tempo di elaborazione aggiuntive inattivo. Il `lCount` parametro viene incrementato ogni volta `OnIdle` viene chiamato quando la coda di messaggi è vuota e viene reimpostata su 0, ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le routine di inattività diversi in base a questo conteggio.  
  
 L'implementazione predefinita di questa funzione membro libera oggetti temporanei e librerie a collegamento dinamico non utilizzati dalla memoria.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
 Poiché l'applicazione non è in grado di elaborare i messaggi finché `OnIdle` restituisce un valore, non eseguire attività di lunga durata in questa funzione.  
  
##  <a name="operator_handle"></a>  CWinThread::operator HANDLE  
 Recupera l'handle del `CWinThread` oggetto.  
  
```  
operator HANDLE() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, l'handle dell'oggetto thread. in caso contrario, **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare l'handle per chiamare direttamente le API di Windows.  
  
##  <a name="postthreadmessage"></a>  CWinThread::PostThreadMessage  
 Chiamato per inviare un messaggio definito dall'utente a un altro `CWinThread` oggetto.  
  
```  
BOOL PostThreadMessage(
    UINT message,  
    WPARAM wParam,  
    LPARAM lParam);
```  
  
### <a name="parameters"></a>Parametri  
 `message`  
 ID del messaggio definito dall'utente.  
  
 `wParam`  
 Primo parametro del messaggio.  
  
 `lParam`  
 Secondo parametro del messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Il messaggio inviato viene eseguito il mapping al gestore messaggi appropriato per la macro della mappa messaggi `ON_THREAD_MESSAGE`.  
  
> [!NOTE]
>  Quando si chiama Windows [PostThreadMessage](http://msdn.microsoft.com/library/windows/desktop/ms644946) funzione all'interno di un'applicazione MFC, il messaggio MFC non vengono chiamati i gestori. Per ulteriori informazioni, vedere l'articolo della Knowledge Base, "PRB: MFC messaggio gestore non chiamato con PostThreadMessage()" (Q142415).  
  
##  <a name="pretranslatemessage"></a>  CWinThread::PreTranslateMessage  
 Eseguire l'override di questa funzione per filtrare i messaggi di finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Punta a un [struttura MSG](../../mfc/reference/msg-structure1.md) contenente il messaggio da elaborare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stato completamente elaborato in `PreTranslateMessage` e non devono essere elaborati ulteriormente. Zero se il messaggio deve essere elaborato in modo normale.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
##  <a name="processmessagefilter"></a>  CWinThread::ProcessMessageFilter  
 Funzione hook del framework chiama questa funzione membro per filtrare e rispondere a determinati messaggi di Windows.  
  
```  
virtual BOOL ProcessMessageFilter(
    int code,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `code`  
 Specifica un codice di hook. Questa funzione membro utilizza il codice per determinare la modalità di elaborazione `lpMsg.`  
  
 `lpMsg`  
 Un puntatore a un Windows [struttura MSG](../../mfc/reference/msg-structure1.md).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elaborazione del messaggio; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una funzione hook elabora gli eventi prima che vengano inviati al messaggio normale dell'applicazione di elaborazione.  
  
 Se si esegue l'override di questa funzionalità avanzata, assicurarsi di chiamare la versione della classe di base per mantenere il framework hook di elaborazione.  
  
##  <a name="processwndprocexception"></a>  CWinThread::ProcessWndProcException  
 Il framework chiama questa funzione membro ogni volta che viene intercettata un'eccezione generata in uno dei messaggi del thread o gestori di comandi dal gestore.  
  
```  
virtual LRESULT ProcessWndProcException(
    CException* e,  
    const MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *e*  
 Punta a un'eccezione non gestita.  
  
 `pMsg`  
 Punta a un [struttura MSG](../../mfc/reference/msg-structure1.md) contenente informazioni sul messaggio di windows che ha causato il framework generare un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 -1 se un `WM_CREATE` viene generata l'eccezione; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Non chiamare direttamente questa funzione membro.  
  
 L'implementazione predefinita di questa funzione membro gestisce solo le eccezioni generate dai messaggi seguenti:  
  
|Comando|Operazione|  
|-------------|------------|  
|`WM_CREATE`|Esito negativo.|  
|`WM_PAINT`|Convalidare la finestra interessata, evitando così che un altro `WM_PAINT` messaggio vengono generati.|  
  
 Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera visualizzare il comportamento predefinito.  
  
 Questa funzione membro viene utilizzata solo nel thread che dispone di un message pump.  
  
##  <a name="pumpmessage"></a>  CWinThread::PumpMessage  
 Contiene il ciclo di messaggi del thread.  
  
```  
virtual BOOL PumpMessage();
```  
  
### <a name="remarks"></a>Note  
 `PumpMessage` Contiene il ciclo di messaggi del thread. **PumpMessage non** viene chiamato da `CWinThread` per il pumping dei messaggi del thread. È possibile chiamare `PumpMessage` direttamente per imporre i messaggi da elaborare, o è possibile eseguire l'override `PumpMessage` per modificare il comportamento predefinito.  
  
 La chiamata `PumpMessage` direttamente e si esegue l'override del comportamento predefinito è consigliato per gli utenti avanzati.  
  
##  <a name="resumethread"></a>  CWinThread:: ResumeThread  
 Chiamata eseguita per riprendere l'esecuzione di un thread che è stato sospeso mediante il [SuspendThread](#suspendthread) funzione membro o un thread creato con il **CREATE_SUSPENDED** flag.  
  
```  
DWORD ResumeThread();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il thread del precedente sospendere conteggio se ha esito positivo. `0xFFFFFFFF` in caso contrario. Se il valore restituito è zero, il thread corrente non è stato sospeso. Se il valore restituito è uno, il thread è stata sospesa, ma verrà riavviato. Qualsiasi valore restituito maggiore di un mezzo il thread rimane sospesa.  
  
### <a name="remarks"></a>Note  
 Il conteggio di sospensione del thread corrente viene ridotto di uno. Se il conteggio di sospensione viene ridotto a zero, il thread riprende l'esecuzione; in caso contrario, il thread rimane sospeso.  
  
##  <a name="run"></a>  CWinThread:: Run  
 Fornisce un ciclo di messaggi predefinito per il thread dell'interfaccia utente.  
  
```  
virtual int Run();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `int` valore restituito dal thread. Questo valore può essere recuperato chiamando [GetExitCodeThread](http://msdn.microsoft.com/library/windows/desktop/ms683190).  
  
### <a name="remarks"></a>Note  
 **Eseguire** acquisisce e invia i messaggi di Windows, fino a quando l'applicazione riceve un [WM_QUIT](http://msdn.microsoft.com/library/windows/desktop/ms632641) messaggio. Se la coda di messaggi del thread contiene attualmente messaggi, **eseguire** chiamate `OnIdle` per eseguire l'elaborazione di tempo di inattività. Visualizzare i messaggi in arrivo di [PreTranslateMessage](#pretranslatemessage) funzione membro per un'elaborazione speciale e quindi per la funzione di Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) per la conversione di tastiera standard. Infine, il [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) viene chiamata la funzione di Windows.  
  
 **Eseguire** è raramente sottoposto a override, ma è possibile eseguirne l'override per implementare un comportamento speciale.  
  
 Questa funzione membro viene utilizzata solo nel thread dell'interfaccia utente.  
  
##  <a name="setthreadpriority"></a>  CWinThread::SetThreadPriority  
 La funzione imposta il livello di priorità del thread corrente entro la relativa classe di priorità.  
  
```  
BOOL SetThreadPriority(int nPriority);
```  
  
### <a name="parameters"></a>Parametri  
 `nPriority`  
 Specifica il nuovo livello di priorità di thread all'interno di relativa classe di priorità. Questo parametro deve essere uno dei valori seguenti, elencati dalla priorità più alta alla più bassa:  
  
- **THREAD_PRIORITY_TIME_CRITICAL**  
  
- **THREAD_PRIORITY_HIGHEST**  
  
- **THREAD_PRIORITY_ABOVE_NORMAL**  
  
- **THREAD_PRIORITY_NORMAL**  
  
- **THREAD_PRIORITY_BELOW_NORMAL**  
  
- **THREAD_PRIORITY_LOWEST**  
  
- **THREAD_PRIORITY_IDLE**  
  
 Per ulteriori informazioni su queste priorità, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stata completata; (funzione) in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Può essere chiamato solo dopo aver [CreateThread](#createthread) restituisce correttamente.  
  
##  <a name="suspendthread"></a>  CWinThread:: SuspendThread  
 Incrementa l'oggetto corrente thread. suspend conteggio.  
  
```  
DWORD SuspendThread();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il thread del precedente sospendere conteggio se ha esito positivo. `0xFFFFFFFF` in caso contrario.  
  
### <a name="remarks"></a>Note  
 Se uno o più thread dispone di un conteggio di sospensione superiore a zero, il thread non viene eseguito. Il thread può essere ripreso chiamando il [ResumeThread](#resumethread) funzione membro.  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdTarget (classe)](../../mfc/reference/ccmdtarget-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)   
 [Classe CCmdTarget](../../mfc/reference/ccmdtarget-class.md)
