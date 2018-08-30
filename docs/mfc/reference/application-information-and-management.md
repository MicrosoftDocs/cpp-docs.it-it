---
title: Informazioni sull'applicazione e gestione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- applications [MFC], managing
ms.assetid: b72f4154-24db-4e75-bca3-6873e2459c15
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b6793cbb120b44456a880a47ffd114c346662376
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43208885"
---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione
Quando si scrive un'applicazione, si crea un singolo [CWinApp](../../mfc/reference/cwinapp-class.md)-oggetto derivato. In alcuni casi, è possibile ottenere informazioni su questo oggetto all'esterno di `CWinApp`-oggetto derivato. Oppure potrebbe essere necessario accedere ad altri oggetti globali "Manager".
  
 La libreria Microsoft Foundation Class offre le seguenti funzioni globali che consentono di eseguire queste operazioni:  
  
### <a name="application-information-and-management-functions"></a>Informazioni sull'applicazione e le funzioni di gestione  
  
|||  
|-|-|  
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|  
|[AfxContextMenuManager](#afxcontextmenumanager)|Puntatore a globale [manager di menu di scelta rapida](ccontextmenumanager-class.md).|
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|  
|[AfxFindResourceHandle](#afxfindresourcehandle)|Descrive la catena di risorse e individuare un ID di risorsa da risorsa specifico e il tipo di risorsa. |
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti del modulo di libreria di collegamento dinamico (DLL) caricato; Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato.|  
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore all'applicazione 's singolo `CWinApp` oggetto.|  
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|  
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un oggetto HINSTANCE che rappresenta questa istanza dell'applicazione.|  
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra corrente "main" di un'applicazione non OLE, o la finestra cornice sul posto di un'applicazione server.|  
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un oggetto HINSTANCE all'origine di risorse predefinite dell'applicazione. Questa scheda consente di accedere direttamente alle risorse dell'applicazione.|  
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto corrente [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto.|  
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza la versione 1.0 rich edit controllo per l'applicazione.|  
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza la versione 2.0 e versioni successive rich edit controllo per l'applicazione.| 
|[AfxIsExtendedFrameClass](#afxisextendedframeclass)|Determina se la finestra specificata è un oggetto frame esteso.|
|[AfxIsMFCToolBar](#afxismfctoolbar)|Determina se la finestra specificata è un oggetto della barra degli strumenti.|
|[AfxKeyboardManager](#afxkeyboardmanager)|Puntatore a globale [gestore della tastiera](ckeyboardmanager-class.md).|
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|  
|[AfxMenuTearOffManager](#afxmenutearoffmanager)|Puntatore a globale [manager di menu tear-off](cmenutearoffmanager-class.md).|
|[AfxMouseManager](#afxmousemanager)|Puntatore a globale [gestore mouse](cmousemanager-class.md).|
|[AfxRegisterClass](#afxregisterclass)|Registra una classe di finestra in una DLL che utilizza MFC.|  
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe di finestra di Windows che integrano quelli registrati automaticamente da MFC.|  
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta l'handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.|  
|[AfxShellManager](#afxshellmanager)|Puntatore a globale [gestore della shell](cshellmanager-class.md). |
|[AfxSocketInit](#afxsocketinit)|Chiamato in un `CWinApp::InitInstance` sottoposto a override per inizializzare i socket di Windows.|  
|[AfxUserToolsManager](#afxusertoolsmanager)|Puntatore a globale [gestore strumenti utente](cusertoolsmanager-class.md).|
|[AfxWinInit](#afxwininit)|Chiamato da MFC-fornito `WinMain` funzione, come parte del [CWinApp](../../mfc/reference/cwinapp-class.md) l'inizializzazione di un'applicazione basata su GUI per l'inizializzazione di MFC. Deve essere chiamato direttamente per le applicazioni console che usano MFC.|  
  

  
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
 *pfnThreadProc*  
 Punta alla funzione di controllo per il thread di lavoro. Non può essere NULL. Questa funzione deve essere dichiarata come segue:  
  
 `UINT __cdecl MyControllingFunction( LPVOID pParam );`  
  
 *pThreadClass*  
 RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).  
  
 *pParam*  
 Parametro da passare alla funzione di controllo come illustrato nel parametro alla dichiarazione di funzione in *pfnThreadProc*.  
  
 *nPriority*  
 La priorità desiderata del thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](/windows/desktop/api/processthreadsapi/nf-processthreadsapi-setthreadpriority) nel SDK di Windows.  
  
 *nStackSize*  
 Specifica la dimensione in byte dello stack per il nuovo thread. Se è 0, il dimensione stack del thread di creazione per impostazione predefinita la dimensione dello stack.  
  
 *dwCreateFlags*  
 Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori:  
  
- CREATE_SUSPENDED avviare il thread con un conteggio di sospensione di uno. Usare CREATE_SUSPENDED se si desidera inizializzare i dati dei membri di `CWinThread` dell'oggetto, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o i membri della classe derivata, prima che il thread inizi l'esecuzione. Una volta completata l'inizializzazione, utilizzare [CWinThread:: ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare il thread in esecuzione. Il thread non verrà eseguita fino `CWinThread::ResumeThread` viene chiamato.  
  
- **0** avviare il thread immediatamente dopo la creazione.  
  
 *lpSecurityAttrs*  
 Punta a un [SECURITY_ATTRIBUTES](https://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica gli attributi di sicurezza per il thread. Se NULL, verranno usati gli stessi attributi di sicurezza del thread di creazione. Per altre informazioni su questa struttura, vedere il SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto thread appena creato, o NULL se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 La prima forma del `AfxBeginThread` crea un thread di lavoro. Il secondo form crea un thread che può essere utilizzato come un thread dell'interfaccia utente o un thread di lavoro.  
  
 `AfxBeginThread` Crea un nuovo `CWinThread` oggetti, le chiamate relative [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) funzionare per avviare l'esecuzione del thread e restituisce un puntatore al thread. Nel corso della routine vengono effettuati controlli per assicurarsi che tutti gli oggetti vengono deallocati in modo corretto deve avere esito negativo qualsiasi parte della creazione. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) all'interno del thread o restituito dalla funzione di controllo del thread di lavoro.  
  
 Il multithreading deve essere abilitato dall'applicazione. in caso contrario, questa funzione avrà esito negativo. Per altre informazioni sull'abilitazione del multithreading, vedere [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) sotto *le opzioni del compilatore di Visual C++*.  
  
 Per ulteriori informazioni sul `AfxBeginThread`, vedere gli articoli [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md) e [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CSocket:: Attach](../../mfc/reference/csocket-class.md#attach).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

## <a name="afxcontextmenumanager"></a> AfxContextMenuManager
Puntatore a globale [manager di menu di scelta rapida](ccontextmenumanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CContextMenuManager* afxContextMenuManager;  
```     
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxcontextmenumanager. h     

### <a name="see-also"></a>Vedere anche   
 [Classe CContextMenuManager](ccontextmenumanager-class.md)

  
##  <a name="afxendthread"></a>  AfxEndThread  
 Chiamare questa funzione per terminare il thread attualmente in esecuzione.  
  
```   
void AFXAPI AfxEndThread(
    UINT nExitCode,  
    BOOL bDelete  = TRUE); 
```  
  
### <a name="parameters"></a>Parametri  
 *nExitCode*  
 Specifica il codice di uscita del thread.  
  
 *bElimina*  
 Elimina l'oggetto thread dalla memoria.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato dall'interno del thread da terminare.  
  
 Per ulteriori informazioni sul `AfxEndThread`, vedere l'articolo [Multithreading: terminazione dei thread](../../parallel/multithreading-terminating-threads.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

  ## <a name="afxfindresourcehandle"></a>AfxFindResourceHandle
Usare `AfxFindResourceHandle` per esaminare la catena di risorse e individuare un tipo specifico di risorse e l'ID risorsa da risorsa.  
   
### <a name="syntax"></a>Sintassi    
```
HINSTANCE AFXAPI AfxFindResourceHandle( LPCTSTR lpszName,  LPCTSTR lpszType );  
```
### <a name="parameters"></a>Parametri  
 *lpszName*  
 Un puntatore a una stringa contenente l'ID risorsa.    
 *lpszType*  
 Puntatore al tipo di risorsa. Per un elenco dei tipi di risorse, vedere [FindResource](/windows/desktop/api/winbase/nf-winbase-findresourcea) nel SDK di Windows.  
   
### <a name="return-value"></a>Valore restituito  
 Handle per il modulo che contiene la risorsa.  
   
### <a name="remarks"></a>Note  
 `AfxFindResourceHandle` Trova la risorsa specifica e restituisce un handle per il modulo che contiene la risorsa. La risorsa potrebbe essere in qualsiasi estensione MFC DLL sono stati caricati. `AfxFindResourceHandle` indica quale ha la risorsa.  
  
 I moduli vengono cercati nell'ordine indicato:  
  
1.  Il modulo principale (se si tratta di una DLL di estensione MFC).  
  
2.  Moduli non di sistema.  
  
3.  Moduli specifici della lingua.  
  
4.  Il modulo principale (se è una DLL di sistema).  
  
5.  Moduli di sistema.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
  
##  <a name="afxfreelibrary"></a>  AfxFreeLibrary  
 Sia `AfxFreeLibrary` che `AfxLoadLibrary` mantengono un conteggio dei riferimenti per ogni modulo di libreria caricato.  
  
```   
BOOL AFXAPI AfxFreeLibrary(HINSTANCE hInstLib); 
```  
  
### <a name="parameters"></a>Parametri  
 *hInstLib*  
 Handle del modulo di libreria caricato. [AfxLoadLibrary](#afxloadlibrary) restituisce questo handle.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la funzione ha esito positivo; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 `AfxFreeLibrary` decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido. Questo conteggio dei riferimenti viene incrementato ogni volta che viene chiamata `AfxLoadLibrary`.  
  
 Prima di disassociare un modulo di libreria, il sistema consente alla DLL di rimuoverlo dai processi che lo stanno utilizzando. Questa operazione consente alla DLL di liberare le risorse allocate per conto del processo corrente. Dopo il completamento della funzione del punto di ingresso, il modulo di libreria viene rimosso dallo spazio degli indirizzi del processo corrente.  
  
 Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.  
  
 Assicurarsi di usare `AfxFreeLibrary` e `AfxLoadLibrary` (anziché le funzioni Win32 `FreeLibrary` e `LoadLibrary`) se l'applicazione usa più thread. Usando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguita quando l'estensione MFC DLL viene caricata e scaricata non danneggiare lo stato complessivo di MFC.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [AfxLoadLibrary](#afxloadlibrary).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
  
##  <a name="afxgetapp"></a>  AfxGetApp  
 Il puntatore restituito da questa funzione è utilizzabile per accedere alle informazioni dell'applicazione, ad esempio il codice principale di invio dei messaggi o la finestra in primo piano.  
  
```   
CWinApp* AFXAPI AfxGetApp(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il singolo `CWinApp` oggetto per l'applicazione.  
  
### <a name="remarks"></a>Note  
 Se questo metodo restituisce NULL, può indicare che la finestra principale dell'applicazione non è stato completamente ancora inizializzata. Può anche indicare un problema.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#126](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetappname"></a>  AfxGetAppName  
 La stringa restituita da questa funzione è utilizzabile per i messaggi di diagnostica o come radice per i nomi di stringa temporaneo.  
  
```   
LPCTSTR AFXAPI AfxGetAppName(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome dell'applicazione.  
  
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
 Un oggetto HINSTANCE all'istanza corrente dell'applicazione. Se viene chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC, viene restituito un oggetto HINSTANCE della DLL.  
  
### <a name="remarks"></a>Note  
 `AfxGetInstanceHandle` Restituisce sempre HINSTANCE del file eseguibile (. Con estensione EXE) a meno che non viene chiamato dall'interno di una DLL collegata con la versione USRDLL di MFC. In questo caso, restituisce un oggetto HINSTANCE della DLL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#128](../../mfc/reference/codesnippet/cpp/application-information-and-management_3.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetmainwnd"></a>  AfxGetMainWnd  
 Se l'applicazione è un server OLE, chiamare questa funzione per recuperare un puntatore alla finestra principale attiva dell'applicazione anziché fare direttamente riferimento al [m_pMainWnd](../../mfc/reference/cwinthread-class.md#m_pmainwnd) membro dell'oggetto applicazione.  
  
```   
CWnd* AFXAPI AfxGetMainWnd(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Se il server dispone di un oggetto che è attivo sul posto all'interno di un contenitore e tale contenitore è attivo, questa funzione restituisce un puntatore all'oggetto finestra cornice contenente il documento attivo sul posto.  
  
 Se è presente alcun oggetto con stato attivo sul posto all'interno di un contenitore o l'applicazione non è un server OLE, questa funzione restituisce semplicemente il *m_pMainWnd* dell'oggetto applicazione.  
  
 Se `AfxGetMainWnd` viene chiamata dal thread principale dell'applicazione, restituisce la finestra principale dell'applicazione sulla base delle regole sopra indicate. Se la funzione viene chiamata da un thread secondario nell'applicazione, la funzione restituisce la finestra principale associata al thread che ha effettuato la chiamata.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione non è un server OLE, chiamare questa funzione equivale a fare riferimento direttamente al *m_pMainWnd* membro dell'oggetto applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#129](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetperuserregistration"></a>  AfxGetPerUserRegistration  
 Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
BOOL AFXAPI AfxGetPerUserRegistration();
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE indica che le informazioni del Registro di sistema viene indirizzate sul nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** al **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.  
  
 Per modificare se l'applicazione reindirizza l'accesso al Registro di sistema, utilizzare [AfxSetPerUserRegistration](#afxsetperuserregistration).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="afxgetresourcehandle"></a>  AfxGetResourceHandle  
 Funzione usare HINSTANCE handle restituito da questa funzione per accedere alle risorse dell'applicazione direttamente, ad esempio, nelle chiamate a di Windows `FindResource`.  
  
```   
extern HINSTANCE  AfxGetResourceHandle(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un handle HINSTANCE in cui vengono caricate le risorse predefinite dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#130](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxgetthread"></a>  AfxGetThread  
 Chiamare questa funzione per ottenere un puntatore per il [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto che rappresenta il thread attualmente in esecuzione.  
  
```   
CWinThread* AfxGetThread(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al thread attualmente in esecuzione. in caso contrario NULL.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato dall'interno del thread desiderato.  
  
> [!NOTE]
>  Se si trasferisce una chiamata di progetto MFC `AfxGetThread` dalle versioni di Visual C++ 4.2, 5.0 o 6.0 `AfxGetThread` chiamate [AfxGetApp](#afxgetapp) se nessun thread è trovato. Nelle versioni più recenti del compilatore `AfxGetThread` restituisce NULL se nessun thread è stato trovato. Se si desidera che il thread dell'applicazione, è necessario chiamare `AfxGetApp`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#132](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxinitrichedit"></a>  AfxInitRichEdit  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 1.0) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit(); 
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene fornita per compatibilità con le versioni precedenti. Le nuove applicazioni devono usare [AfxInitRichEdit2](#afxinitrichedit2).  
  
 `AfxInitRichEdit` Carica RICHED32. DLL per inizializzare la versione 1.0 del controllo rich edit. Per utilizzare versione 2.0 e 3.0 del controllo rich edit, RICHED20. DLL deve essere caricato. Questa operazione viene eseguita con una chiamata a [AfxInitRichEdit2](#afxinitrichedit2).  
  
 Per aggiornare i controlli di modifica avanzate nelle applicazioni Visual C++ esistente alla versione 2.0, aprire il. File RC come testo, modificare il nome della classe di ogni controllo rich edit da "RICHEDIT" a "RichEdit20a". Quindi sostituire la chiamata a `AfxInitRichEdit` con `AfxInitRichEdit2`.  
  
 Questa funzione inizializza la libreria di controlli comuni, anche se la libreria non è già stata inizializzata per il processo. Se si usa il controllo rich edit direttamente dall'applicazione MFC, è necessario chiamare questa funzione per garantire che è stato inizializzato correttamente il runtime del controllo rich edit MFC. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxinitrichedit2"></a>  AfxInitRichEdit2  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 2.0 e versioni successive) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit2(); 
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per caricare il RICHED20. Controllo di modifica di DLL e inizializzare la versione 2.0 di rich. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

  ## <a name="afxisextendedframeclass"></a>  AfxIsExtendedFrameClass
Determina se la finestra specificata è un oggetto frame esteso.  
   
### <a name="syntax"></a>Sintassi    
```  
BOOL AFXAPI AfxIsExtendedFrameClass( CWnd* pWnd );  
```
### <a name="parameters"></a>Parametri  
 [in] *pWnd*  
 Puntatore a un oggetto derivato da `CWnd`.  
   
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra fornita è un oggetto frame esteso; in caso contrario, FALSE.  
   
### <a name="remarks"></a>Note  
 Questo metodo restituisce TRUE se *pWnd* deriva da una delle classi seguenti:  
  
-   `CFrameWndEx`  
  
-   `CMDIFrameWndEx`  
  
-   `COleIPFrameWndEx`  
  
-   `COleDocIPFrameWndEx`  
  
-   `CMDIChildWndEx`  
  
 Il metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è una finestra frame estesa.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CWnd](cwnd-class.md)   
 [Classe CFrameWndEx](cframewndex-class.md)   

## <a name="afxismfctoolbar"></a> AfxIsMFCToolBar
Determina se la finestra specificata è un oggetto della barra degli strumenti.  
   
### <a name="syntax"></a>Sintassi    
```  
BOOL AFXAPI AfxIsMFCToolBar(CWnd* pWnd);  
```
### <a name="parameters"></a>Parametri  
 [in] *pWnd*  
 Puntatore a un oggetto derivato da `CWnd`.  
   
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra fornita è un oggetto della barra degli strumenti. in caso contrario, FALSE.  
   
### <a name="remarks"></a>Note  
 Questo metodo restituisce `TRUE` se *pWnd* deriva da `CMFCToolBar`. Questo metodo è utile quando è necessario convalidare che una funzione o un parametro del metodo è un oggetto `CMFCToolBar`.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxpriv.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CWnd](cwnd-class.md)   
 [Classe CMFCToolBar](cmfctoolbar-class.md)

 
## <a name="afxkeyboardmanager"></a> AfxKeyboardManager
Puntatore a globale [gestore della tastiera](ckeyboardmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CKeyboardManager* afxKeyboardManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxkeyboardmanager.h  
   
### <a name="see-also"></a>Vedere anche  

 [Macro, funzioni globali e variabili globali](mfc-macros-and-globals.md)   
 [Classe CKeyboardManager](ckeyboardmanager-class.md)


##  <a name="afxloadlibrary"></a>  AfxLoadLibrary  
 Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.  
  
```   
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpszModuleName*  
 Punta a una stringa con terminazione null che contiene il nome del modulo (entrambi una. DLL o. File EXE). Il nome specificato è il nome del file del modulo.  
  
 Se la stringa specifica un percorso, ma il file non esiste nella directory specificata, la funzione ha esito negativo.  
  
 Se non viene specificato un percorso e l'estensione viene omesso, l'estensione predefinita. DLL viene aggiunto. Tuttavia, la stringa del nome file può includere un carattere punto finale (.) per indicare che il nome del modulo non dispone di alcuna estensione. Quando viene specificato alcun percorso, la funzione Cerca il file nella sequenza seguente:  
  
-   La directory da cui caricare l'applicazione.  
  
-   La directory corrente.  
  
- **Windows 95 o 98:** la directory di sistema di Windows. **Windows NT:** la directory di sistema di Windows a 32 bit. Il nome di questa directory è SYSTEM32.  
  
- **Solo per Windows NT:** directory di sistema Windows di 16 bit. Non è disponibile alcuna funzione Win32 che consente di ottenere il percorso della directory, ma viene eseguita la ricerca. Il nome di questa directory è SYSTEM.  
  
-   La directory di Windows.  
  
-   Le directory che sono elencate nella variabile di ambiente PATH.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. Se la funzione ha esito negativo, il valore restituito è NULL.  
  
### <a name="remarks"></a>Note  
 Restituisce un handle che può essere usato nel [GetProcAddress](https://msdn.microsoft.com/library/windows/desktop/ms683212) per ottenere l'indirizzo di una funzione DLL. `AfxLoadLibrary` è anche utilizzabile per eseguire il mapping di altri moduli eseguibili.  
  
 Ogni processo di migrazione mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio dei riferimenti viene incrementato ogni volta che `AfxLoadLibrary` viene chiamato e viene decrementato ogni volta `AfxFreeLibrary` viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.  
  
 Assicurarsi di usare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 `LoadLibrary` e `FreeLibrary`) se l'applicazione usa più thread e se dinamicamente carica DLL estensione MFC. Usando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguita quando la DLL di estensione MFC viene caricato e scaricato non danneggiare lo stato complessivo di MFC.  
  
 Usando `AfxLoadLibrary` in un'applicazione richiede il collegamento in modo dinamico la versione DLL di MFC; il file di intestazione per `AfxLoadLibrary`, AFXDLL . h, è solo inclusa se è stata collegata all'applicazione come una DLL MFC. Questo avviene per impostazione predefinita perché è necessario collegare la versione DLL di MFC per utilizzare o creare DLL estensione MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_DLLUser#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]  
[!code-cpp[NVC_MFC_DLLUser#2](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]  
[!code-cpp[NVC_MFC_DLLUser#3](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
   
## <a name="afxmenutearoffmanager"></a> AfxMenuTearOffManager
Puntatore a globale [manager di menu tear-off](cmenutearoffmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CMenuTearOffManager* g_pTearOffMenuManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmenutearoffmanager.h  
   
### <a name="see-also"></a>Vedere anche     
 [Classe CMenuTearOffManager](cmenutearoffmanager-class.md)
 
## <a name="afxmousemanager"></a>  AfxMouseManager
Puntatore a globale [gestore mouse](cmousemanager-class.md).  
   
### <a name="syntax"></a>Sintassi  
```  
CMouseManager* afxMouseManager;  
```  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxmousemanager.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CMouseManager](cmousemanager-class.md)
 

  
##  <a name="afxregisterclass"></a>  AfxRegisterClass  
 Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.  
  
```   
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpWndClass*  
 Puntatore a un [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) struttura che contiene informazioni sulla classe di finestra da registrare. Per altre informazioni su questa struttura, vedere il SDK di Windows.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la classe è registrata. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.  
  
 Nelle compilazioni senza DLL, il `AfxRegisterClass` identificatore viene definito come macro che esegue il mapping alla funzione Windows `RegisterClass`, dal momento che le classi registrate in un'applicazione vengono automaticamente annullate. Se si usa `AfxRegisterClass` invece di `RegisterClass`, il codice può essere usato senza alcuna modifica in un'applicazione sia in una DLL.  
  
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
 *nClassStyle*  
 Specifica lo stile di classe di Windows o combinazione degli stili, creati con OR bit per bit ( **&#124;**) operatore, per la classe della finestra. Per un elenco di stili delle classi, vedere la [WNDCLASS](https://msdn.microsoft.com/library/windows/desktop/ms633576) struttura nel SDK di Windows. Se NULL, i valori predefiniti verranno impostati come indicato di seguito:  
  
-   Imposta lo stile del mouse su CS_DBLCLKS, che invia fare doppio clic su messaggi alla routine della finestra quando l'utente fa doppio clic del mouse.  
  
-   Imposta lo stile della freccia del cursore IDC_ARROW standard di Windows.  
  
-   Imposta il pennello di sfondo su NULL, in modo che la finestra non cancellerà lo sfondo.  
  
-   Imposta l'icona per l'icona del logo Windows standard, flag salire.  
  
 *hCursor*  
 Specifica un handle per la risorsa del cursore venga installato in ogni finestra creata dalla classe della finestra. Se si usa il valore predefinito **0**, si otterrà il cursore IDC_ARROW standard.  
  
 *hbrBackground*  
 Specifica un handle per la risorsa pennello venga installato in ogni finestra creata dalla classe della finestra. Se si usa il valore predefinito **0**, si disporrà di un pennello di sfondo NULL e la finestra, per impostazione predefinita, non cancellerà lo sfondo durante l'elaborazione [WM_ERASEBKGND](/windows/desktop/winmsg/wm-erasebkgnd).  
  
 *hIcon*  
 Specifica un handle per la risorsa icona venga installato in ogni finestra creata dalla classe della finestra. Se si usa il valore predefinito **0**, si otterrà l'icona del logo Windows standard, flag salire.  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome della classe. È possibile passare il nome della classe per il `Create` funzione del membro nel `CWnd` o altri **CWnd -** dalle classi derivate per creare una finestra. Il nome viene generato per la libreria Microsoft Foundation Class.  
  
> [!NOTE]
>  Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, assegnarla a una `CString` variabile.  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class registra automaticamente diverse classi di finestra standard per l'utente. Chiamare questa funzione se si desidera registrare le proprie classi di finestra.  
  
 Il nome registrato per una classe da `AfxRegisterWndClass` dipende esclusivamente dai parametri. Se si chiama `AfxRegisterWndClass` più volte con parametri identici, registra solo una classe alla prima chiamata. Le chiamate successive a `AfxRegisterWndClass` con parametri identici, è sufficiente restituire il nome della classe già registrato.  
  
 Se si chiama `AfxRegisterWndClass` per più classi derivate da CWnd con parametri identici, anziché una classe finestra separata per ogni classe, ogni classe condivide la stessa classe della finestra. Ciò può provocare problemi se viene utilizzato lo stile della classe CS_CLASSDC. Invece di più classi di finestra CS_CLASSDC, si finisce con una classe di finestra CS_CLASSDC e tutte le finestre di C++ che usano tale condivisione di classe nel controller di dominio stesso. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.  
  
 Fare riferimento alla nota tecnica [TN001: registrazione delle classi](../../mfc/tn001-window-class-registration.md) per ulteriori informazioni sulla registrazione delle classi di finestra e `AfxRegisterWndClass` (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#134](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="afxsetperuserregistration"></a>  AfxSetPerUserRegistration  
 Imposta se l'applicazione reindirizza l'accesso al Registro di sistema per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE indica che le informazioni del Registro di sistema viene indirizzate sul nodo HKCU. FALSE indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  

Prima di Windows Vista, applicazioni che accedono al Registro di sistema in genere usato il **HKEY_CLASSES_ROOT** nodo. Tuttavia, con Windows Vista o versioni successive, è necessario eseguire un'applicazione con privilegi elevati in cui scrivere HKCR.  
  
 Questo metodo consente all'applicazione leggere e scrivere nel Registro di sistema senza eseguire con privilegi elevati, reindirizzando l'accesso del Registro di sistema da HKCR in HKCU. Per altre informazioni, vedere [pagine delle proprietà Linker](../../ide/linker-property-pages.md).  
  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da HKCR **HKEY_CURRENT_USER\Software\Classes**. Solo i framework MFC e ATL sono interessati dal reindirizzamento.  
  
 L'implementazione predefinita consente di accedere Registro di sistema in HKCR.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="afxsetresourcehandle"></a>  AfxSetResourceHandle  
 Utilizzare questa funzione per impostare l'handle del HINSTANCE determina dove vengono caricate le risorse predefinite dell'applicazione.  
  
```  
void AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);  
```  
  
### <a name="parameters"></a>Parametri  
 *hInstResource*  
 L'handle di istanza o un modulo per un. File EXE o DLL da cui vengono caricate le risorse dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#135](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  

## <a name="afxshellmanager"></a>  AfxShellManager
Puntatore a globale [gestore della shell](cshellmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CShellManager* afxShellManager;  
```  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxshellmanager. h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CShellManager](cshellmanager-class.md)
  
##  <a name="afxsocketinit"></a>  AfxSocketInit  
 Chiamare questa funzione `CWinApp::InitInstance` sottoposto a override per inizializzare i socket di Windows.  
  
```  
BOOL AfxSocketInit(WSADATA* lpwsaData = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 *lpwsaData*  
 Un puntatore a un [WSADATA](../../mfc/reference/wsadata-structure.md) struttura. Se *lpwsaData* non è uguale a NULL, quindi l'indirizzo del `WSADATA` struttura viene compilata dalla chiamata al metodo `WSAStartup`. Questa funzione assicura anche che `WSACleanup` viene chiamato automaticamente prima che l'applicazione viene terminata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Quando si usa socket MFC in thread secondari in un'applicazione MFC collegato in modo statico, è necessario chiamare `AfxSocketInit` in ogni thread che usa i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AfxSock  

## <a name="afxusertoolsmanager"></a>  AfxUserToolsManager
Puntatore a globale [gestore strumenti utente](cusertoolsmanager-class.md).  
   
### <a name="syntax"></a>Sintassi    
```  
CUserToolsManager* afxUserToolsManager;  
```  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxusertoolsmanager.h  
   
### <a name="see-also"></a>Vedere anche  
 [Classe CUserToolsManager](cusertoolsmanager-class.md)
 
  
##  <a name="afxwininit"></a>  AfxWinInit  
 Questa funzione viene chiamata da MFC-fornito `WinMain` funzione, come parte del [CWinApp](../../mfc/reference/cwinapp-class.md) l'inizializzazione di un'applicazione basata su GUI per l'inizializzazione di MFC.  
  
```  
BOOL AFXAPI AfxWinInit(
    HINSTANCE hInstance,  
    HINSTANCE hPrevInstance,  
    LPTSTR lpCmdLine,  
    int nCmdShow);  
```  
  
### <a name="parameters"></a>Parametri  
 *hInstance*  
 L'handle del modulo attualmente in esecuzione.  
  
 *hPrevInstance*  
 Handle per un'istanza precedente dell'applicazione. Per un'applicazione basata su Win32, questo parametro è sempre **NULL**.  
  
 *lpCmdLine fa*  
 Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.  
  
 *CmdShow*  
 Specifica la modalità visualizzerà la finestra principale di un'applicazione GUI.  
  
### <a name="remarks"></a>Note  
 Per un'applicazione console, che non utilizza MFC-fornito `WinMain` funzione, è necessario chiamare `AfxWinInit` direttamente per inizializzare MFC.  
  
 Se si chiama `AfxWinInit` manualmente, è necessario dichiarare un'istanza di un `CWinApp` classe. Per un'applicazione console, è possibile scegliere di non derivare la propria classe dal `CWinApp` e usare invece un'istanza di `CWinApp` direttamente. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione nell'implementazione di **principale**.  
  
> [!NOTE]
>  Durante la creazione di un contesto di attivazione per un assembly, MFC Usa una risorsa manifesto fornita dal modulo dell'utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per altre informazioni, vedere [supporto per contesti di attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_AfxWinInit#1](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CWinApp](../../mfc/reference/cwinapp-class.md)
