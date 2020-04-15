---
title: Classe CWinApp
ms.date: 07/15/2019
f1_keywords:
- CWinApp
- AFXWIN/CWinApp
- AFXWIN/CWinApp::CWinApp
- AFXWIN/CWinApp::AddDocTemplate
- AFXWIN/CWinApp::AddToRecentFileList
- AFXWIN/CWinApp::ApplicationRecoveryCallback
- AFXWIN/CWinApp::CloseAllDocuments
- AFXWIN/CWinApp::CreatePrinterDC
- AFXWIN/CWinApp::DelRegTree
- AFXWIN/CWinApp::DoMessageBox
- AFXWIN/CWinApp::DoWaitCursor
- AFXWIN/CWinApp::EnableD2DSupport
- AFXWIN/CWinApp::EnableHtmlHelp
- AFXWIN/CWinApp::EnableTaskbarInteraction
- AFXWIN/CWinApp::ExitInstance
- AFXWIN/CWinApp::GetApplicationRecoveryParameter
- AFXWIN/CWinApp::GetApplicationRecoveryPingInterval
- AFXWIN/CWinApp::GetApplicationRestartFlags
- AFXWIN/CWinApp::GetAppRegistryKey
- AFXWIN/CWinApp::GetDataRecoveryHandler
- AFXWIN/CWinApp::GetFirstDocTemplatePosition
- AFXWIN/CWinApp::GetHelpMode
- AFXWIN/CWinApp::GetNextDocTemplate
- AFXWIN/CWinApp::GetPrinterDeviceDefaults
- AFXWIN/CWinApp::GetProfileBinary
- AFXWIN/CWinApp::GetProfileInt
- AFXWIN/CWinApp::GetProfileString
- AFXWIN/CWinApp::GetSectionKey
- AFXWIN/CWinApp::HideApplication
- AFXWIN/CWinApp::HtmlHelp
- AFXWIN/CWinApp::InitInstance
- AFXWIN/CWinApp::IsTaskbarInteractionEnabled
- AFXWIN/CWinApp::LoadCursor
- AFXWIN/CWinApp::LoadIcon
- AFXWIN/CWinApp::LoadOEMCursor
- AFXWIN/CWinApp::LoadOEMIcon
- AFXWIN/CWinApp::LoadStandardCursor
- AFXWIN/CWinApp::LoadStandardIcon
- AFXWIN/CWinApp::OnDDECommand
- AFXWIN/CWinApp::OnIdle
- AFXWIN/CWinApp::OpenDocumentFile
- AFXWIN/CWinApp::ParseCommandLine
- AFXWIN/CWinApp::PreTranslateMessage
- AFXWIN/CWinApp::ProcessMessageFilter
- AFXWIN/CWinApp::ProcessShellCommand
- AFXWIN/CWinApp::ProcessWndProcException
- AFXWIN/CWinApp::Register
- AFXWIN/CWinApp::RegisterWithRestartManager
- AFXWIN/CWinApp::ReopenPreviousFilesAtRestart
- AFXWIN/CWinApp::RestartInstance
- AFXWIN/CWinApp::RestoreAutosavedFilesAtRestart
- AFXWIN/CWinApp::Run
- AFXWIN/CWinApp::RunAutomated
- AFXWIN/CWinApp::RunEmbedded
- AFXWIN/CWinApp::SaveAllModified
- AFXWIN/CWinApp::SelectPrinter
- AFXWIN/CWinApp::SetHelpMode
- AFXWIN/CWinApp::SupportsApplicationRecovery
- AFXWIN/CWinApp::SupportsAutosaveAtInterval
- AFXWIN/CWinApp::SupportsAutosaveAtRestart
- AFXWIN/CWinApp::SupportsRestartManager
- AFXWIN/CWinApp::Unregister
- AFXWIN/CWinApp::WinHelp
- AFXWIN/CWinApp::WriteProfileBinary
- AFXWIN/CWinApp::WriteProfileInt
- AFXWIN/CWinApp::WriteProfileString
- AFXWIN/CWinApp::EnableShellOpen
- AFXWIN/CWinApp::LoadStdProfileSettings
- AFXWIN/CWinApp::OnContextHelp
- AFXWIN/CWinApp::OnFileNew
- AFXWIN/CWinApp::OnFileOpen
- AFXWIN/CWinApp::OnFilePrintSetup
- AFXWIN/CWinApp::OnHelp
- AFXWIN/CWinApp::OnHelpFinder
- AFXWIN/CWinApp::OnHelpIndex
- AFXWIN/CWinApp::OnHelpUsing
- AFXWIN/CWinApp::RegisterShellFileTypes
- AFXWIN/CWinApp::SetAppID
- AFXWIN/CWinApp::SetRegistryKey
- AFXWIN/CWinApp::UnregisterShellFileTypes
- AFXWIN/CWinApp::m_bHelpMode
- AFXWIN/CWinApp::m_eHelpType
- AFXWIN/CWinApp::m_hInstance
- AFXWIN/CWinApp::m_lpCmdLine
- AFXWIN/CWinApp::m_nCmdShow
- AFXWIN/CWinApp::m_pActiveWnd
- AFXWIN/CWinApp::m_pszAppID
- AFXWIN/CWinApp::m_pszAppName
- AFXWIN/CWinApp::m_pszExeName
- AFXWIN/CWinApp::m_pszHelpFilePath
- AFXWIN/CWinApp::m_pszProfileName
- AFXWIN/CWinApp::m_pszRegistryKey
- AFXWIN/CWinApp::m_dwRestartManagerSupportFlags
- AFXWIN/CWinApp::m_nAutosaveInterval
- AFXWIN/CWinApp::m_pDataRecoveryHandler
helpviewer_keywords:
- CWinApp [MFC], CWinApp
- CWinApp [MFC], AddDocTemplate
- CWinApp [MFC], AddToRecentFileList
- CWinApp [MFC], ApplicationRecoveryCallback
- CWinApp [MFC], CloseAllDocuments
- CWinApp [MFC], CreatePrinterDC
- CWinApp [MFC], DelRegTree
- CWinApp [MFC], DoMessageBox
- CWinApp [MFC], DoWaitCursor
- CWinApp [MFC], EnableD2DSupport
- CWinApp [MFC], EnableHtmlHelp
- CWinApp [MFC], EnableTaskbarInteraction
- CWinApp [MFC], ExitInstance
- CWinApp [MFC], GetApplicationRecoveryParameter
- CWinApp [MFC], GetApplicationRecoveryPingInterval
- CWinApp [MFC], GetApplicationRestartFlags
- CWinApp [MFC], GetAppRegistryKey
- CWinApp [MFC], GetDataRecoveryHandler
- CWinApp [MFC], GetFirstDocTemplatePosition
- CWinApp [MFC], GetHelpMode
- CWinApp [MFC], GetNextDocTemplate
- CWinApp [MFC], GetPrinterDeviceDefaults
- CWinApp [MFC], GetProfileBinary
- CWinApp [MFC], GetProfileInt
- CWinApp [MFC], GetProfileString
- CWinApp [MFC], GetSectionKey
- CWinApp [MFC], HideApplication
- CWinApp [MFC], HtmlHelp
- CWinApp [MFC], InitInstance
- CWinApp [MFC], IsTaskbarInteractionEnabled
- CWinApp [MFC], LoadCursor
- CWinApp [MFC], LoadIcon
- CWinApp [MFC], LoadOEMCursor
- CWinApp [MFC], LoadOEMIcon
- CWinApp [MFC], LoadStandardCursor
- CWinApp [MFC], LoadStandardIcon
- CWinApp [MFC], OnDDECommand
- CWinApp [MFC], OnIdle
- CWinApp [MFC], OpenDocumentFile
- CWinApp [MFC], ParseCommandLine
- CWinApp [MFC], PreTranslateMessage
- CWinApp [MFC], ProcessMessageFilter
- CWinApp [MFC], ProcessShellCommand
- CWinApp [MFC], ProcessWndProcException
- CWinApp [MFC], Register
- CWinApp [MFC], RegisterWithRestartManager
- CWinApp [MFC], ReopenPreviousFilesAtRestart
- CWinApp [MFC], RestartInstance
- CWinApp [MFC], RestoreAutosavedFilesAtRestart
- CWinApp [MFC], Run
- CWinApp [MFC], RunAutomated
- CWinApp [MFC], RunEmbedded
- CWinApp [MFC], SaveAllModified
- CWinApp [MFC], SelectPrinter
- CWinApp [MFC], SetHelpMode
- CWinApp [MFC], SupportsApplicationRecovery
- CWinApp [MFC], SupportsAutosaveAtInterval
- CWinApp [MFC], SupportsAutosaveAtRestart
- CWinApp [MFC], SupportsRestartManager
- CWinApp [MFC], Unregister
- CWinApp [MFC], WinHelp
- CWinApp [MFC], WriteProfileBinary
- CWinApp [MFC], WriteProfileInt
- CWinApp [MFC], WriteProfileString
- CWinApp [MFC], EnableShellOpen
- CWinApp [MFC], LoadStdProfileSettings
- CWinApp [MFC], OnContextHelp
- CWinApp [MFC], OnFileNew
- CWinApp [MFC], OnFileOpen
- CWinApp [MFC], OnFilePrintSetup
- CWinApp [MFC], OnHelp
- CWinApp [MFC], OnHelpFinder
- CWinApp [MFC], OnHelpIndex
- CWinApp [MFC], OnHelpUsing
- CWinApp [MFC], RegisterShellFileTypes
- CWinApp [MFC], SetAppID
- CWinApp [MFC], SetRegistryKey
- CWinApp [MFC], UnregisterShellFileTypes
- CWinApp [MFC], m_bHelpMode
- CWinApp [MFC], m_eHelpType
- CWinApp [MFC], m_hInstance
- CWinApp [MFC], m_lpCmdLine
- CWinApp [MFC], m_nCmdShow
- CWinApp [MFC], m_pActiveWnd
- CWinApp [MFC], m_pszAppID
- CWinApp [MFC], m_pszAppName
- CWinApp [MFC], m_pszExeName
- CWinApp [MFC], m_pszHelpFilePath
- CWinApp [MFC], m_pszProfileName
- CWinApp [MFC], m_pszRegistryKey
- CWinApp [MFC], m_dwRestartManagerSupportFlags
- CWinApp [MFC], m_nAutosaveInterval
- CWinApp [MFC], m_pDataRecoveryHandler
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
ms.openlocfilehash: 946de5768829330f84b826a1fc9b2f6278847357
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366826"
---
# <a name="cwinapp-class"></a>Classe CWinApp

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
|[CWinApp::AddDocTemplate](#adddoctemplate)|Aggiunge un modello di documento all'elenco dei modelli di documento disponibili dell'applicazione.|
|[CWinApp::AddToRecentFileList (elemento aggiuntivo)](#addtorecentfilelist)|Aggiunge un nome file all'elenco di file utilizzati più di recente.|
|[CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback)|Chiamato dal framework quando l'applicazione viene chiusa in modo imprevisto.|
|[CWinApp::CloseAllDocuments](#closealldocuments)|Chiude tutti i documenti aperti.|
|[CWinApp::CreatePrinterDC](#createprinterdc)|Crea un contesto di periferica della stampante.|
|[CWinApp::DelRegTree](#delregtree)|Elimina una chiave specificata e tutte le relative sottochiavi.|
|[CWinApp::DoMessageBox](#domessagebox)|Implementa [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per l'applicazione.|
|[CWinApp::DOWaitCursor](#dowaitcursor)|Attiva e disattiva il cursore di attesa.|
|[CWinApp::EnableD2DSupport](#enabled2dsupport)|Abilita il supporto D2D dell'applicazione. Chiamare questo metodo prima dell'inizializzazione della finestra principale.|
|[CWinApp::EnableHtmlHelp](#enablehtmlhelp)|Implementa HTMLHelp per l'applicazione, anziché WinHelp.|
|[CWinApp::EnableTaskbarInteraction](#enabletaskbarinteraction)|Abilita l'interazione della barra delle applicazioni.|
|[CWinApp::ExitInstance](#exitinstance)|Eseguire l'override per eseguire la pulizia al termine dell'applicazione.|
|[CWinApp::GetApplicationRecoveryParameter](#getapplicationrecoveryparameter)|Recupera il parametro di input per il metodo di recupero dell'applicazione.|
|[CWinApp::GetApplicationRecoveryPingInterval](#getapplicationrecoverypinginterval)|Restituisce il periodo di tempo durante il tempo di attesa della funzione di callback di ripristino.|
|[CWinApp::GetApplicationRestartFlags](#getapplicationrestartflags)|Restituisce i flag per il gestore di riavvio.|
|[Chiave CWinApp::GetAppRegistryKey](#getappregistrykey)|Restituisce la\\chiave per HKEY_CURRENT_USER "Software"/ChiaveRegistro/NomeProfilo.|
|[CWinApp::GetDataRecoveryHandler](#getdatarecoveryhandler)|Ottiene il gestore di recupero dati per questa istanza dell'applicazione.|
|[CWinApp::GetFirstDocTemplatePosition](#getfirstdoctemplateposition)|Recupera la posizione del primo modello di documento.|
|[CWinApp::GetHelpMode (Modalità Utente)](#gethelpmode)|Recupera il tipo di Guida utilizzato dall'applicazione.|
|[CWinApp::GetNextDocTemplate](#getnextdoctemplate)|Recupera la posizione di un modello di documento. Può essere utilizzato in modo ricorsivo.|
|[CWinApp::GetPrinterDeviceDefaults](#getprinterdevicedefaults)|Recupera le impostazioni predefinite del dispositivo di stampa.|
|[CWinApp::GetProfileBinary](#getprofilebinary)|Recupera dati binari da una voce nel file . INI.|
|[CWinApp::GetProfileInt](#getprofileint)|Recupera un numero intero da una voce nel file . INI.|
|[CWinApp::GetProfileString](#getprofilestring)|Recupera una stringa da una voce nel file . INI.|
|[CWinApp::GetSectionKey](#getsectionkey)|Restituisce la\\chiave per HKEY_CURRENT_USER "Software", ChiaveRegistroRegistro, AppName, LpszSection.|
|[CWinApp::HideApplication](#hideapplication)|Nasconde l'applicazione prima di chiudere tutti i documenti.|
|[CWinApp::HtmlHelp](#htmlhelp)|Chiama `HTMLHelp` la funzione Windows.|
|[CWinApp::InitInstance](#initinstance)|Eseguire l'override per eseguire l'inizializzazione dell'istanza di Windows, ad esempio la creazione di oggetti finestra.|
|[CWinApp::IsTaskbarInteractionEnabled](#istaskbarinteractionenabled)|Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitata.|
|[CWinApp::LoadCursor](#loadcursor)|Carica una risorsa cursore.|
|[CWinApp::LoadIcon](#loadicon)|Carica una risorsa icona.|
|[CWinApp::Cursore DiMe](#loadoemcursor)|Carica un cursore predefinito Dell'OEM di Windows specificato dalle costanti **OCR_** in WINDOWS. H.|
|[CWinApp::LoadOEMIcon](#loadoemicon)|Carica un'icona predefinita OEM di Windows specificata dalle costanti **OIC_** in WINDOWS. H.|
|[CWinApp::LoadStandardCursor](#loadstandardcursor)|Carica un cursore predefinito di Windows specificato dalle costanti **IDC_** in WINDOWS. H.|
|[CWinApp::LoadStandardIcon](#loadstandardicon)|Carica un'icona predefinita di Windows specificata dalle costanti **IDI_** in WINDOWS. H.|
|[CWinApp::OnDDECommand](#onddecommand)|Chiamato dal framework in risposta a un comando di esecuzione DDE (Dynamic Data Exchange).|
|[CWinApp::OnIdle](#onidle)|Eseguire l'override per eseguire l'elaborazione del tempo di inattività specifico dell'applicazione.|
|[File CWinApp::OpenDocumentFile](#opendocumentfile)|Chiamato dal framework per aprire un documento da un file.|
|[CWinApp::ParseCommandLine](#parsecommandline)|Analizza singoli parametri e flag nella riga di comando.|
|[CWinApp::PreTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinApp::ProcessMessageFilter](#processmessagefilter)|Intercetta alcuni messaggi prima che raggiungano l'applicazione.|
|[CWinApp::ProcessShellCommand](#processshellcommand)|Gestisce gli argomenti e i flag della riga di comando.|
|[CWinApp::ProcessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate dai gestori di messaggi e comandi dell'applicazione.|
|[CWinApp::Registrazione](#register)|Esegue la registrazione personalizzata.|
|[CWinApp::RegisterWithRestartManager (Registrazione ConrestartManager)](#registerwithrestartmanager)|Registra l'applicazione con il gestore di riavvio.|
|[CWinApp::RiaprirePreviousFilesAtRestart](#reopenpreviousfilesatrestart)|Determina se gestione riavvio riapre i file aperti alla chiusura imprevista dell'applicazione.|
|[CWinApp::RestartInstance](#restartinstance)|Gestisce il riavvio di un'applicazione avviato dal gestore di riavvii.|
|[CWinApp::RestoreAutosavedFilesAtRestart](#restoreautosavedfilesatrestart)|Determina se Gestione riavvio ripristina i file salvati automaticamente quando viene riavviata l'applicazione.|
|[CWinApp::Esecuzione](#run)|Esegue il ciclo di messaggi predefinito. Eseguire l'override per personalizzare il ciclo di messaggi.|
|[CWinApp::RunAutomated](#runautomated)|Verifica la riga di comando dell'applicazione per l'opzione **/Automation.** Obsoleto. Utilizzare invece il valore in [CCommandLineInfo::m_bRunAutomated](../../mfc/reference/ccommandlineinfo-class.md#m_brunautomated) dopo aver chiamato [ParseCommandLine](#parsecommandline).|
|[CWinApp::RunEmbedded](#runembedded)|Verifica la riga di comando dell'applicazione per l'opzione **/Embedding.** Obsoleto. Utilizzare invece il valore in [CCommandLineInfo::m_bRunEmbedded](../../mfc/reference/ccommandlineinfo-class.md#m_brunembedded) dopo aver chiamato [ParseCommandLine](#parsecommandline).|
|[CWinApp::SaveAllModified](#saveallmodified)|Richiede all'utente di salvare tutti i documenti modificati.|
|[CWinApp::SelectPrinter](#selectprinter)|Seleziona una stampante precedentemente indicata da un utente tramite una finestra di dialogo di stampa.|
|[CWinApp::SetHelpMode (modalità UtenteCWinApp::SetHelpMode)](#sethelpmode)|Imposta e inizializza il tipo di Guida utilizzato dall'applicazione.|
|[CWinApp::SupportsApplicationRecovery (Informazioni in base alle funzionalità](#supportsapplicationrecovery)|Determina se il gestore di riavvii ripristina un'applicazione terminata in modo imprevisto.|
|[CWinApp::SupportsAutosaveAtInterval](#supportsautosaveatinterval)|Determina se il gestore di riavvii salva automaticamente i documenti aperti a intervalli regolari.|
|[CWinApp::SupportsAutosaveAtRestart (Informazioni in base alle opzioni](#supportsautosaveatrestart)|Determina se Il gestore di riavvii salva automaticamente i documenti aperti al riavvio dell'applicazione.|
|[CWinApp::SupportsRestartManager](#supportsrestartmanager)|Determina se l'applicazione supporta il gestore di riavvio.|
|[CWinApp::Annulla registrazione](#unregister)|Annulla la registrazione di tutti `CWinApp` gli elementi noti per essere registrati dall'oggetto.|
|[CWinApp::WinHelp](#winhelp)|Chiama `WinHelp` la funzione Windows.|
|[CWinApp::WriteProfileBinary](#writeprofilebinary)|Scrive dati binari in una voce nell'oggetto . INI.|
|[CWinApp::WriteProfileInt](#writeprofileint)|Scrive un numero intero in una voce nell'oggetto . INI.|
|[CWinApp::WriteProfileString](#writeprofilestring)|Scrive una stringa in una voce nell'oggetto . INI.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp::EnableShellOpen](#enableshellopen)|Consente all'utente di aprire i file di dati da File Manager di Windows.|
|[CWinApp::LoadStdProfileSettings](#loadstdprofilesettings)|Carica standard . INI e abilita la funzionalità di elenco file MRU.|
|[CWinApp::OnContextHelp](#oncontexthelp)|Gestisce la Guida di Shift-F1 all'interno dell'applicazione.|
|[CWinApp::OnFileNew](#onfilenew)|Implementa il comando ID_FILE_NEW.|
|[CWinApp::OnFileOpen](#onfileopen)|Implementa il comando ID_FILE_OPEN.|
|[CWinApp::OnFilePrintSetup](#onfileprintsetup)|Implementa il comando ID_FILE_PRINT_SETUP.|
|[CWinApp::OnHelp](#onhelp)|Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).|
|[CWinApp::OnHelpFinder](#onhelpfinder)|Gestisce i comandi ID_HELP_FINDER e ID_DEFAULT_HELP.|
|[CWinApp::Indice Di Aiuto](#onhelpindex)|Gestisce il comando ID_HELP_INDEX e fornisce un argomento della Guida predefinito.|
|[CWinApp::OnHelpUtilizzo](#onhelpusing)|Gestisce il comando ID_HELP_USING.|
|[CWinApp::RegisterShellFileTypes](#registershellfiletypes)|Registra tutti i tipi di documento dell'applicazione con Gestione file di Windows.|
|[CWinApp::SetAppID](#setappid)|Imposta in modo esplicito l'ID modello utente dell'applicazione. Questo metodo deve essere chiamato prima che qualsiasi interfaccia utente viene presentata all'utente (la posizione migliore è il costruttore dell'applicazione).|
|[CWinApp::SetRegistryKey](#setregistrykey)|Fa sì che le impostazioni dell'applicazione vengano archiviate nel Registro di sistema anziché in . File INI.|
|[CWinApp::UnregisterShellFileTypes](#unregistershellfiletypes)|Annulla la registrazione di tutti i tipi di documento dell'applicazione con Gestione file di Windows.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp::m_bHelpMode](#m_bhelpmode)|Indica se l'utente è in modalità contestuale della Guida (in genere richiamato con MAIUSC - F1).|
|[CWinApp::m_eHelpType](#m_ehelptype)|Specifica il tipo di Guida utilizzato dall'applicazione.|
|[CWinApp::m_hInstance](#m_hinstance)|Identifica l'istanza corrente dell'applicazione.|
|[CWinApp::m_lpCmdLine](#m_lpcmdline)|Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.|
|[CWinApp::m_nCmdShow](#m_ncmdshow)|Specifica la modalità di visualizzazione iniziale della finestra.|
|[CWinApp::m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|
|[CWinApp::m_pszAppID](#m_pszappid)|ID modello utente dell'applicazione.|
|[CWinApp::m_pszAppName](#m_pszappname)|Specifica il nome dell'applicazione.|
|[CWinApp::m_pszExeName](#m_pszexename)|Nome del modulo dell'applicazione.|
|[CWinApp::m_pszHelpFilePath](#m_pszhelpfilepath)|Percorso del file della Guida dell'applicazione.|
|[CWinApp::m_pszProfileName](#m_pszprofilename)|L'applicazione è . NOME file INI.|
|[CWinApp::m_pszRegistryKey](#m_pszregistrykey)|Utilizzato per determinare la chiave del Registro di sistema completa per l'archiviazione delle impostazioni del profilo dell'applicazione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp::m_dwRestartManagerSupportFlags](#m_dwrestartmanagersupportflags)|Flag che determinano il funzionamento del gestore di riavvii.|
|[CWinApp::m_nAutosaveInterval](#m_nautosaveinterval)|Periodo di tempo in millisecondi tra un salvataggio automatico e l'altro.|
|[CWinApp::m_pDataRecoveryHandler](#m_pdatarecoveryhandler)|Puntatore al gestore di recupero dati per l'applicazione.|

## <a name="remarks"></a>Osservazioni

Un oggetto applicazione fornisce funzioni membro per l'inizializzazione dell'applicazione (e ogni istanza di esso) e per l'esecuzione dell'applicazione.

Ogni applicazione che utilizza le classi di Microsoft `CWinApp`Foundation può contenere un solo oggetto derivato da . Questo oggetto viene costruito quando vengono costruiti altri oggetti globali `WinMain` di C, ed è già disponibile quando Windows chiama la funzione, fornita dalla libreria Microsoft Foundation Class. Dichiarare l'oggetto derivato `CWinApp` a livello globale.

Quando si deriva una `CWinApp`classe di applicazione da , eseguire l'override della funzione membro [InitInstance](#initinstance) per creare l'oggetto finestra principale dell'applicazione.

Oltre alle `CWinApp` funzioni membro, la libreria Microsoft Foundation Class fornisce `CWinApp` le seguenti funzioni globali per accedere all'oggetto e ad altre informazioni globali:

- [AfxGetApp](application-information-and-management.md#afxgetapp) Ottiene un puntatore `CWinApp` all'oggetto.

- [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle) Ottiene un handle per l'istanza dell'applicazione corrente.

- [AfxGetResourceHandle](application-information-and-management.md#afxgetresourcehandle) Ottiene un handle per le risorse dell'applicazione.

- [NomeapAfxGetAppName](application-information-and-management.md#afxgetappname) Ottiene un puntatore a una stringa contenente il nome dell'applicazione. In alternativa, se si dispone `CWinApp` di `m_pszExeName` un puntatore all'oggetto, utilizzare per ottenere il nome dell'applicazione.

Vedere CWinApp: la classe Application per ulteriori informazioni sulla classe, inclusa una panoramica degli elementi seguenti:See [CWinApp: The Application Class](../../mfc/cwinapp-the-application-class.md) for more on the `CWinApp` class, including an overview of the following:

- `CWinApp`Codice derivato scritto dalla Creazione guidata applicazione.

- `CWinApp`ruolo nella sequenza di esecuzione dell'applicazione.

- `CWinApp`implementazioni di funzioni membro predefinite.

- `CWinApp`'s sottoponibili a sottoponimenti sottoponibili a chiave.

Il `m_hPrevInstance` membro dati non esiste più. Per determinare se un'altra istanza dell'applicazione è in esecuzione, utilizzare un mutex denominato. Se l'apertura del mutex ha esito negativo, non sono presenti altre istanze dell'applicazione in esecuzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

`CWinApp`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

## <a name="cwinappadddoctemplate"></a><a name="adddoctemplate"></a>CWinApp::AddDocTemplate

Chiamare questa funzione membro per aggiungere un modello di documento all'elenco dei modelli di documento disponibili che l'applicazione gestisce.

```
void AddDocTemplate(CDocTemplate* pTemplate);
```

### <a name="parameters"></a>Parametri

*pModello*<br/>
Puntatore all'oggetto `CDocTemplate` da aggiungere.

### <a name="remarks"></a>Osservazioni

È necessario aggiungere tutti i modelli di documento a un'applicazione prima di chiamare [RegisterShellFileTypes](#registershellfiletypes).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#35](../../mfc/reference/codesnippet/cpp/cwinapp-class_1.cpp)]

## <a name="cwinappaddtorecentfilelist"></a><a name="addtorecentfilelist"></a>CWinApp::AddToRecentFileList (elemento aggiuntivo)

Chiamare questa funzione membro per aggiungere *lpszPathName* all'elenco di file MRU.

```
virtual void AddToRecentFileList(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*LpszPathName (nome di metodo)*<br/>
Percorso del file.

### <a name="remarks"></a>Osservazioni

È necessario chiamare la funzione membro [LoadStdProfileSettings](#loadstdprofilesettings) per caricare l'elenco di file MRU corrente prima di utilizzare questa funzione membro.

Il framework chiama questa funzione membro quando apre un file o esegue il comando Salva con nome per salvare un file con un nuovo nome.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#36](../../mfc/reference/codesnippet/cpp/cwinapp-class_2.cpp)]

## <a name="cwinappapplicationrecoverycallback"></a><a name="applicationrecoverycallback"></a>CWinApp::ApplicationRecoveryCallback

Chiamato dal framework quando l'applicazione viene chiusa in modo imprevisto.

```
virtual DWORD ApplicationRecoveryCallback(LPVOID lpvParam);
```

### <a name="parameters"></a>Parametri

*lpvParam (informazioni in base al tempo instato*<br/>
[in] Riservato per un utilizzo futuro.

### <a name="return-value"></a>Valore restituito

0 se questo metodo ha esito positivo; diverso da zero se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Se l'applicazione supporta il gestore di riavvio, il framework chiama questa funzione quando l'applicazione viene chiusa in modo imprevisto.

L'implementazione `ApplicationRecoveryCallback` predefinita `CDataRecoveryHandler` di utilizza il per salvare l'elenco dei documenti attualmente aperti nel Registro di sistema. Questo metodo non salva automaticamente i file.

Per personalizzare il comportamento, eseguire l'override di questa funzione in una [classe CWinApp](../../mfc/reference/cwinapp-class.md) derivata o passare il proprio metodo di recupero dell'applicazione come parametro a [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).

## <a name="cwinappclosealldocuments"></a><a name="closealldocuments"></a>CWinApp::CloseAllDocuments

Chiamare questa funzione membro per chiudere tutti i documenti aperti prima di uscire.

```
void CloseAllDocuments(BOOL bEndSession);
```

### <a name="parameters"></a>Parametri

*bEndSessione*<br/>
Specifica se la sessione di Windows deve essere terminata o meno. È TRUE se la sessione viene terminata; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare [HideApplication](#hideapplication) `CloseAllDocuments`prima di chiamare .

## <a name="cwinappcreateprinterdc"></a><a name="createprinterdc"></a>CWinApp::CreatePrinterDC

Chiamare questa funzione membro per creare un contesto di periferica (DC) della stampante dalla stampante selezionata.

```
BOOL CreatePrinterDC(CDC& dc);
```

### <a name="parameters"></a>Parametri

*Dc*<br/>
Riferimento a un contesto di dispositivo della stampante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il contesto di periferica della stampante viene creato correttamente; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

`CreatePrinterDC`inizializza il contesto di dispositivo passato per riferimento, in modo da poterlo utilizzare per la stampa.

Se la funzione ha esito positivo, al termine della stampa, è necessario eliminare il contesto di periferica. È possibile consentire al distruttore dell'oggetto [CDC](../../mfc/reference/cdc-class.md) di farlo oppure è possibile farlo in modo esplicito chiamando [CDC::DeleteDC](../../mfc/reference/cdc-class.md#deletedc).

## <a name="cwinappcwinapp"></a><a name="cwinapp"></a>CWinApp::CWinApp

Costruisce un `CWinApp` oggetto e passa *lpszAppName* da archiviare come nome dell'applicazione.

```
CWinApp(LPCTSTR lpszAppName = NULL);
```

### <a name="parameters"></a>Parametri

*NomeAppz*<br/>
Stringa con terminazione null contenente il nome dell'applicazione utilizzato da Windows. Se questo argomento non viene fornito `CWinApp` o è NULL, utilizza la stringa di risorsa AFX_IDS_APP_TITLE o il nome del file eseguibile.

### <a name="remarks"></a>Osservazioni

È necessario costruire un `CWinApp`oggetto globale della classe derivata. È possibile avere `CWinApp` un solo oggetto nell'applicazione. Il costruttore archivia `CWinApp` un `WinMain` puntatore all'oggetto in modo che possa chiamare le funzioni membro dell'oggetto per inizializzare ed eseguire l'applicazione.

## <a name="cwinappdelregtree"></a><a name="delregtree"></a>CWinApp::DelRegTree

Elimina una chiave del Registro di sistema specifica e tutte le relative sottochiavi.

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

*hParentKey (Chiave padre)*<br/>
Gestire una chiave del Registro di sistema.

*strKeyName (NomeChiave)*<br/>
Nome della chiave del Registro di sistema da eliminare.

*Ptm*<br/>
Puntatore all'oggetto CAtlTransactionManager.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror.h.If the function fails, the return value is a diverso da zero error code defined in Winerror.h.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per eliminare la chiave specificata e le relative sottochiavi.

## <a name="cwinappdomessagebox"></a><a name="domessagebox"></a>CWinApp::DoMessageBox

Il framework chiama questa funzione membro per implementare una finestra di messaggio per la funzione globale [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox).

```
virtual int DoMessageBox(
    LPCTSTR lpszPrompt,
    UINT nType,
    UINT nIDPrompt);
```

### <a name="parameters"></a>Parametri

*lpszPrompt (Prompt)*<br/>
Indirizzo del testo nella finestra di messaggio.

*nType*<br/>
[Stile](../../mfc/reference/styles-used-by-mfc.md#message-box-styles)della finestra di messaggio .

*nIDPrompt (informazioni in stato inquestoe*<br/>
Indice di una stringa di contesto della Guida.

### <a name="return-value"></a>Valore restituito

Restituisce gli `AfxMessageBox`stessi valori di .

### <a name="remarks"></a>Osservazioni

Non chiamare questa funzione membro per aprire una finestra di messaggio; utilizzare `AfxMessageBox` invece.

Eseguire l'override di questa funzione `AfxMessageBox` membro per personalizzare l'elaborazione delle chiamate a livello di applicazione.

## <a name="cwinappdowaitcursor"></a><a name="dowaitcursor"></a>CWinApp::DOWaitCursor

Questa funzione membro viene chiamata dal framework per implementare [CWaitCursor](../../mfc/reference/cwaitcursor-class.md), [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)e [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

```
virtual void DoWaitCursor(int nCode);
```

### <a name="parameters"></a>Parametri

*Ncode*<br/>
Se questo parametro è 1, viene visualizzato un cursore di attesa. Se 0, il cursore di attesa viene ripristinato senza incrementare il conteggio dei riferimenti. Se -1, il cursore di attesa termina.

### <a name="remarks"></a>Osservazioni

Il valore predefinito implementa un cursore a clessidra. `DoWaitCursor`mantiene un conteggio dei riferimenti. Quando è positivo, viene visualizzato il cursore a clessidra.

Anche se in `DoWaitCursor` genere non si chiama direttamente, è possibile eseguire l'override di questa funzione membro per modificare il cursore di attesa o per eseguire ulteriori elaborazioni mentre viene visualizzato il cursore di attesa.

Per un modo più semplice e semplificato `CWaitCursor`per implementare un cursore di attesa, utilizzare .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#37](../../mfc/reference/codesnippet/cpp/cwinapp-class_3.cpp)]

## <a name="cwinappenabled2dsupport"></a><a name="enabled2dsupport"></a>CWinApp::EnableD2DSupport

È necessario Visual Studio 2010 SP1.

Abilita il supporto D2D dell'applicazione. Chiamare questo metodo prima dell'inizializzazione della finestra principale.

```
BOOL EnableD2DSupport(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```

### <a name="parameters"></a>Parametri

*Tipod d2dFactoryType*<br/>
Il modello di threading della factory D2D e le risorse che crea.

*writeFactoryType (tipo scrittore)*<br/>
Valore che specifica se l'oggetto factory di scrittura verrà condiviso o isolato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il supporto D2D è stato abilitato, FALSE - in caso contrario

## <a name="cwinappenablehtmlhelp"></a><a name="enablehtmlhelp"></a>CWinApp::EnableHtmlHelp

Chiamare questa funzione membro dall'interno del costruttore della `CWinApp`classe derivata da classe derivata da utilizzare HTMLHelp per la Guida dell'applicazione.

```
void EnableHtmlHelp();
```

### <a name="remarks"></a>Osservazioni

## <a name="cwinappenableshellopen"></a><a name="enableshellopen"></a>CWinApp::EnableShellOpen

Chiamare questa funzione, `InitInstance` in genere dall'override, per consentire agli utenti dell'applicazione di aprire i file di dati quando fanno doppio clic sui file dall'interno di File Manager di Windows.Call this function, typically from your override, to enable your application's open data files when they double-click the files from within the Windows File Manager.

```
void EnableShellOpen();
```

### <a name="remarks"></a>Osservazioni

Chiamare `RegisterShellFileTypes` la funzione membro insieme a questa funzione o fornire un oggetto . REG con l'applicazione per la registrazione manuale dei tipi di documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#38](../../mfc/reference/codesnippet/cpp/cwinapp-class_4.cpp)]

## <a name="cwinappenabletaskbarinteraction"></a><a name="enabletaskbarinteraction"></a>CWinApp::EnableTaskbarInteraction

Abilita l'interazione della barra delle applicazioni.

```
BOOL EnableTaskbarInteraction(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se l'interazione con la barra delle applicazioni di Windows 7 deve essere abilitata (TRUE) o disabilitata (FALSE).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'interazione con la barra delle applicazioni può essere abilitata o disabilitata.

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato prima della creazione della finestra principale, altrimenti asserisce e restituisce FALSE.

## <a name="cwinappexitinstance"></a><a name="exitinstance"></a>CWinApp::ExitInstance

Chiamato dal framework dall'interno della `Run` funzione membro per uscire da questa istanza dell'applicazione.

```
virtual int ExitInstance();
```

### <a name="return-value"></a>Valore restituito

Codice di uscita dell'applicazione; 0 indica nessun errore e i valori maggiori di 0 indicano un errore. Questo valore viene utilizzato come `WinMain`valore restituito da .

### <a name="remarks"></a>Osservazioni

Non chiamare questa funzione membro da `Run` qualsiasi punto ma all'interno della funzione membro.

L'implementazione predefinita di questa funzione scrive le opzioni del framework nell'oggetto . INI. Eseguire l'override di questa funzione per eseguire la pulizia al termine dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#39](../../mfc/reference/codesnippet/cpp/cwinapp-class_5.cpp)]

## <a name="cwinappgetapplicationrecoveryparameter"></a><a name="getapplicationrecoveryparameter"></a>CWinApp::GetApplicationRecoveryParameter

Recupera il parametro di input per il metodo di recupero dell'applicazione.

```
virtual LPVOID GetApplicationRecoveryParameter();
```

### <a name="return-value"></a>Valore restituito

Parametro di input predefinito per il metodo di recupero dell'applicazione.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito di questa funzione restituisce NULL.

Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

## <a name="cwinappgetapplicationrecoverypinginterval"></a><a name="getapplicationrecoverypinginterval"></a>CWinApp::GetApplicationRecoveryPingInterval

Restituisce il periodo di tempo durante il tempo di attesa della funzione di callback di ripristino.

```
virtual DWORD GetApplicationRecoveryPingInterval();
```

### <a name="return-value"></a>Valore restituito

Periodo di tempo in millisecondi.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione registrata con il gestore di riavvio viene chiusa in modo imprevisto, l'applicazione tenta di salvare i documenti aperti e chiama la funzione di callback di ripristino. La funzione di callback di ripristino predefinita è [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).

Il periodo di tempo che il framework attende la restituzione della funzione di callback di ripristino è l'intervallo di ping. È possibile personalizzare l'intervallo di ping eseguendo l'override `CWinApp::GetApplicationRecoveryPingInterval` o fornendo un valore personalizzato a `RegisterWithRestartManager`.

## <a name="cwinappgetapplicationrestartflags"></a><a name="getapplicationrestartflags"></a>CWinApp::GetApplicationRestartFlags

Restituisce i flag per il gestore di riavvio.

```
virtual DWORD GetApplicationRestartFlags();
```

### <a name="return-value"></a>Valore restituito

Flag per il gestore di riavvio. L'implementazione predefinita restituisce 0.The default implementation returns 0.

### <a name="remarks"></a>Osservazioni

I flag per il gestore di riavvio non hanno alcun effetto con l'implementazione predefinita. Essi sono forniti per un uso futuro.

Impostare i flag quando si registra l'applicazione con il gestore di riavvio utilizzando [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager).

I valori possibili per i flag di gestione del riavvio sono i seguenti:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

## <a name="cwinappgetappregistrykey"></a><a name="getappregistrykey"></a>Chiave CWinApp::GetAppRegistryKey

Restituisce la\\chiave per HKEY_CURRENT_USER "Software"/ChiaveRegistro/NomeProfilo.

```
HKEY GetAppRegistryKey(CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Chiave dell'applicazione se la funzione ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cwinappgetdatarecoveryhandler"></a><a name="getdatarecoveryhandler"></a>CWinApp::GetDataRecoveryHandler

Ottiene il gestore di recupero dati per questa istanza dell'applicazione.

```
virtual CDataRecoveryHandler *GetDataRecoveryHandler();
```

### <a name="return-value"></a>Valore restituito

Gestore di recupero dati per questa istanza dell'applicazione.

### <a name="remarks"></a>Osservazioni

Ogni applicazione che utilizza il gestore di riavvii deve disporre di un'istanza della [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md). Questa classe è responsabile del monitoraggio dei documenti aperti e del salvataggio automatico dei file. Il comportamento `CDataRecoveryHandler` di dipende dalla configurazione del gestore di riavvio. Per ulteriori informazioni, vedere [Classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md).

Questo metodo restituisce NULL nei sistemi operativi precedenti a Windows Vista. Gestione riavvio non è supportato nei sistemi operativi precedenti a Windows Vista.

Se l'applicazione non dispone attualmente di un gestore di recupero dati, questo metodo ne crea uno e restituisce un puntatore a esso.

## <a name="cwinappgetfirstdoctemplateposition"></a><a name="getfirstdoctemplateposition"></a>CWinApp::GetFirstDocTemplatePosition

Ottiene la posizione del primo modello di documento nell'applicazione.

```
POSITION GetFirstDocTemplatePosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per il recupero dell'iterazione o del puntatore a oggetti. NULL se l'elenco è vuoto.

### <a name="remarks"></a>Osservazioni

Utilizzare il valore POSITION restituito in una chiamata a [GetNextDocTemplate](#getnextdoctemplate) per ottenere il primo oggetto [CDocTemplate.](../../mfc/reference/cdoctemplate-class.md)

## <a name="cwinappgethelpmode"></a><a name="gethelpmode"></a>CWinApp::GetHelpMode (Modalità Utente)

Recupera il tipo di Guida utilizzato dall'applicazione.

```
AFX_HELP_TYPE GetHelpMode();
```

### <a name="return-value"></a>Valore restituito

Tipo di Guida utilizzato dall'applicazione. Per altre informazioni, vedere [CWinApp::m_eHelpType.](#m_ehelptype)

## <a name="cwinappgetnextdoctemplate"></a><a name="getnextdoctemplate"></a>CWinApp::GetNextDocTemplate

Ottiene il modello di documento identificato da *pos*, quindi imposta *pos* sul valore POSITION.

```
CDocTemplate* GetNextDocTemplate(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*Pos*<br/>
Riferimento a un valore POSITION restituito da `GetNextDocTemplate` una precedente chiamata a o [GetFirstDocTemplatePosition](#getfirstdoctemplateposition). Il valore viene aggiornato alla posizione successiva da questa chiamata.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CDocTemplate.](../../mfc/reference/cdoctemplate-class.md)

### <a name="remarks"></a>Osservazioni

È possibile `GetNextDocTemplate` utilizzare in un ciclo di iterazione in `GetFirstDocTemplatePosition`avanti se si stabilisce la posizione iniziale con una chiamata a .

È necessario assicurarsi che il valore POSITION sia valido. Se non è valido, la versione di debug della libreria Microsoft Foundation Class asserisce.

Se il modello di documento recuperato è l'ultimo disponibile, il nuovo valore di *pos* è impostato su NULL.

## <a name="cwinappgetprinterdevicedefaults"></a><a name="getprinterdevicedefaults"></a>CWinApp::GetPrinterDeviceDefaults

Chiamare questa funzione membro per preparare un contesto di periferica della stampante per la stampa.

```
BOOL GetPrinterDeviceDefaults(struct tagPDA* pPrintDlg);
```

### <a name="parameters"></a>Parametri

*pPrintDlg*<br/>
Puntatore a una struttura [PRINTDLG.](/windows/win32/api/commdlg/ns-commdlg-printdlga)

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Recupera le impostazioni predefinite della stampante corrente da Windows . INI in base alle esigenze oppure utilizza l'ultima configurazione della stampante impostata dall'utente in Imposta stampante.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#40](../../mfc/reference/codesnippet/cpp/cwinapp-class_6.cpp)]

## <a name="cwinappgetprofilebinary"></a><a name="getprofilebinary"></a>CWinApp::GetProfileBinary

Chiamare questa funzione membro per recuperare dati binari da una voce all'interno di una sezione specificata del Registro di sistema dell'applicazione o . INI.

```
BOOL GetProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE* ppData,
    UINT* pBytes);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.

*dati ppData*<br/>
Punta a un puntatore che riceverà l'indirizzo dei dati.

*pByte*<br/>
Punta a un UINT che riceverà la dimensione dei dati (in byte).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro non fa distinzione tra maiuscole e minuscole, pertanto le stringhe nei parametri *lpszSection* e *lpszEntry* possono differire nel caso.

> [!NOTE]
> `GetProfileBinary`alloca un buffer e \* ne restituisce l'indirizzo in *ppData*. Il chiamante è responsabile della liberazione del buffer mediante **delete []**.

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#41](../../mfc/reference/codesnippet/cpp/cwinapp-class_7.cpp)]

Per un altro esempio, vedere [CWinApp::WriteProfileBinary](#writeprofilebinary).

## <a name="cwinappgetprofileint"></a><a name="getprofileint"></a>CWinApp::GetProfileInt

Chiamare questa funzione membro per recuperare il valore di un intero da una voce in una sezione specifica del Registro di sistema dell'applicazione o del file INI.

```
UINT GetProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nDefault);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.

*nImpostazione predefinita*<br/>
Specifica il valore predefinito per restituire se il framework non riesce a trovare la voce.

### <a name="return-value"></a>Valore restituito

Valore intero della stringa che segue la voce specificata se la funzione ha esito positivo. Il valore restituito è il valore del parametro *nDefault* se la funzione non trova la voce. Il valore restituito è 0 se il valore che corrisponde alla voce specificata non è un intero.

Questa funzione supporta la notazione esadecimale per il valore nel file INI. Quando si recupera un intero con segno, è necessario eseguire il cast del valore in un **oggetto int**.

### <a name="remarks"></a>Osservazioni

Questa funzione membro non fa distinzione tra maiuscole e minuscole, pertanto le stringhe nei parametri *lpszSection* e *lpszEntry* possono differire nel caso.

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#42](../../mfc/reference/codesnippet/cpp/cwinapp-class_8.cpp)]

Per un altro esempio, vedere [CWinApp::WriteProfileInt](#writeprofileint).

## <a name="cwinappgetprofilestring"></a><a name="getprofilestring"></a>CWinApp::GetProfileString

Chiamare questa funzione membro per recuperare la stringa associata a una voce all'interno della sezione specificata nel Registro di sistema dell'applicazione o . INI.

```
CString GetProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszDefault = NULL);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce la cui stringa deve essere recuperata. Questo valore non deve essere NULL.

*lpszDefault (impostazione predefinita)*<br/>
Punta al valore stringa predefinito per la voce specificata se non è possibile trovare la voce nel file di inizializzazione.

### <a name="return-value"></a>Valore restituito

Il valore restituito è la stringa dall'applicazione. INI o *lpszDefault* se non è possibile trovare la stringa. La lunghezza massima della stringa supportata dal framework è _MAX_PATH. Se *lpszDefault* è NULL, il valore restituito è una stringa vuota.

### <a name="remarks"></a>Osservazioni

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).

## <a name="cwinappgetsectionkey"></a><a name="getsectionkey"></a>CWinApp::GetSectionKey

Restituisce la\\chiave per HKEY_CURRENT_USER "Software", ChiaveRegistroRegistro, AppName, LpszSection.

```
HKEY GetSectionKey(
    LPCTSTR lpszSection,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Il nome della chiave da ottenere.

*Ptm*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Tasto di sezione se la funzione ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

## <a name="cwinapphideapplication"></a><a name="hideapplication"></a>CWinApp::HideApplication

Chiamare questa funzione membro per nascondere un'applicazione prima di chiudere i documenti aperti.

```
void HideApplication();
```

## <a name="cwinapphtmlhelp"></a><a name="htmlhelp"></a>CWinApp::HtmlHelp

Chiamare questa funzione membro per richiamare l'applicazione HTMLHelp.

```
virtual void HtmlHelp(
    DWORD_PTR dwData,
    UINT nCmd = 0x000F);
```

### <a name="parameters"></a>Parametri

*dwData (dati)*<br/>
Specifica dati aggiuntivi. Il valore utilizzato dipende dal valore del parametro *nCmd.* Impostazione `0x000F` predefinita che indica [HH_HELP_CONTEXT](/previous-versions/windows/desktop/htmlhelp/hh-help-context-command).

*nCmd*<br/>
Specifica il tipo di Guida richiesto. Per un elenco dei valori possibili e del modo in cui influiscono sul parametro *dwData,* vedere il parametro *uCommand* descritto nelle funzioni API [HtmlHelpW](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpw) o [HtmlHelpA](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpa) in Windows SDK.

### <a name="remarks"></a>Osservazioni

Il framework chiama anche questa funzione per richiamare l'applicazione HTMLHelp.

Il framework chiuderà automaticamente l'applicazione HTMLHelp al termine dell'applicazione.

## <a name="cwinappinitinstance"></a><a name="initinstance"></a>CWinApp::InitInstance

Windows consente l'esecuzione contemporanea di più copie dello stesso programma.

```
virtual BOOL InitInstance();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'inizializzazione dell'applicazione è concettualmente suddivisa in due sezioni: l'inizializzazione dell'applicazione una tantera eseguita la prima volta che il programma viene eseguito e l'inizializzazione dell'istanza che viene eseguita ogni volta che viene eseguita una copia del programma, inclusa la prima volta. L'implementazione del `WinMain` framework di chiama questa funzione.

Eseguire `InitInstance` l'override per inizializzare ogni nuova istanza dell'applicazione in esecuzione in Windows. In genere, `InitInstance` si esegue l'override `CWinThread::m_pMainWnd` per costruire l'oggetto finestra principale e impostare il membro dati in modo che punti a tale finestra. Per ulteriori informazioni sull'override di questa funzione membro, vedere [CWinApp: la classe Application](../../mfc/cwinapp-the-application-class.md).

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell'override, `InitInstance` specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#9](../../atl/reference/codesnippet/cpp/cwinapp-class_10.cpp)]

## <a name="cwinappistaskbarinteractionenabled"></a><a name="istaskbarinteractionenabled"></a>CWinApp::IsTaskbarInteractionEnabled

Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitata.

```
virtual BOOL IsTaskbarInteractionEnabled();
```

### <a name="return-value"></a>Valore restituito

Restituisce `EnableTaskbarInteraction` TRUE se è stato chiamato e il sistema operativo è Windows 7 o versione successiva.

### <a name="remarks"></a>Osservazioni

Interazione della barra delle applicazioni significa che l'applicazione MDI visualizza il contenuto degli elementi figlio MDI in anteprime a schede separate che vengono visualizzate quando il puntatore del mouse si trova sul pulsante della barra delle applicazioni.

## <a name="cwinapploadcursor"></a><a name="loadcursor"></a>CWinApp::LoadCursor

Carica la risorsa cursore denominata da *lpszResourceName* o specificata da *nIDResource* dal file eseguibile corrente.

```
HCURSOR LoadCursor(LPCTSTR lpszResourceName) const;  HCURSOR LoadCursor(UINT nIDResource) const;
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa cursore. È possibile `CString` utilizzare un per questo argomento.

*nIDResource*<br/>
ID della risorsa cursore. Per un elenco delle risorse, vedere [LoadCursor](/windows/win32/api/winuser/nf-winuser-loadcursorw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Un handle a un cursore se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

`LoadCursor`carica il cursore in memoria solo se non è stato caricato in precedenza; in caso contrario, recupera un handle della risorsa esistente.

Utilizzare la funzione membro [LoadStandardCursor](#loadstandardcursor) o [LoadOEMCursor](#loadoemcursor) per accedere ai cursori di Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#44](../../mfc/reference/codesnippet/cpp/cwinapp-class_11.cpp)]

## <a name="cwinapploadicon"></a><a name="loadicon"></a>CWinApp::LoadIcon

Carica la risorsa icona denominata da *lpszResourceName* o specificata da *nIDResource* dal file eseguibile.

```
HICON LoadIcon(LPCTSTR lpszResourceName) const;  HICON LoadIcon(UINT nIDResource) const;
```

### <a name="parameters"></a>Parametri

*LpszResourceName (nome della risorsa)*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa icona. È inoltre possibile `CString` utilizzare un per questo argomento.

*nIDResource*<br/>
Numero ID della risorsa icona.

### <a name="return-value"></a>Valore restituito

Handle per un'icona se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

`LoadIcon`carica l'icona solo se non è stata caricata in precedenza; in caso contrario, recupera un handle della risorsa esistente.

È possibile utilizzare la funzione membro [LoadStandardIcon](#loadstandardicon) o [LoadOEMIcon](#loadoemicon) per accedere alle icone predefinite di Windows.

> [!NOTE]
> Questa funzione membro chiama la funzione API Win32 [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw), che può caricare solo un'icona la cui dimensione è conforme ai valori di metrica di sistema SM_CXICON e SM_CYICON.

## <a name="cwinapploadoemcursor"></a><a name="loadoemcursor"></a>CWinApp::Cursore DiMe

Carica la risorsa cursore predefinita di Windows specificata da *nIDCursor*.

```
HCURSOR LoadOEMCursor(UINT nIDCursor) const;
```

### <a name="parameters"></a>Parametri

*nIDCursor (cursore)*<br/>
Identificatore della costante del manifesto **OCR_** che specifica un cursore di Windows predefinito. È necessario `#define OEMRESOURCE` `#include \<afxwin.h>` disporre prima di ottenere l'accesso alle costanti **OCR_** in WINDOWS. H.

### <a name="return-value"></a>Valore restituito

Un handle a un cursore se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare `LoadOEMCursor` la funzione membro o [LoadStandardCursor](#loadstandardcursor) per accedere ai cursori di Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#45](../../mfc/reference/codesnippet/cpp/cwinapp-class_12.h)]

[!code-cpp[NVC_MFCWindowing#46](../../mfc/reference/codesnippet/cpp/cwinapp-class_13.cpp)]

## <a name="cwinapploadoemicon"></a><a name="loadoemicon"></a>CWinApp::LoadOEMIcon

Carica la risorsa icona predefinita di Windows specificata da *nIDIcon*.

```
HICON LoadOEMIcon(UINT nIDIcon) const;
```

### <a name="parameters"></a>Parametri

*nIDIcon*<br/>
Identificatore della costante del manifesto **OIC_** che specifica un'icona di Windows predefinita. È necessario `#define OEMRESOURCE` `#include \<afxwin.h>` disporre prima di accedere alle costanti **OIC_** in WINDOWS. H.

### <a name="return-value"></a>Valore restituito

Handle per un'icona se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare `LoadOEMIcon` la funzione membro o [LoadStandardIcon](#loadstandardicon) per accedere alle icone predefinite di Windows.

## <a name="cwinapploadstandardcursor"></a><a name="loadstandardcursor"></a>CWinApp::LoadStandardCursor

Carica la risorsa cursore predefinita di Windows che *lpszCursorName* specifica.

```
HCURSOR LoadStandardCursor(LPCTSTR lpszCursorName) const;
```

### <a name="parameters"></a>Parametri

*lpszCursorName (nome cursore)*<br/>
Identificatore della costante del manifesto **IDC_** che specifica un cursore di Windows predefinito. Questi identificatori sono definiti in WINDOWS. H. L'elenco seguente mostra i possibili valori e significati predefiniti per *lpszCursorName*:

- IDC_ARROW cursore a freccia standard

- IDC_IBEAM cursore di inserimento testo standard

- IDC_WAIT cursore Clessidra utilizzato quando Windows esegue un'attività che richiede molto tempo

- IDC_CROSS cursore a croce per la selezione

- Freccia IDC_UPARROW che punta verso l'alto

- IDC_SIZE Obsoleto e non supportato; utilizzare IDC_SIZEALL

- IDC_SIZEALL Una freccia a quattro punte. Cursore da utilizzare per ridimensionare una finestra.

- IDC_ICON Obsoleto e non supportato. Utilizzare IDC_ARROW.

- IDC_SIZENWSE freccia a due punte con estremità in alto a sinistra e in basso a destra

- IDC_SIZENESW freccia a due punte con estremità in alto a destra e in basso a sinistra

- IDC_SIZEWE freccia orizzontale a due punte

- IDC_SIZENS Freccia a due punte verticale

### <a name="return-value"></a>Valore restituito

Un handle a un cursore se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare `LoadStandardCursor` la funzione membro o [LoadOEMCursor](#loadoemcursor) per accedere ai cursori di Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#47](../../mfc/reference/codesnippet/cpp/cwinapp-class_14.cpp)]

## <a name="cwinapploadstandardicon"></a><a name="loadstandardicon"></a>CWinApp::LoadStandardIcon

Carica la risorsa icona predefinita di Windows che *lpszIconName* specifica.

```
HICON LoadStandardIcon(LPCTSTR lpszIconName) const;
```

### <a name="parameters"></a>Parametri

*lpszIconName (nome di accesso a lpszIcon)*<br/>
Identificatore della costante del manifesto che specifica un'icona di Windows predefinita. Questi identificatori sono definiti in WINDOWS. H. Per un elenco dei possibili valori predefiniti e delle relative descrizioni, vedere il parametro *lpIconName* in [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw) in Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per un'icona se ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare `LoadStandardIcon` la funzione membro o [LoadOEMIcon](#loadoemicon) per accedere alle icone predefinite di Windows.

## <a name="cwinapploadstdprofilesettings"></a><a name="loadstdprofilesettings"></a>CWinApp::LoadStdProfileSettings

Chiamare questa funzione membro dall'interno della funzione membro [InitInstance](#initinstance) per abilitare e caricare l'elenco dei file utilizzati più di recente (MRU) e l'ultimo stato di anteprima.

```
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
```

### <a name="parameters"></a>Parametri

*nMaxMRU*<br/>
Il numero di file utilizzati di recente di cui tenere traccia.

### <a name="remarks"></a>Osservazioni

Se *nMaxMRU* è 0, non verrà mantenuto alcun elenco MRU.

## <a name="cwinappm_bhelpmode"></a><a name="m_bhelpmode"></a>CWinApp::m_bHelpMode

TRUESe l'applicazione è in modalità di contesto della Guida (richiamata convenzionale con MAIUSC e F1); in caso contrario, FALSE.

```
BOOL m_bHelpMode;
```

### <a name="remarks"></a>Osservazioni

In modalità contesto Guida, il cursore diventa un punto interrogativo e l'utente può spostarlo sullo schermo. Esaminare questo flag se si desidera implementare una gestione speciale in modalità Guida. `m_bHelpMode`è una variabile pubblica di tipo BOOL.

## <a name="cwinappm_dwrestartmanagersupportflags"></a><a name="m_dwrestartmanagersupportflags"></a>CWinApp::m_dwRestartManagerSupportFlags

Flag che determinano il funzionamento del gestore di riavvii.

```
DWORD m_dwRestartManagerSupportFlags;
```

### <a name="remarks"></a>Osservazioni

Per abilitare Gestione `m_dwRestartManagerSupportFlags` riavvio, impostare il comportamento desiderato. Nella tabella seguente vengono illustrati i flag disponibili.

|||
|-|-|
|Flag|Descrizione|
|AFX_RESTART_MANAGER_SUPPORT_RESTART|L'applicazione viene registrata utilizzando [CWinApp::RegisterWithRestartManager](#registerwithrestartmanager). Gestione riavvio è responsabile del riavvio dell'applicazione se viene chiusa in modo imprevisto.|
|- AFX_RESTART_MANAGER_SUPPORT_RECOVERY|L'applicazione viene registrata con Gestione riavvio e il gestore di riavvii chiama la funzione di callback di ripristino quando riavvia l'applicazione. La funzione di callback di ripristino predefinita è [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|
|- AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART|Il salvataggio automatico è abilitato e Gestione riavvio salva automaticamente tutti i documenti aperti al riavvio dell'applicazione.|
|- AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL|Il salvataggio automatico è abilitato e Gestione riavvio salva automaticamente tutti i documenti aperti a intervalli regolari. L'intervallo è definito da [CWinApp::m_nAutosaveInterval](#m_nautosaveinterval).|
|- AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES|Gestione riavvio apre i documenti aperti in precedenza dopo il riavvio dell'applicazione da un'uscita imprevista. La [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) gestisce l'archiviazione dell'elenco dei documenti aperti e il loro ripristino.|
|- AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES|Gestione riavvio richiede all'utente di ripristinare i file salvati automaticamente dopo il riavvio dell'applicazione. La `CDataRecoveryHandler` classe esegue una query sull'utente.|
|- AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE|L'unione di AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_SUPPORT_RECOVER e AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS|L'unione di AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS|L'unione tra AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|- AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS|Il ofAFX_RESTART_MANAGER_SUPPORT_RECOVERY sindacale, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|

## <a name="cwinappm_ehelptype"></a><a name="m_ehelptype"></a>CWinApp::m_eHelpType

Il tipo di questo membro dati è il tipo `CWinApp` enumerato AFX_HELP_TYPE, definito all'interno della classe.

```
AFX_HELP_TYPE m_eHelpType;
```

### <a name="remarks"></a>Osservazioni

L'enumerazione AFX_HELP_TYPE è definita come segue:

```
enum AFX_HELP_TYPE {
    afxWinHelp = 0,
    afxHTMLHelp = 1
    };
```

- Per impostare la Guida dell'applicazione su Guida `afxHTMLHelp`HTML, chiamare [SetHelpMode](#sethelpmode) e specificare .

- Per impostare la Guida dell'applicazione `SetHelpMode` su `afxWinHelp`WinHelp, chiamare e specificare .

## <a name="cwinappm_hinstance"></a><a name="m_hinstance"></a>CWinApp::m_hInstance

Corrisponde al parametro *hInstance* `WinMain`passato da Windows a .

```
HINSTANCE m_hInstance;
```

### <a name="remarks"></a>Osservazioni

Il `m_hInstance` membro dati è un handle per l'istanza corrente dell'applicazione in esecuzione in Windows. Viene restituito dalla funzione globale [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle). `m_hInstance`è una variabile pubblica di tipo HINSTANCE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#55](../../mfc/reference/codesnippet/cpp/cwinapp-class_15.cpp)]

## <a name="cwinappm_lpcmdline"></a><a name="m_lpcmdline"></a>CWinApp::m_lpCmdLine

Corrisponde al parametro *lpCmdLine* `WinMain`passato da Windows a .

```
LPTSTR m_lpCmdLine;
```

### <a name="remarks"></a>Osservazioni

Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione. Consente `m_lpCmdLine` di accedere a qualsiasi argomento della riga di comando immesso dall'utente all'avvio dell'applicazione. `m_lpCmdLine`è una variabile pubblica di tipo LPTSTR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

## <a name="cwinappm_nautosaveinterval"></a><a name="m_nautosaveinterval"></a>CWinApp::m_nAutosaveInterval

Periodo di tempo in millisecondi tra un salvataggio automatico e l'altro.

```
int m_nAutosaveInterval;
```

### <a name="remarks"></a>Osservazioni

È possibile configurare Gestione riavvio per salvare automaticamente i documenti aperti a intervalli prestabiliti. Se l'applicazione non salva automaticamente i file, questo parametro non ha alcun effetto.

## <a name="cwinappm_ncmdshow"></a><a name="m_ncmdshow"></a>CWinApp::m_nCmdShow

Corrisponde al parametro *nCmdShow* `WinMain`passato da Windows a .

```
int m_nCmdShow;
```

### <a name="remarks"></a>Osservazioni

È necessario `m_nCmdShow` passare come argomento quando si chiama [CWnd::ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) per la finestra principale dell'applicazione. `m_nCmdShow`è una variabile pubblica di tipo **int**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#56](../../mfc/reference/codesnippet/cpp/cwinapp-class_17.cpp)]

## <a name="cwinappm_pactivewnd"></a><a name="m_pactivewnd"></a>CWinApp::m_pActiveWnd

Utilizzare questo membro dati per archiviare un puntatore alla finestra principale dell'applicazione contenitore OLE con l'applicazione server OLE attivata sul posto.

### <a name="remarks"></a>Osservazioni

Se questo membro dati è NULL, l'applicazione non è attiva sul posto.

Il framework imposta questa variabile membro quando la finestra cornice è attivata sul posto da un'applicazione contenitore OLE.

## <a name="cwinappm_pdatarecoveryhandler"></a><a name="m_pdatarecoveryhandler"></a>CWinApp::m_pDataRecoveryHandler

Puntatore al gestore di recupero dati per l'applicazione.

```
CDataRecoveryHandler* m_pDataRecoveryHandler;
```

### <a name="remarks"></a>Osservazioni

Il gestore di recupero dati di un'applicazione monitora i documenti aperti e li salva automaticamente. Il framework utilizza il gestore di recupero dati per ripristinare i file salvati automaticamente quando un'applicazione viene riavviata dopo la chiusura imprevista. Per ulteriori informazioni, vedere [Classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md).

## <a name="cwinappm_pszappname"></a><a name="m_pszappname"></a>CWinApp::m_pszAppName

Specifica il nome dell'applicazione.

```
LPCTSTR m_pszAppName;
```

### <a name="remarks"></a>Osservazioni

Il nome dell'applicazione può provenire dal parametro passato al costruttore [CWinApp](#cwinapp) o, se non specificato, alla stringa di risorsa con ID di AFX_IDS_APP_TITLE. Se il nome dell'applicazione non viene trovato nella risorsa, proviene dal file . EXE.

Restituito dalla funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname). `m_pszAppName`è una variabile pubblica di tipo **const char**<strong>\*</strong>.

> [!NOTE]
> Se si assegna `m_pszAppName`un valore a , è necessario allocherlo in modo dinamico nell'heap. Il `CWinApp` distruttore chiama **free**( ) con questo puntatore. È possibile utilizzare `_tcsdup`la funzione di libreria di runtime ( ) per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#57](../../mfc/reference/codesnippet/cpp/cwinapp-class_18.cpp)]

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#65](../../mfc/reference/codesnippet/cpp/cwinapp-class_19.cpp)]

## <a name="cwinappm_pszexename"></a><a name="m_pszexename"></a>CWinApp::m_pszExeName

Contiene il nome del file eseguibile dell'applicazione senza estensione.

```
LPCTSTR m_pszExeName;
```

### <a name="remarks"></a>Osservazioni

A differenza [di m_pszAppName](#m_pszappname), questo nome non può contenere spazi vuoti. `m_pszExeName`è una variabile pubblica di tipo **const char**<strong>\*</strong>.

> [!NOTE]
> Se si assegna `m_pszExeName`un valore a , è necessario allocherlo in modo dinamico nell'heap. Il `CWinApp` distruttore chiama **free**( ) con questo puntatore. È possibile utilizzare `_tcsdup`la funzione di libreria di runtime ( ) per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#58](../../mfc/reference/codesnippet/cpp/cwinapp-class_20.cpp)]

## <a name="cwinappm_pszhelpfilepath"></a><a name="m_pszhelpfilepath"></a>CWinApp::m_pszHelpFilePath

Contiene il percorso del file della Guida dell'applicazione.

```
LPCTSTR m_pszHelpFilePath;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, `m_pszHelpFilePath` il framework inizializza sul nome dell'applicazione con ". HLP" aggiunto. Per modificare il nome del `m_pszHelpFilePath` file della Guida, impostare in modo che punti a una stringa contenente il nome completo del file della Guida desiderato. Un posto conveniente per eseguire questa operazione è nella funzione [InitInstance](#initinstance) dell'applicazione. `m_pszHelpFilePath`è una variabile pubblica di tipo **const char**<strong>\*</strong>.

> [!NOTE]
> Se si assegna `m_pszHelpFilePath`un valore a , è necessario allocherlo in modo dinamico nell'heap. Il `CWinApp` distruttore chiama **free**( ) con questo puntatore. È possibile utilizzare `_tcsdup`la funzione di libreria di runtime ( ) per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#59](../../mfc/reference/codesnippet/cpp/cwinapp-class_21.cpp)]

## <a name="cwinappm_pszprofilename"></a><a name="m_pszprofilename"></a>CWinApp::m_pszProfileName

Contiene il nome dell'applicazione. INI.

```
LPCTSTR m_pszProfileName;
```

### <a name="remarks"></a>Osservazioni

`m_pszProfileName`è una variabile pubblica di tipo **const char**<strong>\*</strong>.

> [!NOTE]
> Se si assegna `m_pszProfileName`un valore a , è necessario allocherlo in modo dinamico nell'heap. Il `CWinApp` distruttore chiama **free**( ) con questo puntatore. È possibile utilizzare `_tcsdup`la funzione di libreria di runtime ( ) per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#60](../../mfc/reference/codesnippet/cpp/cwinapp-class_22.cpp)]

## <a name="cwinappm_pszregistrykey"></a><a name="m_pszregistrykey"></a>CWinApp::m_pszRegistryKey

Utilizzato per determinare dove, nel Registro di sistema o nel file INI, vengono archiviate le impostazioni del profilo dell'applicazione.

```
LPCTSTR m_pszRegistryKey;
```

### <a name="remarks"></a>Osservazioni

In genere, questo membro dati viene considerato di sola lettura.

- Il valore viene archiviato in una chiave del Registro di sistema. Il nome dell'impostazione del profilo dell'applicazione viene aggiunto alla seguente chiave del Registro di sistema: HKEY_CURRENT_USER/Software/LocalAppWizard-Generated/.

Se si assegna `m_pszRegistryKey`un valore a , è necessario allocherlo in modo dinamico nell'heap. Il `CWinApp` distruttore chiama **free**( ) con questo puntatore. È possibile utilizzare `_tcsdup`la funzione di libreria di runtime ( ) per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#61](../../mfc/reference/codesnippet/cpp/cwinapp-class_23.cpp)]

## <a name="cwinappm_pszappid"></a><a name="m_pszappid"></a>CWinApp::m_pszAppID

ID modello utente dell'applicazione.

```
LPCTSTR m_pszAppID;
```

### <a name="remarks"></a>Osservazioni

## <a name="cwinapponcontexthelp"></a><a name="oncontexthelp"></a>CWinApp::OnContextHelp

Gestisce la Guida di Shift-F1 all'interno dell'applicazione.

```
afx_msg void OnContextHelp();
```

### <a name="remarks"></a>Osservazioni

Per abilitare `ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp )` questa `CWinApp` funzione membro, è necessario aggiungere un'istruzione alla mappa messaggi della classe e aggiungere anche una voce della tabella dei tasti di scelta rapida, in genere MAIUSC e F1.

`OnContextHelp`mette l'applicazione in modalità Guida. Il cursore assume la forma di una freccia e di un punto interrogativo e l'utente può quindi spostare il puntatore del mouse e premere il pulsante sinistro del mouse per selezionare una finestra di dialogo, una finestra, un menu o un pulsante di comando. Questa funzione membro recupera il contesto della Guida dell'oggetto sotto il cursore e chiama la funzione Windows WinHelp con tale contesto della Guida.

## <a name="cwinapponddecommand"></a><a name="onddecommand"></a>CWinApp::OnDDECommand

Chiamato dal framework quando la finestra cornice principale riceve un messaggio di esecuzione DDE.

```
virtual BOOL OnDDECommand(LPTSTR lpszCommand);
```

### <a name="parameters"></a>Parametri

*Comando di lpsz*<br/>
Punta a una stringa di comando DDE ricevuta dall'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando viene gestito; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita controlla se il comando è una richiesta per aprire un documento e, in caso affermativo, apre il documento specificato. Il File Manager di Windows in genere invia tali stringhe di comando DDE quando l'utente fa doppio clic su un file di dati. Eseguire l'override di questa funzione per gestire altri comandi di esecuzione DDE, ad esempio il comando da stampare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#48](../../mfc/reference/codesnippet/cpp/cwinapp-class_24.cpp)]

## <a name="cwinapponfilenew"></a><a name="onfilenew"></a>CWinApp::OnFileNew

Implementa il comando ID_FILE_NEW.

```
afx_msg void OnFileNew();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_FILE_NEW, OnFileNew )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando File Nuovo.

Vedere [nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md) per informazioni sul comportamento predefinito e indicazioni su come eseguire l'override di questa funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="cwinapponfileopen"></a><a name="onfileopen"></a>CWinApp::OnFileOpen

Implementa il comando ID_FILE_OPEN.

```
afx_msg void OnFileOpen();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_FILE_OPEN, OnFileOpen )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando Apri file.

Per informazioni sul comportamento predefinito e indicazioni su come eseguire l'override di questa funzione membro, vedere la [nota tecnica 22.](../../mfc/tn022-standard-commands-implementation.md)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="cwinapponfileprintsetup"></a><a name="onfileprintsetup"></a>CWinApp::OnFilePrintSetup

Implementa il comando ID_FILE_PRINT_SETUP.

```
afx_msg void OnFilePrintSetup();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando Stampa file.

Per informazioni sul comportamento predefinito e indicazioni su come eseguire l'override di questa funzione membro, vedere la [nota tecnica 22.](../../mfc/tn022-standard-commands-implementation.md)

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

## <a name="cwinapponhelp"></a><a name="onhelp"></a>CWinApp::OnHelp

Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).

```
afx_msg void OnHelp();
```

### <a name="remarks"></a>Osservazioni

In genere si aggiunge anche una voce del tasto di scelta rapida per il tasto F1. L'abilitazione del tasto F1 è solo una convenzione, non un requisito.

È necessario `ON_COMMAND( ID_HELP, OnHelp )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitato, chiamato dal framework quando l'utente preme il tasto F1.

L'implementazione predefinita di questa funzione di gestore messaggi determina il contesto della Guida che corrisponde alla finestra corrente, alla finestra di dialogo o alla voce di menu e quindi chiama WINHELP. NELL'ESEMPIO, AD esempio , Se non è attualmente disponibile alcun contesto, la funzione utilizza il contesto predefinito.

Eseguire l'override di questa funzione membro per impostare il contesto della Guida su un elemento diverso dalla finestra, finestra di dialogo, voce di menu o pulsante della barra degli strumenti che ha attualmente lo stato attivo. Chiamare `WinHelp` con l'ID di contesto della Guida desiderato.

## <a name="cwinapponhelpfinder"></a><a name="onhelpfinder"></a>CWinApp::OnHelpFinder

Gestisce i comandi ID_HELP_FINDER e ID_DEFAULT_HELP.

```
afx_msg void OnHelpFinder();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitato, il framework chiama questa funzione di gestione dei messaggi quando `WinHelp` l'utente dell'applicazione seleziona il comando Finder della Guida da richiamare con l'argomento **HELP_FINDER** standard.

## <a name="cwinapponhelpindex"></a><a name="onhelpindex"></a>CWinApp::Indice Di Aiuto

Gestisce il comando ID_HELP_INDEX e fornisce un argomento della Guida predefinito.

```
afx_msg void OnHelpIndex();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Se abilitato, il framework chiama questa funzione di gestione dei messaggi quando `WinHelp` l'utente dell'applicazione seleziona il comando Indice della Guida da richiamare con l'argomento **HELP_INDEX** standard.

## <a name="cwinapponhelpusing"></a><a name="onhelpusing"></a>CWinApp::OnHelpUtilizzo

Gestisce il comando ID_HELP_USING.

```
afx_msg void OnHelpUsing();
```

### <a name="remarks"></a>Osservazioni

È necessario `ON_COMMAND( ID_HELP_USING, OnHelpUsing )` aggiungere un'istruzione alla mappa messaggi della `CWinApp` classe per abilitare questa funzione membro. Il framework chiama questa funzione di gestione dei messaggi quando l'utente `WinHelp` dell'applicazione seleziona il comando Using della Guida per richiamare l'applicazione con l'argomento **HELP_HELPONHELP** standard.

## <a name="cwinapponidle"></a><a name="onidle"></a>CWinApp::OnIdle

Eseguire l'override di questa funzione membro per eseguire l'elaborazione in tempo di inattività.

```
virtual BOOL OnIdle(LONG lCount);
```

### <a name="parameters"></a>Parametri

*lCount (conteggio)*<br/>
Un contatore incrementato ogni volta `OnIdle` viene chiamato quando la coda di messaggi dell'applicazione è vuota. Questo conteggio viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile utilizzare il parametro *lCount* per determinare il periodo di tempo relativo per cui l'applicazione è rimasta inattiva senza elaborare un messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero per ricevere più tempo di elaborazione inattivo; 0 se non è più necessario tempo di inattività.

### <a name="remarks"></a>Osservazioni

`OnIdle`viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi dell'applicazione è vuota. Usare l'override per chiamare le attività del gestore di inattività in background.

`OnIdle`deve restituire 0 per indicare che non è necessario alcun tempo di elaborazione inattivo. Il *lCount* parametro viene `OnIdle` incrementato ogni volta viene chiamato quando la coda di messaggi è vuota e reimposta su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le diverse routine di inattività in base a questo conteggio.

Di seguito viene riepilogata l'elaborazione del ciclo inattivo:The following summarizes idle loop processing:

1. Se il ciclo di messaggi nella libreria Microsoft Foundation Class controlla `OnIdle` la coda di messaggi e non trova messaggi in sospeso, chiama l'oggetto applicazione e fornisce 0 come argomento *lCount.*

2. `OnIdle`esegue un'elaborazione e restituisce un valore diverso da zero per indicare che deve essere chiamato nuovamente per eseguire ulteriori elaborazioni.

3. Il ciclo di messaggi controlla nuovamente la coda di messaggi. Se nessun messaggio è `OnIdle` in sospeso, chiama nuovamente, incrementando l'argomento *lCount.*

4. Infine, `OnIdle` termina l'elaborazione di tutte le attività inattive e restituisce 0. Ciò indica al ciclo `OnIdle` di messaggi di interrompere la chiamata fino a quando non viene ricevuto il messaggio successivo dalla coda di messaggi, a quel punto il ciclo di inattività viene riavviato con l'argomento impostato su 0.

Non eseguire attività lunghe `OnIdle` durante perché l'applicazione `OnIdle` non può elaborare l'input dell'utente fino a quando non viene restituito.

> [!NOTE]
> L'implementazione `OnIdle` predefinita degli aggiornamenti dei comandi oggetti dell'interfaccia utente, ad esempio voci di menu e pulsanti della barra degli strumenti, ed esegue la pulizia interna della struttura dei dati. Pertanto, se `OnIdle`si esegue `CWinApp::OnIdle` l'override di , è necessario chiamare con nella `lCount` versione sottoposta a override. Chiamare innanzitutto tutta l'elaborazione inattiva della `OnIdle` classe base, ovvero fino a quando la classe base non restituisce 0. Se è necessario eseguire il lavoro prima del completamento dell'elaborazione della classe base, esaminare l'implementazione della classe base per selezionare *lCount* appropriato durante il quale eseguire il lavoro.

Se non si `OnIdle` desidera essere chiamato ogni volta che un messaggio viene recuperato dalla coda di messaggi, è possibile eseguire l'override di [CWinThreadIsIdleMessage](../../mfc/reference/cwinthread-class.md#isidlemessage). Se un'applicazione ha impostato un timer molto breve o se `OnIdle` il sistema invia il messaggio WM_SYSTIMER, verrà chiamato ripetutamente e le prestazioni di peggioramento.

### <a name="example"></a>Esempio

Nei due esempi seguenti `OnIdle`viene illustrato come utilizzare . Nel primo esempio vengono elaborate due attività inattive utilizzando l'argomento *lCount* per assegnare priorità alle attività. La prima attività è ad alta priorità, e si dovrebbe farlo quando possibile. La seconda attività è meno importante e deve essere eseguita solo quando è presente una lunga pausa nell'input dell'utente. Si noti la chiamata alla `OnIdle`versione della classe base di . Nel secondo esempio viene gestito un gruppo di attività inattive con priorità diverse.

[!code-cpp[NVC_MFCWindowing#51](../../mfc/reference/codesnippet/cpp/cwinapp-class_27.cpp)]

## <a name="cwinappopendocumentfile"></a><a name="opendocumentfile"></a>File CWinApp::OpenDocumentFile

Il framework chiama questo metodo per aprire il file [CDocument](../../mfc/reference/cdocument-class.md) denominato per l'applicazione.

```
virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszFileName
    BOOL bAddToMRU = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszNomefileName (nome file)*<br/>
[in] Nome del file da aprire.

*bAddToMRU (informazioni in due)*<br/>
[in] TRUE indica che il documento è uno dei file più recenti; FALSE indica che il documento non è uno dei file più recenti.

### <a name="return-value"></a>Valore restituito

Un puntatore `CDocument` a un if ha esito positivo; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Se un documento con tale nome è già aperto, la prima finestra cornice che contiene tale documento otterrà lo stato attivo. Se un'applicazione supporta più modelli di documento, il framework utilizza l'estensione di file per trovare il modello di documento appropriato per tentare di caricare il documento. In caso di esito positivo, il modello di documento crea quindi una finestra cornice e una visualizzazione per il documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

## <a name="cwinappparsecommandline"></a><a name="parsecommandline"></a>CWinApp::ParseCommandLine

Chiamare questa funzione membro per analizzare la riga di comando e inviare i parametri, uno alla volta, a [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam).

```
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
```

### <a name="parameters"></a>Parametri

*rCmdInfo*<br/>
Riferimento a un oggetto [CCommandLineInfo.](../../mfc/reference/ccommandlineinfo-class.md)

### <a name="remarks"></a>Osservazioni

Quando si avvia un nuovo progetto MFC utilizzando la Creazione guidata `CCommandLineInfo`applicazione, `ProcessShellCommand` la `ParseCommandLine` creazione guidata applicazione creerà un'istanza locale di , quindi chiamerà e nella funzione membro [InitInstance](#initinstance) . Una riga di comando segue la route descritta di seguito:A command line follows the route described below:

1. Dopo essere `InitInstance`stato `CCommandLineInfo` creato in `ParseCommandLine`, l'oggetto viene passato a .

2. `ParseCommandLine`chiamate `CCommandLineInfo::ParseParam` ripetutamente, una volta per ogni parametro.

3. `ParseParam`riempie `CCommandLineInfo` l'oggetto , che viene quindi passato a [ProcessShellCommand](#processshellcommand).

4. `ProcessShellCommand`gestisce gli argomenti e i flag della riga di comando.

Si noti `ParseCommandLine` che è possibile chiamare direttamente in base alle esigenze.

Per una descrizione dei flag della riga di comando, vedere [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand).

## <a name="cwinapppretranslatemessage"></a><a name="pretranslatemessage"></a>CWinApp::PreTranslateMessage

Eseguire l'override di questa funzione per filtrare i messaggi della finestra prima che vengano inviati alle `CWinApp::PreTranslateMessage` funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) L'implementazione predefinita esegue la conversione tasto di scelta rapida, pertanto è necessario chiamare la funzione membro nella versione sottoposta a override.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore a una struttura [MSG](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il `PreTranslateMessage` messaggio è stato completamente elaborato e non deve essere elaborato ulteriormente. zero se il messaggio deve essere elaborato nel modo normale.

## <a name="cwinappprocessmessagefilter"></a><a name="processmessagefilter"></a>CWinApp::ProcessMessageFilter

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
Puntatore a una tructure di Windows [MSG.](/windows/win32/api/winuser/ns-winuser-msg)

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Una funzione hook elabora gli eventi prima che vengano inviati alla normale elaborazione dei messaggi dell'applicazione.

Se si esegue l'override di questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per mantenere l'elaborazione hook del framework.

## <a name="cwinappprocessshellcommand"></a><a name="processshellcommand"></a>CWinApp::ProcessShellCommand

Questa funzione membro viene chiamata da [InitInstance](#initinstance) `CCommandLineInfo` per accettare i parametri passati dall'oggetto identificato da *rCmdInfo*ed eseguire l'azione indicata.

```
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
```

### <a name="parameters"></a>Parametri

*rCmdInfo*<br/>
Riferimento a un oggetto [CCommandLineInfo.](../../mfc/reference/ccommandlineinfo-class.md)

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando della shell viene elaborato correttamente. Se 0, restituire FALSE da [InitInstance](#initinstance).

### <a name="remarks"></a>Osservazioni

Quando si avvia un nuovo progetto MFC utilizzando la Creazione guidata `CCommandLineInfo`applicazione, `ProcessShellCommand` la creazione guidata `InitInstance` applicazione creerà un'istanza locale di , quindi chiamerà e [ParseCommandLine](#parsecommandline) nella funzione membro. Una riga di comando segue la route descritta di seguito:A command line follows the route described below:

1. Dopo essere `InitInstance`stato `CCommandLineInfo` creato in `ParseCommandLine`, l'oggetto viene passato a .

2. `ParseCommandLine`quindi chiama [CCommandLineInfo::ParseParam](../../mfc/reference/ccommandlineinfo-class.md#parseparam) ripetutamente, una volta per ogni parametro.

3. `ParseParam`riempie `CCommandLineInfo` l'oggetto, che `ProcessShellCommand`viene quindi passato a .

4. `ProcessShellCommand`gestisce gli argomenti e i flag della riga di comando.

I membri dati `CCommandLineInfo` dell'oggetto, identificati da [CCommandLineInfo::m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand), sono del tipo `CCommandLineInfo` enumerato seguente, definito all'interno della classe .

```
enum {
    FileNew,
    FileOpen,
    FilePrint,
    FilePrintTo,
    FileDDE
    };
```

Per una breve descrizione di ciascuno `CCommandLineInfo::m_nShellCommand`di questi valori, vedere .

## <a name="cwinappprocesswndprocexception"></a><a name="processwndprocexception"></a>CWinApp::ProcessWndProcException

Il framework chiama questa funzione membro ogni volta che il gestore non rileva un'eccezione generata in uno dei gestori di messaggi o di comando dell'applicazione.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*e*<br/>
Puntatore a un'eccezione non rilevata.

*pMsg*<br/>
Una traccia [MSG](/windows/win32/api/winuser/ns-winuser-msg)che contiene informazioni sul messaggio di windows che ha causato la generazione di un'eccezione da parte del framework.

### <a name="return-value"></a>Valore restituito

Valore che deve essere restituito a Windows. Normalmente questo è 0L per i messaggi di Windows, 1L ( TRUE) per i messaggi di comando.

### <a name="remarks"></a>Osservazioni

Non chiamare direttamente questa funzione membro.

L'implementazione predefinita di questa funzione membro crea una finestra di messaggio. Se l'eccezione non rilevata ha origine con un menu, barra degli strumenti o comando di scelta rapida, nella finestra di messaggio viene visualizzato un messaggio "Comando non riuscito"; in caso contrario, viene visualizzato un messaggio "Errore interno dell'applicazione".

Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera visualizzare la finestra di messaggio.

## <a name="cwinappregister"></a><a name="register"></a>CWinApp::Registrazione

Esegue tutte le attività `RegisterShellFileTypes`di registrazione non gestite da .

```
virtual BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce semplicemente TRUE. Eseguire l'override di questa funzione per fornire eventuali passaggi di registrazione personalizzati.

## <a name="cwinappregistershellfiletypes"></a><a name="registershellfiletypes"></a>CWinApp::RegisterShellFileTypes

Chiamare questa funzione membro per registrare tutti i tipi di documento dell'applicazione con Il file Manager di Windows.Call this member function to register all of your application's document types with the Windows File Manager.

```
void RegisterShellFileTypes(BOOL bCompat = FALSE);
```

### <a name="parameters"></a>Parametri

*bCompat*<br/>
[in] TRUE aggiunge voci di registrazione per i comandi della shell Stampa e Stampa su, consentendo all'utente di stampare i file direttamente dalla shell o trascinando il file in un oggetto stampante. Aggiunge anche una chiave DefaultIcon.It also adds a DefaultIcon key. Per impostazione predefinita, questo parametro è FALSE per compatibilità con le versioni precedenti.

### <a name="remarks"></a>Osservazioni

Ciò consente all'utente di aprire un file di dati creato dall'applicazione facendo doppio clic su di esso dall'interno di File Manager. Chiamare `RegisterShellFileTypes` dopo aver chiamato [AddDocTemplate](#adddoctemplate) per ognuno dei modelli di documento nell'applicazione. Chiamare anche la funzione membro [EnableShellOpen](#enableshellopen) quando si chiama `RegisterShellFileTypes`.

`RegisterShellFileTypes`scorre l'elenco di [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) oggetti gestiti dall'applicazione e, per ogni modello di documento, aggiunge voci al database di registrazione che Windows gestisce per le associazioni di file. File Manager utilizza queste voci per aprire un file di dati quando l'utente fa doppio clic su di esso. Questo elimina la necessità di spedire un . REG con l'applicazione.

> [!NOTE]
> `RegisterShellFileTypes`funziona solo se l'utente esegue il programma con diritti di amministratore. Se il programma non dispone dei diritti di amministratore, non può modificare le chiavi del Registro di sistema.

Se il database di registrazione associa già una determinata estensione di file a un altro tipo di file, non viene creata alcuna nuova associazione. Vedere `CDocTemplate` la classe per il formato delle stringhe necessarie per registrare queste informazioni.

## <a name="cwinappregisterwithrestartmanager"></a><a name="registerwithrestartmanager"></a>CWinApp::RegisterWithRestartManager (Registrazione ConrestartManager)

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
|*bRegisterRecoveryCallback*|[in] TRUE indica che questa istanza dell'applicazione utilizza una funzione di callback di ripristino. FALSE indica che non lo fa. Il framework chiama la funzione di callback di ripristino quando l'applicazione viene chiusa in modo imprevisto. Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|
|*strRestartIdentifier*|[in] Stringa univoca che identifica questa istanza del gestore di riavvii. L'identificatore del gestore di riavvio è univoco per ogni istanza di un'applicazione.|
|*pwzCommandLineArgs (argomenti)*|[in] Stringa che contiene eventuali argomenti aggiuntivi dalla riga di comando.|
|*dwRestartFlags (dwRestartFlags)*|[in] Flag facoltativi per il gestore di riavvii. Per altre informazioni, vedere la sezione Osservazioni.|
|*pRecoveryCallback*|[in] La funzione di callback di ripristino. Questa funzione deve accettare un parametro LPVOID come input e restituire un DWORD. La funzione di `CWinApp::ApplicationRecoveryCallback`callback di ripristino predefinita è .|
|*lpvParam (informazioni in base al tempo instato*|[in] Parametro di input per la funzione di callback di ripristino. Per ulteriori informazioni, vedere [CWinApp::ApplicationRecoveryCallback](#applicationrecoverycallback).|
|*dwPingInterval*|[in] Periodo di tempo durante il tempo di attesa della funzione di callback di ripristino. Questo parametro è in millisecondi.|
|*dwCallbackFlags (Flag dwCallback)*|[in] Flag passati alla funzione di callback di ripristino. Riservato per utilizzi futuri.|

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

Se l'applicazione utilizza l'implementazione MFC predefinita per il `RegisterWithRestartManager`salvataggio automatico dei file, è necessario utilizzare la versione semplice di . Utilizzare la versione `RegisterWithRestartManager` complessa di se si desidera personalizzare il comportamento di salvataggio automatico dell'applicazione.

Se si chiama questo metodo con una `RegisterWithRestartManager` stringa vuota per *strRestartIdentifier*, crea una stringa di identificatore univoco per questa istanza del gestore di riavvio.

Quando un'applicazione viene chiusa in modo imprevisto, Gestione riavvio riavvia l'applicazione dalla riga di comando e fornisce l'identificatore di riavvio univoco come argomento facoltativo. In questo scenario, `RegisterWithRestartManager` il framework chiama due volte. La prima chiamata proviene da [CWinApp::InitInstance](#initinstance) con una stringa vuota per l'identificatore di stringa. Quindi, il metodo [CWinApp::ProcessShellCommand](#processshellcommand) chiama `RegisterWithRestartManager` con l'identificatore di riavvio univoco.

Dopo aver registrato un'applicazione con Gestione riavvio, Gestione riavvio monitora l'applicazione. Se l'applicazione viene chiusa in modo imprevisto, Il gestore di riavvio chiama la funzione di callback di ripristino durante il processo di arresto. Il gestore di riavvio attende *dwPingInterval* per una risposta dalla funzione di callback di ripristino. Se la funzione di callback di ripristino non risponde entro questo intervallo di tempo, l'applicazione viene chiusa senza eseguire la funzione di callback di ripristino.

Per impostazione predefinita, dwRestartFlags non sono supportati ma vengono forniti per un utilizzo futuro. I valori possibili per *dwRestartFlags* sono i seguenti:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

## <a name="cwinappreopenpreviousfilesatrestart"></a><a name="reopenpreviousfilesatrestart"></a>CWinApp::RiaprirePreviousFilesAtRestart

Determina se gestione riavvio riapre i file aperti alla chiusura imprevista dell'applicazione.

```
virtual BOOL ReopenPreviousFilesAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che Gestione riavvio riapre i file aperti in precedenza; FALSE indica che il gestore dei riavvii non lo fa.

## <a name="cwinapprestartinstance"></a><a name="restartinstance"></a>CWinApp::RestartInstance

Gestisce il riavvio di un'applicazione avviato dal gestore di riavvii.

```
virtual BOOL CWinApp::RestartInstance();
```

### <a name="return-value"></a>Valore restituito

TRUESe il gestore di recupero dati apre i documenti aperti in precedenza. FALSE se il gestore di recupero dati presenta un errore o se non sono presenti documenti aperti in precedenza.

### <a name="remarks"></a>Osservazioni

Quando il gestore di riavvii riavvia un'applicazione, il framework chiama questo metodo. Questo metodo recupera il gestore di recupero dati e ripristina i file salvati automaticamente. Questo metodo chiama [CDataRecoveryHandler::RestoreAutosavedDocuments](../../mfc/reference/cdatarecoveryhandler-class.md#restoreautosaveddocuments) per determinare se l'utente desidera ripristinare i file salvati automaticamente.

Questo metodo restituisce FALSE se il [CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) determina che non sono presenti documenti aperti. Se non sono presenti documenti aperti, l'applicazione viene avviata normalmente.

## <a name="cwinapprestoreautosavedfilesatrestart"></a><a name="restoreautosavedfilesatrestart"></a>CWinApp::RestoreAutosavedFilesAtRestart

Determina se Gestione riavvio ripristina i file salvati automaticamente quando viene riavviata l'applicazione.

```
virtual BOOL RestoreAutosavedFilesAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che Gestione riavvio ripristina i file salvati automaticamente. FALSE indica che il gestore dei riavvii non lo fa.

## <a name="cwinapprun"></a><a name="run"></a>CWinApp::Esecuzione

Fornisce un ciclo di messaggi predefinito.

```
virtual int Run();
```

### <a name="return-value"></a>Valore restituito

Valore **int** restituito da `WinMain`.

### <a name="remarks"></a>Osservazioni

`Run`acquisisce e invia messaggi di Windows fino a quando l'applicazione non riceve un messaggio di WM_QUIT. Se la coda di messaggi dell'applicazione attualmente non contiene messaggi, `Run` chiama [OnIdle](#onidle) per eseguire l'elaborazione in tempo di inattività. I messaggi in arrivo vanno alla funzione membro [PreTranslateMessage](#pretranslatemessage) per l'elaborazione speciale e quindi alla funzione `TranslateMessage` di Windows per la conversione da tastiera standard; infine, `DispatchMessage` viene chiamata la funzione Windows.

`Run`viene raramente sottoposto a override, ma è possibile eseguirne l'override per fornire un comportamento speciale.

## <a name="cwinapprunautomated"></a><a name="runautomated"></a>CWinApp::RunAutomated

Chiamare questa funzione per determinare se è presente l'opzione " **/Automation**" o " **-Automation**", che indica se l'applicazione server è stata avviata da un'applicazione client.

```
BOOL RunAutomated();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'opzione è stata trovata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni sull'automazione OLE, vedere l'articolo [Server di automazione](../../mfc/automation-servers.md).

## <a name="cwinapprunembedded"></a><a name="runembedded"></a>CWinApp::RunEmbedded

Chiamare questa funzione per determinare se l'opzione " **/Embedding**" o " **-Embedding**" è presente, che indica se l'applicazione server è stata avviata da un'applicazione client.

```
BOOL RunEmbedded();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'opzione è stata trovata; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni sull'incorporamento, vedere l'articolo [Servers: Implementing a Server](../../mfc/servers-implementing-a-server.md).

## <a name="cwinappsaveallmodified"></a><a name="saveallmodified"></a>CWinApp::SaveAllModified

Chiamato dal framework per salvare tutti i documenti quando la finestra cornice principale dell'applicazione deve essere chiusa o tramite un messaggio di WM_QUERYENDSESSION.

```
virtual BOOL SaveAllModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se sicuro terminare l'applicazione; 0 se non è sicuro terminare l'applicazione.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione membro chiama il [CDocument::SaveModified](../../mfc/reference/cdocument-class.md#savemodified) funzione membro a sua volta per tutti i documenti modificati all'interno dell'applicazione.

## <a name="cwinappselectprinter"></a><a name="selectprinter"></a>CWinApp::SelectPrinter

Chiamare questa funzione membro per selezionare una stampante specifica e rilasciare la stampante precedentemente selezionata nella finestra di dialogo Stampa.

```
void SelectPrinter(
    HANDLE hDevNames,
    HANDLE hDevMode,
    BOOL bFreeOld = TRUE);
```

### <a name="parameters"></a>Parametri

*hDevNomi*<br/>
Handle per una configurazione [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames)che identifica i nomi del driver, della periferica e della porta di output di una stampante specifica.

*Modalità hDev*<br/>
Handle per una struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) che specifica informazioni sull'inizializzazione del dispositivo e sull'ambiente di una stampante.

*bFreeOld (Nuovo Stato insulto)*<br/>
Libera la stampante selezionata in precedenza.

### <a name="remarks"></a>Osservazioni

Se *hDevMode* e *hDevNames* `SelectPrinter` sono NULL, utilizza la stampante predefinita corrente.

## <a name="cwinappsethelpmode"></a><a name="sethelpmode"></a>CWinApp::SetHelpMode (modalità UtenteCWinApp::SetHelpMode)

Imposta il tipo di guida dell'applicazione.

```
void SetHelpMode(AFX_HELP_TYPE eHelpType);
```

### <a name="parameters"></a>Parametri

*Tipo eHelp*<br/>
Specifica il tipo di Guida da utilizzare. Per altre informazioni, vedere [CWinApp::m_eHelpType.](#m_ehelptype)

### <a name="remarks"></a>Osservazioni

Imposta il tipo di Guida dell'applicazione.

Per impostare il tipo di Guida dell'applicazione su HTMLHelp, è possibile chiamare [EnableHTMLHelp](#enablehtmlhelp). Una volta `EnableHTMLHelp`chiamato , l'applicazione deve utilizzare HTMLHelp come applicazione della Guida. Se si desidera modificare per utilizzare WinHelp, è possibile chiamare `SetHelpMode` e impostare *eHelpType* su `afxWinHelp`.

## <a name="cwinappsetregistrykey"></a><a name="setregistrykey"></a>CWinApp::SetRegistryKey

Fa sì che le impostazioni dell'applicazione vengano archiviate nel Registro di sistema anziché nei file INI.

```
void SetRegistryKey(LPCTSTR lpszRegistryKey);
void SetRegistryKey(UINT nIDRegistryKey);
```

### <a name="parameters"></a>Parametri

*lpszRegistryKey (chiave dell'utente)*<br/>
Puntatore a una stringa contenente il nome della chiave.

*nIDRegistryKey (chiave nIDRegistryKey)*<br/>
ID di una risorsa stringa contenente il nome della chiave del Registro di sistema.

### <a name="remarks"></a>Osservazioni

Questa funzione imposta *m_pszRegistryKey*, che `GetProfileInt` `GetProfileString`viene `WriteProfileInt`quindi `WriteProfileString` utilizzata `CWinApp`dalle funzioni membro , , e di . Se questa funzione è stata chiamata, l'elenco dei file utilizzati più di recente (MRU) viene archiviato anche nel Registro di sistema. La chiave del Registro di sistema è in genere il nome di una società. È memorizzato in una chiave nel formato\\ seguente:\> \\ HKEY_CURRENT_USER,\> \\ Software\> \\<nome\>della società<nome dell'applicazione<nome della sezione<nome del valore .

## <a name="cwinappsupportsapplicationrecovery"></a><a name="supportsapplicationrecovery"></a>CWinApp::SupportsApplicationRecovery (Informazioni in base alle funzionalità

Determina se il gestore di riavvii ripristina un'applicazione terminata in modo imprevisto.

```
virtual BOOL SupportsApplicationRecovery() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che il gestore del riavvio ripristina l'applicazione. FALSE indica che il gestore dei riavvii non lo fa.

## <a name="cwinappsupportsautosaveatinterval"></a><a name="supportsautosaveatinterval"></a>CWinApp::SupportsAutosaveAtInterval

Determina se il gestore di riavvii salva automaticamente i documenti aperti a intervalli regolari.

```
virtual BOOL SupportsAutosaveAtInterval() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che il gestore di riavvio salva automaticamente i documenti aperti; FALSE indica che il gestore dei riavvii non lo fa.

## <a name="cwinappsupportsautosaveatrestart"></a><a name="supportsautosaveatrestart"></a>CWinApp::SupportsAutosaveAtRestart (Informazioni in base alle opzioni

Determina se Il gestore di riavvii salva automaticamente i documenti aperti al riavvio dell'applicazione.

```
virtual BOOL SupportsAutosaveAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che Gestione riavvio salva automaticamente i documenti aperti al riavvio dell'applicazione; FALSE indica che il gestore dei riavvii non lo fa.

## <a name="cwinappsupportsrestartmanager"></a><a name="supportsrestartmanager"></a>CWinApp::SupportsRestartManager

Determina se l'applicazione supporta il gestore di riavvio.

```
virtual BOOL SupportsRestartManager() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che l'applicazione supporta il gestore di riavvio; FALSE indica che l'applicazione non lo fa.

## <a name="cwinappunregister"></a><a name="unregister"></a>CWinApp::Annulla registrazione

Annulla la registrazione di tutti i file registrati dall'oggetto applicazione.

```
virtual BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La `Unregister` funzione annulla la registrazione eseguita dall'oggetto applicazione e dalla funzione [Register.](#register) In genere, entrambe le funzioni vengono chiamate in modo implicito da MFC e pertanto non verranno visualizzate nel codice.

Eseguire l'override di questa funzione per eseguire passaggi di annullamento della registrazione personalizzati.

## <a name="cwinappunregistershellfiletypes"></a><a name="unregistershellfiletypes"></a>CWinApp::UnregisterShellFileTypes

Chiamare questa funzione membro per annullare la registrazione di tutti i tipi di documento dell'applicazione con Il file Manager di Windows.Call this member function to unregister all of your application's document types with the Windows File Manager.

```
void UnregisterShellFileTypes();
```

## <a name="cwinappwinhelp"></a><a name="winhelp"></a>CWinApp::WinHelp

Chiamare questa funzione membro per richiamare l'applicazione WinHelp.Call this member function to invoke the WinHelp application.

```
virtual void WinHelp(
    DWORD_PTR dwData,
    UINT nCmd = HELP_CONTEXT);
```

### <a name="parameters"></a>Parametri

*dwData (dati)*<br/>
Specifica dati aggiuntivi. Il valore utilizzato dipende dal valore del parametro *nCmd.*

*nCmd*<br/>
Specifica il tipo di Guida richiesto. Per un elenco dei valori possibili e del modo in cui influiscono sul parametro *dwData,* vedere la funzione [WinHelp](/windows/win32/api/winuser/nf-winuser-winhelpw) di Windows.

### <a name="remarks"></a>Osservazioni

Il framework chiama anche questa funzione per richiamare l'applicazione WinHelp.

Il framework chiuderà automaticamente l'applicazione WinHelp al termine dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#53](../../mfc/reference/codesnippet/cpp/cwinapp-class_28.cpp)]

## <a name="cwinappwriteprofilebinary"></a><a name="writeprofilebinary"></a>CWinApp::WriteProfileBinary

Chiamare questa funzione membro per scrivere dati binari nella sezione specificata del Registro di sistema dell'applicazione o . INI.

```
BOOL WriteProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE pData,
    UINT nBytes);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dal caso; la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata.

*pDati*<br/>
Punta ai dati da scrivere.

*nByte*<br/>
Contiene il numero di byte da scrivere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

In questo `CWinApp* pApp = AfxGetApp();` esempio viene utilizzato per ottenere la `WriteProfileBinary` CWinApp classe che illustra un modo che e `GetProfileBinary` può essere utilizzato da qualsiasi funzione in un'applicazione MFC.

[!code-cpp[NVC_MFCWindowing#54](../../mfc/reference/codesnippet/cpp/cwinapp-class_29.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileBinary](#getprofilebinary).

## <a name="cwinappwriteprofileint"></a><a name="writeprofileint"></a>CWinApp::WriteProfileInt

Chiamare questa funzione membro per scrivere il valore specificato nella sezione specificata del Registro di sistema dell'applicazione o . INI.

```
BOOL WriteProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nValue);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dal caso; la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata.

*nValore*<br/>
Contiene il valore da scrivere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

In questo `CWinApp* pApp = AfxGetApp();` esempio viene utilizzato per ottenere la `WriteProfileString`classe `WriteProfileInt` `GetProfileString`CWinApp che illustra come utilizzare , , e `GetProfileInt` può essere utilizzata da qualsiasi funzione in un'applicazione MFC.

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).

## <a name="cwinappwriteprofilestring"></a><a name="writeprofilestring"></a>CWinApp::WriteProfileString

Chiamare questa funzione membro per scrivere la stringa specificata nella sezione specificata del Registro di sistema dell'applicazione o . INI.

```
BOOL WriteProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszValue);
```

### <a name="parameters"></a>Parametri

*lpszSezione*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dal caso; la stringa può essere qualsiasi combinazione di lettere maiuscole e minuscole.

*LpszEntry (ingresso )*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata. Se questo parametro è NULL, la sezione specificata da *lpszSection* viene eliminata.

*lpszValore*<br/>
Punta alla stringa da scrivere. Se questo parametro è NULL, la voce specificata dal *lpszEntry* parametro viene eliminato.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp::GetProfileInt](#getprofileint).

## <a name="cwinappsetappid"></a><a name="setappid"></a>CWinApp::SetAppID

Imposta in modo esplicito l'ID modello utente dell'applicazione. Questo metodo deve essere chiamato prima che qualsiasi interfaccia utente viene presentata all'utente (la posizione migliore è il costruttore dell'applicazione).

```
void SetAppID(LPCTSTR lpcszAppID);
```

### <a name="parameters"></a>Parametri

*lpcszAppID (ID lpcszAppID)*<br/>
Specifica l'ID modello utente dell'applicazione.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Classe CWinThread](../../mfc/reference/cwinthread-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)
