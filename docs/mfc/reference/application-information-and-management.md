---
title: Informazioni sull&quot;applicazione e gestione | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: cc9adde202f211d6e0a536e949b42772f0890ef6
ms.lasthandoff: 02/24/2017

---
# <a name="application-information-and-management"></a>Informazioni sull'applicazione e gestione
Quando si scrive un'applicazione, si crea un singolo [CWinApp](../../mfc/reference/cwinapp-class.md)-oggetto derivato. In alcuni casi, si desidera ottenere informazioni su questo oggetto all'esterno di `CWinApp`-oggetto derivato.  
  
 La libreria Microsoft Foundation Class offre le seguenti funzioni globali che consentono di eseguire queste attività:  
  
### <a name="application-information-and-management-functions"></a>Informazioni sull'applicazione e le funzioni di gestione  
  
|||  
|-|-|  
|[AfxBeginThread](#afxbeginthread)|Crea un nuovo thread.|  
|[AfxEndThread](#afxendthread)|Termina il thread corrente.|  
|[AfxFreeLibrary](#afxfreelibrary)|Decrementa il conteggio dei riferimenti del modulo di libreria a collegamento dinamico (DLL) caricato; Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato.|  
|[AfxGetApp](#afxgetapp)|Restituisce un puntatore all'applicazione dell'unico `CWinApp` oggetto.|  
|[AfxGetAppName](#afxgetappname)|Restituisce una stringa che contiene il nome dell'applicazione.|  
|[AfxGetInstanceHandle](#afxgetinstancehandle)|Restituisce un `HINSTANCE` che rappresenta l'istanza dell'applicazione.|  
|[AfxGetMainWnd](#afxgetmainwnd)|Restituisce un puntatore alla finestra corrente "principale" di un'applicazione non OLE, o la finestra cornice sul posto di un'applicazione server.|  
|[AfxGetPerUserRegistration](#afxgetperuserregistration)|Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxGetResourceHandle](#afxgetresourcehandle)|Restituisce un `HINSTANCE` all'origine della risorse predefinite dell'applicazione. Consente di accedere direttamente alle risorse dell'applicazione.|  
|[AfxGetThread](#afxgetthread)|Recupera un puntatore all'oggetto corrente [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto.|  
|[AfxInitRichEdit](#afxinitrichedit)|Inizializza la versione di controllo per l'applicazione 1.0 rich edit.|  
|[AfxInitRichEdit2](#afxinitrichedit2)|Inizializza la versione 2.0 e successive rich Edit () per l'applicazione di controllo.|  
|[AfxLoadLibrary](#afxloadlibrary)|Esegue il mapping di un modulo DLL e restituisce un handle che può essere utilizzato per ottenere l'indirizzo di una funzione di DLL.|  
|[AfxRegisterClass](#afxregisterclass)|Registra una classe della finestra in una DLL che utilizza MFC.|  
|[AfxRegisterWndClass](#afxregisterwndclass)|Registra una classe di finestra di Windows per integrare quelli registrati automaticamente da MFC.|  
|[AfxSetPerUserRegistration](#afxsetperuserregistration)|Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.|  
|[AfxSetResourceHandle](#afxsetresourcehandle)|Imposta il `HINSTANCE` handle in cui vengono caricate le risorse predefinite dell'applicazione.|  
|[AfxSocketInit](#afxsocketinit)|Chiamato un `CWinApp::InitInstance` sottoposto a override per inizializzare Windows Sockets.|  
|[AfxWinInit](#afxwininit)|Chiamato da MFC fornito `WinMain` funzione, come parte di [CWinApp](../../mfc/reference/cwinapp-class.md) inizializzazione di un'applicazione basata su GUI, inizializzare MFC. Deve essere chiamato direttamente per le applicazioni console che utilizzano MFC.|  
  

  
##  <a name="a-nameafxbeginthreada--afxbeginthread"></a><a name="afxbeginthread"></a>AfxBeginThread  
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
 Punta alla funzione di controllo per il thread di lavoro. Non può essere **NULL**. Questa funzione deve essere dichiarata come segue:  
  
 `UINT __cdecl MyControllingFunction( LPVOID pParam );`  
  
 *pThreadClass*  
 RUNTIME_CLASS di un oggetto derivato da [CWinThread](../../mfc/reference/cwinthread-class.md).  
  
 *pParam*  
 Parametro da passare alla funzione di controllo come indicato nel parametro per la dichiarazione di funzione in `pfnThreadProc`.  
  
 `nPriority`  
 La priorità desiderata del thread. Per un elenco completo e una descrizione delle priorità disponibili, vedere [SetThreadPriority](http://msdn.microsoft.com/library/windows/desktop/ms686277) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `nStackSize`  
 Specifica la dimensione in byte dello stack per il nuovo thread. Se 0, la dimensione dello stack predefinita è il dimensione stack del thread di creazione.  
  
 `dwCreateFlags`  
 Specifica un flag aggiuntivo che controlla la creazione del thread. Questo flag può contenere uno dei due valori:  
  
- **CREATE_SUSPENDED** avviare il thread con un conteggio di sospensione di uno. Utilizzare **CREATE_SUSPENDED** se si desidera inizializzare tutti i dati membro di `CWinThread` dell'oggetto, ad esempio [m_bAutoDelete](../../mfc/reference/cwinthread-class.md#m_bautodelete) o i membri della classe derivata, prima dell'avvio di thread. Una volta completata l'inizializzazione, utilizzare [CWinThread:: ResumeThread](../../mfc/reference/cwinthread-class.md#resumethread) per avviare il thread in esecuzione. Fino a quando non verrà eseguito dal thread `CWinThread::ResumeThread` viene chiamato.  
  
- **0** avviare il thread subito dopo la creazione.  
  
 `lpSecurityAttrs`  
 Punta a un [SECURITY_ATTRIBUTES](http://msdn.microsoft.com/library/windows/desktop/aa379560) struttura che specifica gli attributi di protezione per il thread. Se **NULL**, gli attributi di protezione stesso come thread di creazione verrà utilizzato. Per ulteriori informazioni su tale struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore all'oggetto thread appena creato, o **NULL** se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Il primo formato della `AfxBeginThread` crea un thread di lavoro. La seconda forma crea un thread che può essere utilizzato come un thread dell'interfaccia utente o un thread di lavoro.  
  
 `AfxBeginThread`Crea un nuovo `CWinThread` oggetto, viene chiamato il relativo [CreateThread](../../mfc/reference/cwinthread-class.md#createthread) funzione per avviare l'esecuzione del thread e restituisce un puntatore per il thread. Vengono effettuati controlli durante tutta la procedura per assicurarsi che tutti gli oggetti vengono deallocati in modo corretto avrà esito negativo di qualsiasi parte della creazione. Per terminare il thread, chiamare [AfxEndThread](#afxendthread) all'interno del thread o restituito dalla funzione di controllo del thread di lavoro.  
  
 Multithreading deve essere abilitato dall'applicazione. in caso contrario, questa funzione avrà esito negativo. Per ulteriori informazioni sull'abilitazione di multithreading, vedere [/MD, /MT, /LD (utilizzo della libreria Run-Time)](../../build/reference/md-mt-ld-use-run-time-library.md) in *opzioni del compilatore di Visual C++*.  
  
 Per ulteriori informazioni su `AfxBeginThread`, vedere gli articoli [Multithreading: creazione di thread di lavoro](../../parallel/multithreading-creating-worker-threads.md) e [Multithreading: creazione di thread dell'interfaccia utente](../../parallel/multithreading-creating-user-interface-threads.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [CSocket::Attach](../../mfc/reference/csocket-class.md#attach).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxendthreada--afxendthread"></a><a name="afxendthread"></a>AfxEndThread  
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
  
##  <a name="a-nameafxfreelibrarya--afxfreelibrary"></a><a name="afxfreelibrary"></a>AfxFreeLibrary  
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
  
 Assicurarsi di utilizzare `AfxFreeLibrary` e `AfxLoadLibrary` (anziché le funzioni Win32 **FreeLibrary** e **LoadLibrary**) se l'applicazione utilizza più thread. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguito quando l'estensione DLL viene caricata e scaricata non danneggi lo stato MFC globale.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio per [AfxLoadLibrary](#afxloadlibrary).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
  
##  <a name="a-nameafxgetappa--afxgetapp"></a><a name="afxgetapp"></a>AfxGetApp  
 Il puntatore restituito da questa funzione può essere utilizzato per accedere a informazioni sull'applicazione, ad esempio il codice di invio dei messaggi principale o la finestra in primo piano.  
  
```   
CWinApp* AFXAPI AfxGetApp(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il singolo `CWinApp` oggetto per l'applicazione.  
  
### <a name="remarks"></a>Note  
 Se questo metodo restituisce NULL, questo potrebbe indicare che le applicazioni€™ finestra principale non è stata completamente inizializzata ancora. Potrebbe anche indicare un problema.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#126;](../../mfc/reference/codesnippet/cpp/application-information-and-management_1.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxgetappnamea--afxgetappname"></a><a name="afxgetappname"></a>AfxGetAppName  
 La stringa restituita da questa funzione utilizzabile per i messaggi di diagnostica o come radice per i nomi di stringa temporanea.  
  
```   
LPCTSTR AFXAPI AfxGetAppName(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[127 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_2.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxgetinstancehandlea--afxgetinstancehandle"></a><a name="afxgetinstancehandle"></a>AfxGetInstanceHandle  
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
  
##  <a name="a-nameafxgetmainwnda--afxgetmainwnd"></a><a name="afxgetmainwnd"></a>AfxGetMainWnd  
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
 [!code-cpp[NVC_MFCWindowing&#129;](../../mfc/reference/codesnippet/cpp/application-information-and-management_4.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxgetperuserregistrationa--afxgetperuserregistration"></a><a name="afxgetperuserregistration"></a>AfxGetPerUserRegistration  
 Utilizzare questa funzione per determinare se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
BOOL AFXAPI AfxGetPerUserRegistration();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER\Software\Classes**. Il reindirizzamento sono interessati solo i framework MFC e ATL.  
  
 Per modificare se l'applicazione reindirizza l'accesso del Registro di sistema, utilizzare [AfxSetPerUserRegistration](#afxsetperuserregistration).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="a-nameafxgetresourcehandlea--afxgetresourcehandle"></a><a name="afxgetresourcehandle"></a>AfxGetResourceHandle  
 Utilizzare il `HINSTANCE` handle restituito da questa funzione per accedere alle risorse dell'applicazione direttamente, ad esempio, nelle chiamate alla funzione Windows **FindResource**.  
  
```   
extern HINSTANCE  AfxGetResourceHandle(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `HINSTANCE` handle in cui vengono caricate le risorse predefinite dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#130;](../../mfc/reference/codesnippet/cpp/application-information-and-management_5.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxgetthreada--afxgetthread"></a><a name="afxgetthread"></a>AfxGetThread  
 Chiamare questa funzione per ottenere un puntatore per il [CWinThread](../../mfc/reference/cwinthread-class.md) oggetto che rappresenta il thread attualmente in esecuzione.  
  
```   
CWinThread* AfxGetThread(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore per il thread attualmente in esecuzione. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Deve essere chiamato dall'interno del thread desiderato.  
  
> [!NOTE]
>  Se si trasferisce una chiamata di progetto MFC `AfxGetThread` dalle versioni di Visual C++ 4.2, 5.0 o 6.0, `AfxGetThread` chiamate [AfxGetApp](#afxgetapp) se non viene trovato alcun thread. In Visual c++ .NET e versioni successive, `AfxGetThread` restituisce **NULL** se è stato trovato alcun thread. Se si desidera che il thread dell'applicazione, è necessario chiamare `AfxGetApp`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#132;](../../mfc/reference/codesnippet/cpp/application-information-and-management_6.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxinitrichedita--afxinitrichedit"></a><a name="afxinitrichedit"></a>AfxInitRichEdit  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 1.0) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit(); 
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene fornita per compatibilità con le versioni precedenti. Le applicazioni create con Visual C++ .NET e un utilizzo successivo [AfxInitRichEdit2](#afxinitrichedit2).  
  
 `AfxInitRichEdit`Carica RICHED32. DLL per inizializzare la versione 1.0 di controllo rich edit. Per utilizzare versioni 2.0 e 3.0 del controllo rich edit, RICHED20. DLL deve essere caricato. Questa operazione viene eseguita con una chiamata a [AfxInitRichEdit2](#afxinitrichedit2). Se si dispone di risorse finestra di dialogo con controllo rich edit creato prima di Visual C++ .NET, i controlli rich edit sono automaticamente la versione 1.0. I controlli rich edit inseriti utilizzando l'Editor di risorse di Visual C++ .NET sono versione 2.0.  
  
 Per aggiornare i controlli di modifica avanzate nelle applicazioni Visual C++ esistenti alla versione 2.0, aprire il. File RC come testo, modificare il nome della classe di ogni controllo rich edit da "RICHEDIT" da "RichEdit20a". Quindi sostituire la chiamata a `AfxInitRichEdit` con `AfxInitRichEdit2`.  
  
 Questa funzione inizializza la libreria di controlli comuni, anche se la libreria non è già stata inizializzata per il processo. Se si utilizza il controllo rich edit direttamente dall'applicazione MFC, è necessario chiamare questa funzione per garantire che MFC è stato correttamente inizializzato il runtime del controllo rich edit. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxinitrichedit2a--afxinitrichedit2"></a><a name="afxinitrichedit2"></a>AfxInitRichEdit2  
 Chiamare questa funzione per inizializzare il controllo rich edit (versione 2.0 e versioni successive) per l'applicazione.  
  
```   
BOOL AFXAPI AfxInitRichEdit2(); 
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per il caricamento di RICHED20. Controllo di modifica DLL e inizializzare la versione 2.0 di rich. Se si chiama il metodo Create della [CRichEditCtrl](../../mfc/reference/cricheditctrl-class.md), [CRichEditView](../../mfc/reference/cricheditview-class.md), o [CRichEditDoc](../../mfc/reference/cricheditdoc-class.md), in genere non è necessario chiamare questa funzione, ma in alcuni casi potrebbe essere necessario.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxloadlibrarya--afxloadlibrary"></a><a name="afxloadlibrary"></a>AfxLoadLibrary  
 Utilizzare `AfxLoadLibrary` per eseguire il mapping di un modulo DLL.  
  
```   
HINSTANCE AFXAPI AfxLoadLibrary(LPCTSTR lpszModuleName); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpszModuleName*  
 Punta a una stringa con terminazione null che contiene il nome del modulo (entrambi una. DLL o. File EXE). Il nome specificato è il nome del file del modulo.  
  
 Se la stringa specifica un percorso, ma il file non esiste nella directory specificata, la funzione ha esito negativo.  
  
 Se non è specificato un percorso e l'estensione viene omesso, l'estensione predefinita. DLL viene aggiunto. Tuttavia, la stringa di nome file può includere un carattere punto finale (.) per indicare che il nome del modulo non ha alcuna estensione. Quando viene specificato alcun percorso, la funzione Cerca il file nella sequenza seguente:  
  
-   La directory da cui caricare l'applicazione.  
  
-   La directory corrente.  
  
- **Windows 95/98:** la directory di sistema di Windows. **Windows NT:** la directory di sistema di Windows a 32 bit. Il nome di questa directory è SYSTEM32.  
  
- **Solo Windows NT:** directory di sistema Windows di 16 bit. Non prevede alcuna funzione di Win32 che consente di ottenere il percorso della directory, ma viene eseguita la ricerca. Il nome di questa directory è SYSTEM.  
  
-   La directory di Windows.  
  
-   Le directory in cui sono elencate nella variabile di ambiente PATH.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è un handle per il modulo. Se la funzione ha esito negativo, il valore restituito è NULL.  
  
### <a name="remarks"></a>Note  
 Restituisce un handle che può essere utilizzato in [GetProcAddress](http://msdn.microsoft.com/library/windows/desktop/ms683212) per ottenere l'indirizzo di una funzione DLL. `AfxLoadLibrary`può inoltre essere utilizzato per associare altri moduli eseguibile.  
  
 Ogni processo mantiene un conteggio dei riferimenti per ogni modulo di libreria caricato. Questo conteggio dei riferimenti viene incrementato ogni volta che `AfxLoadLibrary` viene chiamato e viene decrementato ogni volta che `AfxFreeLibrary` viene chiamato. Quando il conteggio dei riferimenti arriva a zero, il modulo viene disassociato dallo spazio degli indirizzi del processo chiamante e l'handle non è più valido.  
  
 Assicurarsi di utilizzare `AfxLoadLibrary` e `AfxFreeLibrary` (anziché le funzioni Win32 **LoadLibrary** e **FreeLibrary**) se l'applicazione utilizza più thread e carica una DLL di estensione. Utilizzando `AfxLoadLibrary` e `AfxFreeLibrary` assicura che il codice di avvio e arresto del sistema che viene eseguito quando la DLL di estensione viene caricato e scaricato non danneggi lo stato MFC globale.  
  
 Utilizzando `AfxLoadLibrary` in un'applicazione richiede di collegamento dinamico alla versione DLL di MFC; il file di intestazione per `AfxLoadLibrary`, AFXDLL . h, è incluso se è collegato all'applicazione come una DLL MFC. È per impostazione predefinita poiché è necessario collegare la versione DLL di MFC per utilizzare o creare DLL di estensione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_DLLUser n.&1;](../../mfc/reference/codesnippet/cpp/application-information-and-management_7.cpp)]  
[!code-cpp[NVC_MFC_DLLUser n.&2;](../../mfc/reference/codesnippet/cpp/application-information-and-management_8.cpp)]  
[!code-cpp[NVC_MFC_DLLUser n.&3;](../../mfc/reference/codesnippet/cpp/application-information-and-management_9.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDLL . h  
   
  
##  <a name="a-nameafxregisterclassa--afxregisterclass"></a><a name="afxregisterclass"></a>AfxRegisterClass  
 Utilizzare questa funzione per registrare le classi di finestra in una DLL che utilizza MFC.  
  
```   
BOOL AFXAPI AfxRegisterClass(WNDCLASS* lpWndClass); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpWndClass*  
 Puntatore a un [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) struttura contenente informazioni sulla classe di finestra da registrare. Per ulteriori informazioni su tale struttura, vedere il [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la classe è registrata correttamente; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se si utilizza questa funzione, viene automaticamente annullata la registrazione della classe quando la DLL viene scaricata.  
  
 Nelle compilazioni senza DLL, il `AfxRegisterClass` identificatore viene definito come macro che esegue il mapping alla funzione Windows **RegisterClass**, dal momento che le classi registrate in un'applicazione viene automaticamente annullata la registrazione. Se si utilizza `AfxRegisterClass` anziché **RegisterClass**, il codice può essere utilizzato senza alcuna modifica in un'applicazione e in una DLL.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_DLL N.&3;](../../atl-mfc-shared/codesnippet/cpp/application-information-and-management_10.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxregisterwndclassa--afxregisterwndclass"></a><a name="afxregisterwndclass"></a>AfxRegisterWndClass  
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
 Specifica lo stile di classe di Windows o la combinazione di stili, creato tramite l'OR ( **|**) (operatore), per la classe della finestra. Per un elenco di stili di classe, vedere il [WNDCLASS](http://msdn.microsoft.com/library/windows/desktop/ms633576) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Se **NULL**, le impostazioni predefinite verranno impostate come segue:  
  
-   Imposta lo stile del mouse su **CS_DBLCLKS**, che invia fare doppio clic su messaggi alla routine della finestra quando l'utente fa doppio clic.  
  
-   Imposta lo stile del cursore sulla freccia per lo standard di Windows **IDC_ARROW**.  
  
-   Imposta il pennello di sfondo su **NULL**, in modo che la finestra non cancellerà lo sfondo.  
  
-   Imposta l'icona dell'icona del logo Windows standard, flag di un processo.  
  
 `hCursor`  
 Specifica un handle per la risorsa di cursore per essere installato in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, si otterrà lo standard **IDC_ARROW** cursore.  
  
 *hbrBackground*  
 Specifica un handle per la risorsa pennello da installare in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, si disporrà di un **NULL** pennello di sfondo e saranno finestra, per impostazione predefinita, non cancella lo sfondo durante l'elaborazione [WM_ERASEBKGND](http://msdn.microsoft.com/library/windows/desktop/ms648055).  
  
 `hIcon`  
 Specifica un handle per la risorsa dell'icona per l'installazione in ogni finestra creata dalla classe di finestra. Se si utilizza il valore predefinito di **0**, si otterrà l'icona del logo Windows standard, flag di un processo.  
  
### <a name="return-value"></a>Valore restituito  
 Stringa con terminazione null contenente il nome della classe. È possibile passare il nome della classe per il **crea** funzione membro in `CWnd` o altri **CWnd -**dalle classi derivate per creare una finestra. Il nome viene generato per la libreria Microsoft Foundation Class.  
  
> [!NOTE]
>  Il valore restituito è un puntatore a un buffer statico. Per salvare questa stringa, assegnarlo a un `CString` variabile.  
  
### <a name="remarks"></a>Note  
 La libreria Microsoft Foundation Class registra automaticamente diverse classi di finestra standard per l'utente. Chiamare questa funzione se si desidera registrare le proprie classi di finestra.  
  
 Il nome registrato per una classe da `AfxRegisterWndClass` dipende esclusivamente dai parametri. Se si chiama `AfxRegisterWndClass` più volte con parametri identici, registra solo una classe alla prima chiamata. Le chiamate successive a `AfxRegisterWndClass` con parametri identici, è sufficiente tornare classname già registrato.  
  
 Se si chiama `AfxRegisterWndClass` per più classi derivate da CWnd con parametri identici, anziché una classe finestra separata per ogni classe, ogni classe condivide la stessa classe della finestra. Ciò può provocare problemi se il **CS_CLASSDC** viene utilizzato lo stile di classe. Anziché più **CS_CLASSDC** classi finestra, si finisce con uno **CS_CLASSDC** classe della finestra e tutte le finestre di C++ che utilizzano che classe condividono il controller di dominio stesso. Per evitare questo problema, chiamare [AfxRegisterClass](#afxregisterclass) per registrare la classe.  
  
 Fare riferimento alla nota tecnica [TN001: registrazione delle classi](../../mfc/tn001-window-class-registration.md) per ulteriori informazioni sulla registrazione delle classi e `AfxRegisterWndClass` (funzione).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#134; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/application-information-and-management_11.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxsetperuserregistrationa--afxsetperuserregistration"></a><a name="afxsetperuserregistration"></a>AfxSetPerUserRegistration  
 Imposta se l'applicazione reindirizza l'accesso al registro per il **HKEY_CURRENT_USER** ( **HKCU**) nodo.  
  
```  
void AFXAPI AfxSetPerUserRegistration(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE`indica che le informazioni del Registro di sistema viene indirizzate al **HKCU** nodo; `FALSE` indica che l'applicazione scrive le informazioni del Registro di sistema per il nodo predefinito. Il nodo di valore predefinito è **HKEY_CLASSES_ROOT** ( **HKCR**).  
  
### <a name="remarks"></a>Note  
 Prima di [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], utilizzano le applicazioni che accedono in genere il Registro di sistema di **HKEY_CLASSES_ROOT** nodo. Tuttavia, con [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], è necessario eseguire un'applicazione con privilegi elevati per scrivere in **HKCR**.  
  
 Questo metodo consente all'applicazione leggere e scrivere nel Registro di sistema senza eseguire con privilegi elevati mediante il reindirizzamento di accesso del Registro di sistema da **HKCR** a **HKCU**. Per ulteriori informazioni, vedere [pagine delle proprietà Linker](../../ide/linker-property-pages.md).  
  
 Se si abilita il reindirizzamento del Registro di sistema, il framework reindirizza l'accesso da **HKCR** a **HKEY_CURRENT_USER\Software\Classes**. Il reindirizzamento sono interessati solo i framework MFC e ATL.  
  
 L'implementazione predefinita di accede al Registro di sistema in **HKCR**.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxstat_.h    
  
##  <a name="a-nameafxsetresourcehandlea--afxsetresourcehandle"></a><a name="afxsetresourcehandle"></a>AfxSetResourceHandle  
 Utilizzare questa funzione per impostare il `HINSTANCE` handle che determina in cui vengono caricate le risorse predefinite dell'applicazione.  
  
```  
 
void  
AFXAPI AfxSetResourceHandle(HINSTANCE hInstResource);  
```  
  
### <a name="parameters"></a>Parametri  
 `hInstResource`  
 L'handle di istanza o un modulo per un. File EXE o DLL da cui vengono caricate le risorse dell'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#135;](../../mfc/reference/codesnippet/cpp/application-information-and-management_12.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
  
##  <a name="a-nameafxsocketinita--afxsocketinit"></a><a name="afxsocketinit"></a>AfxSocketInit  
 Chiamare questa funzione di `CWinApp::InitInstance` sottoposto a override per inizializzare Windows Sockets.  
  
```  
 
BOOL  
AfxSocketInit(WSADATA* lpwsaData = NULL);  
```  
  
### <a name="parameters"></a>Parametri  
 `lpwsaData`  
 Un puntatore a un [WSADATA](../../mfc/reference/wsadata-structure.md) struttura. Se `lpwsaData` non è uguale a `NULL`, quindi l'indirizzo del `WSADATA` struttura viene compilata tramite la chiamata a `WSAStartup`. Questa funzione assicura inoltre che `WSACleanup` viene chiamato automaticamente prima che l'applicazione viene terminata.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la funzione ha esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Quando l'utilizzo di MFC socket in thread secondari in un'applicazione MFC collegata staticamente, è necessario chiamare `AfxSocketInit` in ogni thread che utilizza i socket per inizializzare le librerie di socket. Per impostazione predefinita, `AfxSocketInit` viene chiamato solo nel thread principale.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AfxSock  
  
##  <a name="a-nameafxwininita--afxwininit"></a><a name="afxwininit"></a>AfxWinInit  
 Questa funzione viene chiamata da MFC fornito `WinMain` funzione, come parte di [CWinApp](../../mfc/reference/cwinapp-class.md) inizializzazione di un'applicazione basata su GUI, inizializzare MFC.  
  
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
  
 Se si chiama `AfxWinInit` autonomamente, è necessario dichiarare un'istanza di un `CWinApp` (classe). Per un'applicazione console, è possibile scegliere di non derivare la propria classe da `CWinApp` e utilizzare un'istanza di `CWinApp` direttamente. Questa tecnica è appropriata se si decide di lasciare tutte le funzionalità per l'applicazione per l'implementazione di **principale**.  
  
> [!NOTE]
>  Quando crea un contesto di attivazione per un assembly, MFC utilizza una risorsa manifesto fornita dal modulo dell'utente. Il contesto di attivazione viene creato in `AfxWinInit`. Per ulteriori informazioni, vedere [il supporto per contesti di attivazione nello stato del modulo MFC](../../mfc/support-for-activation-contexts-in-the-mfc-module-state.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_AfxWinInit n.&1;](../../mfc/reference/codesnippet/cpp/application-information-and-management_13.cpp)]  

### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXWIN. h  
    
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [CWinApp (classe)](../../mfc/reference/cwinapp-class.md)

