---
title: CWinApp (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinApp
- hInstance
dev_langs:
- C++
helpviewer_keywords:
- CWinApp class
- application objects [C++]
- HINSTANCE
- main object
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
caps.latest.revision: 27
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
ms.openlocfilehash: 292816c8f753a7b47b563a3fcd0fa336e08acd6a
ms.lasthandoff: 02/24/2017

---
# <a name="cwinapp-class"></a>CWinApp (classe)
Classe di base da cui deriva un oggetto applicazione Windows.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWinApp : public CWinThread  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::CWinApp](#cwinapp)|Costruisce un oggetto `CWinApp`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp:: AddDocTemplate](#adddoctemplate)|Aggiunge un modello di documento all'elenco di modelli di documento disponibile dell'applicazione.|  
|[CWinApp::AddToRecentFileList](#addtorecentfilelist)|Aggiunge un nome di file all'elenco di file utilizzato di recente (MRU).|  
|[CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback)|Chiamato dal framework quando l'applicazione viene chiusa in modo imprevisto.|  
|[CWinApp::CloseAllDocuments](#closealldocuments)|Chiude tutti i documenti aperti.|  
|[CWinApp::CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante.|  
|[CWinApp::DelRegTree](#delregtree)|Elimina una chiave specificata e tutte le relative sottochiavi.|  
|[CWinApp::DoMessageBox](#domessagebox)|Implementa [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per l'applicazione.|  
|[CWinApp::DoWaitCursor](#dowaitcursor)|Consente di attivare e disattivare il cursore di attesa.|  
|[CWinApp::EnableD2DSupport](#enabled2dsupport)|Abilita applicazione `D2D` supportano. Chiamare questo metodo prima dell'inizializzazione della finestra principale.|  
|[CWinApp::EnableHtmlHelp](#enablehtmlhelp)|Implementa HTMLHelp per l'applicazione, anziché WinHelp.|  
|[CWinApp::EnableTaskbarInteraction](#enabletaskbarinteraction)|Attiva l'interazione della barra delle applicazioni.|  
|[CWinApp:: ExitInstance](#exitinstance)|Eseguire l'override per eseguire la pulizia quando l'applicazione termina.|  
|[CWinApp::GetApplicationRecoveryParameter](#getapplicationrecoveryparameter)|Recupera il parametro di input per il metodo di ripristino dell'applicazione.|  
|[CWinApp::GetApplicationRecoveryPingInterval](#getapplicationrecoverypinginterval)|Restituisce l'intervallo di tempo che Gestione riavvio in attesa per la funzione di callback di ripristino da restituire.|  
|[CWinApp::GetApplicationRestartFlags](#getapplicationrestartflags)|Restituisce i flag per il gestore di riavvio.|  
|[CWinApp::GetAppRegistryKey](#getappregistrykey)|Chiave restituisce per HKEY_CURRENT_USER\\\RegistryKey\ProfileName "Software".|  
|[CWinApp::GetDataRecoveryHandler](#getdatarecoveryhandler)|Ottiene il gestore di ripristino dei dati per questa istanza dell'applicazione.|  
|[CWinApp::GetFirstDocTemplatePosition](#getfirstdoctemplateposition)|Recupera la posizione del primo modello di documento.|  
|[CWinApp::GetHelpMode](#gethelpmode)|Recupera il tipo di Guida utilizzata dall'applicazione.|  
|[CWinApp::GetNextDocTemplate](#getnextdoctemplate)|Recupera la posizione di un modello di documento. Può essere utilizzato in modo ricorsivo.|  
|[CWinApp::GetPrinterDeviceDefaults](#getprinterdevicedefaults)|Recupera le impostazioni predefinite dispositivo stampante.|  
|[CWinApp::GetProfileBinary](#getprofilebinary)|Recupera i dati binari da una voce dell'applicazione. File INI.|  
|[CWinApp::GetProfileInt](#getprofileint)|Recupera un numero intero da una voce dell'applicazione. File INI.|  
|[CWinApp::GetProfileString](#getprofilestring)|Recupera una stringa da una voce dell'applicazione. File INI.|  
|[CWinApp::GetSectionKey](#getsectionkey)|Chiave restituisce per HKEY_CURRENT_USER\\\RegistryKey\AppName\lpszSection "Software".|  
|[CWinApp::HideApplication](#hideapplication)|Nasconde l'applicazione prima di chiudere tutti i documenti.|  
|[CWinApp::HtmlHelp](#htmlhelp)|Chiamate di `HTMLHelp` funzione di Windows.|  
|[CWinApp:: InitInstance](#initinstance)|Eseguire l'override per eseguire l'inizializzazione dell'istanza di Windows, ad esempio la creazione di oggetti finestra.|  
|[CWinApp::IsTaskbarInteractionEnabled](#istaskbarinteractionenabled)|Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitato.|  
|[CWinApp::LoadCursor](#loadcursor)|Carica una risorsa del cursore.|  
|[CWinApp::LoadIcon](#loadicon)|Carica una risorsa icona.|  
|[CWinApp::LoadOEMCursor](#loadoemcursor)|Carica un OEM di Windows predefinite del cursore che il **OCR_** costanti specificano in WINDOWS. H.|  
|[CWinApp::LoadOEMIcon](#loadoemicon)|Carica un'icona predefinita di Windows OEM che il **OIC_** costanti specificano in WINDOWS. H.|  
|[CWinApp::LoadStandardCursor](#loadstandardcursor)|Carica un Windows predefiniti cursore che il **IDC _** costanti specificano in WINDOWS. H.|  
|[CWinApp::LoadStandardIcon](#loadstandardicon)|Carica un'icona predefinita di Windows che il **IDI_** costanti specificano in WINDOWS. H.|  
|[CWinApp::OnDDECommand](#onddecommand)|Chiamato dal framework in risposta a un dynamic data exchange (DDE) eseguire il comando.|  
|[CWinApp](#onidle)|Eseguire l'override per l'elaborazione e tempo di inattività specifici dell'applicazione.|  
|[CWinApp:: OpenDocumentFile](#opendocumentfile)|Chiamato dal framework per aprire un documento da un file.|  
|[CWinApp::ParseCommandLine](#parsecommandline)|Analizza i singoli parametri e i flag nella riga di comando.|  
|[CWinApp:: PreTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CWinApp::ProcessMessageFilter](#processmessagefilter)|Intercetta determinati messaggi prima che raggiungano l'applicazione.|  
|[CWinApp::ProcessShellCommand](#processshellcommand)|Gestisce i flag e gli argomenti della riga di comando.|  
|[CWinApp::ProcessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate dal messaggio dell'applicazione e i gestori di comando.|  
|[CWinApp::Register](#register)|Esegue la registrazione personalizzata.|  
|[CWinApp::RegisterWithRestartManager](#registerwithrestartmanager)|Registra l'applicazione con il gestore di riavvio.|  
|[CWinApp::ReopenPreviousFilesAtRestart](#reopenpreviousfilesatrestart)|Determina se Gestione riavvio riapre i file che erano aperti quando l'applicazione è stato terminato in modo imprevisto.|  
|[CWinApp::RestartInstance](#restartinstance)|Gestisce il riavvio di un'applicazione avviato dal gestore di riavvio.|  
|[CWinApp::RestoreAutosavedFilesAtRestart](#restoreautosavedfilesatrestart)|Determina se Gestione riavvio consente di ripristinare i file più quando si riavvia l'applicazione.|  
|[CWinApp:: Run](#run)|Esegue il ciclo di messaggi predefinito. Eseguire l'override per personalizzare il ciclo di messaggi.|  
|[CWinApp::RunAutomated](#runautomated)|Verifica la riga di comando dell'applicazione per la **/Automation** (opzione). Obsoleta. Utilizzare invece il valore in [CCommandLineInfo::m_bRunAutomated](../../mfc/reference/ccommandlineinfo-class.md#m_brunautomated) dopo la chiamata [ParseCommandLine](#parsecommandline).|  
|[CWinApp::RunEmbedded](#runembedded)|Verifica la riga di comando dell'applicazione per la **/incorporamento** (opzione). Obsoleta. Utilizzare invece il valore in [CCommandLineInfo::m_bRunEmbedded](../../mfc/reference/ccommandlineinfo-class.md#m_brunembedded) dopo la chiamata [ParseCommandLine](#parsecommandline).|  
|[CWinApp::SaveAllModified](#saveallmodified)|Richiede all'utente di salvare i documenti modificati tutti.|  
|[CWinApp::SelectPrinter](#selectprinter)|Seleziona una stampante indicata in precedenza da un utente tramite una finestra di dialogo Stampa.|  
|[CWinApp::SetHelpMode](#sethelpmode)|Imposta e inizializza il tipo di Guida utilizzata dall'applicazione.|  
|[CWinApp::SupportsApplicationRecovery](#supportsapplicationrecovery)|Determina se Gestione riavvio consente di recuperare un'applicazione a cui è stato terminato in modo imprevisto.|  
|[CWinApp::SupportsAutosaveAtInterval](#supportsautosaveatinterval)|Determina se la funzionalità di Gestione riavvio aprire i documenti a intervalli regolari.|  
|[CWinApp::SupportsAutosaveAtRestart](#supportsautosaveatrestart)|Determina se la funzionalità di Gestione riavvio qualsiasi aprire documenti quando l'applicazione viene riavviata.|  
|[CWinApp::SupportsRestartManager](#supportsrestartmanager)|Determina se l'applicazione supporta la gestione di riavvio.|  
|[CWinApp::Unregister](#unregister)|Annulla la registrazione di tutti gli elementi noti per essere registrati tramite il `CWinApp` oggetto.|  
|[CWinApp::WinHelp](#winhelp)|Chiamate di `WinHelp` funzione di Windows.|  
|[CWinApp::WriteProfileBinary](#writeprofilebinary)|Scrive i dati binari a una voce dell'applicazione. File INI.|  
|[CWinApp:: Writeprofileint](#writeprofileint)|Scrive un intero a una voce dell'applicazione. File INI.|  
|[CWinApp::WriteProfileString](#writeprofilestring)|Scrive una stringa a una voce dell'applicazione. File INI.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::EnableShellOpen](#enableshellopen)|Consente all'utente di aprire i file di dati da File di gestione di Windows.|  
|[CWinApp::LoadStdProfileSettings](#loadstdprofilesettings)|Standard di caricamento. Le impostazioni del file INI e abilita la MRU file funzionalità dell'elenco.|  
|[CWinApp::OnContextHelp](#oncontexthelp)|Gestisce MAIUSC + F1 all'interno dell'applicazione.|  
|[CWinApp::OnFileNew](#onfilenew)|Implementa il `ID_FILE_NEW` comando.|  
|[CWinApp::OnFileOpen](#onfileopen)|Implementa il `ID_FILE_OPEN` comando.|  
|[CWinApp::OnFilePrintSetup](#onfileprintsetup)|Implementa il `ID_FILE_PRINT_SETUP` comando.|  
|[CWinApp::OnHelp](#onhelp)|Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).|  
|[CWinApp::OnHelpFinder](#onhelpfinder)|Gestisce i comandi `ID_HELP_FINDER` e `ID_DEFAULT_HELP`.|  
|[CWinApp::OnHelpIndex](#onhelpindex)|Gestisce il comando `ID_HELP_INDEX` e fornisce un argomento della Guida predefinito.|  
|[CWinApp::OnHelpUsing](#onhelpusing)|Gestisce il comando `ID_HELP_USING`.|  
|[CWinApp::RegisterShellFileTypes](#registershellfiletypes)|Registra i tipi di documenti dell'applicazione con la gestione di File di Windows.|  
|[CWinApp::SetAppID](#setappid)|Imposta in modo esplicito l'ID modello utente dell'applicazione per l'applicazione. Questo metodo deve essere chiamato prima che l'interfaccia utente viene presentato all'utente (il metodo migliore è il costruttore dell'applicazione).|  
|[CWinApp::SetRegistryKey](#setregistrykey)|Fa sì che le impostazioni dell'applicazione da archiviare nel Registro di sistema anziché. File INI.|  
|[CWinApp::UnregisterShellFileTypes](#unregistershellfiletypes)|Annulla la registrazione dei tipi di documenti dell'applicazione con la gestione di File di Windows.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::m_bHelpMode](#m_bhelpmode)|Indica se l'utente è in modalità di contesto della Guida in linea (in genere richiamata con MAIUSC + F1).|  
|[CWinApp::m_eHelpType](#m_ehelptype)|Specifica il tipo di Guida utilizzata dall'applicazione.|  
|[CWinApp::m_hInstance](#m_hinstance)|Identifica l'istanza corrente dell'applicazione.|  
|[CWinApp:: M_lpcmdline](#m_lpcmdline)|Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.|  
|[CWinApp::m_nCmdShow](#m_ncmdshow)|Specifica la modalità di essere visualizzata inizialmente la finestra.|  
|[CWinApp::m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|  
|[CWinApp::m_pszAppID](#m_pszappid)|Modello di ID utente dell'applicazione.|  
|[CWinApp::m_pszAppName](#m_pszappname)|Specifica il nome dell'applicazione.|  
|[CWinApp::m_pszExeName](#m_pszexename)|Il nome del modulo dell'applicazione.|  
|[CWinApp::m_pszHelpFilePath](#m_pszhelpfilepath)|Percorso di file della Guida dell'applicazione.|  
|[CWinApp::m_pszProfileName](#m_pszprofilename)|L'applicazione. Nome del file INI.|  
|[CWinApp::m_pszRegistryKey](#m_pszregistrykey)|Utilizzato per determinare la chiave del Registro di sistema completo per l'archiviazione delle impostazioni del profilo dell'applicazione.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::m_dwRestartManagerSupportFlags](#m_dwrestartmanagersupportflags)|Flag che determinano il comportamento di Gestione riavvio.|  
|[CWinApp::m_nAutosaveInterval](#m_nautosaveinterval)|Il periodo di tempo in millisecondi tra funzionalità.|  
|[CWinApp::m_pDataRecoveryHandler](#m_pdatarecoveryhandler)|Puntatore al gestore di ripristino di dati per l'applicazione.|  
  
## <a name="remarks"></a>Note  
 Un oggetto applicazione fornisce funzioni membro per l'inizializzazione dell'applicazione (e ogni istanza) e per l'esecuzione dell'applicazione.  
  
 Ogni applicazione che utilizza le classi Microsoft Foundation può contenere solo un oggetto derivato da `CWinApp`. Questo oggetto viene creato durante la creazione oggetti globali C++ e già disponibile quando si chiama Windows il `WinMain` funzione, che viene fornito dalla libreria Microsoft Foundation Class. Dichiarare una classe derivata `CWinApp` oggetto a livello globale.  
  
 Quando si deriva una classe dell'applicazione da `CWinApp`, eseguire l'override di [InitInstance](#initinstance) funzione membro per creare un oggetto finestra principale dell'applicazione.  
  
 Oltre al `CWinApp` funzioni membro, la libreria Microsoft Foundation Class offre le seguenti funzioni globali per accedere a di `CWinApp` oggetto e altre informazioni globali:  
  
- [AfxGetApp](application-information-and-management.md#afxgetapp) Ottiene un puntatore per il `CWinApp` oggetto.  
  
- [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle) Ottiene un handle per l'istanza dell'applicazione corrente.  
  
- [AfxGetResourceHandle](application-information-and-management.md#afxgetresourcehandle) Ottiene un handle per le risorse dell'applicazione.  
  
- [AfxGetAppName](application-information-and-management.md#afxgetappname) Ottiene un puntatore a una stringa contenente il nome dell'applicazione. In alternativa, se si dispone di un puntatore per il `CWinApp` , utilizzare `m_pszExeName` per ottenere il nome dell'applicazione.  
  
 Vedere [CWinApp: classe Application](../../mfc/cwinapp-the-application-class.md) per ulteriori informazioni sui `CWinApp` (classe), tra cui una panoramica delle operazioni seguenti:  
  
- `CWinApp`-derivato codice scritto per la creazione guidata applicazione.  
  
- `CWinApp`del ruolo nella sequenza di esecuzione dell'applicazione.  
  
- `CWinApp`'s le implementazioni delle funzioni membro predefinito.  
  
- `CWinApp`della chiave sottoponibili a override.  
  
 Il **m_hPrevInstance** membro dati non esiste più. Per informazioni sul rilevamento di un'istanza precedente di `CWinApp`, vedere l'articolo della Knowledge Base "Come identificare una precedente istanza di un'applicazione" (KB106385) all'indirizzo [http://support.microsoft.com/default.aspxscid=kb;en-us;106385](http://support.microsoft.com/default.aspxscid=kb;en-us;106385).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 `CWinApp`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="a-nameadddoctemplatea--cwinappadddoctemplate"></a><a name="adddoctemplate"></a>CWinApp:: AddDocTemplate  
 Chiamare questa funzione membro per aggiungere un modello di documento all'elenco dei modelli di documento disponibili che gestisce l'applicazione.  
  
```  
void AddDocTemplate(CDocTemplate* pTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `pTemplate`  
 Un puntatore per il `CDocTemplate` da aggiungere.  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere tutti i modelli a un'applicazione documento prima di chiamare [RegisterShellFileTypes](#registershellfiletypes).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#35;](../../mfc/reference/codesnippet/cpp/cwinapp-class_1.cpp)]  
  
##  <a name="a-nameaddtorecentfilelista--cwinappaddtorecentfilelist"></a><a name="addtorecentfilelist"></a>CWinApp::AddToRecentFileList  
 Chiamare questa funzione membro da aggiungere `lpszPathName` all'elenco di file MRU.  
  
```  
virtual void AddToRecentFileList(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Percorso del file.  
  
### <a name="remarks"></a>Note  
 È necessario chiamare il [LoadStdProfileSettings](#loadstdprofilesettings) funzione membro per caricare l'elenco dei file MRU corrente prima di utilizzare questa funzione membro.  
  
 Il framework chiama questa funzione membro quando apre un file o si esegue il comando Salva per salvare un file con un nuovo nome.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#36;](../../mfc/reference/codesnippet/cpp/cwinapp-class_2.cpp)]  
  
##  <a name="a-nameapplicationrecoverycallbacka--cwinappapplicationrecoverycallback"></a><a name="applicationrecoverycallback"></a>CWinApp::ApplicationRecoveryCallback  
 Chiamato dal framework quando l'applicazione viene chiusa in modo imprevisto.  
  
```  
virtual DWORD ApplicationRecoveryCallback(LPVOID lpvParam);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpvParam`  
 Riservato per utilizzi futuri.  
  
### <a name="return-value"></a>Valore restituito  
 0 se questo metodo dà esito positivo. diverso da zero se si verifica un errore.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione supporta la gestione riavvio, il framework chiama questa funzione quando l'applicazione viene chiusa in modo imprevisto.  
  
 L'implementazione predefinita di `ApplicationRecoveryCallback` utilizza il `CDataRecoveryHandler` per salvare l'elenco dei documenti attualmente aperti nel Registro di sistema. Questo metodo non non salva automaticamente tutti i file.  
  
 Per personalizzare il comportamento, l'override della funzione in una classe [CWinApp (classe)](../../mfc/reference/cwinapp-class.md) oppure passare il proprio metodo di ripristino applicazione come un parametro per [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).  
  
##  <a name="a-nameclosealldocumentsa--cwinappclosealldocuments"></a><a name="closealldocuments"></a>CWinApp::CloseAllDocuments  
 Chiamare questa funzione membro per chiudere tutti i documenti aperti prima di uscire.  
  
```  
void CloseAllDocuments(BOOL bEndSession);
```  
  
### <a name="parameters"></a>Parametri  
 `bEndSession`  
 Specifica se la sessione di Windows viene completata. È **TRUE** se la sessione viene chiusa; in caso contrario **FALSE**.  
  
### <a name="remarks"></a>Note  
 Chiamare [HideApplication](#hideapplication) prima di chiamare `CloseAllDocuments`.  
  
##  <a name="a-namecreateprinterdca--cwinappcreateprinterdc"></a><a name="createprinterdc"></a>CWinApp::CreatePrinterDC  
 Chiamare questa funzione membro per creare un contesto di dispositivo (DC) della stampante dalla stampante selezionata.  
  
```  
BOOL CreatePrinterDC(CDC& dc);
```  
  
### <a name="parameters"></a>Parametri  
 `dc`  
 Un riferimento a un contesto di dispositivo stampante.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il contesto di dispositivo stampante viene creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 `CreatePrinterDC`Inizializza il contesto di dispositivo passate per riferimento, pertanto è possibile utilizzare per stampare.  
  
 Se la funzione ha esito positivo, al termine della stampa, è necessario distruggere il contesto di dispositivo. È possibile lasciare che il distruttore di [CDC](../../mfc/reference/cdc-class.md) oggetto farlo oppure è possibile farlo in modo esplicito chiamando [CDC::DeleteDC](../../mfc/reference/cdc-class.md#deletedc).  
  
##  <a name="a-namecwinappa--cwinappcwinapp"></a><a name="cwinapp"></a>CWinApp::CWinApp  
 Costruisce un `CWinApp` oggetto e passa `lpszAppName` da archiviare come il nome dell'applicazione.  
  
```  
CWinApp(LPCTSTR lpszAppName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszAppName`  
 Una stringa con terminazione null che contiene il nome dell'applicazione che utilizza Windows. Se questo argomento viene omesso o è **NULL**, `CWinApp` utilizza la stringa di risorsa **AFX_IDS_APP_TITLE** o il nome del file del file eseguibile.  
  
### <a name="remarks"></a>Note  
 È necessario costruire un oggetto globale del `CWinApp`-classe derivata. È possibile avere solo una `CWinApp` oggetto nell'applicazione. Il costruttore archivia un puntatore di `CWinApp` oggetto in modo che `WinMain` può chiamare per inizializzare ed eseguire l'applicazione funzioni membro dell'oggetto.  
  
##  <a name="a-namedelregtreea--cwinappdelregtree"></a><a name="delregtree"></a>CWinApp::DelRegTree  
 Elimina una chiave del Registro di sistema e tutte le relative sottochiavi.  
  
```  
LONG DelRegTree(
    HKEY hParentKey,  
    const CString& strKeyName);

 
LONG DelRegTree(
    HKEY hParentKey,
    const CString& strKeyName,
    CAtlTransactionManager* pTM = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *hParentKey*  
 Handle per una chiave del Registro di sistema.  
  
 *strKeyName*  
 Il nome della chiave del Registro di sistema da eliminare.  
  
 *pTM*  
 Puntatore all'oggetto CAtlTransactionManager.  
  
### <a name="return-value"></a>Valore restituito  
 Se la funzione ha esito positivo, il valore restituito è ERROR_SUCCESS. In caso contrario, il valore restituito è un codice di errore diverso da zero definito nel file Winerror. h.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per eliminare la chiave specificata e le relative sottochiavi.  
  
##  <a name="a-namedomessageboxa--cwinappdomessagebox"></a><a name="domessagebox"></a>CWinApp::DoMessageBox  
 Il framework chiama questa funzione membro per implementare una finestra di messaggio per la funzione globale [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox).  
  
```  
virtual int DoMessageBox(
    LPCTSTR lpszPrompt,  
    UINT nType,  
    UINT nIDPrompt);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszPrompt*  
 Indirizzo del testo nella finestra di messaggio.  
  
 `nType`  
 La finestra di messaggio [stile](../../mfc/reference/message-box-styles.md).  
  
 `nIDPrompt`  
 Indice in una stringa di contesto della Guida in linea.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce gli stessi valori `AfxMessageBox`.  
  
### <a name="remarks"></a>Note  
 Non chiamare questa funzione membro per aprire una finestra di messaggio; Utilizzare `AfxMessageBox` invece.  
  
 Eseguire l'override di questa funzione membro per personalizzare l'elaborazione a livello di applicazione dei `AfxMessageBox` chiamate.  
  
##  <a name="a-namedowaitcursora--cwinappdowaitcursor"></a><a name="dowaitcursor"></a>CWinApp::DoWaitCursor  
 Questa funzione membro viene chiamata dal framework per implementare [CWaitCursor](../../mfc/reference/cwaitcursor-class.md), [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor), e [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).  
  
```  
virtual void DoWaitCursor(int nCode);
```  
  
### <a name="parameters"></a>Parametri  
 `nCode`  
 Se questo parametro è 1, viene visualizzato un cursore di attesa. Se è 0, il cursore di attesa viene ripristinato senza incrementare il conteggio dei riferimenti. Se-1, il cursore di attesa termina.  
  
### <a name="remarks"></a>Note  
 Il valore predefinito implementa un cursore a clessidra. `DoWaitCursor`mantiene un conteggio dei riferimenti. Quando è positivo, viene visualizzato il cursore a clessidra.  
  
 Durante la chiamata non è in genere `DoWaitCursor` direttamente, è possibile eseguire l'override di questa funzione membro per modificare il cursore di attesa o per eseguire un'elaborazione aggiuntiva quando viene visualizzato il cursore di attesa.  
  
 Per un modo più semplice e più semplice per implementare un cursore di attesa, utilizzare `CWaitCursor`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#37;](../../mfc/reference/codesnippet/cpp/cwinapp-class_3.cpp)]  
  
##  <a name="a-nameenabled2dsupporta--cwinappenabled2dsupport"></a><a name="enabled2dsupport"></a>CWinApp::EnableD2DSupport  
 [!INCLUDE[dev10_sp1required](../../mfc/reference/includes/dev10_sp1required_md.md)]  
  
 Abilita il supporto D2D dell'applicazione. Chiamare questo metodo prima dell'inizializzazione della finestra principale.  
  
```  
BOOL EnableD2DSupport(
D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,  
DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```  
  
### <a name="parameters"></a>Parametri  
 `d2dFactoryType`  
 Il modello di threading della factory del D2D e le risorse viene creato.  
  
 `writeFactoryType`  
 Un valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se il supporto D2D è stata abilitata, FALSE, in caso contrario  
  
##  <a name="a-nameenablehtmlhelpa--cwinappenablehtmlhelp"></a><a name="enablehtmlhelp"></a>CWinApp::EnableHtmlHelp  
 Chiamare questa funzione membro dall'interno del costruttore del `CWinApp`-classe derivata da utilizzare HTMLHelp per la Guida dell'applicazione.  
  
```  
void EnableHtmlHelp();
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameenableshellopena--cwinappenableshellopen"></a><a name="enableshellopen"></a>CWinApp::EnableShellOpen  
 Chiamare questa funzione, in genere dal `InitInstance` sostituzione, per consentire agli utenti dell'applicazione aprire i file di dati quando si fa doppio clic sui file all'interno di gestione di File di Windows.  
  
```  
void EnableShellOpen();
```  
  
### <a name="remarks"></a>Note  
 Chiamare il `RegisterShellFileTypes` funziona in combinazione con questa funzione membro, o fornire una. File REG con l'applicazione per la registrazione manuale dei tipi di documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#38;](../../mfc/reference/codesnippet/cpp/cwinapp-class_4.cpp)]  
  
##  <a name="a-nameenabletaskbarinteractiona--cwinappenabletaskbarinteraction"></a><a name="enabletaskbarinteraction"></a>CWinApp::EnableTaskbarInteraction  
 Attiva l'interazione della barra delle applicazioni.  
  
```  
BOOL EnableTaskbarInteraction(BOOL bEnable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Specifica se deve essere attivato l'interazione con barra delle applicazioni di Windows 7 ( `TRUE`), o disabilitata ( `FALSE`).  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se l'interazione della barra delle applicazioni può essere attivata o disattivata.  
  
### <a name="remarks"></a>Note  
 Questo metodo deve essere chiamato prima della creazione della finestra principale, in caso contrario le asserzioni e restituisce `FALSE`.  
  
##  <a name="a-nameexitinstancea--cwinappexitinstance"></a><a name="exitinstance"></a>CWinApp:: ExitInstance  
 Chiamato dal framework dall'interno di **eseguire** funzione membro per uscire da questa istanza dell'applicazione.  
  
```  
virtual int ExitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Codice di uscita dell'applicazione. 0 non indica errori, e i valori maggiori di 0 indicano un errore. Questo valore viene utilizzato come valore restituito da `WinMain`.  
  
### <a name="remarks"></a>Note  
 Non chiamare questa funzione membro ovunque ma entro il **eseguire** funzione membro.  
  
 L'implementazione predefinita di questa funzione consente di scrivere le opzioni di framework dell'applicazione. File INI. Eseguire l'override di questa funzione per pulire quando l'applicazione termina.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#39;](../../mfc/reference/codesnippet/cpp/cwinapp-class_5.cpp)]  
  
##  <a name="a-namegetapplicationrecoveryparametera--cwinappgetapplicationrecoveryparameter"></a><a name="getapplicationrecoveryparameter"></a>CWinApp::GetApplicationRecoveryParameter  
 Recupera il parametro di input per il metodo di ripristino dell'applicazione.  
  
```  
virtual LPVOID GetApplicationRecoveryParameter();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il parametro di input predefinito per il metodo di ripristino dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito di questa funzione restituisce `NULL`.  
  
 Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).  
  
##  <a name="a-namegetapplicationrecoverypingintervala--cwinappgetapplicationrecoverypinginterval"></a><a name="getapplicationrecoverypinginterval"></a>CWinApp::GetApplicationRecoveryPingInterval  
 Restituisce l'intervallo di tempo che Gestione riavvio in attesa per la funzione di callback di ripristino da restituire.  
  
```  
virtual DWORD GetApplicationRecoveryPingInterval();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il periodo di tempo in millisecondi.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione che viene registrata in modo imprevisto con la chiusura di Gestione riavvio, l'applicazione tenta di salvare i documenti aperti e chiama la funzione di callback di ripristino. La funzione di callback di ripristino predefinita è [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).  
  
 Il periodo di tempo che il framework attende che la funzione di callback di ripristino da restituire è l'intervallo di ping. È possibile personalizzare l'intervallo di ping eseguendo l'override `CWinApp::GetApplicationRecoveryPingInterval` o fornendo un valore personalizzato per `RegisterWithRestartManager`.  
  
##  <a name="a-namegetapplicationrestartflagsa--cwinappgetapplicationrestartflags"></a><a name="getapplicationrestartflags"></a>CWinApp::GetApplicationRestartFlags  
 Restituisce i flag per il gestore di riavvio.  
  
```  
virtual DWORD GetApplicationRestartFlags();
```  
  
### <a name="return-value"></a>Valore restituito  
 I flag per il gestore di riavvio. L'implementazione predefinita restituisce 0.  
  
### <a name="remarks"></a>Note  
 I flag per il gestore di riavvio hanno alcun effetto se l'implementazione predefinita. Vengono forniti per utilizzi futuri.  
  
 Impostare i flag quando si registra l'applicazione con il gestore di riavvio utilizzando [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).  
  
 I valori possibili per i flag di Gestione riavvio sono come segue:  
  
- `RESTART_NO_CRASH`  
  
- `RESTART_NO_HANG`  
  
- `RESTART_NO_PATCH`  
  
- `RESTART_NO_REBOOT`  
  
##  <a name="a-namegetappregistrykeya--cwinappgetappregistrykey"></a><a name="getappregistrykey"></a>CWinApp::GetAppRegistryKey  
 Restituisce la chiave di HKEY_CURRENT_USER\\\RegistryKey\ProfileName "Software".  
  
```  
HKEY GetAppRegistryKey(CAtlTransactionManager* pTM = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Chiave dell'applicazione se la funzione ha esito positivo. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetdatarecoveryhandlera--cwinappgetdatarecoveryhandler"></a><a name="getdatarecoveryhandler"></a>CWinApp::GetDataRecoveryHandler  
 Ottiene il gestore di ripristino dei dati per questa istanza dell'applicazione.  
  
```  
virtual CDataRecoveryHandler *GetDataRecoveryHandler();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il gestore di ripristino di dati per questa istanza dell'applicazione.  
  
### <a name="remarks"></a>Note  
 Ogni applicazione che usa il gestore di riavvio deve avere un'istanza di [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md). Questa classe è responsabile del monitoraggio i documenti aperti e i file di salvataggio automatico. Il comportamento del `CDataRecoveryHandler` dipende dalla configurazione di Gestione riavvio. Per ulteriori informazioni, vedere [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md).  
  
 Questo metodo restituisce `NULL` nei sistemi operativi precedenti a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Gestione riavvio non è supportata nei sistemi operativi precedenti a [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 Se l'applicazione non dispone di un gestore di ripristino di dati, questo metodo ne crea uno e restituisce un puntatore a esso.  
  
##  <a name="a-namegetfirstdoctemplatepositiona--cwinappgetfirstdoctemplateposition"></a><a name="getfirstdoctemplateposition"></a>CWinApp::GetFirstDocTemplatePosition  
 Ottiene la posizione del primo modello di documento nell'applicazione.  
  
```  
POSITION GetFirstDocTemplatePosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per l'iterazione o il recupero degli oggetti puntatore; **NULL** se l'elenco è vuoto.  
  
### <a name="remarks"></a>Note  
 Utilizzare il **posizione** valore restituito in una chiamata a [GetNextDocTemplate](#getnextdoctemplate) per ottenere il primo [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto.  
  
##  <a name="a-namegethelpmodea--cwinappgethelpmode"></a><a name="gethelpmode"></a>CWinApp::GetHelpMode  
 Recupera il tipo di Guida utilizzata dall'applicazione.  
  
```  
AFX_HELP_TYPE GetHelpMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il tipo di Guida utilizzato dall'applicazione. Vedere [CWinApp::m_eHelpType](#m_ehelptype) per ulteriori informazioni.  
  
##  <a name="a-namegetnextdoctemplatea--cwinappgetnextdoctemplate"></a><a name="getnextdoctemplate"></a>CWinApp::GetNextDocTemplate  
 Ottiene il modello di documento identificato da `pos`, quindi imposta `pos` per il **posizione** valore.  
  
```  
CDocTemplate* GetNextDocTemplate(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore restituito da una precedente chiamata a `GetNextDocTemplate` o [funzioni membro GetFirstDocTemplatePosition](#getfirstdoctemplateposition). Il valore viene aggiornato alla posizione successiva da questa chiamata.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `GetNextDocTemplate` in un ciclo di iterazione in avanti, se si stabilisce la posizione iniziale con una chiamata a `GetFirstDocTemplatePosition`.  
  
 È necessario assicurarsi che il **posizione** valore è valido. Se non è valido, la versione di Debug della libreria Microsoft Foundation Class asserisce.  
  
 Se il modello di documento recuperato è l'ultimo disponibili, quindi il nuovo valore di `pos` è impostato su **NULL**.  
  
##  <a name="a-namegetprinterdevicedefaultsa--cwinappgetprinterdevicedefaults"></a><a name="getprinterdevicedefaults"></a>CWinApp::GetPrinterDeviceDefaults  
 Chiamare questa funzione membro per preparare una stampante contesto di dispositivo per la stampa.  
  
```  
BOOL GetPrinterDeviceDefaults(struct tagPDA* pPrintDlg);
```  
  
### <a name="parameters"></a>Parametri  
 *pPrintDlg*  
 Un puntatore a un [PRINTDLG](http://msdn.microsoft.com/library/windows/desktop/ms646843) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Recupera le impostazioni predefinite della stampante da Windows. File INI come necessario oppure utilizza l'ultima configurazione stampante impostata dall'utente nel programma di installazione di stampa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#40; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_6.cpp)]  
  
##  <a name="a-namegetprofilebinarya--cwinappgetprofilebinary"></a><a name="getprofilebinary"></a>CWinApp::GetProfileBinary  
 Chiamare questa funzione membro per recuperare dati binari da una voce in una sezione specifica del Registro di sistema dell'applicazione o. File INI.  
  
```  
BOOL GetProfileBinary(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPBYTE* ppData,  
    UINT* pBytes);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszSection*  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.  
  
 *lpszEntry*  
 Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.  
  
 *ppData*  
 Punta a un puntatore che riceverà l'indirizzo dei dati.  
  
 *pBytes*  
 Punta a un UINT che riceverà le dimensioni dei dati (in byte).  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione membro non è maiuscole/minuscole, pertanto le stringhe di *lpszSection* e *lpszEntry* parametri possono variare in caso.  
  
> [!NOTE]
> **GetProfileBinary** alloca un buffer e restituisce l'indirizzo in \* *ppData*. Il chiamante è responsabile per liberare il buffer utilizzando **delete []**.  
  
> [!IMPORTANT]
>  I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&41;](../../mfc/reference/codesnippet/cpp/cwinapp-class_7.cpp)]  
  
 Per un altro esempio, vedere [CWinApp::WriteProfileBinary](#writeprofilebinary).  
  
##  <a name="a-namegetprofileinta--cwinappgetprofileint"></a><a name="getprofileint"></a>CWinApp::GetProfileInt  
 Chiamare questa funzione membro per recuperare il valore di un intero da una voce in una sezione specifica del Registro di sistema dell'applicazione o del file INI.  
  
```  
UINT GetProfileInt(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    int nDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.  
  
 `lpszEntry`  
 Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.  
  
 `nDefault`  
 Specifica il valore predefinito per restituire se il framework non riesce a trovare la voce.  
  
### <a name="return-value"></a>Valore restituito  
 Valore intero della stringa che segue la voce specificata se la funzione ha esito positivo. Il valore restituito è il valore del parametro `nDefault` se la funzione non trova la voce. Il valore restituito è 0 se il valore che corrisponde alla voce specificata non è un intero.  
  
 Questa funzione supporta la notazione esadecimale per il valore nel file INI. Quando si recupera un valore Signed Integer, è necessario eseguire il cast del valore a `int`.  
  
### <a name="remarks"></a>Note  
 Questa funzione non rispetta la distinzione tra maiuscole e minuscole, quindi le stringhe nei parametri `lpszSection` e `lpszEntry` possono differire in relazione ai caratteri maiuscoli/minuscoli.  
  
> [!IMPORTANT]
>  I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#42;](../../mfc/reference/codesnippet/cpp/cwinapp-class_8.cpp)]  
  
 Per un altro esempio, vedere [CWinApp:: Writeprofileint](#writeprofileint).  
  
##  <a name="a-namegetprofilestringa--cwinappgetprofilestring"></a><a name="getprofilestring"></a>CWinApp::GetProfileString  
 Chiamare questa funzione membro per recuperare la stringa associata a una voce all'interno della sezione specificata nel Registro di sistema dell'applicazione o. File INI.  
  
```  
CString GetProfileString(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszDefault = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.  
  
 `lpszEntry`  
 Punta a una stringa con terminazione null che contiene la voce il cui la stringa da recuperare. Questo valore non deve essere **NULL**.  
  
 `lpszDefault`  
 Punta al valore di stringa predefinita per la voce specificata se la voce non viene trovata nel file di inizializzazione.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore restituito è la stringa dell'applicazione. File INI o `lpszDefault` se la stringa non viene trovata. La lunghezza massima della stringa supportata dal framework è `_MAX_PATH`. Se `lpszDefault` è **NULL**, il valore restituito è una stringa vuota.  
  
### <a name="remarks"></a>Note  
  
> [!IMPORTANT]
>  I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#43;](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).  
  
##  <a name="a-namegetsectionkeya--cwinappgetsectionkey"></a><a name="getsectionkey"></a>CWinApp::GetSectionKey  
 Restituisce la chiave di HKEY_CURRENT_USER\\\RegistryKey\AppName\lpszSection "Software".  
  
```  
HKEY GetSectionKey(
LPCTSTR lpszSection,  
CAtlTransactionManager* pTM = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Il nome della chiave da ottenere.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 Sezione chiave se la funzione ha esito positivo. in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namehideapplicationa--cwinapphideapplication"></a><a name="hideapplication"></a>CWinApp::HideApplication  
 Chiamare questa funzione membro per nascondere un'applicazione prima di chiudere i documenti aperti.  
  
```  
void HideApplication();
```  
  
##  <a name="a-namehtmlhelpa--cwinapphtmlhelp"></a><a name="htmlhelp"></a>CWinApp::HtmlHelp  
 Chiamare questa funzione membro per richiamare l'applicazione HTML.  
  
```  
virtual void HtmlHelp(
    DWORD_PTR dwData,  
    UINT nCmd = 0x000F);
```  
  
### <a name="parameters"></a>Parametri  
 `dwData`  
 Specifica i dati aggiuntivi. Il valore utilizzato dipende dal valore di `nCmd` parametro.  
  
 `nCmd`  
 Specifica il tipo di Guida richiesto. Per un elenco di valori possibili e relativa influenza il `dwData` parametro, vedere il `uCommand` parametro descritto in sulla API funzione HTMLHelp nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="remarks"></a>Note  
 Inoltre, il framework chiama questa funzione per richiamare l'applicazione HTML.  
  
 Il framework verrà chiusa automaticamente l'applicazione HTMLHelp quando l'applicazione termina.  
  
##  <a name="a-nameinitinstancea--cwinappinitinstance"></a><a name="initinstance"></a>CWinApp:: InitInstance  
 Windows consente più copie dello stesso programma per l'esecuzione nello stesso momento.  
  
```  
virtual BOOL InitInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'inizializzazione dell'applicazione a livello concettuale è suddiviso in due sezioni: inizializzazione unica applicazione che viene eseguita la prima volta che l'esecuzione del programma e inizializzazione dell'istanza che viene eseguito ogni volta che una copia dell'esecuzione del programma, tra cui la prima volta. Implementazione del framework `WinMain` chiama questa funzione.  
  
 Eseguire l'override `InitInstance` per inizializzare ogni nuova istanza dell'applicazione in esecuzione in Windows. In genere, si esegue l'override `InitInstance` per costruire l'oggetto finestra principale e impostare il `CWinThread::m_pMainWnd` membro dati in modo che punti a tale finestra. Per ulteriori informazioni sull'override di questa funzione membro, vedere [CWinApp: classe Application](../../mfc/cwinapp-the-application-class.md).  
  
> [!NOTE]
>  MFC (applicazioni) devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nel `InitInstance` eseguire l'override, specificare `COINIT_APARTMENTTHREADED` (anziché `COINIT_MULTITHREADED`). Per ulteriori informazioni, vedere PRB: applicazione MFC si blocca quando si inizializza l'applicazione come un multithreading Apartment (828643) in [http://support.microsoft.com/default.aspxscid=kb;en-us;828643](http://support.microsoft.com/default.aspxscid=kb;en-us;828643).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[9 NVC_MFCListView](../../atl/reference/codesnippet/cpp/cwinapp-class_10.cpp)]  
  
##  <a name="a-nameistaskbarinteractionenableda--cwinappistaskbarinteractionenabled"></a><a name="istaskbarinteractionenabled"></a>CWinApp::IsTaskbarInteractionEnabled  
 Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitato.  
  
```  
virtual BOOL IsTaskbarInteractionEnabled();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se `EnableTaskbarInteraction` è stato chiamato e il sistema operativo è Windows 7 o versione successiva.  
  
### <a name="remarks"></a>Note  
 L'interazione della barra delle applicazioni significa che l'applicazione MDI Visualizza il contenuto di finestre figlio MDI nelle anteprime a schede separate che vengono visualizzati quando il puntatore del mouse sul pulsante della barra delle applicazioni dell'applicazione.  
  
##  <a name="a-nameloadcursora--cwinapploadcursor"></a><a name="loadcursor"></a>CWinApp::LoadCursor  
 Carica la risorsa del cursore denominata da `lpszResourceName` o specificato da `nIDResource` dal file eseguibile corrente.  
  
```  
HCURSOR LoadCursor(LPCTSTR lpszResourceName) const;  HCURSOR LoadCursor(UINT nIDResource) const;  ```  
  
### Parameters  
 `lpszResourceName`  
 Points to a null-terminated string that contains the name of the cursor resource. You can use a `CString` for this argument.  
  
 `nIDResource`  
 ID of the cursor resource. For a list of resources, see [LoadCursor](http://msdn.microsoft.com/library/windows/desktop/ms648391) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### Return Value  
 A handle to a cursor if successful; otherwise **NULL**.  
  
### Remarks  
 `LoadCursor` loads the cursor into memory only if it has not been previously loaded; otherwise, it retrieves a handle of the existing resource.  
  
 Use the [LoadStandardCursor](#loadstandardcursor) or [LoadOEMCursor](#loadoemcursor) member function to access the predefined Windows cursors.  
  
### Example  
 [!code-cpp[NVC_MFCWindowing#44](../../mfc/reference/codesnippet/cpp/cwinapp-class_11.cpp)]  
  
##  <a name="loadicon"></a>  CWinApp::LoadIcon  
 Loads the icon resource named by `lpszResourceName` or specified by `nIDResource` from the executable file.  
  
```  
ICONA LoadIcon(LPCTSTR lpszResourceName) const.  ICONA LoadIcon(UINT nIDResource) const.  ```  
  
### <a name="parameters"></a>Parametri  
 `lpszResourceName`  
 Punta a una stringa con terminazione null che contiene il nome della risorsa icona. È inoltre possibile utilizzare un `CString` per questo argomento.  
  
 `nIDResource`  
 Numero di ID della risorsa icona.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un'icona se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 `LoadIcon`Carica l'icona solo se non è stato precedentemente caricato; in caso contrario, viene recuperato un handle di risorsa esistente.  
  
 È possibile utilizzare il [LoadStandardIcon](#loadstandardicon) o [LoadOEMIcon](#loadoemicon) funzione membro per accedere alle icone di Windows predefinite.  
  
> [!NOTE]
>  Questa funzione membro chiamata alla funzione API Win32 [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072), che è possibile caricare solo un'icona, la cui dimensione è conforme al **SM_CXICON** e **SM_CYICON** valori metrici di sistema.  
  
##  <a name="a-nameloadoemcursora--cwinapploadoemcursor"></a><a name="loadoemcursor"></a>CWinApp::LoadOEMCursor  
 Carica Windows predefiniti risorsa cursore specificata da `nIDCursor`.  
  
```  
HCURSOR LoadOEMCursor(UINT nIDCursor) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDCursor`  
 Un **OCR_** manifesto identificatore costante che specifica un cursore predefinito di Windows. È necessario disporre di **#define OEMRESOURCE** prima **#include \<AFXWIN. h >** per ottenere l'accesso per il **OCR_** costanti in WINDOWS. H.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un cursore se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `LoadOEMCursor` o [LoadStandardCursor](#loadstandardcursor) funzione membro per accedere ai cursori predefiniti di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[N. NVC_MFCWindowing&45;](../../mfc/reference/codesnippet/cpp/cwinapp-class_12.h)]  
  
 [!code-cpp[NVC_MFCWindowing n.&46;](../../mfc/reference/codesnippet/cpp/cwinapp-class_13.cpp)]  
  
##  <a name="a-nameloadoemicona--cwinapploadoemicon"></a><a name="loadoemicon"></a>CWinApp::LoadOEMIcon  
 Carica Windows predefiniti risorsa icona specificata da `nIDIcon`.  
  
```  
HICON LoadOEMIcon(UINT nIDIcon) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `nIDIcon`  
 Un **OIC_** manifesto identificatore costante che specifica un'icona di Windows predefinita. È necessario disporre di **#define OEMRESOURCE** prima **#include \<AFXWIN. h >** per l'accesso di **OIC_** costanti in WINDOWS. H.  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un'icona se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `LoadOEMIcon` o [LoadStandardIcon](#loadstandardicon) funzione membro per accedere alle icone di Windows predefinite.  
  
##  <a name="a-nameloadstandardcursora--cwinapploadstandardcursor"></a><a name="loadstandardcursor"></a>CWinApp::LoadStandardCursor  
 Caricamento di Windows predefinite risorsa cursore che `lpszCursorName` specifica.  
  
```  
HCURSOR LoadStandardCursor(LPCTSTR lpszCursorName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszCursorName`  
 Un **IDC _** manifesto identificatore costante che specifica un cursore predefinito di Windows. Questi identificatori sono definiti in WINDOWS. H. Di seguito sono elencati i possibili valori predefiniti e significati per `lpszCursorName`:  
  
- **IDC_ARROW** cursore a freccia Standard  
  
- **IDC_IBEAM** cursore di inserimento di testo Standard  
  
- **IDC_WAIT** cursore a clessidra utilizzato quando viene eseguita un'attività richiede molto tempo  
  
- **IDC_CROSS** cursore mirino per la selezione  
  
- **IDC_UPARROW** sulla freccia che punta verso l'alto  
  
- **IDC_SIZE** obsoleto e non supportata; utilizzare **IDC_SIZEALL**  
  
- **IDC_SIZEALL** una freccia a quattro punte. Il cursore da utilizzare per ridimensionare una finestra.  
  
- **IDC_ICON** obsoleto e non supportati. Utilizzare **IDC_ARROW**.  
  
- **IDC_SIZENWSE** freccia a due punte con termina in alto a sinistra e destra inferiore  
  
- **IDC_SIZENESW** freccia a due punte con estremità angolo superiore destro e inferiore sinistro  
  
- **IDC_SIZEWE** freccia a due punte orizzontale  
  
- **IDC_SIZENS** freccia a due punte verticale  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un cursore se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `LoadStandardCursor` o [LoadOEMCursor](#loadoemcursor) funzione membro per accedere ai cursori predefiniti di Windows.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#47;](../../mfc/reference/codesnippet/cpp/cwinapp-class_14.cpp)]  
  
##  <a name="a-nameloadstandardicona--cwinapploadstandardicon"></a><a name="loadstandardicon"></a>CWinApp::LoadStandardIcon  
 Caricamento di Windows predefinite risorsa icona che `lpszIconName` specifica.  
  
```  
HICON LoadStandardIcon(LPCTSTR lpszIconName) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `lpszIconName`  
 Un identificatore costante manifesto che specifica un'icona di Windows predefinita. Questi identificatori sono definiti in WINDOWS. H. Per un elenco di valori predefiniti e le relative descrizioni, vedere il *lpIconName* parametro [LoadIcon](http://msdn.microsoft.com/library/windows/desktop/ms648072) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
### <a name="return-value"></a>Valore restituito  
 Un handle per un'icona se ha esito positivo. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Utilizzare il `LoadStandardIcon` o [LoadOEMIcon](#loadoemicon) funzione membro per accedere alle icone di Windows predefinite.  
  
##  <a name="a-nameloadstdprofilesettingsa--cwinapploadstdprofilesettings"></a><a name="loadstdprofilesettings"></a>CWinApp::LoadStdProfileSettings  
 Chiamare questa funzione membro dall'interno di [InitInstance](#initinstance) funzione membro per abilitare e caricare l'elenco dei file utilizzati più di recente (MRU) e l'ultimo stato di anteprima.  
  
```  
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
```  
  
### <a name="parameters"></a>Parametri  
 `nMaxMRU`  
 Il numero di file usati per tenere traccia.  
  
### <a name="remarks"></a>Note  
 Se `nMaxMRU` è 0, non verrà mantenuto alcun elenco.  
  
##  <a name="a-namembhelpmodea--cwinappmbhelpmode"></a><a name="m_bhelpmode"></a>CWinApp::m_bHelpMode  
 **TRUE** se l'applicazione è in modalità di contesto della Guida in linea (tradizionalmente richiamata con MAIUSC + F1); in caso contrario **FALSE**.  
  
```  
BOOL m_bHelpMode;  
```  
  
### <a name="remarks"></a>Note  
 In modalità di contesto della Guida in linea, il cursore diventa un punto interrogativo e l'utente può spostarsi sullo schermo. Esaminare questo flag se si desidera implementare una gestione speciale quando è nella modalità della Guida in linea. `m_bHelpMode`è una variabile pubblica di tipo **BOOL**.  
  
##  <a name="a-namemdwrestartmanagersupportflagsa--cwinappmdwrestartmanagersupportflags"></a><a name="m_dwrestartmanagersupportflags"></a>CWinApp::m_dwRestartManagerSupportFlags  
 Flag che determinano il comportamento di Gestione riavvio.  
  
```  
DWORD m_dwRestartManagerSupportFlags;  
```  
  
### <a name="remarks"></a>Note  
 Per abilitare la gestione riavvio, impostare `m_dwRestartManagerSupportFlags` al comportamento desiderato. Nella tabella seguente mostra i flag disponibili.  
  
|||  
|-|-|  
|Flag|Descrizione|  
|`AFX_RESTART_MANAGER_SUPPORT_RESTART`|L'applicazione è registrata utilizzando [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager). Gestione riavvio è responsabile per il riavvio dell'applicazione se chiude in modo imprevisto.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RECOVERY`|L'applicazione è registrata con Gestione riavvio e Gestione riavvio chiama la funzione di callback di ripristino quando si riavvia l'applicazione. La funzione di callback di ripristino predefinita è [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|  
|- `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`|Salvataggio automatico è abilitata la funzionalità di Gestione riavvio e qualsiasi aprire documenti quando l'applicazione viene riavviata.|  
|- `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`|Salvataggio automatico è abilitata la funzionalità di Gestione riavvio e qualsiasi aprire i documenti a intervalli regolari. L'intervallo viene definito da [CWinApp::m_nAutosaveInterval](#m_nautosaveinterval).|  
|- `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`|Gestione riavvio consente di aprire documenti precedentemente aperti dopo il riavvio dell'applicazione da un'uscita imprevista. Il [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md) gestisce la memorizzazione dell'elenco dei documenti aperti e il relativo ripristino.|  
|- `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`|Gestione riavvio richiede all'utente di ripristinare i file salvata automaticamente dopo il riavvio dell'applicazione. La `CDataRecoveryHandler` classe richiesto all'utente.|  
|- `AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE`|L'unione di `AFX_RESTART_MANAGER_SUPPORT_RESTART`, `AFX_RESTART_MANAGER_SUPPORT_RECOVER`, e `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_RESTART`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART`, `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
|- `AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS`|The union of `AFX_RESTART_MANAGER_SUPPORT_RECOVERY`, `AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL`, `AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES`, and `AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES`.|  
  
##  <a name="a-namemehelptypea--cwinappmehelptype"></a><a name="m_ehelptype"></a>CWinApp::m_eHelpType  
 Il tipo di questo membro dati è il tipo enumerato **AFX_HELP_TYPE**, che è definito all'interno di `CWinApp` (classe).  
  
```  
AFX_HELP_TYPE m_eHelpType;  
```  
  
### <a name="remarks"></a>Note  
 Il **AFX_HELP_TYPE** enumerazione è definita come segue:  
  
 `enum AFX_HELP_TYPE`  
  
 `{`  
  
 `afxWinHelp = 0,`  
  
 `afxHTMLHelp = 1`  
  
 `};`  
  
-   Per impostare la Guida dell'applicazione per la Guida HTML, chiamare [SetHelpMode](#sethelpmode) e specificare **afxHTMLHelp**.  
  
-   Per impostare la Guida dell'applicazione per WinHelp, chiamare `SetHelpMode` e specificare **afxWinHelp**.  
  
##  <a name="a-namemhinstancea--cwinappmhinstance"></a><a name="m_hinstance"></a>CWinApp::m_hInstance  
 Corrisponde al `hInstance` parametro passato da Windows per `WinMain`.  
  
```  
HINSTANCE m_hInstance;  
```  
  
### <a name="remarks"></a>Note  
 Il `m_hInstance` membro dati è un handle per l'istanza corrente dell'applicazione in esecuzione in Windows. Viene restituito dalla funzione globale [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle). `m_hInstance`è una variabile pubblica di tipo `HINSTANCE`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#55;](../../mfc/reference/codesnippet/cpp/cwinapp-class_15.cpp)]  
  
##  <a name="a-namemlpcmdlinea--cwinappmlpcmdline"></a><a name="m_lpcmdline"></a>CWinApp:: M_lpcmdline  
 Corrisponde al `lpCmdLine` parametro passato da Windows per `WinMain`.  
  
```  
LPTSTR m_lpCmdLine;  
```  
  
### <a name="remarks"></a>Note  
 Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione. Utilizzare `m_lpCmdLine` per accedere a eventuali argomenti della riga di comando specificato quando l'applicazione è stata avviata dall'utente. `m_lpCmdLine`è una variabile pubblica di tipo `LPTSTR`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#52;](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]  
  
##  <a name="a-namemnautosaveintervala--cwinappmnautosaveinterval"></a><a name="m_nautosaveinterval"></a>CWinApp::m_nAutosaveInterval  
 Il periodo di tempo in millisecondi tra funzionalità.  
  
```  
int m_nAutosaveInterval;  
```  
  
### <a name="remarks"></a>Note  
 È possibile configurare il gestore di riavvio per i documenti aperti di salvataggio automatico a intervalli prestabiliti. Se l'applicazione non salvataggio file, questo parametro ha effetto.  
  
##  <a name="a-namemncmdshowa--cwinappmncmdshow"></a><a name="m_ncmdshow"></a>CWinApp::m_nCmdShow  
 Corrisponde al `nCmdShow` parametro passato da Windows per `WinMain`.  
  
```  
int m_nCmdShow;  
```  
  
### <a name="remarks"></a>Note  
 È necessario passare `m_nCmdShow` come argomento quando si chiama [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) per la finestra principale dell'applicazione. `m_nCmdShow`è una variabile pubblica di tipo `int`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#56; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_17.cpp)]  
  
##  <a name="a-namempactivewnda--cwinappmpactivewnd"></a><a name="m_pactivewnd"></a>CWinApp::m_pActiveWnd  
 Utilizzare questo membro dati per archiviare un puntatore alla finestra principale dell'applicazione contenitore OLE che dispone di OLE server applicazione attivata sul posto.  
  
### <a name="remarks"></a>Note  
 Se il membro dati è **NULL**, l'applicazione non è attivo sul posto.  
  
 Il framework imposta questa variabile membro quando la finestra cornice è attivato da un'applicazione contenitore OLE sul posto.  
  
##  <a name="a-namempdatarecoveryhandlera--cwinappmpdatarecoveryhandler"></a><a name="m_pdatarecoveryhandler"></a>CWinApp::m_pDataRecoveryHandler  
 Puntatore al gestore di ripristino di dati per l'applicazione.  
  
```  
CDataRecoveryHandler* m_pDataRecoveryHandler;  
```  
  
### <a name="remarks"></a>Note  
 Il gestore di ripristino dei dati di un'applicazione consente di monitorare i documenti aperti e funzionalità li. Il framework utilizza il gestore di ripristino dei dati per ripristinare i file salvata automaticamente quando un'applicazione viene riavviato dopo la chiusura imprevista. Per ulteriori informazioni, vedere [CDataRecoveryHandler classe](../../mfc/reference/cdatarecoveryhandler-class.md).  
  
##  <a name="a-namempszappnamea--cwinappmpszappname"></a><a name="m_pszappname"></a>CWinApp::m_pszAppName  
 Specifica il nome dell'applicazione.  
  
```  
LPCTSTR m_pszAppName;  
```  
  
### <a name="remarks"></a>Note  
 Il nome dell'applicazione può provenire dal parametro passato per il [CWinApp](#cwinapp) costruttore, oppure, se non specificato, nella stringa di risorsa con l'ID di **AFX_IDS_APP_TITLE**. Se il nome dell'applicazione non viene trovato nella risorsa, si tratta del programma. Nome del file EXE.  
  
 Restituito dalla funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname). `m_pszAppName`è una variabile pubblica di tipo **const char\***.  
  
> [!NOTE]
>  Se si assegna un valore per `m_pszAppName`, deve essere allocato in modo dinamico nell'heap. Il `CWinApp` chiamate di distruttore **gratuita**() con il puntatore. Molti da utilizzare il `_tcsdup`funzione libreria run-time () per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:  
  
 [!code-cpp[NVC_MFCWindowing&#57;](../../mfc/reference/codesnippet/cpp/cwinapp-class_18.cpp)]  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#65;](../../mfc/reference/codesnippet/cpp/cwinapp-class_19.cpp)]  
  
##  <a name="a-namempszexenamea--cwinappmpszexename"></a><a name="m_pszexename"></a>CWinApp::m_pszExeName  
 Contiene il nome del file eseguibile dell'applicazione senza estensione.  
  
```  
LPCTSTR m_pszExeName;  
```  
  
### <a name="remarks"></a>Note  
 A differenza di [m_pszAppName](#m_pszappname), questo nome non può contenere spazi vuoti. `m_pszExeName`è una variabile pubblica di tipo **const char\***.  
  
> [!NOTE]
>  Se si assegna un valore per `m_pszExeName`, deve essere allocato in modo dinamico nell'heap. Il `CWinApp` chiamate di distruttore **gratuita**() con il puntatore. Molti da utilizzare il `_tcsdup`funzione libreria run-time () per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:  
  
 [!code-cpp[NVC_MFCWindowing&#58;](../../mfc/reference/codesnippet/cpp/cwinapp-class_20.cpp)]  
  
##  <a name="a-namempszhelpfilepatha--cwinappmpszhelpfilepath"></a><a name="m_pszhelpfilepath"></a>CWinApp::m_pszHelpFilePath  
 Contiene il percorso di file della Guida dell'applicazione.  
  
```  
LPCTSTR m_pszHelpFilePath;  
```  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework Inizializza `m_pszHelpFilePath` per il nome dell'applicazione con ". HLP"aggiunto. Per modificare il nome del file della Guida, impostare `m_pszHelpFilePath` in modo che punti a una stringa che contiene il nome completo del file della Guida desiderato. Il contesto pratico per eseguire questa operazione è l'applicazione [InitInstance](#initinstance) (funzione). `m_pszHelpFilePath`è una variabile pubblica di tipo **const char\***.  
  
> [!NOTE]
>  Se si assegna un valore per `m_pszHelpFilePath`, deve essere allocato in modo dinamico nell'heap. Il `CWinApp` chiamate di distruttore **gratuita**() con il puntatore. Molti da utilizzare il `_tcsdup`funzione libreria run-time () per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:  
  
 [!code-cpp[NVC_MFCWindowing&#59;](../../mfc/reference/codesnippet/cpp/cwinapp-class_21.cpp)]  
  
##  <a name="a-namempszprofilenamea--cwinappmpszprofilename"></a><a name="m_pszprofilename"></a>CWinApp::m_pszProfileName  
 Contiene il nome dell'applicazione. File INI.  
  
```  
LPCTSTR m_pszProfileName;  
```  
  
### <a name="remarks"></a>Note  
 `m_pszProfileName`è una variabile pubblica di tipo **const char\***.  
  
> [!NOTE]
>  Se si assegna un valore per `m_pszProfileName`, deve essere allocato in modo dinamico nell'heap. Il `CWinApp` chiamate di distruttore **gratuita**() con il puntatore. Molti da utilizzare il `_tcsdup`funzione libreria run-time () per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:  
  
 [!code-cpp[60 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_22.cpp)]  
  
##  <a name="a-namempszregistrykeya--cwinappmpszregistrykey"></a><a name="m_pszregistrykey"></a>CWinApp::m_pszRegistryKey  
 Utilizzato per determinare dove, nel Registro di sistema o nel file INI, le impostazioni del profilo dell'applicazione vengono archiviate.  
  
```  
LPCTSTR m_pszRegistryKey;  
```  
  
### <a name="remarks"></a>Note  
 In genere, questo membro dati viene trattato come di sola lettura.  
  
-   Il valore viene memorizzato in una chiave del Registro di sistema. Il nome per l'impostazione del profilo dell'applicazione viene aggiunta la seguente chiave del Registro di sistema: HKEY_CURRENT_USER/Software/LocalAppWizard-generati /.  
  
 Se si assegna un valore per `m_pszRegistryKey`, deve essere allocato in modo dinamico nell'heap. Il `CWinApp` chiamate di distruttore **gratuita**() con il puntatore. Molti da utilizzare il `_tcsdup`funzione libreria run-time () per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:  
  
 [!code-cpp[NVC_MFCWindowing n.&61;](../../mfc/reference/codesnippet/cpp/cwinapp-class_23.cpp)]  
  
##  <a name="a-namempszappida--cwinappmpszappid"></a><a name="m_pszappid"></a>CWinApp::m_pszAppID  
 Modello di ID utente dell'applicazione.  
  
```  
LPCTSTR m_pszAppID;  
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncontexthelpa--cwinapponcontexthelp"></a><a name="oncontexthelp"></a>CWinApp::OnContextHelp  
 Gestisce MAIUSC + F1 all'interno dell'applicazione.  
  
```  
afx_msg void OnContextHelp();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp )` istruzione per la `CWinApp` classe mappa messaggi e anche aggiungere una voce della tabella di tasti di scelta rapida, in genere MAIUSC + F1, per abilitare questa funzione membro.  
  
 `OnContextHelp`Inserisce l'applicazione in modalità della Guida. Il cursore assume l'aspetto di una freccia e un punto interrogativo e l'utente possono spostare il puntatore del mouse e premere il pulsante sinistro del mouse per selezionare una finestra di dialogo, finestra, menu o pulsante di comando. Questa funzione membro recupera il contesto dell'oggetto sotto il cursore e chiama la funzione Windows WinHelp con il contesto della Guida.  
  
##  <a name="a-nameonddecommanda--cwinapponddecommand"></a><a name="onddecommand"></a>CWinApp::OnDDECommand  
 Chiamato dal framework quando la finestra cornice principale riceve un DDE eseguire messaggio.  
  
```  
virtual BOOL OnDDECommand(LPTSTR lpszCommand);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszCommand*  
 Punta a una stringa di comando DDE ricevuti dall'applicazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando è gestito; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita controlla se il comando è una richiesta per aprire un documento e, in caso affermativo, apre il documento specificato. La gestione di File Windows invia in genere le stringhe di comando DDE quando l'utente fa doppio clic su un file di dati. Override di questa funzione per gestire altri DDE eseguire comandi, ad esempio il comando di stampa.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&48;](../../mfc/reference/codesnippet/cpp/cwinapp-class_24.cpp)]  
  
##  <a name="a-nameonfilenewa--cwinapponfilenew"></a><a name="onfilenew"></a>CWinApp::OnFileNew  
 Implementa il `ID_FILE_NEW` comando.  
  
```  
afx_msg void OnFileNew();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_FILE_NEW, OnFileNew )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando Nuovo File.  
  
 Vedere [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md) per informazioni sul comportamento predefinito e informazioni aggiuntive su come eseguire l'override di questa funzione membro.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&49;](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[&#50; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="a-nameonfileopena--cwinapponfileopen"></a><a name="onfileopen"></a>CWinApp::OnFileOpen  
 Implementa il `ID_FILE_OPEN` comando.  
  
```  
afx_msg void OnFileOpen();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_FILE_OPEN, OnFileOpen )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando Apri File.  
  
 Per informazioni sul comportamento predefinito e indicazioni su come eseguire l'override di questa funzione membro, vedere [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&49;](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[&#50; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="a-nameonfileprintsetupa--cwinapponfileprintsetup"></a><a name="onfileprintsetup"></a>CWinApp::OnFilePrintSetup  
 Implementa il **ID_FILE_PRINT_SETUP** comando.  
  
```  
afx_msg void OnFilePrintSetup();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando Stampa di File.  
  
 Per informazioni sul comportamento predefinito e indicazioni su come eseguire l'override di questa funzione membro, vedere [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing n.&49;](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]  
  
 [!code-cpp[&#50; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]  
  
##  <a name="a-nameonhelpa--cwinapponhelp"></a><a name="onhelp"></a>CWinApp::OnHelp  
 Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).  
  
```  
afx_msg void OnHelp();
```  
  
### <a name="remarks"></a>Note  
 In genere si aggiungeranno inoltre una voce di tasto di scelta rapida per il tasto F1. Abilitare il tasto F1 è solo una convenzione, non è un requisito.  
  
 È necessario aggiungere un `ON_COMMAND( ID_HELP, OnHelp )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, chiamato dal framework quando l'utente preme il tasto F1.  
  
 L'implementazione predefinita di questa funzione di gestione del messaggio determina il contesto della Guida che corrisponde alla finestra corrente, la finestra di dialogo o voce di menu e quindi chiama WINHELP. FILE EXE. Se è attualmente disponibile alcun contesto, la funzione utilizza il contesto predefinito.  
  
 Eseguire l'override di questa funzione membro per impostare il contesto della Guida su un valore diverso dalla finestra, la finestra di dialogo, una voce di menu o un pulsante della barra degli strumenti che attualmente ha lo stato attivo. Chiamare `WinHelp` con le informazioni ID del contesto.  
  
##  <a name="a-nameonhelpfindera--cwinapponhelpfinder"></a><a name="onhelpfinder"></a>CWinApp::OnHelpFinder  
 Gestisce il **ID_HELP_FINDER** e **ID_DEFAULT_HELP** comandi.  
  
```  
afx_msg void OnHelpFinder();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, il framework chiama questa funzione del gestore dei messaggi quando l'utente dell'applicazione seleziona il comando di ricerca della Guida per richiamare `WinHelp` con lo standard **HELP_FINDER** argomento.  
  
##  <a name="a-nameonhelpindexa--cwinapponhelpindex"></a><a name="onhelpindex"></a>CWinApp::OnHelpIndex  
 Gestisce il **ID_HELP_INDEX** comando e fornisce un argomento della Guida predefinito.  
  
```  
afx_msg void OnHelpIndex();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Se abilitata, il framework chiama questa funzione del gestore dei messaggi quando l'utente dell'applicazione seleziona il comando di indice della Guida per richiamare `WinHelp` con lo standard **HELP_INDEX** argomento.  
  
##  <a name="a-nameonhelpusinga--cwinapponhelpusing"></a><a name="onhelpusing"></a>CWinApp::OnHelpUsing  
 Gestisce il **ID_HELP_USING** comando.  
  
```  
afx_msg void OnHelpUsing();
```  
  
### <a name="remarks"></a>Note  
 È necessario aggiungere un `ON_COMMAND( ID_HELP_USING, OnHelpUsing )` dell'istruzione di `CWinApp` mappa messaggi (classe) per abilitare questa funzione membro. Il framework chiama questa funzione del gestore dei messaggi quando l'utente dell'applicazione consente di selezionare il comando per richiamare la Guida mediante il `WinHelp` un'applicazione con lo standard **HELP_HELPONHELP** argomento.  
  
##  <a name="a-nameonidlea--cwinapponidle"></a><a name="onidle"></a>CWinApp  
 Eseguire l'override di questa funzione membro per l'elaborazione e tempo di inattività.  
  
```  
virtual BOOL OnIdle(LONG lCount);
```  
  
### <a name="parameters"></a>Parametri  
 `lCount`  
 Un contatore incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi dell'applicazione è vuota. Questo conteggio viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile utilizzare il `lCount` parametro per determinare il relativo periodo di tempo l'applicazione è stata inattiva senza elaborazione di un messaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero per la ricezione di più tempo inattivo; 0 se è necessario non è più tempo di inattività.  
  
### <a name="remarks"></a>Note  
 `OnIdle`viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi dell'applicazione è vuota. Utilizzare la sostituzione per chiamare le attività del gestore di inattività uno sfondo personalizzato.  
  
 `OnIdle`deve restituire 0 per indicare che non è necessaria alcuna elaborazione tempo di inattività. Il `lCount` parametro viene incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi è vuota e viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le routine di inattività diversi in base al numero di questo.  
  
 Di seguito viene riepilogata l'elaborazione di cicli inattivi:  
  
1.  Se il ciclo di messaggi nella libreria Microsoft Foundation Class controlla la coda di messaggi e non trova i messaggi in sospeso, chiama il metodo `OnIdle` per l'oggetto di applicazione e fornisce 0 come il `lCount` argomento.  
  
2. `OnIdle`esegue alcune operazioni di elaborazione e restituisce un valore diverso da zero per indicare che deve essere chiamato nuovamente per effettuare un'ulteriore elaborazione.  
  
3.  Il ciclo di messaggi controlla di nuovo la coda di messaggi. Se non sono messaggi in sospeso, chiama il metodo `OnIdle` anche in questo caso, si incrementa il `lCount` argomento.  
  
4.  Infine, `OnIdle` completa l'elaborazione di tutte le relative attività inattivo e restituisce 0. In questo modo il ciclo di messaggi per interrompere la chiamata a `OnIdle` fino a quando non viene ricevuto il messaggio successivo dalla coda dei messaggi, momento in cui il ciclo inattivo viene riavviato con l'argomento impostato su 0.  
  
 Non eseguire attività di lunga durata durante `OnIdle` perché l'applicazione non è in grado di elaborare l'input dell'utente fino a quando `OnIdle` restituisce.  
  
> [!NOTE]
>  L'implementazione predefinita di `OnIdle` aggiornamenti oggetti dell'interfaccia utente, ad esempio voci di menu e pulsanti di comando e esegue la pulitura di struttura dati interna. Pertanto, se esegue l'override `OnIdle`, è necessario chiamare `CWinApp::OnIdle` con il `lCount` nella versione sottoposta a override. Chiamare innanzitutto tutte le classi base elaborazione inattiva (ovvero, fino a quando la classe di base `OnIdle` restituisce 0). Se è necessario eseguire operazioni prima che venga completato l'elaborazione della classe base, esaminare l'implementazione della classe base per selezionare corretta `lCount` durante il quale l'esecuzione delle operazioni.  
  
 Se non si desidera `OnIdle` per essere chiamato ogni volta che un messaggio viene recuperato dalla coda dei messaggi, è possibile eseguire l'override di [CWinThreadIsIdleMessage](../../mfc/reference/cwinthread-class.md#isidlemessage). Se un'applicazione ha impostato un timer molto breve, o se il sistema sta inviando il **WM_SYSTIMER** dei messaggi, quindi `OnIdle` verrà chiamato più volte e ridurre le prestazioni.  
  
### <a name="example"></a>Esempio  
 I due esempi seguenti viene illustrato come utilizzare `OnIdle`. Nel primo esempio elabora due attività inattive utilizzando il `lCount` argomento le attività di assegnazione delle priorità. La prima attività è ad alta priorità e dovrà essere effettuata quando possibile. La seconda attività è meno importante e deve essere eseguita solo quando è presente una lunga pausa nell'input dell'utente. Notare la chiamata alla versione della classe base di `OnIdle`. Nel secondo esempio gestisce un gruppo di attività inattive con priorità diverse.  
  
 [!code-cpp[51 NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_27.cpp)]  
  
##  <a name="a-nameopendocumentfilea--cwinappopendocumentfile"></a><a name="opendocumentfile"></a>CWinApp:: OpenDocumentFile  
 Il framework chiama questo metodo per aprire l'oggetto denominato [CDocument](../../mfc/reference/cdocument-class.md) file per l'applicazione.  
  
```  
virtual CDocument* OpenDocumentFile(
LPCTSTR lpszFileName  
BOOL bAddToMRU = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `lpszFileName`  
 Il nome del file da aprire.  
  
 [in] `bAddToMRU`  
 `TRUE`indica che il documento è uno dei file più recente; `FALSE` indica il documento non è uno dei file più recente.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `CDocument` se ha esito positivo; in caso contrario `NULL`.  
  
### <a name="remarks"></a>Note  
 Se è già aperto un documento che ha lo stesso nome, la prima finestra cornice contenente il documento verrà visualizzato lo stato attivo. Se un'applicazione supporta più modelli di documento, il framework utilizza l'estensione del nome file per trovare il modello di documento appropriato per tentare di caricare il documento. Se ha esito positivo, il modello di documento crea quindi una finestra cornice e visualizzazione del documento.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#52;](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]  
  
##  <a name="a-nameparsecommandlinea--cwinappparsecommandline"></a><a name="parsecommandline"></a>CWinApp::ParseCommandLine  
 Chiamare questa funzione membro per analizzare la riga di comando e inviare i parametri, uno alla volta, a [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam).  
  
```  
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `rCmdInfo`  
 Un riferimento a un [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) oggetto.  
  
### <a name="remarks"></a>Note  
 Quando si avvia un nuovo progetto MFC mediante la creazione guidata applicazione, la creazione guidata applicazione creerà un'istanza locale di `CCommandLineInfo`e quindi chiamare `ProcessShellCommand` e `ParseCommandLine` nel [InitInstance](#initinstance) funzione membro. Una riga di comando segue la route descritta di seguito:  
  
1.  Dopo la creazione `InitInstance`, `CCommandLineInfo` oggetto viene passato a `ParseCommandLine`.  
  
2. `ParseCommandLine`chiama quindi `CCommandLineInfo::ParseParam` più volte, una volta per ogni parametro.  
  
3. `ParseParam`Riempie il `CCommandLineInfo` oggetto, che viene quindi passato a [ProcessShellCommand](#processshellcommand).  
  
4. `ProcessShellCommand`gestisce i flag e gli argomenti della riga di comando.  
  
 Si noti che è possibile chiamare `ParseCommandLine` direttamente in base alle esigenze.  
  
 Per una descrizione dei flag della riga di comando, vedere [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand).  
  
##  <a name="a-namepretranslatemessagea--cwinapppretranslatemessage"></a><a name="pretranslatemessage"></a>CWinApp:: PreTranslateMessage  
 Eseguire l'override di questa funzione per filtrare i messaggi di finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) l'implementazione predefinita esegue la conversione di tasto di scelta rapida, è necessario chiamare il `CWinApp::PreTranslateMessage` funzione membro sottoposto a override nella versione in uso.  
  
```  
virtual BOOL PreTranslateMessage(MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pMsg`  
 Un puntatore a un [MSG](../../mfc/reference/msg-structure1.md) struttura che contiene il messaggio da elaborare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio è stata completamente elaborato in `PreTranslateMessage` e non deve essere elaborato ulteriormente. Zero se il messaggio deve essere elaborato in modo normale.  
  
##  <a name="a-nameprocessmessagefiltera--cwinappprocessmessagefilter"></a><a name="processmessagefilter"></a>CWinApp::ProcessMessageFilter  
 Funzione hook del framework chiama questa funzione membro per filtrare e rispondere a determinati messaggi di Windows.  
  
```  
virtual BOOL ProcessMessageFilter(
    int code,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `code`  
 Specifica un codice di hook. Questa funzione membro utilizza il codice per determinare la modalità di elaborazione`lpMsg.`  
  
 `lpMsg`  
 Un puntatore a un Windows [MSG](../../mfc/reference/msg-structure1.md) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il messaggio viene elaborato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Una funzione hook elabora gli eventi prima che vengano inviati al messaggio normale dell'applicazione di elaborazione.  
  
 Se si esegue l'override di questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per mantenere il framework agganciare l'elaborazione.  
  
##  <a name="a-nameprocessshellcommanda--cwinappprocessshellcommand"></a><a name="processshellcommand"></a>CWinApp::ProcessShellCommand  
 Questa funzione membro viene chiamata da [InitInstance](#initinstance) per accettare i parametri passati dal `CCommandLineInfo` oggetto identificato da `rCmdInfo`ed eseguire l'azione indicata.  
  
```  
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `rCmdInfo`  
 Un riferimento a un [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) oggetto.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il comando shell viene elaborato correttamente. Se è 0, restituire **FALSE** da [InitInstance](#initinstance).  
  
### <a name="remarks"></a>Note  
 Quando si avvia un nuovo progetto MFC mediante la creazione guidata applicazione, la creazione guidata applicazione creerà un'istanza locale di `CCommandLineInfo`e quindi chiamare `ProcessShellCommand` e [ParseCommandLine](#parsecommandline) nel `InitInstance` funzione membro. Una riga di comando segue la route descritta di seguito:  
  
1.  Dopo la creazione `InitInstance`, `CCommandLineInfo` oggetto viene passato a `ParseCommandLine`.  
  
2. `ParseCommandLine`chiama quindi [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam) più volte, una volta per ogni parametro.  
  
3. `ParseParam`Riempie il `CCommandLineInfo` oggetto, che viene quindi passato a `ProcessShellCommand`.  
  
4. `ProcessShellCommand`gestisce i flag e gli argomenti della riga di comando.  
  
 I membri dei dati il `CCommandLineInfo` oggetto, identificato da [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand), sono del tipo enumerato seguente, che viene definito all'interno di `CCommandLineInfo` (classe).  
  
 `enum {`  
  
 `FileNew,`  
  
 `FileOpen,`  
  
 `FilePrint,`  
  
 `FilePrintTo,`  
  
 `FileDDE,`  
  
 `};`  
  
 Per una breve descrizione di ognuno di questi valori, vedere `CCommandLineInfo::m_nShellCommand`.  
  
##  <a name="a-nameprocesswndprocexceptiona--cwinappprocesswndprocexception"></a><a name="processwndprocexception"></a>CWinApp::ProcessWndProcException  
 Il framework chiama questa funzione membro ogni volta che il gestore non rileva un'eccezione generata in uno dei messaggi dell'applicazione o i gestori di comando.  
  
```  
virtual LRESULT ProcessWndProcException(
    CException* e,  
    const MSG* pMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *e*  
 Un puntatore a un'eccezione non rilevata.  
  
 `pMsg`  
 Oggetto [MSG](../../mfc/reference/msg-structure1.md) struttura che contiene informazioni sul messaggio di windows che ha causato il framework generare un'eccezione.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore che deve essere restituito a Windows. In genere si tratta L 0 per i messaggi di windows, L 1 ( **TRUE**) per i messaggi di comando.  
  
### <a name="remarks"></a>Note  
 Non chiamare direttamente questa funzione membro.  
  
 L'implementazione predefinita di questa funzione membro crea una finestra di messaggio. Se l'eccezione non rilevata ha origine da un menu, barra degli strumenti o errore del comando tasti di scelta rapida, la finestra di messaggio viene visualizzato un messaggio "Comando non riuscito". in caso contrario, viene visualizzato un messaggio "Errore interno dell'applicazione".  
  
 Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera che la finestra di messaggio da visualizzare.  
  
##  <a name="a-nameregistera--cwinappregister"></a><a name="register"></a>CWinApp::Register  
 Esegue qualsiasi attività di registrazione non è gestita da `RegisterShellFileTypes`.  
  
```  
virtual BOOL Register();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'implementazione predefinita restituisce semplicemente TRUE. Eseguire l'override di questa funzione per fornire qualsiasi procedura di registrazione personalizzato.  
  
##  <a name="a-nameregistershellfiletypesa--cwinappregistershellfiletypes"></a><a name="registershellfiletypes"></a>CWinApp::RegisterShellFileTypes  
 Chiamare questa funzione membro per registrare tutti i tipi di documento dell'applicazione con la gestione di File di Windows.  
  
```  
void RegisterShellFileTypes(BOOL bCompat = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bCompat`  
 `TRUE`Aggiunge le voci di registrazione per la shell dei comandi di stampa e stampare per, consentendo all'utente di stampare file direttamente dalla shell o trascinando il file a un oggetto stampante. Aggiunge inoltre una chiave DefaultIcon. Per impostazione predefinita, questo parametro è `FALSE` per la compatibilità con le versioni precedenti.  
  
### <a name="remarks"></a>Note  
 Ciò consente all'utente di aprire un file di dati creato dall'applicazione facendo doppio clic su dalla gestione all'interno di File. Chiamare `RegisterShellFileTypes` dopo la chiamata [AddDocTemplate](#adddoctemplate) per ognuno dei modelli di documento nell'applicazione. Chiamare anche il [EnableShellOpen](#enableshellopen) funzione membro quando si chiama `RegisterShellFileTypes`.  
  
 `RegisterShellFileTypes`scorrere l'elenco di [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) gli oggetti che l'applicazione gestisce e, per ogni modello di documento, aggiunge voci al database di registrazione gestito da Windows per le associazioni di file. Gestione file utilizza queste voci per aprire un file di dati quando l'utente fa doppio clic su. Questo elimina la necessità di fornire una. File REG insieme all'applicazione.  
  
> [!NOTE]
> `RegisterShellFileTypes`funziona solo se l'utente esegue il programma con diritti di amministratore. Se il programma non dispone di diritti di amministratore, è possibile modificare le chiavi del Registro di sistema.  
  
 Se il database di registrazione già associa un'estensione del file a un altro tipo di file, non viene creata alcuna nuova associazione. Vedere la `CDocTemplate` classe per il formato delle stringhe necessarie per registrare le informazioni.  
  
##  <a name="a-nameregisterwithrestartmanagera--cwinappregisterwithrestartmanager"></a><a name="registerwithrestartmanager"></a>CWinApp::RegisterWithRestartManager  
 Registra l'applicazione con il gestore di riavvio.  
  
```  
virtual HRESULT RegisterWithRestartManager(
BOOL bRegisterRecoveryCallback,  
const CString& strRestartIdentifier);

 
virtual HRESULT RegisterWithRestartManager(
LPCWSTR pwzCommandLineArgs,  
DWORD dwRestartFlags,  
APPLICATION_RECOVERY_CALLBACK pRecoveryCallback,  
LPVOID lpvParam,  
DWORD dwPingInterval,  
DWORD dwCallbackFlags);
```  
  
### <a name="parameters"></a>Parametri  
  
|||  
|-|-|  
|Parametro|Descrizione|  
|[in] `bRegisterRecoveryCallback`|`TRUE`indica che l'istanza dell'applicazione utilizza una funzione di callback di ripristino. `FALSE` indica che non è presente. Il framework chiama la funzione di callback di ripristino quando l'applicazione viene chiusa in modo imprevisto. Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|  
|[in] `strRestartIdentifier`|Stringa univoca che identifica questa istanza di Gestione riavvio. L'identificatore di Gestione riavvio è univoco per ogni istanza di un'applicazione.|  
|[in] `pwzCommandLineArgs`|Stringa che contiene gli argomenti aggiuntivi dalla riga di comando.|  
|[in] `dwRestartFlags`|Flag facoltativi per il gestore di riavvio. Per altre informazioni, vedere la sezione Osservazioni.|  
|[in] `pRecoveryCallback`|La funzione di callback di ripristino. Questa funzione deve accettare un `LPVOID` parametro come input e restituire un `DWORD`. La funzione di callback di ripristino predefinita è `CWinApp::ApplicationRecoveryCallback`.|  
|[in] `lpvParam`|Il parametro di input per la funzione di callback di ripristino. Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|  
|[in] `dwPingInterval`|Il periodo di tempo che Gestione riavvio in attesa per la funzione di callback di ripristino da restituire. Questo parametro è espresso in millisecondi.|  
|[in] `dwCallbackFlags`|Flag passati alla funzione di callback di ripristino. Riservato per utilizzi futuri.|  
  
### <a name="return-value"></a>Valore restituito  
 `S_OK`Se il metodo ha esito positivo; in caso contrario un codice di errore.  
  
### <a name="remarks"></a>Note  
 Se l'applicazione utilizza l'implementazione MFC predefinita per i file di salvataggio automatico, è consigliabile utilizzare la versione semplice di `RegisterWithRestartManager`. Utilizzare la versione di complessi `RegisterWithRestartManager` se si desidera personalizzare il comportamento di salvataggio automatico dell'applicazione.  
  
 Se si chiama questo metodo con una stringa vuota per `strRestartIdentifier`, `RegisterWithRestartManager` crea una stringa identificatore univoco per l'istanza del riavvio manager.  
  
 Quando un'applicazione si chiude in modo imprevisto, Gestione riavvio riavvia l'applicazione dalla riga di comando e fornisce che univoco riavvia identificatore come un argomento facoltativo. In questo scenario, il framework chiama `RegisterWithRestartManager` due volte. La prima chiamata proviene da [:: InitInstance](#initinstance) con una stringa vuota per l'identificatore di stringa. Quindi, il metodo [CWinApp::ProcessShellCommand](#processshellcommand) chiamate `RegisterWithRestartManager` con l'identificatore univoco di riavvio.  
  
 Dopo aver registrato un'applicazione con il gestore di riavvio, Gestione riavvio consente di monitorare l'applicazione. Se l'applicazione viene chiusa in modo imprevisto, Gestione riavvio chiama la funzione di callback di ripristino durante il processo di chiusura. Le attese di Gestione riavvio il `dwPingInterval` per una risposta dalla funzione di callback di ripristino. Se la funzione di callback di ripristino non risponde entro questo intervallo, l'applicazione viene chiusa senza eseguire la funzione di callback di ripristino.  
  
 Per impostazione predefinita, il dwRestartFlags non sono supportati ma vengono forniti per utilizzi futuri. I valori possibili per `dwRestartFlags` sono i seguenti:  
  
- `RESTART_NO_CRASH`  
  
- `RESTART_NO_HANG`  
  
- `RESTART_NO_PATCH`  
  
- `RESTART_NO_REBOOT`  
  
##  <a name="a-namereopenpreviousfilesatrestarta--cwinappreopenpreviousfilesatrestart"></a><a name="reopenpreviousfilesatrestart"></a>CWinApp::ReopenPreviousFilesAtRestart  
 Determina se Gestione riavvio riapre i file che erano aperti quando l'applicazione è stato terminato in modo imprevisto.  
  
```  
virtual BOOL ReopenPreviousFilesAtRestart() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica il riavvio manager viene riaperto i file aperti in precedenza; `FALSE` indica a Gestione riavvio non esiste.  
  
##  <a name="a-namerestartinstancea--cwinapprestartinstance"></a><a name="restartinstance"></a>CWinApp::RestartInstance  
 Gestisce il riavvio di un'applicazione avviato dal gestore di riavvio.  
  
```  
virtual BOOL CWinApp::RestartInstance();
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se si apre il gestore di ripristino dei dati in precedenza aprire documenti. `FALSE` se il gestore di ripristino dei dati contiene un errore o se nessun documento aperto in precedenza.  
  
### <a name="remarks"></a>Note  
 Al riavvio di un'applicazione, Gestione riavvio il framework chiama questo metodo. Questo metodo recupera il gestore di ripristino di dati e ripristina i file salvata automaticamente. Questo metodo chiama [CDataRecoveryHandler::RestoreAutosavedDocuments](../../mfc/reference/cdatarecoveryhandler-class.md#restoreautosaveddocuments) per determinare se l'utente desidera ripristinare i file salvata automaticamente.  
  
 Questo metodo restituisce `FALSE` se il [CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) determina che non vi sono documenti non aperti. Se non sono state Nessun documento aperto, l'applicazione viene avviata normalmente.  
  
##  <a name="a-namerestoreautosavedfilesatrestarta--cwinapprestoreautosavedfilesatrestart"></a><a name="restoreautosavedfilesatrestart"></a>CWinApp::RestoreAutosavedFilesAtRestart  
 Determina se Gestione riavvio consente di ripristinare i file più quando si riavvia l'applicazione.  
  
```  
virtual BOOL RestoreAutosavedFilesAtRestart() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica i file più ripristini Gestione riavvio; `FALSE` indica a Gestione riavvio non esiste.  
  
##  <a name="a-nameruna--cwinapprun"></a><a name="run"></a>CWinApp:: Run  
 Fornisce un ciclo di messaggi predefinito.  
  
```  
virtual int Run();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un `int` valore restituito da `WinMain`.  
  
### <a name="remarks"></a>Note  
 **Eseguire** acquisisce e invia i messaggi di Windows fino a quando l'applicazione riceve un **WM_QUIT** messaggio. Se la coda di messaggi dell'applicazione contiene attualmente messaggi, **eseguire** chiamate [OnIdle](#onidle) per eseguire l'elaborazione di tempo di inattività. I messaggi in ingresso indirizzate il [PreTranslateMessage](#pretranslatemessage) funzione membro per l'elaborazione speciale e quindi alla funzione Windows **TranslateMessage** per la conversione di tastiera standard; infine, il **DispatchMessage** viene chiamata la funzione di Windows.  
  
 **Eseguire** raramente viene sottoposto a override, ma è possibile ignorare in modo che fornisca un comportamento speciale.  
  
##  <a name="a-namerunautomateda--cwinapprunautomated"></a><a name="runautomated"></a>CWinApp::RunAutomated  
 Chiamare questa funzione per determinare se il " **/Automation**"o" **-automazione**" è presente, che indica se l'applicazione server è stato avviato da un'applicazione client.  
  
```  
BOOL RunAutomated();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'opzione è stato trovato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni sull'automazione OLE, vedere l'articolo [server di automazione](../../mfc/automation-servers.md).  
  
##  <a name="a-namerunembeddeda--cwinapprunembedded"></a><a name="runembedded"></a>CWinApp::RunEmbedded  
 Chiamare questa funzione per determinare se il " **/incorporamento**"o" **-Embedding**" è presente, che indica se l'applicazione server è stato avviato da un'applicazione client.  
  
```  
BOOL RunEmbedded();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'opzione è stato trovato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni su come incorporare, vedere l'articolo [server: implementazione di un Server](../../mfc/servers-implementing-a-server.md).  
  
##  <a name="a-namesaveallmodifieda--cwinappsaveallmodified"></a><a name="saveallmodified"></a>CWinApp::SaveAllModified  
 Chiamato dal framework per salvare tutti i documenti quando è necessario chiudere una finestra cornice principale dell'applicazione o tramite un `WM_QUERYENDSESSION` messaggio.  
  
```  
virtual BOOL SaveAllModified();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è sicuro per terminare l'applicazione. 0 se non è sicuro terminare l'applicazione.  
  
### <a name="remarks"></a>Note  
 Chiama l'implementazione predefinita di questa funzione membro di [CDocument:: SaveModified](../../mfc/reference/cdocument-class.md#savemodified) una funzione membro, a sua volta per tutti i documenti modificati all'interno dell'applicazione.  
  
##  <a name="a-nameselectprintera--cwinappselectprinter"></a><a name="selectprinter"></a>CWinApp::SelectPrinter  
 Chiamare questa funzione membro per selezionare una stampante specifica e rilasciare la stampante selezionata nella finestra di dialogo Stampa.  
  
```  
void SelectPrinter(
    HANDLE hDevNames,  
    HANDLE hDevMode,  
    BOOL bFreeOld = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 `hDevNames`  
 Un handle per un [DEVNAMES](../../mfc/reference/devnames-structure.md) struttura che identifica il driver di dispositivo e i nomi di porta di output di una stampante specifica.  
  
 `hDevMode`  
 Un handle per un [DEVMODE](http://msdn.microsoft.com/library/windows/desktop/dd183565) struttura che specifica le informazioni sull'inizializzazione di dispositivo e l'ambiente di una stampante.  
  
 *bFreeOld*  
 Libera la stampante selezionata in precedenza.  
  
### <a name="remarks"></a>Note  
 Se entrambi `hDevMode` e `hDevNames` sono **NULL**, `SelectPrinter` utilizza la stampante predefinita corrente.  
  
##  <a name="a-namesethelpmodea--cwinappsethelpmode"></a><a name="sethelpmode"></a>CWinApp::SetHelpMode  
 Imposta il tipo di Guida in linea dell'applicazione.  
  
```  
void SetHelpMode(AFX_HELP_TYPE eHelpType);
```  
  
### <a name="parameters"></a>Parametri  
 `eHelpType`  
 Specifica il tipo di Guida per l'utilizzo. Vedere [CWinApp::m_eHelpType](#m_ehelptype) per ulteriori informazioni.  
  
### <a name="remarks"></a>Note  
 Imposta il tipo di Guida in linea dell'applicazione.  
  
 Per impostare il tipo di Guida in linea dell'applicazione per HTML, è possibile chiamare [EnableHTMLHelp](#enablehtmlhelp). Dopo aver chiamato `EnableHTMLHelp`, l'applicazione deve utilizzare HTMLHelp come l'applicazione della Guida in linea. Se si desidera modificare per l'utilizzo di WinHelp, è possibile chiamare `SetHelpMode` e impostare `eHelpType` a **afxWinHelp**.  
  
##  <a name="a-namesetregistrykeya--cwinappsetregistrykey"></a><a name="setregistrykey"></a>CWinApp::SetRegistryKey  
 Fa sì che le impostazioni dell'applicazione da archiviare nel Registro di sistema anziché dei file INI.  
  
```  
void SetRegistryKey(LPCTSTR lpszRegistryKey);  
void SetRegistryKey(UINT nIDRegistryKey);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszRegistryKey*  
 Puntatore a una stringa contenente il nome della chiave.  
  
 *nIDRegistryKey*  
 ID di una risorsa di stringa contenente il nome della chiave del Registro di sistema.  
  
### <a name="remarks"></a>Note  
 La funzione imposta *m_pszRegistryKey*, che viene quindi utilizzato per il `GetProfileInt`, `GetProfileString`, `WriteProfileInt`, e `WriteProfileString` funzioni membro di `CWinApp`. Se questa funzione è stata chiamata, l'elenco di file (MRU) usati più di recente viene inoltre archiviato nel Registro di sistema. La chiave del Registro di sistema è in genere il nome di una società. Viene archiviata in una chiave nel formato seguente: HKEY_CURRENT_USER\Software\\<company></company>\>\\<application></application>\>\\<section></section>\>\\<value></value>\>.  
  
##  <a name="a-namesupportsapplicationrecoverya--cwinappsupportsapplicationrecovery"></a><a name="supportsapplicationrecovery"></a>CWinApp::SupportsApplicationRecovery  
 Determina se Gestione riavvio consente di recuperare un'applicazione a cui è stato terminato in modo imprevisto.  
  
```  
virtual BOOL SupportsApplicationRecovery() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica il manager di riavvio viene ripristinato l'applicazione. `FALSE` indica a Gestione riavvio non esiste.  
  
##  <a name="a-namesupportsautosaveatintervala--cwinappsupportsautosaveatinterval"></a><a name="supportsautosaveatinterval"></a>CWinApp::SupportsAutosaveAtInterval  
 Determina se la funzionalità di Gestione riavvio aprire i documenti a intervalli regolari.  
  
```  
virtual BOOL SupportsAutosaveAtInterval() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica che la funzionalità di Gestione riavvio aprire documenti. `FALSE` indica a Gestione riavvio non esiste.  
  
##  <a name="a-namesupportsautosaveatrestarta--cwinappsupportsautosaveatrestart"></a><a name="supportsautosaveatrestart"></a>CWinApp::SupportsAutosaveAtRestart  
 Determina se la funzionalità di Gestione riavvio qualsiasi aprire documenti quando l'applicazione viene riavviata.  
  
```  
virtual BOOL SupportsAutosaveAtRestart() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica che la funzionalità di Gestione riavvio aprire documenti quando l'applicazione viene riavviata; `FALSE` indica a Gestione riavvio non esiste.  
  
##  <a name="a-namesupportsrestartmanagera--cwinappsupportsrestartmanager"></a><a name="supportsrestartmanager"></a>CWinApp::SupportsRestartManager  
 Determina se l'applicazione supporta la gestione di riavvio.  
  
```  
virtual BOOL SupportsRestartManager() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`indica che l'applicazione supporta la gestione riavvio; `FALSE` indica l'applicazione non esiste.  
  
##  <a name="a-nameunregistera--cwinappunregister"></a><a name="unregister"></a>CWinApp::Unregister  
 Annulla la registrazione di tutti i file registrati dall'oggetto applicazione.  
  
```  
virtual BOOL Unregister();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero in caso di esito positivo; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Il `Unregister` funzione Annulla la registrazione eseguita dall'oggetto applicazione e [registrare](#register) (funzione). In genere, entrambe le funzioni vengono chiamate in modo implicito da MFC e pertanto non verranno visualizzati nel codice.  
  
 Eseguire l'override di questa funzione per eseguire operazioni di annullamento della registrazione personalizzata.  
  
##  <a name="a-nameunregistershellfiletypesa--cwinappunregistershellfiletypes"></a><a name="unregistershellfiletypes"></a>CWinApp::UnregisterShellFileTypes  
 Chiamare questa funzione membro per annullare la registrazione di tutti i tipi di documento dell'applicazione con la gestione di File di Windows.  
  
```  
void UnregisterShellFileTypes();
```  
  
##  <a name="a-namewinhelpa--cwinappwinhelp"></a><a name="winhelp"></a>CWinApp::WinHelp  
 Chiamare questa funzione membro per richiamare l'applicazione WinHelp.  
  
```  
virtual void WinHelp(
    DWORD_PTR dwData,  
    UINT nCmd = HELP_CONTEXT);
```  
  
### <a name="parameters"></a>Parametri  
 `dwData`  
 Specifica i dati aggiuntivi. Il valore utilizzato dipende dal valore di `nCmd` parametro.  
  
 `nCmd`  
 Specifica il tipo di Guida richiesto. Per un elenco di valori possibili e relativa influenza il `dwData` parametro, vedere il [WinHelp](http://msdn.microsoft.com/library/windows/desktop/bb762267) funzione di Windows.  
  
### <a name="remarks"></a>Note  
 Inoltre, il framework chiama questa funzione per richiamare l'applicazione WinHelp.  
  
 Il framework verrà chiusa l'applicazione WinHelp automaticamente quando termina l'applicazione.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#53;](../../mfc/reference/codesnippet/cpp/cwinapp-class_28.cpp)]  
  
##  <a name="a-namewriteprofilebinarya--cwinappwriteprofilebinary"></a><a name="writeprofilebinary"></a>CWinApp::WriteProfileBinary  
 Chiamare questa funzione membro per scrivere dati binari nella sezione specificata del Registro di sistema dell'applicazione o. File INI.  
  
```  
BOOL WriteProfileBinary(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPBYTE pData,  
    UINT nBytes);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creato. Il nome della sezione avviene indipendenti. la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
 `lpszEntry`  
 Punta a una stringa con terminazione null che contiene la voce in cui è possibile scrivere il valore. Se la voce non esiste nella sezione specificata, viene creato.  
  
 `pData`  
 Punta ai dati da scrivere.  
  
 `nBytes`  
 Contiene il numero di byte da scrivere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `CWinApp* pApp = AfxGetApp();` per ottenere la classe CWinApp che illustra un modo che `WriteProfileBinary` e `GetProfileBinary` possono essere utilizzati da qualsiasi funzione in un'applicazione MFC.  
  
 [!code-cpp[&#54; NVC_MFCWindowing](../../mfc/reference/codesnippet/cpp/cwinapp-class_29.cpp)]  
  
 Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileBinary](#getprofilebinary).  
  
##  <a name="a-namewriteprofileinta--cwinappwriteprofileint"></a><a name="writeprofileint"></a>CWinApp:: Writeprofileint  
 Chiamare questa funzione membro per scrivere il valore specificato nella sezione specificata del Registro di sistema dell'applicazione o. File INI.  
  
```  
BOOL WriteProfileInt(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    int nValue);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creato. Il nome della sezione avviene indipendenti. la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
 `lpszEntry`  
 Punta a una stringa con terminazione null che contiene la voce in cui è possibile scrivere il valore. Se la voce non esiste nella sezione specificata, viene creato.  
  
 `nValue`  
 Contiene il valore da scrivere.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 Questo esempio viene utilizzato `CWinApp* pApp = AfxGetApp();` per ottenere la classe CWinApp che illustra un modo che `WriteProfileString`, `WriteProfileInt`, `GetProfileString`, e `GetProfileInt` possono essere utilizzati da qualsiasi funzione in un'applicazione MFC.  
  
 [!code-cpp[NVC_MFCWindowing&#43;](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).  
  
##  <a name="a-namewriteprofilestringa--cwinappwriteprofilestring"></a><a name="writeprofilestring"></a>CWinApp::WriteProfileString  
 Chiamare questa funzione membro per scrivere la stringa specificata nella sezione specificata del Registro di sistema dell'applicazione o. File INI.  
  
```  
BOOL WriteProfileString(
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntry,  
    LPCTSTR lpszValue);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszSection`  
 Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creato. Il nome della sezione avviene indipendenti. la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.  
  
 `lpszEntry`  
 Punta a una stringa con terminazione null che contiene la voce in cui è possibile scrivere il valore. Se la voce non esiste nella sezione specificata, viene creato. Se questo parametro è `NULL`, la sezione specificata da `lpszSection` viene eliminato.  
  
 `lpszValue`  
 Punta alla stringa da scrivere. Se questo parametro è `NULL`, la voce specificata per il `lpszEntry` parametro viene eliminato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing&#43;](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]  
  
 Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).  
  
##  <a name="a-namesetappida--cwinappsetappid"></a><a name="setappid"></a>CWinApp::SetAppID  
 Imposta in modo esplicito l'ID modello utente dell'applicazione per l'applicazione. Questo metodo deve essere chiamato prima che l'interfaccia utente viene presentato all'utente (il metodo migliore è il costruttore dell'applicazione).  
  
```  
void SetAppID(LPCTSTR lpcszAppID);
```  
  
### <a name="parameters"></a>Parametri  
 `lpcszAppID`  
 Specifica l'ID modello utente dell'applicazione.  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [CWinThread (classe)](../../mfc/reference/cwinthread-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Procedura: aggiungere il supporto Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)




