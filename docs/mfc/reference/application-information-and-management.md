---
title: Informazioni sull&quot;applicazione e gestione | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC], managing
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
caps.latest.revision: 17
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
ms.sourcegitcommit: b943ef8dd652df061965fe81ecc9c08115636141
ms.openlocfilehash: 5d7b6a0c31a8c4ff63b3cfc1fa58c08879e37f58
ms.contentlocale: it-it
ms.lasthandoff: 04/04/2017

---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione
Quando si scrive un'applicazione, si crea un singolo [CWinApp](../../mfc/reference/cwinapp-class.md)-oggetto derivato. In alcuni casi, si desidera ottenere informazioni su questo oggetto di fuori di `CWinApp`-oggetto derivato. O potrebbe essere necessario accedere ad altri oggetti globali "Manager".
  
 La libreria Microsoft Foundation Class fornisce le seguenti funzioni globali che consentono di eseguire queste attività:  
  
### <a name="application-information-and-management-functions"></a>Informazioni sull'applicazione e le funzioni di gestione  
  
|||  
|-|-|  
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|  
|[AfxContextMenuManager](#afxcontextmenumanager)|Puntatore all'oggetto globale [gestore del menu contesto](ccontextmenumanager-class.md).|
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|  
|[AfxFindResourceHandle](#afxfindresourcehandle)|Consente di analizzare la catena di risorse e individuare un tipo di risorsa e l'ID di risorsa da specifici. |
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti di modulo di libreria di collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato.|  
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore all'applicazione 's singolo `CWinApp` oggetto.|  
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|  
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un `HINSTANCE` che rappresenta questa istanza dell'applicazione.|  
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra corrente "main" di un'applicazione non OLE, o la finestra cornice sul posto di un'applicazione server.|  
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un `HINSTANCE` all'origine delle risorse predefinito dell'applicazione. Consente di accedere direttamente alle risorse dell'applicazione.|  
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto corrente [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto.|  
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza la versione di controllo per l'applicazione 1.0 rich edit.|  
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza la versione di controllo per l'applicazione 2.0 e successive rich edit.| 
|[AfxIsExtendedFrameClass](#afxisextendedframeclass)|Determina se la finestra specificata è un oggetto frame esteso.|
|[AfxIsMFCToolBar](#afxismfctoolbar)|Determina se la finestra specificata è un oggetto della barra degli strumenti.|
|[AfxKeyboardManager](#afxkeyboardmanager)|Puntatore all'oggetto globale [gestore della tastiera](ckeyboardmanager-class.md).|
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|  
|[AfxMenuTearOffManager](#afxmenutearoffmanager)|Puntatore all'oggetto globale [Gestione menu tear-off](cmenutearoffmanager-class.md).|
|[AfxMouseManager](#afxmousemanager)|Puntatore all'oggetto globale [gestore mouse](cmousemanager-class.md).|
|[AfxRegisterClass](#afxregisterclass)|Registra una classe della finestra in una DLL che utilizza MFC.|  
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe della finestra di Windows per integrare quelli registrati automaticamente da MFC.|  
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta il `HINSTANCE` handle in cui vengono caricate le risorse predefinite dell'applicazione.|  
|[AfxShellManager](#afxshellmanager)|Puntatore all'oggetto globale [manager shell](cshellmanager-class.md). |
|[AfxSocketInit](#afxsocketinit)|Chiamato un `CWinApp::InitInstance` sostituzione consente di inizializzare i socket di Windows.|  
|[AfxUserToolsManager](#afxusertoolsmanager)|Puntatore all'oggetto globale [manager strumenti utente](cusertoolsmanager-class.md).|
|[AfxWinInit](#afxwininit)|Chiamato da MFC fornito `WinMain` funzione, come parte di [CWinApp](../../mfc/reference/cwinapp-class.md) l'inizializzazione di un'applicazione con interfaccia grafica per l'inizializzazione di MFC. Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|  
  

  
##  <a name="afxbeginthread"></a>AfxBeginThread  
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
 `pfnThreadProc`  
 Punta a una funzione di controllo per il thread di lavoro. Non può essere **NULL**. Questa funzione deve essere dichiarata come segue:  
  
 `UINT __cdecl MyControllingFunction( LPVOID pParam );`  
  
 *pThreadClass*  
 RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).  
  
 *pParam*  
 Parametro da passare alla funzione di controllo, come illustrato nel parametro per la dichiarazione di funzione in `pfnThreadProc`.  
  
 `nPriority`  
 La priorità desiderata del thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) in Windows SDK.  
  
 `nStackSize`  
 Specifica le dimensioni in byte dello stack per il nuovo thread. Se è 0, il dimensione stack del thread di creazione per impostazione predefinita la dimensione dello stack.  
  
 `dwCreateFlags`  
 Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori:  
  
- **CREATE_SUSPENDED** avviare il thread con un conteggio di sospensione di uno. Utilizzare **CREATE_SUSPENDED** se si desidera inizializzare tutti i dati del membro di `CWinThread` dell'oggetto, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o i membri della classe derivata, prima che il thread inizia l'esecuzione. Una volta completata l'inizializzazione, utilizzare [CWinThread:: ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguiti finché `CWinThread::ResumeThread` viene chiamato.  
  
- **0** avviare il thread subito dopo la creazione.  
  
 `lpSecurityAttrs`  
 Punta a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica gli attributi di sicurezza per il thread. Se **NULL**, gli attributi di protezione stesso perché verrà usato il thread di creazione. Per ulteriori informazioni su tale struttura, vedi il Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto thread appena creato, o **NULL** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 La prima forma del `AfxBeginThread` crea un thread di lavoro. La seconda forma crea un thread che può essere utilizzato come un thread dell'interfaccia utente o un thread di lavoro.  
  
 `AfxBeginThread`Crea un nuovo `CWinThread` oggetto, chiama il relativo [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) funzione per avviare l'esecuzione del thread e restituisce un puntatore per il thread. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati correttamente deve avere esito negativo qualsiasi parte della creazione. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) all'interno del thread o restituito dalla funzione di controllo del thread di lavoro.  
  
 Il multithreading deve essere abilitato dall'applicazione. in caso contrario, questa funzione avrà esito negativo. Per ulteriori informazioni sull'abilitazione del multithreading, vedere [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) in *opzioni del compilatore di Visual C++*.  
  
 Per ulteriori informazioni su `AfxBeginThread`, vedere gli articoli [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md) e [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CSocket::Attach](../../mfc/reference/csocket-class.md#attach).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

## <a name="afxcontextmenumanager"></a>AfxContextMenuManager
Puntatore all'oggetto globale [gestore del menu contesto](ccontextmenumanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CContextMenuManager* afxContextMenuManager;  
```     
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcontextmenumanager. h     

### <a name="see-also"></a>Vedere anche   
 [Classe CContextMenuManager](ccontextmenumanager-class.md)

  
##  <a name="afxendthread"></a>AfxEndThread  
 Chiamare questa funzione per terminare il thread attualmente in esecuzione.  
  
```   
void AFXAPI AfxEndThread(
    UINT nExitCode,  
    BOOL bDelete  = TRUE); 
```  
  
### <a name="parameters"></a>Parametri  
 *nExitCode*  
 Specifica il codice di uscita del thread.  
  
 *bDelete*  
 Elimina l'oggetto thread dalla memoria.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato dall'interno del thread da terminare.  
  
 Per ulteriori informazioni su `AfxEndThread`, vedere l'articolo [Multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

  ## <a name="afxfindresourcehandle"></a>AfxFindResourceHandle
Utilizzare `AfxFindResourceHandle` per analizzare la catena di risorse e individuare un tipo specifico di risorse e l'ID risorsa da.  
   
### <a name="syntax"></a>Sintassi    
```
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );  
```
### <a name="parameters"></a>Parametri  
 `lpszName`  
 Un puntatore a una stringa contenente l'ID di risorsa.    
 *lpszType*  
 Un puntatore al tipo di risorsa. Per un elenco di tipi di risorse, vedere [FindResource](http://msdn.microsoft.com/library/windows/desktop/ms648042) in Windows SDK.  
   
### <a name="return-value"></a>Valore restituito  
 Handle per il modulo che contiene la risorsa.  
   
### <a name="remarks"></a>Note  
 `AfxFindResourceHandle`Trova la risorsa specifica e restituisce un handle per il modulo che contiene la risorsa. La risorsa potrebbe essere in qualsiasi estensione DLL sono stati caricati. `AfxFindResourceHandle`indica quale ha la risorsa.  
  
 I moduli vengono cercati in questo ordine:  
  
1.  Il modulo principale (se si tratta di una DLL di estensione).  
  
2.  Moduli non di sistema.  
  
3.  Moduli specifici della lingua.  
  
4.  Il modulo principale (se è una DLL di sistema).  
  
5.  Moduli di sistema.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
  
##  <a name="afxfreelibrary"></a>AfxFreeLibrary  
 Sia `AfxFreeLibrary` che `AfxLoadLibrary` mantengono un conteggio dei riferimenti per ogni modulo di libreria caricato.  
  
```   
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib); 
```  
  
### <a name="parameters"></a>Parametri  
 *hInstLib*  
 Handle del modulo di libreria caricato. [AfxLoadLibrary](#afxloadlibrary) restituisce questo handle.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la funzione ha esito positivo; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 `AfxFreeLibrary` decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido. Questo conteggio dei riferimenti viene incrementato ogni volta che viene chiamata `AfxLoadLibrary`.  
  
 Prima di disassociare un modulo di libreria, il sistema consente alla DLL di rimuoverlo dai processi che lo stanno utilizzando. Questa operazione consente alla DLL di liberare le risorse allocate per conto del processo corrente. Dopo il completamento della funzione del punto di ingresso, il modulo di libreria viene rimosso dallo spazio degli indirizzi del processo corrente.  
  
 Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.  
  
 Assicurarsi di utilizzare `AfxFreeLibrary` e `AfxLoadLibrary` (anziché le funzioni Win32 **FreeLibrary** e **LoadLibrary**) se l'applicazione usa più thread. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto viene eseguito quando l'estensione DLL viene caricato e scaricato non danneggiare lo stato globale di MFC.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [AfxLoadLibrary](#afxloadlibrary).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
  
##  <a name="afxgetapp"></a>AfxGetApp  
 Il puntatore restituito da questa funzione può essere utilizzato per accedere alle informazioni dell'applicazione, ad esempio il codice principale di invio dei messaggi o la finestra in primo piano.  
  
```   
CWinApp* AFXAPI AfxGetApp(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il singolo `CWinApp` oggetto per l'applicazione.  
  
### <a name="remarks"></a>Note  
 Se questo metodo restituisce NULL, questo potrebbe indicare che la finestra principale dell'applicazione non è stato completamente inizializzata ancora. Potrebbe anche indicare un problema.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing #126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetappname"></a>AfxGetAppName  
 La stringa restituita da questa funzione è utilizzabile per i messaggi di diagnostica o come radice per i nomi di stringa temporaneo.  
  
```   
LPCTSTR AFXAPI AfxGetAppName(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[127 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetinstancehandle"></a>AfxGetInstanceHandle  
 Questa funzione consente di recuperare l'handle dell'istanza dell'applicazione corrente.  
  
```   
HINSTANCE  AFXAPI AfxGetInstanceHandle(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 `HINSTANCE` all'istanza corrente dell'applicazione. Se viene chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC, alla DLL viene restituito un oggetto `HINSTANCE`.  
  
### <a name="remarks"></a>Note  
 `AfxGetInstanceHandle` restituisce sempre l'oggetto `HINSTANCE` del file eseguibile (con estensione EXE) a meno che non venga chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC. In questo caso restituisce un oggetto `HINSTANCE` alla DLL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#128; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetmainwnd"></a>AfxGetMainWnd  
 Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare riferimento direttamente al [m_pMainWnd](../../mfc/reference/cwinthread-class.md#m_pmainwnd) membro dell'oggetto applicazione.  
  
```   
CWnd* AFXAPI AfxGetMainWnd(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il server dispone di un oggetto che è attivo sul posto all'interno di un contenitore e tale contenitore è attivo, questa funzione restituisce un puntatore all'oggetto finestra cornice contenente il documento attivo sul posto.  
  
 Se non esiste alcun oggetto attivo sul posto all'interno di un contenitore o se l'applicazione non è un server OLE, la funzione restituisce semplicemente il membro `m_pMainWnd` dell'oggetto applicazione.  
  
 Se `AfxGetMainWnd` viene chiamata dal thread principale dell'applicazione, restituisce la finestra principale dell'applicazione sulla base delle regole sopra indicate. Se la funzione viene chiamata da un thread secondario nell'applicazione, la funzione restituisce la finestra principale associata al thread che ha effettuato la chiamata.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al membro `m_pMainWnd` dell'oggetto applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing #129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetperuserregistration"></a>AfxGetPerUserRegistration  
 Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
BOOL AFXAPI AfxGetPerUserRegistration();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.  
  
 Per modificare se l'applicazione reindirizza l'accesso del Registro di sistema, utilizzare [AfxSetPerUserRegistration](#afxsetperuserregistration).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="afxgetresourcehandle"></a>AfxGetResourceHandle  
 Utilizzare il `HINSTANCE` handle restituito da questa funzione per accedere alle risorse dell'applicazione direttamente, ad esempio, nelle chiamate alla funzione Windows **FindResource**.  
  
```   
extern HINSTANCE  AfxGetResourceHandle(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `HINSTANCE` handle in cui vengono caricate le risorse predefinite dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing #130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetthread"></a>AfxGetThread  
 Chiamare questa funzione per ottenere un puntatore per il [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto che rappresenta il thread attualmente in esecuzione.  
  
```   
CWinThread* AfxGetThread(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore per il thread attualmente in esecuzione. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato dall'interno del thread desiderato.  
  
> [!NOTE]
>  Se si trasferisce una chiamata di progetto MFC `AfxGetThread` da Visual C++ versioni 4.2, 5.0 o 6.0, `AfxGetThread` chiamate [AfxGetApp](#afxgetapp) se non viene trovato alcun thread. In Visual c++ .NET e versioni successive, `AfxGetThread` restituisce **NULL** se è stato trovato alcun thread. Se si desidera il thread dell'applicazione, è necessario chiamare `AfxGetApp`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#132; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxinitrichedit"></a>AfxInitRichEdit  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 1.0) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit(); 
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene fornita per compatibilità con le versioni precedenti. Le applicazioni create con Visual C++ .NET e un utilizzo successivo [AfxInitRichEdit2](#afxinitrichedit2).  
  
 `AfxInitRichEdit`Carica RICHED32. DLL per inizializzare la versione 1.0 di controllo rich edit. Per utilizzare versioni 2.0 e 3.0 del controllo rich edit, RICHED20. DLL deve essere caricato. Questa operazione viene eseguita con una chiamata a [AfxInitRichEdit2](#afxinitrichedit2). Se si dispone di risorse finestra di dialogo con il controllo rich edit creato prima di Visual C++ .NET, i controlli rich edit sono automaticamente la versione 1.0. I controlli rich edit inseriti utilizzando l'Editor di risorse di Visual C++ .NET sono versione 2.0.  
  
 Per aggiornare i controlli rich edit nelle applicazioni Visual C++ esistente alla versione 2.0, aprire il. File RC come testo, modificare il nome della classe di ogni controllo rich edit da "RICHEDIT" a "RichEdit20a". Quindi sostituire la chiamata a `AfxInitRichEdit` con `AfxInitRichEdit2`.  
  
 Questa funzione inizializza la raccolta di controlli comuni, anche se la libreria non è già stata inizializzata per il processo. Se si utilizza il controllo rich edit direttamente dall'applicazione MFC, è necessario chiamare questa funzione per garantire che è stato inizializzato correttamente il runtime del controllo rich edit MFC. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxinitrichedit2"></a>AfxInitRichEdit2  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 2.0 e versioni successive) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit2(); 
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per caricare il RICHED20. DLL e inizializzare la versione 2.0 del ricco di controllo di modifica. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

  ## <a name="afxisextendedframeclass"></a>AfxIsExtendedFrameClass
Determina se la finestra specificata è un oggetto frame esteso.  
   
### <a name="syntax"></a>Sintassi    
```  
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );  
```
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore a un oggetto derivato da `CWnd`.  
   
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra fornita è un oggetto frame esteso; in caso contrario `FALSE`.  
   
### <a name="remarks"></a>Note  
 Il metodo restituisce `TRUE` se `pWnd` deriva da una delle classi seguenti:  
  
-   `CFrameWndEx`  
  
-   `CMDIFrameWndEx`  
  
-   `COleIPFrameWndEx`  
  
-   `COleDocIPFrameWndEx`  
  
-   `CMDIChildWndEx`  
  
 Il metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è una finestra frame estesa.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  
   
### <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](cwnd-class.md)   
 [Classe CFrameWndEx](cframewndex-class.md)   

## <a name="afxismfctoolbar"></a>AfxIsMFCToolBar
Determina se la finestra specificata è un oggetto della barra degli strumenti.  
   
### <a name="syntax"></a>Sintassi    
```  
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);  
```
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Puntatore a un oggetto derivato da `CWnd`.  
   
### <a name="return-value"></a>Valore restituito  
 `TRUE` se la finestra fornita è un oggetto della barra degli strumenti; in caso contrario, `FALSE`.  
   
### <a name="remarks"></a>Note  
 Questo metodo restituisce `TRUE` se `pWnd` deriva da `CMFCToolBar`. Questo metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è un oggetto `CMFCToolBar`.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  
   
### <a name="see-also"></a>Vedere anche  
 [CWnd (classe)](cwnd-class.md)   
 [Classe CMFCToolBar](cmfctoolbar-class.md)

 
## <a name="afxkeyboardmanager"></a>AfxKeyboardManager
Puntatore all'oggetto globale [gestore della tastiera](ckeyboardmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CKeyboardManager* afxKeyboardManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxkeyboardmanager.h  
   
### <a name="see-also"></a>Vedere anche  

 [Macro, funzioni globali e variabili globali](mfc-macros-and-globals.md)   
 [Classe CKeyboardManager](ckeyboardmanager-class.md)


##  <a name="afxloadlibrary"></a>AfxLoadLibrary  
 Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.  
  
```   
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpszModuleName*  
 Punta a una stringa con terminazione null che contiene il nome del modulo (entrambi una. DLL o. File EXE). Il nome specificato è il nome del file del modulo.  
  
 Se la stringa specifica un percorso, ma il file non esiste nella directory specificata, la funzione ha esito negativo.  
  
 Se non è stato specificato un percorso e l'estensione viene omesso, l'estensione predefinita. DLL viene aggiunto. Tuttavia, la stringa del nome file può includere un carattere punto finale (.) per indicare che il nome del modulo non ha estensione. Quando viene specificato alcun percorso, la funzione Cerca per il file nella sequenza seguente:  
  
-   La directory da cui caricare l'applicazione.  
  
-   La directory corrente.  
  
- **Windows 95/98:** la directory di sistema di Windows. **Windows NT:** la directory di sistema di Windows a 32 bit. Il nome della directory è SYSTEM32.  
  
- **Solo per Windows NT:** directory di sistema di Windows di 16 bit. Non vi è alcuna funzione Win32 che consente di ottenere il percorso della directory, ma viene eseguita la ricerca. Il nome della directory è di sistema.  
  
-   La directory di Windows.  
  
-   Le directory che sono elencate nella variabile di ambiente PATH.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. Se la funzione ha esito negativo, il valore restituito è NULL.  
  
### <a name="remarks"></a>Note  
 Restituisce un handle che può essere usato in [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212) per ottenere l'indirizzo di una funzione DLL. `AfxLoadLibrary`consente inoltre di eseguire il mapping di altri moduli eseguibili.  
  
 Ogni processo di migrazione mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio dei riferimenti viene incrementato ogni volta che `AfxLoadLibrary` viene chiamato e viene decrementato ogni volta che `AfxFreeLibrary` viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.  
  
 Assicurarsi di utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 **LoadLibrary** e **FreeLibrary**) se l'applicazione usa più thread e carica una DLL di estensione. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e di chiusura che viene eseguito quando la DLL di estensione viene caricato e scaricato non danneggiare lo stato globale di MFC.  
  
 Utilizzando `AfxLoadLibrary` in un'applicazione richiede di collegamento dinamico alla versione DLL di MFC; il file di intestazione per `AfxLoadLibrary`, AFXDLL . h, è incluso se MFC è collegato all'applicazione come una DLL. Infatti, per impostazione predefinita è necessario collegare la versione DLL di MFC per utilizzare o creare una DLL di estensione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_DLLUser n. 1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]  
[!code-cpp[NVC_MFC_DLLUser n. 2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]  
[!code-cpp[NVC_MFC_DLLUser n. 3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
   
## <a name="afxmenutearoffmanager"></a>AfxMenuTearOffManager
Puntatore all'oggetto globale [Gestione menu tear-off](cmenutearoffmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CMenuTearOffManager* g_pTearOffMenuManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmenutearoffmanager.h  
   
### <a name="see-also"></a>Vedere anche     
 [Classe CMenuTearOffManager](cmenutearoffmanager-class.md)
 
## <a name="afxmousemanager"></a>AfxMouseManager
Puntatore all'oggetto globale [gestore mouse](cmousemanager-class.md).  
   
### <a name="syntax"></a>Sintassi  
  ```  
CMouseManager* afxMouseManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmousemanager.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CMouseManager](cmousemanager-class.md)
 

  
##  <a name="afxregisterclass"></a>AfxRegisterClass  
 Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.  
  
```   
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpWndClass*  
 Puntatore a un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura contenente informazioni sulla classe di finestra da registrare. Per ulteriori informazioni su tale struttura, vedi il Windows SDK.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la classe è registrata correttamente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.  
  
 Nelle compilazioni senza DLL, il `AfxRegisterClass` identificatore è definito come macro che esegue il mapping alla funzione Windows **RegisterClass**, dal momento che le classi registrate in un'applicazione vengono automaticamente annullate. Se si utilizza `AfxRegisterClass` anziché **RegisterClass**, il codice può essere utilizzato senza alcuna modifica in un'applicazione e in una DLL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_DLL N. 3](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxregisterwndclass"></a>AfxRegisterWndClass  
 Consente di registrare le proprie classi di finestra.  
  
```  
LPCTSTR AFXAPI AfxRegisterWndClass(
    UINT nClassStyle,  
    HCURSOR hCursor = 0,  
    HBRUSH hbrBackground = 0,  
    HICON hIcon = 0);  
```  
  
### <a name="parameters"></a>Parametri  
 *nClassStyle*  
 Specifica lo stile di classe Windows o di una combinazione degli stili, creato tramite l'OR ( **|**) (operatore), per la classe di finestra. Per un elenco degli stili di classe, vedere il [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura in Windows SDK. Se **NULL**, i valori predefiniti verranno impostati come segue:  
  
-   Imposta lo stile del mouse su **CS_DBLCLKS**, che invia fare doppio clic su messaggi alla routine della finestra quando l'utente fa doppio clic del mouse.  
  
-   Imposta lo stile del cursore freccia per lo standard di Windows **IDC_ARROW**.  
  
-   Imposta il pennello di sfondo **NULL**, pertanto la finestra non cancellerà lo sfondo.  
  
-   Imposta l'icona dell'icona del logo Windows standard, i flag che salutano.  
  
 `hCursor`  
 Specifica un handle per la risorsa di cursore per l'installazione in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, si otterrà lo standard **IDC_ARROW** cursore.  
  
 *hbrBackground*  
 Specifica un handle per la risorsa pennello da installare in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, sarà necessario un **NULL** pennello di sfondo e che la finestra, per impostazione predefinita, non cancella lo sfondo durante l'elaborazione [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055).  
  
 `hIcon`  
 Specifica un handle per la risorsa icona per l'installazione in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, si otterrà l'icona del logo Windows standard, i flag che salutano.  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome della classe. È possibile passare questo nome di classe per il **crea** funzione membro in `CWnd` o altri **CWnd -**dalle classi derivate per creare una finestra. Il nome viene generato per la libreria Microsoft Foundation Class.  
  
> [!NOTE]
>  Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, assegnarla a una `CString` variabile.  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class registra automaticamente diverse classi di finestra standard per l'utente. Chiamare questa funzione se si desidera registrare le proprie classi di finestra.  
  
 Il nome registrato per una classe da `AfxRegisterWndClass` dipende esclusivamente dai parametri. Se si chiama `AfxRegisterWndClass` più volte con parametri identici, registra solo una classe alla prima chiamata. Le chiamate successive a `AfxRegisterWndClass` con parametri identici restituire semplicemente la classname già registrato.  
  
 Se si chiama `AfxRegisterWndClass` per più classi derivate da CWnd con parametri identici, anziché una classe di finestra separata per ogni classe, ogni classe condivide la stessa classe della finestra. Ciò può comportare problemi se il **CS_CLASSDC** viene utilizzato lo stile di classe. Anziché più **CS_CLASSDC** classi di finestra, si otterrà uno **CS_CLASSDC** classe della finestra e tutte le finestre di C++ che utilizzano che classe condividono il controller di dominio stesso. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.  
  
 Fare riferimento alla nota tecnica [TN001: registrazione delle classi](../../mfc/tn001-window-class-registration.md) per ulteriori informazioni sulla registrazione della classe della finestra e `AfxRegisterWndClass` (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxsetperuserregistration"></a>AfxSetPerUserRegistration  
 Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  
 Prima di [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], utilizzano le applicazioni che accedono in genere il Registro di sistema di **HKEY_CLASSES_ROOT** nodo. Tuttavia, con [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], è necessario eseguire un'applicazione in modalità con privilegi elevate per scrivere **HKCR**.  
  
 Questo metodo consente all'applicazione di leggere e scrivere nel Registro di sistema senza in esecuzione in modalità con privilegi elevate reindirizzando accesso Registro di sistema da **HKCR** a **HKCU**. Per ulteriori informazioni, vedere [pagine delle proprietà Linker](../../ide/linker-property-pages.md).  
  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.  
  
 L'implementazione predefinita del Registro di sistema di accede **HKCR**.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="afxsetresourcehandle"></a>AfxSetResourceHandle  
 Utilizzare questa funzione per impostare il `HINSTANCE` handle che determina in cui vengono caricate le risorse predefinite dell'applicazione.  
  
```  
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);  
```  
  
### <a name="parameters"></a>Parametri  
 `hInstResource`  
 L'handle di istanza o un modulo a un. File EXE o DLL da cui vengono caricate le risorse dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing #135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

## <a name="afxshellmanager"></a>AfxShellManager
Puntatore all'oggetto globale [manager shell](cshellmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CShellManager* afxShellManager;  
```  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxshellmanager. h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CShellManager](cshellmanager-class.md)
  
##  <a name="afxsocketinit"></a>AfxSocketInit  
 Chiamare questa funzione `CWinApp::InitInstance` sostituzione consente di inizializzare i socket di Windows.  
  
```  
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `lpwsaData`  
 Un puntatore a un [WSADATA](../../mfc/reference/wsadata-structure.md) struttura. Se `lpwsaData` non è uguale a `NULL`, quindi l'indirizzo del `WSADATA` struttura viene compilata tramite la chiamata a `WSAStartup`. Questa funzione assicura anche che `WSACleanup` viene chiamato automaticamente prima della chiusura dell'applicazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Quando si utilizza sockets MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AfxSock  

## <a name="afxusertoolsmanager"></a>AfxUserToolsManager
Puntatore all'oggetto globale [manager strumenti utente](cusertoolsmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CUserToolsManager* afxUserToolsManager;  
```  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertoolsmanager.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CUserToolsManager](cusertoolsmanager-class.md)
 
  
##  <a name="afxwininit"></a>AfxWinInit  
 Questa funzione viene chiamata da MFC fornito `WinMain` come parte della funzione di [CWinApp](../../mfc/reference/cwinapp-class.md) l'inizializzazione di un'applicazione con interfaccia grafica per l'inizializzazione di MFC.  
  
```  
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,  
    HINSTANCE hPrevInstance,  
    LPTSTR lpCmdLine,  
    int nCmdShow);  
```  
  
### <a name="parameters"></a>Parametri  
 `hInstance`  
 L'handle del modulo attualmente in esecuzione.  
  
 *hPrevInstance*  
 Handle per un'istanza precedente dell'applicazione. Per un'applicazione basata su Win32, questo parametro è sempre **NULL**.  
  
 `lpCmdLine`  
 Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.  
  
 `nCmdShow`  
 Specifica come verranno visualizzata la finestra principale di un'applicazione GUI.  
  
### <a name="remarks"></a>Note  
 Per un'applicazione console, che non utilizza MFC fornito `WinMain` funzione, è necessario chiamare `AfxWinInit` direttamente per inizializzare MFC.  
  
 Se si chiama `AfxWinInit` manualmente, è necessario dichiarare un'istanza di un `CWinApp` classe. Per un'applicazione console, è possibile scegliere di non derivare la propria classe da `CWinApp` e utilizzare invece un'istanza di `CWinApp` direttamente. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione nell'implementazione di **principale**.  
  
> [!NOTE]
>  Quando viene creato un contesto di attivazione per un assembly, MFC Usa una risorsa manifesto fornita dal modulo dell'utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per ulteriori informazioni, vedere [il supporto per contesti di attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_AfxWinInit n. 1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CWinApp](../../mfc/reference/cwinapp-class.md)

