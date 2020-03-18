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
ms.openlocfilehash: e65ad8b5d8b14ff747adc55b517d9e695d9cbb66
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79421002"
---
# <a name="cwinapp-class"></a>Classe CWinApp

Classe di base da cui deriva un oggetto applicazione Windows.

## <a name="syntax"></a>Sintassi

```
class CWinApp : public CWinThread
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp:: CWinApp](#cwinapp)|Costruisce un oggetto `CWinApp`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp:: AddDocTemplate](#adddoctemplate)|Aggiunge un modello di documento all'elenco di modelli di documenti disponibili nell'applicazione.|
|[CWinApp:: AddToRecentFileList](#addtorecentfilelist)|Aggiunge un nome file all'elenco dei file usati di recente (MRU).|
|[CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback)|Chiamata eseguita dal framework quando l'applicazione viene chiusa in modo imprevisto.|
|[CWinApp:: CloseAllDocuments](#closealldocuments)|Chiude tutti i documenti aperti.|
|[CWinApp:: CreatePrinterDC](#createprinterdc)|Crea un contesto di dispositivo stampante.|
|[CWinApp::D elRegTree](#delregtree)|Elimina una chiave specificata e tutte le relative sottochiavi.|
|[CWinApp::D oMessageBox](#domessagebox)|Implementa [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per l'applicazione.|
|[CWinApp::D oWaitCursor](#dowaitcursor)|Attiva e disattiva il cursore di attesa.|
|[CWinApp:: EnableD2DSupport](#enabled2dsupport)|Abilita il supporto D2D dell'applicazione. Chiamare questo metodo prima dell'inizializzazione della finestra principale.|
|[CWinApp:: EnableHtmlHelp](#enablehtmlhelp)|Implementa HTMLHelp per l'applicazione, anziché WinHelp.|
|[CWinApp:: EnableTaskbarInteraction](#enabletaskbarinteraction)|Abilita l'interazione della barra delle applicazioni.|
|[CWinApp:: ExitInstance](#exitinstance)|Eseguire l'override di per eseguire la pulizia al termine dell'applicazione.|
|[CWinApp:: GetApplicationRecoveryParameter](#getapplicationrecoveryparameter)|Recupera il parametro di input per il metodo di ripristino dell'applicazione.|
|[CWinApp:: GetApplicationRecoveryPingInterval](#getapplicationrecoverypinginterval)|Restituisce l'intervallo di tempo durante il quale Gestione riavvio attende la restituzione della funzione di callback di ripristino.|
|[CWinApp:: GetApplicationRestartFlags](#getapplicationrestartflags)|Restituisce i flag per Gestione riavvio.|
|[CWinApp:: GetAppRegistryKey](#getappregistrykey)|Restituisce la chiave per HKEY_CURRENT_USER\\"software" \RegistryKey\ProfileName.|
|[CWinApp:: GetDataRecoveryHandler](#getdatarecoveryhandler)|Ottiene il gestore di recupero dati per questa istanza dell'applicazione.|
|[CWinApp:: GetFirstDocTemplatePosition](#getfirstdoctemplateposition)|Recupera la posizione del primo modello di documento.|
|[CWinApp:: GetHelpMode](#gethelpmode)|Recupera il tipo di guida utilizzato dall'applicazione.|
|[CWinApp:: GetNextDocTemplate](#getnextdoctemplate)|Recupera la posizione di un modello di documento. Può essere utilizzato in modo ricorsivo.|
|[CWinApp:: GetPrinterDeviceDefaults](#getprinterdevicedefaults)|Recupera le impostazioni predefinite del dispositivo stampante.|
|[CWinApp:: GetProfileBinary](#getprofilebinary)|Recupera i dati binari da una voce nell'oggetto dell'applicazione. File INI.|
|[CWinApp:: GetProfileInt](#getprofileint)|Recupera un intero da una voce nell'oggetto dell'applicazione. File INI.|
|[CWinApp:: GetProfileString](#getprofilestring)|Recupera una stringa da una voce nell'oggetto dell'applicazione. File INI.|
|[CWinApp:: GetSectionKey](#getsectionkey)|Restituisce la chiave per HKEY_CURRENT_USER\\"software" \RegistryKey\AppName\lpszSection.|
|[CWinApp:: HideApplication](#hideapplication)|Nasconde l'applicazione prima di chiudere tutti i documenti.|
|[CWinApp:: HtmlHelp](#htmlhelp)|Chiama la funzione di Windows `HTMLHelp`.|
|[CWinApp:: InitInstance](#initinstance)|Eseguire l'override di per eseguire l'inizializzazione dell'istanza di Windows, ad esempio la creazione degli oggetti Window.|
|[CWinApp:: IsTaskbarInteractionEnabled](#istaskbarinteractionenabled)|Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitata.|
|[CWinApp:: LoadCursor](#loadcursor)|Carica una risorsa di cursore.|
|[CWinApp:: LoadIcon](#loadicon)|Carica una risorsa icona.|
|[CWinApp:: LoadOEMCursor](#loadoemcursor)|Carica un cursore predefinito OEM Windows specificato dalle costanti **OCR_** in Windows. H.|
|[CWinApp:: LoadOEMIcon](#loadoemicon)|Carica un'icona di Windows OEM predefinita specificata dalle costanti **OIC_** in Windows. H.|
|[CWinApp:: LoadStandardCursor](#loadstandardcursor)|Carica un cursore predefinito di Windows specificato dalle costanti **IDC_** in Windows. H.|
|[CWinApp:: LoadStandardIcon](#loadstandardicon)|Carica un'icona di Windows predefinita specificata dalle costanti **IDI_** in Windows. H.|
|[CWinApp:: OnDDECommand](#onddecommand)|Chiamata eseguita dal Framework in risposta a un comando di esecuzione di Dynamic Data Exchange (DDE).|
|[CWinApp:: OnIdle](#onidle)|Eseguire l'override di per eseguire l'elaborazione del tempo di inattività specifico dell'applicazione.|
|[CWinApp:: OpenDocumentFile](#opendocumentfile)|Chiamata eseguita dal Framework per aprire un documento da un file.|
|[CWinApp::P arseCommandLine](#parsecommandline)|Analizza i singoli parametri e flag nella riga di comando.|
|[CWinApp::P reTranslateMessage](#pretranslatemessage)|Filtra i messaggi prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage).|
|[CWinApp::P rocessMessageFilter](#processmessagefilter)|Intercetta alcuni messaggi prima che raggiungano l'applicazione.|
|[CWinApp::P rocessShellCommand](#processshellcommand)|Gestisce gli argomenti e i flag della riga di comando.|
|[CWinApp::P rocessWndProcException](#processwndprocexception)|Intercetta tutte le eccezioni non gestite generate dai gestori di messaggi e comandi dell'applicazione.|
|[CWinApp:: Register](#register)|Esegue una registrazione personalizzata.|
|[CWinApp:: RegisterWithRestartManager](#registerwithrestartmanager)|Registra l'applicazione con Gestione riavvio.|
|[CWinApp:: ReopenPreviousFilesAtRestart](#reopenpreviousfilesatrestart)|Determina se Gestione riavvio riapre i file che sono stati aperti quando l'applicazione è stata chiusa in modo imprevisto.|
|[CWinApp:: RestartInstance](#restartinstance)|Gestisce il riavvio di un'applicazione avviato da Gestione riavvio.|
|[CWinApp:: RestoreAutosavedFilesAtRestart](#restoreautosavedfilesatrestart)|Determina se la gestione riavvio ripristina i file salvati in automatico quando riavvia l'applicazione.|
|[CWinApp:: Run](#run)|Esegue il ciclo di messaggi predefinito. Eseguire l'override di per personalizzare il ciclo di messaggi.|
|[CWinApp:: RunAutomated](#runautomated)|Verifica la riga di comando dell'applicazione per l'opzione **/Automation** . Obsoleto. Usare invece il valore in [CCommandLineInfo:: m_bRunAutomated](../../mfc/reference/ccommandlineinfo-class.md#m_brunautomated) dopo aver chiamato [ParseCommandLine](#parsecommandline).|
|[CWinApp:: RunEmbedded](#runembedded)|Verifica la riga di comando dell'applicazione per l'opzione **l'opzione/Embedding** . Obsoleto. Usare invece il valore in [CCommandLineInfo:: m_bRunEmbedded](../../mfc/reference/ccommandlineinfo-class.md#m_brunembedded) dopo aver chiamato [ParseCommandLine](#parsecommandline).|
|[CWinApp:: SaveAllModified](#saveallmodified)|Richiede all'utente di salvare tutti i documenti modificati.|
|[CWinApp:: SelectPrinter](#selectprinter)|Seleziona una stampante indicata in precedenza da un utente tramite una finestra di dialogo Stampa.|
|[CWinApp:: SetHelpMode](#sethelpmode)|Imposta e inizializza il tipo di guida utilizzato dall'applicazione.|
|[CWinApp:: SupportsApplicationRecovery](#supportsapplicationrecovery)|Determina se la gestione riavvio recupera un'applicazione che è stata chiusa in modo imprevisto.|
|[CWinApp:: SupportsAutosaveAtInterval](#supportsautosaveatinterval)|Determina se Gestione riavvio Salva in automatico i documenti aperti a intervalli regolari.|
|[CWinApp:: SupportsAutosaveAtRestart](#supportsautosaveatrestart)|Determina se Gestione riavvio Salva tutti i documenti aperti quando l'applicazione viene riavviata.|
|[CWinApp:: SupportsRestartManager](#supportsrestartmanager)|Determina se l'applicazione supporta Gestione riavvio.|
|[CWinApp:: Annulla registrazione](#unregister)|Annulla la registrazione di tutto il noto per essere registrato dall'oggetto `CWinApp`.|
|[CWinApp:: WinHelp](#winhelp)|Chiama la funzione di Windows `WinHelp`.|
|[CWinApp:: WriteProfileBinary](#writeprofilebinary)|Scrive i dati binari in una voce nell'oggetto dell'applicazione. File INI.|
|[CWinApp:: WriteProfileInt](#writeprofileint)|Scrive un intero in una voce nell'oggetto dell'applicazione. File INI.|
|[CWinApp:: WriteProfileString](#writeprofilestring)|Scrive una stringa in una voce nell'oggetto dell'applicazione. File INI.|

### <a name="protected-methods"></a>Metodi protetti

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp:: EnableShellOpen](#enableshellopen)|Consente all'utente di aprire i file di dati da Gestione file di Windows.|
|[CWinApp:: LoadStdProfileSettings](#loadstdprofilesettings)|Carica standard. Le impostazioni del file INI e abilitano la funzionalità elenco di file MRU.|
|[CWinApp:: OnContextHelp](#oncontexthelp)|Gestisce la Guida di MAIUSC + F1 all'interno dell'applicazione.|
|[CWinApp:: OnFileNew](#onfilenew)|Implementa il comando ID_FILE_NEW.|
|[CWinApp:: OnFileOpen](#onfileopen)|Implementa il comando ID_FILE_OPEN.|
|[CWinApp:: OnFilePrintSetup](#onfileprintsetup)|Implementa il comando ID_FILE_PRINT_SETUP.|
|[CWinApp:: OnHelp](#onhelp)|Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).|
|[CWinApp:: OnHelpFinder](#onhelpfinder)|Gestisce i comandi ID_HELP_FINDER e ID_DEFAULT_HELP.|
|[CWinApp:: OnHelpIndex](#onhelpindex)|Gestisce il comando ID_HELP_INDEX e fornisce un argomento della Guida predefinito.|
|[CWinApp:: OnHelpUsing](#onhelpusing)|Gestisce il comando ID_HELP_USING.|
|[CWinApp:: RegisterShellFileTypes](#registershellfiletypes)|Registra tutti i tipi di documento dell'applicazione con gestione file di Windows.|
|[CWinApp:: seappid](#setappid)|Imposta in modo esplicito l'ID modello utente dell'applicazione per l'applicazione. Questo metodo deve essere chiamato prima che un'interfaccia utente venga presentata all'utente (il posto migliore è il costruttore dell'applicazione).|
|[CWinApp:: SetRegistryKey](#setregistrykey)|Consente di archiviare le impostazioni dell'applicazione nel registro di sistema anziché in. File INI.|
|[CWinApp:: UnregisterShellFileTypes](#unregistershellfiletypes)|Annulla la registrazione di tutti i tipi di documento dell'applicazione con gestione file di Windows.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp:: m_bHelpMode](#m_bhelpmode)|Indica se l'utente è in modalità di contesto della guida (in genere richiamato con MAIUSC + F1).|
|[CWinApp:: m_eHelpType](#m_ehelptype)|Specifica il tipo di guida utilizzato dall'applicazione.|
|[CWinApp:: m_hInstance](#m_hinstance)|Identifica l'istanza corrente dell'applicazione.|
|[CWinApp:: m_lpCmdLine](#m_lpcmdline)|Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.|
|[CWinApp:: m_nCmdShow](#m_ncmdshow)|Specifica come deve essere visualizzata inizialmente la finestra.|
|[CWinApp:: m_pActiveWnd](#m_pactivewnd)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|
|[CWinApp:: m_pszAppID](#m_pszappid)|ID modello utente applicazione.|
|[CWinApp:: m_pszAppName](#m_pszappname)|Specifica il nome dell'applicazione.|
|[CWinApp:: m_pszExeName](#m_pszexename)|Nome del modulo dell'applicazione.|
|[CWinApp:: m_pszHelpFilePath](#m_pszhelpfilepath)|Percorso del file della Guida dell'applicazione.|
|[CWinApp:: m_pszProfileName](#m_pszprofilename)|Oggetto dell'applicazione. Nome file INI.|
|[CWinApp:: m_pszRegistryKey](#m_pszregistrykey)|Utilizzato per determinare la chiave del registro di sistema completa per archiviare le impostazioni del profilo dell'applicazione.|

### <a name="protected-data-members"></a>Membri dati protetti

|Nome|Descrizione|
|----------|-----------------|
|[CWinApp:: m_dwRestartManagerSupportFlags](#m_dwrestartmanagersupportflags)|Flag che determinano il comportamento della gestione riavvio.|
|[CWinApp:: m_nAutosaveInterval](#m_nautosaveinterval)|Intervallo di tempo in millisecondi tra i salvataggio automatico.|
|[CWinApp:: m_pDataRecoveryHandler](#m_pdatarecoveryhandler)|Puntatore al gestore di recupero dati per l'applicazione.|

## <a name="remarks"></a>Osservazioni

Un oggetto applicazione fornisce funzioni membro per l'inizializzazione dell'applicazione (e di ogni istanza) e per l'esecuzione dell'applicazione.

Ogni applicazione che usa le classi Microsoft Foundation può contenere un solo oggetto derivato da `CWinApp`. Questo oggetto viene costruito quando vengono C++ costruiti altri oggetti globali ed è già disponibile quando Windows chiama la funzione `WinMain`, fornita dall'libreria Microsoft Foundation Class. Dichiarare l'oggetto `CWinApp` derivato a livello globale.

Quando si deriva una classe dell'applicazione da `CWinApp`, eseguire l'override della funzione membro [InitInstance](#initinstance) per creare l'oggetto finestra principale dell'applicazione.

Oltre alle funzioni membro `CWinApp`, il libreria Microsoft Foundation Class fornisce le funzioni globali seguenti per accedere all'oggetto `CWinApp` e ad altre informazioni globali:

- [AfxGetApp](application-information-and-management.md#afxgetapp) Ottiene un puntatore all'oggetto `CWinApp`.

- [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle) Ottiene un handle per l'istanza dell'applicazione corrente.

- [AfxGetResourceHandle](application-information-and-management.md#afxgetresourcehandle) Ottiene un handle per le risorse dell'applicazione.

- [AfxGetAppName](application-information-and-management.md#afxgetappname) Ottiene un puntatore a una stringa che contiene il nome dell'applicazione. In alternativa, se si dispone di un puntatore all'oggetto `CWinApp`, utilizzare `m_pszExeName` per ottenere il nome dell'applicazione.

Vedere [CWinApp: la classe dell'applicazione](../../mfc/cwinapp-the-application-class.md) per ulteriori informazioni sulla classe `CWinApp`, inclusa una panoramica dei seguenti elementi:

- Codice derivato da `CWinApp`scritto dalla creazione guidata applicazione.

- `CWinApp`il ruolo nella sequenza di esecuzione dell'applicazione.

- implementazioni predefinite della funzione membro `CWinApp`.

- sottoponibile a override della chiave di `CWinApp`.

Il membro dati `m_hPrevInstance` non esiste più. Per determinare se è in esecuzione un'altra istanza dell'applicazione, utilizzare un mutex denominato. Se l'apertura del mutex ha esito negativo, non sono presenti altre istanze dell'applicazione in esecuzione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](../../mfc/reference/cobject-class.md)

[CCmdTarget](../../mfc/reference/ccmdtarget-class.md)

[CWinThread](../../mfc/reference/cwinthread-class.md)

`CWinApp`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwin.h

##  <a name="adddoctemplate"></a>CWinApp:: AddDocTemplate

Chiamare questa funzione membro per aggiungere un modello di documento all'elenco dei modelli di documento disponibili gestiti dall'applicazione.

```
void AddDocTemplate(CDocTemplate* pTemplate);
```

### <a name="parameters"></a>Parametri

*pTemplate*<br/>
Puntatore al `CDocTemplate` da aggiungere.

### <a name="remarks"></a>Osservazioni

È necessario aggiungere tutti i modelli di documento a un'applicazione prima di chiamare [RegisterShellFileTypes](#registershellfiletypes).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#35](../../mfc/reference/codesnippet/cpp/cwinapp-class_1.cpp)]

##  <a name="addtorecentfilelist"></a>CWinApp:: AddToRecentFileList

Chiamare questa funzione membro per aggiungere *lpszPathName* all'elenco di file MRU.

```
virtual void AddToRecentFileList(LPCTSTR lpszPathName);
```

### <a name="parameters"></a>Parametri

*lpszPathName*<br/>
Percorso del file.

### <a name="remarks"></a>Osservazioni

Prima di usare questa funzione membro, è necessario chiamare la funzione membro [LoadStdProfileSettings](#loadstdprofilesettings) per caricare l'elenco dei file MRU corrente.

Il Framework chiama questa funzione membro quando apre un file o esegue il comando Salva con nome per salvare un file con un nuovo nome.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#36](../../mfc/reference/codesnippet/cpp/cwinapp-class_2.cpp)]

##  <a name="applicationrecoverycallback"></a>CWinApp:: ApplicationRecoveryCallback

Chiamata eseguita dal framework quando l'applicazione viene chiusa in modo imprevisto.

```
virtual DWORD ApplicationRecoveryCallback(LPVOID lpvParam);
```

### <a name="parameters"></a>Parametri

*lpvParam*<br/>
[in] Riservato per un utilizzo futuro.

### <a name="return-value"></a>Valore restituito

0 se il metodo ha esito positivo; diverso da zero se si verifica un errore.

### <a name="remarks"></a>Osservazioni

Se l'applicazione supporta Gestione riavvio, il Framework chiama questa funzione quando l'applicazione viene chiusa in modo imprevisto.

L'implementazione predefinita di `ApplicationRecoveryCallback` usa il `CDataRecoveryHandler` per salvare l'elenco dei documenti attualmente aperti nel registro di sistema. Questo metodo non salva i file in modo automatico.

Per personalizzare il comportamento, eseguire l'override di questa funzione in una [classe CWinApp](../../mfc/reference/cwinapp-class.md) derivata o passare il metodo di recupero dell'applicazione come parametro a [CWinApp:: RegisterWithRestartManager](#registerwithrestartmanager).

##  <a name="closealldocuments"></a>CWinApp:: CloseAllDocuments

Chiamare questa funzione membro per chiudere tutti i documenti aperti prima di uscire.

```
void CloseAllDocuments(BOOL bEndSession);
```

### <a name="parameters"></a>Parametri

*bEndSession*<br/>
Specifica se la sessione di Windows verrà terminata. È TRUE se la sessione è stata terminata; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamare [HideApplication](#hideapplication) prima di chiamare `CloseAllDocuments`.

##  <a name="createprinterdc"></a>CWinApp:: CreatePrinterDC

Chiamare questa funzione membro per creare un contesto di dispositivo stampante (DC) dalla stampante selezionata.

```
BOOL CreatePrinterDC(CDC& dc);
```

### <a name="parameters"></a>Parametri

*dc*<br/>
Riferimento a un contesto di dispositivo stampante.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il contesto di dispositivo della stampante viene creato correttamente; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

`CreatePrinterDC` Inizializza il contesto di dispositivo passato per riferimento, in modo da poterlo utilizzare per la stampa.

Se la funzione ha esito positivo, al termine della stampa è necessario eliminare il contesto di dispositivo. È possibile consentire al distruttore dell'oggetto [CDC](../../mfc/reference/cdc-class.md) di eseguire tale operazione oppure è possibile eseguire questa operazione in modo esplicito chiamando [CDC::D eletedc](../../mfc/reference/cdc-class.md#deletedc).

##  <a name="cwinapp"></a>CWinApp:: CWinApp

Costruisce un oggetto `CWinApp` e passa *lpszAppName* da archiviare come nome dell'applicazione.

```
CWinApp(LPCTSTR lpszAppName = NULL);
```

### <a name="parameters"></a>Parametri

*lpszAppName*<br/>
Stringa con terminazione null che contiene il nome dell'applicazione utilizzato da Windows. Se questo argomento non viene specificato o è NULL, `CWinApp` utilizza la stringa di risorsa AFX_IDS_APP_TITLE o il nome del file eseguibile.

### <a name="remarks"></a>Osservazioni

È necessario costruire un oggetto globale della classe derivata da `CWinApp`. Nell'applicazione è possibile disporre di un solo oggetto `CWinApp`. Il costruttore archivia un puntatore all'oggetto `CWinApp` in modo che `WinMain` possa chiamare le funzioni membro dell'oggetto per inizializzare ed eseguire l'applicazione.

##  <a name="delregtree"></a>CWinApp::D elRegTree

Elimina una chiave del registro di sistema specifica e tutte le relative sottochiavi.

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

*hParentKey*<br/>
Handle per una chiave del registro di sistema.

*strKeyName*<br/>
Nome della chiave del registro di sistema da eliminare.

*pTM*<br/>
Puntatore all'oggetto all'CAtlTransactionManager.

### <a name="return-value"></a>Valore restituito

Se la funzione ha esito positivo, il valore restituito viene ERROR_SUCCESS. Se la funzione ha esito negativo, il valore restituito è un codice di errore diverso da zero definito in Winerror. h.

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione per eliminare la chiave specificata e le relative sottochiavi.

##  <a name="domessagebox"></a>CWinApp::D oMessageBox

Il Framework chiama questa funzione membro per implementare una finestra di messaggio per la funzione globale [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox).

```
virtual int DoMessageBox(
    LPCTSTR lpszPrompt,
    UINT nType,
    UINT nIDPrompt);
```

### <a name="parameters"></a>Parametri

*lpszPrompt*<br/>
Indirizzo del testo nella finestra di messaggio.

*nType*<br/>
[Stile](../../mfc/reference/styles-used-by-mfc.md#message-box-styles)della finestra di messaggio.

*nIDPrompt*<br/>
Indice di una stringa di contesto della guida.

### <a name="return-value"></a>Valore restituito

Restituisce gli stessi valori di `AfxMessageBox`.

### <a name="remarks"></a>Osservazioni

Non chiamare questa funzione membro per aprire una finestra di messaggio; in alternativa, usare `AfxMessageBox`.

Eseguire l'override di questa funzione membro per personalizzare l'elaborazione a livello di applicazione delle chiamate `AfxMessageBox`.

##  <a name="dowaitcursor"></a>CWinApp::D oWaitCursor

Questa funzione membro viene chiamata dal Framework per implementare [CWaitCursor](../../mfc/reference/cwaitcursor-class.md), [CCmdTarget:: BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget:: EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)e [CCmdTarget:: RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).

```
virtual void DoWaitCursor(int nCode);
```

### <a name="parameters"></a>Parametri

*nCode*<br/>
Se questo parametro è 1, viene visualizzato un cursore di attesa. Se è 0, il cursore di attesa viene ripristinato senza incrementare il conteggio dei riferimenti. Se-1, il cursore di attesa termina.

### <a name="remarks"></a>Osservazioni

Il valore predefinito implementa un cursore a clessidra. `DoWaitCursor` gestisce un conteggio di riferimenti. Quando positivo, viene visualizzato il cursore a clessidra.

Sebbene in genere non si chiami direttamente `DoWaitCursor`, è possibile eseguire l'override di questa funzione membro per modificare il cursore di attesa o per eseguire un'ulteriore elaborazione mentre viene visualizzato il cursore di attesa.

Per un modo più semplice e semplificato per implementare un cursore di attesa, utilizzare `CWaitCursor`.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#37](../../mfc/reference/codesnippet/cpp/cwinapp-class_3.cpp)]

##  <a name="enabled2dsupport"></a>CWinApp:: EnableD2DSupport

È necessario Visual Studio 2010 SP1.

Abilita il supporto D2D dell'applicazione. Chiamare questo metodo prima dell'inizializzazione della finestra principale.

```
BOOL EnableD2DSupport(
    D2D1_FACTORY_TYPE d2dFactoryType = D2D1_FACTORY_TYPE_SINGLE_THREADED,
    DWRITE_FACTORY_TYPE writeFactoryType = DWRITE_FACTORY_TYPE_SHARED);
```

### <a name="parameters"></a>Parametri

*d2dFactoryType*<br/>
Il modello di threading della factory D2D e le risorse che crea.

*writeFactoryType*<br/>
Valore che specifica se l'oggetto Write Factory sarà condiviso o isolato

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se il supporto D2D è stato abilitato; in caso contrario, FALSE.

##  <a name="enablehtmlhelp"></a>CWinApp:: EnableHtmlHelp

Chiamare questa funzione membro dall'interno del costruttore della classe derivata da `CWinApp`per usare HTMLHelp per la guida dell'applicazione.

```
void EnableHtmlHelp();
```

### <a name="remarks"></a>Osservazioni

##  <a name="enableshellopen"></a>CWinApp:: EnableShellOpen

Chiamare questa funzione, in genere dall'override del `InitInstance`, per consentire agli utenti dell'applicazione di aprire i file di dati quando fanno doppio clic sui file dall'interno di gestione file di Windows.

```
void EnableShellOpen();
```

### <a name="remarks"></a>Osservazioni

Chiamare la funzione membro `RegisterShellFileTypes` insieme a questa funzione o fornire un oggetto. File REG con l'applicazione per la registrazione manuale dei tipi di documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#38](../../mfc/reference/codesnippet/cpp/cwinapp-class_4.cpp)]

##  <a name="enabletaskbarinteraction"></a>CWinApp:: EnableTaskbarInteraction

Abilita l'interazione della barra delle applicazioni.

```
BOOL EnableTaskbarInteraction(BOOL bEnable = TRUE);
```

### <a name="parameters"></a>Parametri

*bEnable*<br/>
Specifica se l'interazione con la barra delle applicazioni di Windows 7 deve essere abilitata (TRUE) o disabilitata (FALSE).

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'interazione della barra delle applicazioni può essere abilitata o disabilitata.

### <a name="remarks"></a>Osservazioni

Questo metodo deve essere chiamato prima della creazione della finestra principale; in caso contrario, dichiara e restituisce FALSE.

##  <a name="exitinstance"></a>CWinApp:: ExitInstance

Chiamata eseguita dal Framework dall'interno della funzione membro `Run` per uscire da questa istanza dell'applicazione.

```
virtual int ExitInstance();
```

### <a name="return-value"></a>Valore restituito

Codice di uscita dell'applicazione; 0 indica che non sono presenti errori e che i valori maggiori di 0 indicano un errore. Questo valore viene utilizzato come valore restituito da `WinMain`.

### <a name="remarks"></a>Osservazioni

Non chiamare questa funzione membro da qualsiasi punto ma all'interno della funzione membro `Run`.

L'implementazione predefinita di questa funzione scrive le opzioni del Framework per l'oggetto dell'applicazione. File INI. Eseguire l'override di questa funzione per eseguire la pulizia al termine dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#39](../../mfc/reference/codesnippet/cpp/cwinapp-class_5.cpp)]

##  <a name="getapplicationrecoveryparameter"></a>CWinApp:: GetApplicationRecoveryParameter

Recupera il parametro di input per il metodo di ripristino dell'applicazione.

```
virtual LPVOID GetApplicationRecoveryParameter();
```

### <a name="return-value"></a>Valore restituito

Parametro di input predefinito per il metodo di ripristino dell'applicazione.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito di questa funzione restituisce NULL.

Per ulteriori informazioni, vedere [CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback).

##  <a name="getapplicationrecoverypinginterval"></a>CWinApp:: GetApplicationRecoveryPingInterval

Restituisce l'intervallo di tempo durante il quale Gestione riavvio attende la restituzione della funzione di callback di ripristino.

```
virtual DWORD GetApplicationRecoveryPingInterval();
```

### <a name="return-value"></a>Valore restituito

Intervallo di tempo in millisecondi.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione registrata con Gestione riavvio si chiude in modo imprevisto, l'applicazione tenta di salvare i documenti aperti e chiama la funzione di callback di ripristino. La funzione di callback di recupero predefinita è [CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback).

La durata del periodo di attesa del Framework per la restituzione della funzione di callback di ripristino è l'intervallo di ping. È possibile personalizzare l'intervallo di ping eseguendo l'override `CWinApp::GetApplicationRecoveryPingInterval` o specificando un valore personalizzato da `RegisterWithRestartManager`.

##  <a name="getapplicationrestartflags"></a>CWinApp:: GetApplicationRestartFlags

Restituisce i flag per Gestione riavvio.

```
virtual DWORD GetApplicationRestartFlags();
```

### <a name="return-value"></a>Valore restituito

Flag per Gestione riavvio. L'implementazione predefinita restituisce 0.

### <a name="remarks"></a>Osservazioni

I flag per Gestione riavvio non hanno effetto con l'implementazione predefinita. Sono disponibili per un uso futuro.

È possibile impostare i flag quando si registra l'applicazione con Gestione riavvio usando [CWinApp:: RegisterWithRestartManager](#registerwithrestartmanager).

I valori possibili per i flag di gestione riavvio sono i seguenti:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

##  <a name="getappregistrykey"></a>CWinApp:: GetAppRegistryKey

Restituisce la chiave per HKEY_CURRENT_USER\\"software" \RegistryKey\ProfileName.

```
HKEY GetAppRegistryKey(CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Chiave dell'applicazione se la funzione ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

##  <a name="getdatarecoveryhandler"></a>CWinApp:: GetDataRecoveryHandler

Ottiene il gestore di recupero dati per questa istanza dell'applicazione.

```
virtual CDataRecoveryHandler *GetDataRecoveryHandler();
```

### <a name="return-value"></a>Valore restituito

Gestore del recupero dei dati per questa istanza dell'applicazione.

### <a name="remarks"></a>Osservazioni

Ogni applicazione che usa Gestione riavvio deve avere un'istanza della [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md). Questa classe è responsabile del monitoraggio dei documenti aperti e del salvataggio automatico dei file. Il comportamento del `CDataRecoveryHandler` dipende dalla configurazione della gestione riavvio. Per ulteriori informazioni, vedere la [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md).

Questo metodo restituisce NULL nei sistemi operativi precedenti a Windows Vista. Gestione riavvio non è supportato nei sistemi operativi precedenti a Windows Vista.

Se l'applicazione non dispone attualmente di un gestore di recupero dati, questo metodo ne crea uno e restituisce un puntatore.

##  <a name="getfirstdoctemplateposition"></a>CWinApp:: GetFirstDocTemplatePosition

Ottiene la posizione del primo modello di documento nell'applicazione.

```
POSITION GetFirstDocTemplatePosition() const;
```

### <a name="return-value"></a>Valore restituito

Valore POSITION che può essere utilizzato per l'iterazione o il recupero del puntatore a un oggetto; NULL se l'elenco è vuoto.

### <a name="remarks"></a>Osservazioni

Usare il valore POSITION restituito in una chiamata a [GetNextDocTemplate](#getnextdoctemplate) per ottenere il primo oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) .

##  <a name="gethelpmode"></a>CWinApp:: GetHelpMode

Recupera il tipo di guida utilizzato dall'applicazione.

```
AFX_HELP_TYPE GetHelpMode();
```

### <a name="return-value"></a>Valore restituito

Tipo di guida utilizzato dall'applicazione. Per ulteriori informazioni, vedere [CWinApp:: m_eHelpType](#m_ehelptype) .

##  <a name="getnextdoctemplate"></a>CWinApp:: GetNextDocTemplate

Ottiene il modello di documento identificato da *pos*, quindi imposta *pos* sul valore della posizione.

```
CDocTemplate* GetNextDocTemplate(POSITION& pos) const;
```

### <a name="parameters"></a>Parametri

*pos*<br/>
Riferimento a un valore di posizione restituito da una chiamata precedente a `GetNextDocTemplate` o [GetFirstDocTemplatePosition](#getfirstdoctemplateposition). Il valore viene aggiornato alla posizione successiva da questa chiamata.

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) .

### <a name="remarks"></a>Osservazioni

È possibile utilizzare `GetNextDocTemplate` in un ciclo di iterazione in uscita se si stabilisce la posizione iniziale con una chiamata a `GetFirstDocTemplatePosition`.

È necessario assicurarsi che il valore di posizione sia valido. Se non è valido, la versione di debug dell'libreria Microsoft Foundation Class asserisce.

Se il modello di documento recuperato è l'ultimo disponibile, il nuovo valore di *pos* viene impostato su null.

##  <a name="getprinterdevicedefaults"></a>CWinApp:: GetPrinterDeviceDefaults

Chiamare questa funzione membro per preparare un contesto di dispositivo stampante per la stampa.

```
BOOL GetPrinterDeviceDefaults(struct tagPDA* pPrintDlg);
```

### <a name="parameters"></a>Parametri

*pPrintDlg*<br/>
Puntatore a una struttura [PrintDlg](/windows/win32/api/commdlg/ns-commdlg-printdlga) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Recupera le impostazioni predefinite della stampante correnti da Windows. File INI, se necessario, oppure utilizza l'ultima configurazione della stampante impostata dall'utente nell'installazione di stampa.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#40](../../mfc/reference/codesnippet/cpp/cwinapp-class_6.cpp)]

##  <a name="getprofilebinary"></a>CWinApp:: GetProfileBinary

Chiamare questa funzione membro per recuperare i dati binari da una voce all'interno di una sezione specificata del registro di sistema dell'applicazione o. File INI.

```
BOOL GetProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE* ppData,
    UINT* pBytes);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.

*ppData*<br/>
Punta a un puntatore che riceverà l'indirizzo dei dati.

*pBytes*<br/>
Punta a un UINT che riceverà le dimensioni dei dati (in byte).

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Questa funzione membro non fa distinzione tra maiuscole e minuscole, pertanto le stringhe nei parametri *lpszSection* e *lpszEntry* possono variare in maiuscolo e minuscolo.

> [!NOTE]
> `GetProfileBinary` alloca un buffer e ne restituisce l'indirizzo in \* *ppData*. Il chiamante è responsabile della liberazione del buffer mediante **Delete []** .

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#41](../../mfc/reference/codesnippet/cpp/cwinapp-class_7.cpp)]

Per un esempio aggiuntivo, vedere [CWinApp:: WriteProfileBinary](#writeprofilebinary).

##  <a name="getprofileint"></a>CWinApp:: GetProfileInt

Chiamare questa funzione membro per recuperare il valore di un intero da una voce in una sezione specifica del Registro di sistema dell'applicazione o del file INI.

```
UINT GetProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nDefault);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce il cui valore deve essere recuperato.

*nDefault*<br/>
Specifica il valore predefinito per restituire se il framework non riesce a trovare la voce.

### <a name="return-value"></a>Valore restituito

Valore intero della stringa che segue la voce specificata se la funzione ha esito positivo. Il valore restituito è il valore del parametro *nDefault* se la funzione non trova la voce. Il valore restituito è 0 se il valore che corrisponde alla voce specificata non è un intero.

Questa funzione supporta la notazione esadecimale per il valore nel file INI. Quando si recupera un intero con segno, è necessario eseguire il cast del valore in un **tipo int**.

### <a name="remarks"></a>Osservazioni

Questa funzione membro non fa distinzione tra maiuscole e minuscole, pertanto le stringhe nei parametri *lpszSection* e *lpszEntry* possono variare in maiuscolo e minuscolo.

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#42](../../mfc/reference/codesnippet/cpp/cwinapp-class_8.cpp)]

Per un esempio aggiuntivo, vedere [CWinApp:: WriteProfileInt](#writeprofileint).

##  <a name="getprofilestring"></a>CWinApp:: GetProfileString

Chiamare questa funzione membro per recuperare la stringa associata a una voce all'interno della sezione specificata nel registro di sistema dell'applicazione o. File INI.

```
CString GetProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszDefault = NULL);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce di cui è necessario recuperare la stringa. Questo valore non può essere NULL.

*lpszDefault*<br/>
Indica il valore stringa predefinito per la voce specificata se non è possibile trovare la voce nel file di inizializzazione.

### <a name="return-value"></a>Valore restituito

Il valore restituito è la stringa dall'oggetto dell'applicazione. File INI o *lpszDefault* se non è possibile trovare la stringa. La lunghezza massima della stringa supportata dal Framework è _MAX_PATH. Se *lpszDefault* è null, il valore restituito è una stringa vuota.

### <a name="remarks"></a>Osservazioni

> [!IMPORTANT]
> I dati restituiti dalla funzione non sono necessariamente con terminazione null e il chiamante deve eseguire la convalida. Per altre informazioni, vedere [Evitare sovraccarichi del buffer](/windows/win32/SecBP/avoiding-buffer-overruns).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp:: GetProfileInt](#getprofileint).

##  <a name="getsectionkey"></a>CWinApp:: GetSectionKey

Restituisce la chiave per HKEY_CURRENT_USER\\"software" \RegistryKey\AppName\lpszSection.

```
HKEY GetSectionKey(
    LPCTSTR lpszSection,
    CAtlTransactionManager* pTM = NULL);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Nome della chiave da ottenere.

*pTM*<br/>
Puntatore a un oggetto `CAtlTransactionManager`.

### <a name="return-value"></a>Valore restituito

Chiave della sezione se la funzione ha esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

##  <a name="hideapplication"></a>CWinApp:: HideApplication

Chiamare questa funzione membro per nascondere un'applicazione prima di chiudere i documenti aperti.

```
void HideApplication();
```

##  <a name="htmlhelp"></a>CWinApp:: HtmlHelp

Chiamare questa funzione membro per richiamare l'applicazione HTMLHelp.

```
virtual void HtmlHelp(
    DWORD_PTR dwData,
    UINT nCmd = 0x000F);
```

### <a name="parameters"></a>Parametri

*dwData*<br/>
Specifica dati aggiuntivi. Il valore utilizzato dipende dal valore del parametro *nCmd* . Il valore predefinito è `0x000F`, che indica [HH_HELP_CONTEXT](/previous-versions/windows/desktop/htmlhelp/hh-help-context-command).

*nCmd*<br/>
Specifica il tipo di Guida richiesto. Per un elenco dei valori possibili e il modo in cui influiscono sul parametro *dwData* , vedere il parametro *uCommand* descritto nelle funzioni API [HtmlHelpW](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpw) o [HtmlHelpA](/windows/win32/api/htmlhelp/nf-htmlhelp-htmlhelpa) nel Windows SDK. 

### <a name="remarks"></a>Osservazioni

Il Framework chiama anche questa funzione per richiamare l'applicazione HTMLHelp.

Il Framework chiuderà automaticamente l'applicazione HTMLHelp quando l'applicazione viene terminata.

##  <a name="initinstance"></a>CWinApp:: InitInstance

Windows consente di eseguire contemporaneamente diverse copie dello stesso programma.

```
virtual BOOL InitInstance();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'inizializzazione ha esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'inizializzazione dell'applicazione è suddivisa concettualmente in due sezioni: l'inizializzazione di un'applicazione unica eseguita la prima volta che il programma viene eseguito e l'inizializzazione dell'istanza che viene eseguita ogni volta che viene eseguita una copia del programma, inclusa la prima volta. L'implementazione del Framework di `WinMain` chiama questa funzione.

Eseguire l'override di `InitInstance` per inizializzare ogni nuova istanza dell'applicazione in esecuzione in Windows. In genere, è necessario eseguire l'override di `InitInstance` per costruire l'oggetto finestra principale e impostare il membro dati `CWinThread::m_pMainWnd` in modo che punti a tale finestra. Per ulteriori informazioni sull'override di questa funzione membro, vedere [CWinApp: la classe dell'applicazione](../../mfc/cwinapp-the-application-class.md).

> [!NOTE]
> Le applicazioni MFC devono essere inizializzate come Apartment a thread singolo (STA). Se si chiama [CoInitializeEx](/windows/win32/api/combaseapi/nf-combaseapi-coinitializeex) nell'override `InitInstance`, specificare COINIT_APARTMENTTHREADED (anziché COINIT_MULTITHREADED).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCListView#9](../../atl/reference/codesnippet/cpp/cwinapp-class_10.cpp)]

##  <a name="istaskbarinteractionenabled"></a>CWinApp:: IsTaskbarInteractionEnabled

Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitata.

```
virtual BOOL IsTaskbarInteractionEnabled();
```

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se `EnableTaskbarInteraction` è stato chiamato e il sistema operativo è Windows 7 o versione successiva.

### <a name="remarks"></a>Osservazioni

L'interazione della barra delle applicazioni indica che l'applicazione MDI Visualizza il contenuto di elementi figlio MDI in anteprime a schede separate visualizzate quando il puntatore del mouse si trova sul pulsante della barra delle applicazioni dell'applicazione.

##  <a name="loadcursor"></a>CWinApp:: LoadCursor

Carica la risorsa di cursore denominata da *lpszResourceName* o specificata da *nIDResource* dal file eseguibile corrente.

```
HCURSOR LoadCursor(LPCTSTR lpszResourceName) const;  HCURSOR LoadCursor(UINT nIDResource) const;
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa del cursore. È possibile usare un `CString` per questo argomento.

*nIDResource*<br/>
ID della risorsa del cursore. Per un elenco di risorse, vedere [LoadCursor](/windows/win32/api/winuser/nf-winuser-loadcursorw) nel Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per un cursore in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

`LoadCursor` carica il cursore in memoria solo se non è stato caricato in precedenza; in caso contrario, viene recuperato un handle della risorsa esistente.

Utilizzare la funzione membro [LoadStandardCursor](#loadstandardcursor) o [LoadOEMCursor](#loadoemcursor) per accedere ai cursori Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#44](../../mfc/reference/codesnippet/cpp/cwinapp-class_11.cpp)]

##  <a name="loadicon"></a>CWinApp:: LoadIcon

Carica la risorsa icona denominata da *lpszResourceName* o specificata da *nIDResource* dal file eseguibile.

```
HICON LoadIcon(LPCTSTR lpszResourceName) const;  HICON LoadIcon(UINT nIDResource) const;
```

### <a name="parameters"></a>Parametri

*lpszResourceName*<br/>
Punta a una stringa con terminazione null che contiene il nome della risorsa icona. È anche possibile usare un `CString` per questo argomento.

*nIDResource*<br/>
Numero ID della risorsa icona.

### <a name="return-value"></a>Valore restituito

Handle per un'icona in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

`LoadIcon` carica l'icona solo se non è stata caricata in precedenza; in caso contrario, viene recuperato un handle della risorsa esistente.

Per accedere alle icone Windows predefinite, è possibile usare la funzione membro [LoadStandardIcon](#loadstandardicon) o [LoadOEMIcon](#loadoemicon) .

> [!NOTE]
> Questa funzione membro chiama la funzione API Win32 [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw), che può caricare solo un'icona le cui dimensioni sono conformi al SM_CXICON e SM_CYICON i valori delle metriche di sistema.

##  <a name="loadoemcursor"></a>CWinApp:: LoadOEMCursor

Carica la risorsa di cursore predefinita di Windows specificata da *nIDCursor*.

```
HCURSOR LoadOEMCursor(UINT nIDCursor) const;
```

### <a name="parameters"></a>Parametri

*nIDCursor*<br/>
Identificatore di costante del manifesto **OCR_** che specifica un cursore di Windows predefinito. È necessario avere `#define OEMRESOURCE` prima `#include \<afxwin.h>` per accedere alle costanti **OCR_** in Windows. H.

### <a name="return-value"></a>Valore restituito

Handle per un cursore in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione membro `LoadOEMCursor` o [LoadStandardCursor](#loadstandardcursor) per accedere ai cursori Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#45](../../mfc/reference/codesnippet/cpp/cwinapp-class_12.h)]

[!code-cpp[NVC_MFCWindowing#46](../../mfc/reference/codesnippet/cpp/cwinapp-class_13.cpp)]

##  <a name="loadoemicon"></a>CWinApp:: LoadOEMIcon

Carica la risorsa icona predefinita di Windows specificata da *nIDIcon*.

```
HICON LoadOEMIcon(UINT nIDIcon) const;
```

### <a name="parameters"></a>Parametri

*nIDIcon*<br/>
Identificatore di costante del manifesto **OIC_** che specifica un'icona di Windows predefinita. È necessario avere `#define OEMRESOURCE` prima `#include \<afxwin.h>` per accedere alle costanti **OIC_** in Windows. H.

### <a name="return-value"></a>Valore restituito

Handle per un'icona in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Usare la funzione membro `LoadOEMIcon` o [LoadStandardIcon](#loadstandardicon) per accedere alle icone di Windows predefinite.

##  <a name="loadstandardcursor"></a>CWinApp:: LoadStandardCursor

Carica la risorsa di cursore predefinita di Windows specificata da *lpszCursorName* .

```
HCURSOR LoadStandardCursor(LPCTSTR lpszCursorName) const;
```

### <a name="parameters"></a>Parametri

*lpszCursorName*<br/>
Identificatore di costante del manifesto **IDC_** che specifica un cursore di Windows predefinito. Questi identificatori sono definiti in WINDOWS. H. L'elenco seguente mostra i valori e i significati predefiniti possibili per *lpszCursorName*:

- Cursore freccia standard IDC_ARROW

- Cursore di inserimento testo IDC_IBEAM standard

- IDC_WAIT cursore a clessidra utilizzato quando Windows esegue un'attività che richiede molto tempo

- IDC_CROSS cursore tra i capelli per la selezione

- IDC_UPARROW freccia che punta verso l'alto

- IDC_SIZE obsolete e non supportate; USA IDC_SIZEALL

- IDC_SIZEALL una freccia A quattro punte. Cursore da utilizzare per ridimensionare una finestra.

- IDC_ICON obsoleti e non supportati. Usare IDC_ARROW.

- IDC_SIZENWSE freccia a due punte con estremità in alto a sinistra e in basso a destra

- IDC_SIZENESW freccia a due punte con estremità in alto a destra e in basso a sinistra

- IDC_SIZEWE freccia a due punte orizzontale

- IDC_SIZENS freccia a due punte verticale

### <a name="return-value"></a>Valore restituito

Handle per un cursore in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Utilizzare la funzione membro `LoadStandardCursor` o [LoadOEMCursor](#loadoemcursor) per accedere ai cursori Windows predefiniti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#47](../../mfc/reference/codesnippet/cpp/cwinapp-class_14.cpp)]

##  <a name="loadstandardicon"></a>CWinApp:: LoadStandardIcon

Carica la risorsa icona predefinita di Windows specificata da *lpszIconName* .

```
HICON LoadStandardIcon(LPCTSTR lpszIconName) const;
```

### <a name="parameters"></a>Parametri

*lpszIconName*<br/>
Identificatore di costante manifesto che specifica un'icona di Windows predefinita. Questi identificatori sono definiti in WINDOWS. H. Per un elenco dei valori predefiniti possibili e delle relative descrizioni, vedere il parametro *lpIconName* in [LoadIcon](/windows/win32/api/winuser/nf-winuser-loadiconw) nella Windows SDK.

### <a name="return-value"></a>Valore restituito

Handle per un'icona in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Usare la funzione membro `LoadStandardIcon` o [LoadOEMIcon](#loadoemicon) per accedere alle icone di Windows predefinite.

##  <a name="loadstdprofilesettings"></a>CWinApp:: LoadStdProfileSettings

Chiamare questa funzione membro dall'interno della funzione membro [InitInstance](#initinstance) per abilitare e caricare l'elenco dei file usati più di recente e l'ultimo stato di anteprima.

```
void LoadStdProfileSettings(UINT nMaxMRU = _AFX_MRU_COUNT);
```

### <a name="parameters"></a>Parametri

*nMaxMRU*<br/>
Il numero dei file usati di recente da rilevare.

### <a name="remarks"></a>Osservazioni

Se *nMaxMRU* è 0, non verrà mantenuto alcun elenco MRU.

##  <a name="m_bhelpmode"></a>CWinApp:: m_bHelpMode

TRUE se l'applicazione è in modalità di contesto della guida (richiamata convenzionalmente con MAIUSC + F1); in caso contrario, FALSE.

```
BOOL m_bHelpMode;
```

### <a name="remarks"></a>Osservazioni

In modalità contesto Guida, il cursore diventa un punto interrogativo e l'utente può spostarlo sullo schermo. Esaminare questo flag se si desidera implementare una gestione speciale quando si utilizza la modalità della guida. `m_bHelpMode` è una variabile pubblica di tipo BOOL.

##  <a name="m_dwrestartmanagersupportflags"></a>CWinApp:: m_dwRestartManagerSupportFlags

Flag che determinano il comportamento della gestione riavvio.

```
DWORD m_dwRestartManagerSupportFlags;
```

### <a name="remarks"></a>Osservazioni

Per abilitare Gestione riavvio, impostare `m_dwRestartManagerSupportFlags` sul comportamento desiderato. Nella tabella seguente vengono illustrati i flag disponibili.

|||
|-|-|
|Flag|Descrizione|
|AFX_RESTART_MANAGER_SUPPORT_RESTART|L'applicazione viene registrata usando [CWinApp:: RegisterWithRestartManager](#registerwithrestartmanager). Gestione riavvio è responsabile per il riavvio dell'applicazione se si chiude in modo imprevisto.|
|-AFX_RESTART_MANAGER_SUPPORT_RECOVERY|L'applicazione viene registrata con Gestione riavvio e gestione riavvio chiama la funzione di callback di ripristino al riavvio dell'applicazione. La funzione di callback di recupero predefinita è [CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback).|
|-AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART|Il salvataggio automatico è abilitato e gestione riavvio Salva in automatico tutti i documenti aperti al riavvio dell'applicazione.|
|-AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL|Il salvataggio automatico è abilitato e gestione riavvio Salva in automatico tutti i documenti aperti a intervalli regolari. L'intervallo è definito da [CWinApp:: m_nAutosaveInterval](#m_nautosaveinterval).|
|-AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES|Gestione riavvio apre i documenti aperti in precedenza dopo il riavvio dell'applicazione da un'uscita imprevista. La [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) gestisce l'archiviazione dell'elenco dei documenti aperti e il relativo ripristino.|
|-AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES|Gestione riavvio chiede all'utente di ripristinare i file salvati in modo automatico dopo il riavvio dell'applicazione. La classe `CDataRecoveryHandler` esegue una query sull'utente.|
|-AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE|Unione di AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_SUPPORT_RECOVER e AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES.|
|-AFX_RESTART_MANAGER_SUPPORT_ALL_ASPECTS|Unione di AFX_RESTART_MANAGER_SUPPORT_NO_AUTOSAVE, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|-AFX_RESTART_MANAGER_SUPPORT_RESTART_ASPECTS|Unione di AFX_RESTART_MANAGER_SUPPORT_RESTART, AFX_RESTART_MANAGER_AUTOSAVE_AT_RESTART, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|
|-AFX_RESTART_MANAGER_SUPPORT_RECOVERY_ASPECTS|Unione ofAFX_RESTART_MANAGER_SUPPORT_RECOVERY, AFX_RESTART_MANAGER_AUTOSAVE_AT_INTERVAL, AFX_RESTART_MANAGER_REOPEN_PREVIOUS_FILES e AFX_RESTART_MANAGER_RESTORE_AUTOSAVED_FILES.|

##  <a name="m_ehelptype"></a>CWinApp:: m_eHelpType

Il tipo di questo membro dati è il tipo enumerato AFX_HELP_TYPE, definito all'interno della classe `CWinApp`.

```
AFX_HELP_TYPE m_eHelpType;
```

### <a name="remarks"></a>Osservazioni

L'enumerazione AFX_HELP_TYPE viene definita nel modo seguente:

```
enum AFX_HELP_TYPE {
    afxWinHelp = 0,
    afxHTMLHelp = 1
    };
```

- Per impostare la guida dell'applicazione sulla Guida HTML, chiamare [SetHelpMode](#sethelpmode) e specificare `afxHTMLHelp`.

- Per impostare la guida dell'applicazione su WinHelp, chiamare `SetHelpMode` e specificare `afxWinHelp`.

##  <a name="m_hinstance"></a>CWinApp:: m_hInstance

Corrisponde al parametro *HINSTANCE* passato da Windows a `WinMain`.

```
HINSTANCE m_hInstance;
```

### <a name="remarks"></a>Osservazioni

Il membro dati `m_hInstance` è un handle per l'istanza corrente dell'applicazione eseguita in Windows. Questa operazione viene restituita dalla funzione globale [AfxGetInstanceHandle](application-information-and-management.md#afxgetinstancehandle). `m_hInstance` è una variabile pubblica di tipo HINSTANCE.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#55](../../mfc/reference/codesnippet/cpp/cwinapp-class_15.cpp)]

##  <a name="m_lpcmdline"></a>CWinApp:: m_lpCmdLine

Corrisponde al parametro *lpCmdLine* passato da Windows a `WinMain`.

```
LPTSTR m_lpCmdLine;
```

### <a name="remarks"></a>Osservazioni

Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione. Usare `m_lpCmdLine` per accedere agli argomenti della riga di comando immessi dall'utente all'avvio dell'applicazione. `m_lpCmdLine` è una variabile pubblica di tipo LPTSTR.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

##  <a name="m_nautosaveinterval"></a>CWinApp:: m_nAutosaveInterval

Intervallo di tempo in millisecondi tra i salvataggio automatico.

```
int m_nAutosaveInterval;
```

### <a name="remarks"></a>Osservazioni

È possibile configurare Gestione riavvio per salvare automaticamente i documenti aperti a intervalli prestabiliti. Se l'applicazione non salva i file in automatico, questo parametro non ha alcun effetto.

##  <a name="m_ncmdshow"></a>CWinApp:: m_nCmdShow

Corrisponde al parametro *nCmdShow* passato da Windows a `WinMain`.

```
int m_nCmdShow;
```

### <a name="remarks"></a>Osservazioni

È necessario passare `m_nCmdShow` come argomento quando si chiama [CWnd:: ShowWindow](../../mfc/reference/cwnd-class.md#showwindow) per la finestra principale dell'applicazione. `m_nCmdShow` è una variabile pubblica di tipo **int**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#56](../../mfc/reference/codesnippet/cpp/cwinapp-class_17.cpp)]

##  <a name="m_pactivewnd"></a>CWinApp:: m_pActiveWnd

Utilizzare questo membro dati per archiviare un puntatore alla finestra principale dell'applicazione contenitore OLE in cui è attivata l'applicazione OLE Server.

### <a name="remarks"></a>Osservazioni

Se il membro dati è NULL, l'applicazione non è attiva sul posto.

Il Framework imposta questa variabile membro quando la finestra cornice viene attivata sul posto da un'applicazione contenitore OLE.

##  <a name="m_pdatarecoveryhandler"></a>CWinApp:: m_pDataRecoveryHandler

Puntatore al gestore di recupero dati per l'applicazione.

```
CDataRecoveryHandler* m_pDataRecoveryHandler;
```

### <a name="remarks"></a>Osservazioni

Il gestore del recupero dati di un'applicazione monitora i documenti aperti e li salva in modo automatico. Il Framework usa il gestore per il ripristino dei dati per ripristinare i file salvati in modo automatico quando un'applicazione viene riavviata dopo la chiusura imprevista. Per ulteriori informazioni, vedere la [classe CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md).

##  <a name="m_pszappname"></a>CWinApp:: m_pszAppName

Specifica il nome dell'applicazione.

```
LPCTSTR m_pszAppName;
```

### <a name="remarks"></a>Osservazioni

Il nome dell'applicazione può provenire dal parametro passato al costruttore [CWinApp](#cwinapp) o, se non specificato, alla stringa di risorsa con l'ID AFX_IDS_APP_TITLE. Se il nome dell'applicazione non è presente nella risorsa, deriva dal programma. Nome file EXE.

Restituito dalla funzione globale [AfxGetAppName](application-information-and-management.md#afxgetappname). `m_pszAppName` è una variabile pubblica di tipo **const char** <strong>\*</strong>.

> [!NOTE]
> Se si assegna un valore a `m_pszAppName`, deve essere allocato in modo dinamico nell'heap. Il distruttore `CWinApp` chiama **Free**() con questo puntatore. Si desidera utilizzare la funzione della libreria di runtime `_tcsdup`() per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#57](../../mfc/reference/codesnippet/cpp/cwinapp-class_18.cpp)]

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#65](../../mfc/reference/codesnippet/cpp/cwinapp-class_19.cpp)]

##  <a name="m_pszexename"></a>CWinApp:: m_pszExeName

Contiene il nome del file eseguibile dell'applicazione senza estensione.

```
LPCTSTR m_pszExeName;
```

### <a name="remarks"></a>Osservazioni

Diversamente da [m_pszAppName](#m_pszappname), questo nome non può contenere spazi vuoti. `m_pszExeName` è una variabile pubblica di tipo **const char** <strong>\*</strong>.

> [!NOTE]
> Se si assegna un valore a `m_pszExeName`, deve essere allocato in modo dinamico nell'heap. Il distruttore `CWinApp` chiama **Free**() con questo puntatore. Si desidera utilizzare la funzione della libreria di runtime `_tcsdup`() per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#58](../../mfc/reference/codesnippet/cpp/cwinapp-class_20.cpp)]

##  <a name="m_pszhelpfilepath"></a>CWinApp:: m_pszHelpFilePath

Contiene il percorso del file della Guida dell'applicazione.

```
LPCTSTR m_pszHelpFilePath;
```

### <a name="remarks"></a>Osservazioni

Per impostazione predefinita, il Framework inizializza `m_pszHelpFilePath` al nome dell'applicazione con ". HLP "accodato. Per modificare il nome del file della guida, impostare `m_pszHelpFilePath` in modo che punti a una stringa che contiene il nome completo del file della Guida desiderato. Una posizione comoda per eseguire questa operazione è la funzione [InitInstance](#initinstance) dell'applicazione. `m_pszHelpFilePath` è una variabile pubblica di tipo **const char** <strong>\*</strong>.

> [!NOTE]
> Se si assegna un valore a `m_pszHelpFilePath`, deve essere allocato in modo dinamico nell'heap. Il distruttore `CWinApp` chiama **Free**() con questo puntatore. Si desidera utilizzare la funzione della libreria di runtime `_tcsdup`() per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#59](../../mfc/reference/codesnippet/cpp/cwinapp-class_21.cpp)]

##  <a name="m_pszprofilename"></a>CWinApp:: m_pszProfileName

Contiene il nome dell'applicazione. File INI.

```
LPCTSTR m_pszProfileName;
```

### <a name="remarks"></a>Osservazioni

`m_pszProfileName` è una variabile pubblica di tipo **const char** <strong>\*</strong>.

> [!NOTE]
> Se si assegna un valore a `m_pszProfileName`, deve essere allocato in modo dinamico nell'heap. Il distruttore `CWinApp` chiama **Free**() con questo puntatore. Si desidera utilizzare la funzione della libreria di runtime `_tcsdup`() per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#60](../../mfc/reference/codesnippet/cpp/cwinapp-class_22.cpp)]

##  <a name="m_pszregistrykey"></a>CWinApp:: m_pszRegistryKey

Utilizzato per determinare la posizione in cui vengono archiviate le impostazioni del profilo dell'applicazione nel registro di sistema o nel file INI.

```
LPCTSTR m_pszRegistryKey;
```

### <a name="remarks"></a>Osservazioni

In genere, questo membro dati viene considerato di sola lettura.

- Il valore viene archiviato in una chiave del registro di sistema. Il nome dell'impostazione del profilo dell'applicazione viene aggiunto alla chiave del registro di sistema seguente: HKEY_CURRENT_USER/Software/LocalAppWizard-Generated/.

Se si assegna un valore a `m_pszRegistryKey`, deve essere allocato in modo dinamico nell'heap. Il distruttore `CWinApp` chiama **Free**() con questo puntatore. Si desidera utilizzare la funzione della libreria di runtime `_tcsdup`() per eseguire l'allocazione. Inoltre, liberare la memoria associata al puntatore corrente prima di assegnare un nuovo valore. Ad esempio:

[!code-cpp[NVC_MFCWindowing#61](../../mfc/reference/codesnippet/cpp/cwinapp-class_23.cpp)]

##  <a name="m_pszappid"></a>CWinApp:: m_pszAppID

ID modello utente applicazione.

```
LPCTSTR m_pszAppID;
```

### <a name="remarks"></a>Osservazioni

##  <a name="oncontexthelp"></a>CWinApp:: OnContextHelp

Gestisce la Guida di MAIUSC + F1 all'interno dell'applicazione.

```
afx_msg void OnContextHelp();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_CONTEXT_HELP, OnContextHelp )` alla mappa messaggi della classe `CWinApp` e aggiungere anche una voce della tabella di tasti di scelta rapida, in genere SHIFT + F1, per abilitare questa funzione membro.

`OnContextHelp` inserisce l'applicazione in modalità guida. Il cursore assume la forma di una freccia e un punto interrogativo e l'utente può quindi spostare il puntatore del mouse e premere il pulsante sinistro del mouse per selezionare una finestra di dialogo, una finestra, un menu o un pulsante di comando. Questa funzione membro recupera il contesto della Guida dell'oggetto sotto il cursore e chiama la funzione di Windows WinHelp con tale contesto della guida.

##  <a name="onddecommand"></a>CWinApp:: OnDDECommand

Chiamata eseguita dal framework quando la finestra cornice principale riceve un messaggio di esecuzione DDE.

```
virtual BOOL OnDDECommand(LPTSTR lpszCommand);
```

### <a name="parameters"></a>Parametri

*lpszCommand*<br/>
Punta a una stringa di comando DDE ricevuta dall'applicazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando è gestito; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita controlla se il comando è una richiesta di apertura di un documento e, in caso affermativo, apre il documento specificato. Il gestore di file di Windows in genere invia tali stringhe di comando DDE quando l'utente fa doppio clic su un file di dati. Eseguire l'override di questa funzione per gestire altri comandi Execute DDE, ad esempio il comando da stampare.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#48](../../mfc/reference/codesnippet/cpp/cwinapp-class_24.cpp)]

##  <a name="onfilenew"></a>CWinApp:: OnFileNew

Implementa il comando ID_FILE_NEW.

```
afx_msg void OnFileNew();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_FILE_NEW, OnFileNew )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando file nuovo.

Vedere la [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md) per informazioni sul comportamento predefinito e istruzioni su come eseguire l'override di questa funzione membro.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

##  <a name="onfileopen"></a>CWinApp:: OnFileOpen

Implementa il comando ID_FILE_OPEN.

```
afx_msg void OnFileOpen();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_FILE_OPEN, OnFileOpen )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando file Apri.

Per informazioni sul comportamento predefinito e istruzioni su come eseguire l'override di questa funzione membro, vedere la [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

##  <a name="onfileprintsetup"></a>CWinApp:: OnFilePrintSetup

Implementa il comando ID_FILE_PRINT_SETUP.

```
afx_msg void OnFilePrintSetup();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_FILE_PRINT_SETUP, OnFilePrintSetup )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, questa funzione gestisce l'esecuzione del comando di stampa del file.

Per informazioni sul comportamento predefinito e istruzioni su come eseguire l'override di questa funzione membro, vedere la [Nota tecnica 22](../../mfc/tn022-standard-commands-implementation.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#49](../../mfc/reference/codesnippet/cpp/cwinapp-class_25.cpp)]

[!code-cpp[NVC_MFCWindowing#50](../../mfc/reference/codesnippet/cpp/cwinapp-class_26.cpp)]

##  <a name="onhelp"></a>CWinApp:: OnHelp

Gestisce F1 Guida all'interno dell'applicazione (usando il contesto corrente).

```
afx_msg void OnHelp();
```

### <a name="remarks"></a>Osservazioni

Viene in genere aggiunta anche una voce di tasto di scelta rapida per il tasto F1. L'abilitazione del tasto F1 è solo una convenzione, non un requisito.

È necessario aggiungere un'istruzione `ON_COMMAND( ID_HELP, OnHelp )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, chiamata dal framework quando l'utente preme il tasto F1.

L'implementazione predefinita di questa funzione del gestore di messaggi determina il contesto della guida che corrisponde alla finestra corrente, alla finestra di dialogo o alla voce di menu, quindi chiama WINHELP. EXE. Se non è attualmente disponibile alcun contesto, la funzione utilizza il contesto predefinito.

Eseguire l'override di questa funzione membro per impostare il contesto della guida su un valore diverso dalla finestra, dalla finestra di dialogo, dalla voce di menu o dal pulsante della barra degli strumenti che attualmente ha lo stato attivo. Chiamare `WinHelp` con l'ID del contesto della Guida desiderato.

##  <a name="onhelpfinder"></a>CWinApp:: OnHelpFinder

Gestisce i comandi ID_HELP_FINDER e ID_DEFAULT_HELP.

```
afx_msg void OnHelpFinder();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_HELP_FINDER, OnHelpFinder )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, il Framework chiama questa funzione del gestore di messaggi quando l'utente dell'applicazione seleziona il comando Help Finder per richiamare `WinHelp` con l'argomento **HELP_FINDER** standard.

##  <a name="onhelpindex"></a>CWinApp:: OnHelpIndex

Gestisce il comando ID_HELP_INDEX e fornisce un argomento della Guida predefinito.

```
afx_msg void OnHelpIndex();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_HELP_INDEX, OnHelpIndex )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Se abilitata, il Framework chiama questa funzione del gestore di messaggi quando l'utente dell'applicazione seleziona il comando help index per richiamare `WinHelp` con l'argomento **HELP_INDEX** standard.

##  <a name="onhelpusing"></a>CWinApp:: OnHelpUsing

Gestisce il comando ID_HELP_USING.

```
afx_msg void OnHelpUsing();
```

### <a name="remarks"></a>Osservazioni

È necessario aggiungere un'istruzione `ON_COMMAND( ID_HELP_USING, OnHelpUsing )` alla mappa messaggi della classe `CWinApp` per abilitare questa funzione membro. Il Framework chiama questa funzione del gestore di messaggi quando l'utente dell'applicazione seleziona la guida utilizzando il comando per richiamare l'applicazione `WinHelp` con l'argomento **HELP_HELPONHELP** standard.

##  <a name="onidle"></a>CWinApp:: OnIdle

Eseguire l'override di questa funzione membro per eseguire l'elaborazione del tempo di inattività.

```
virtual BOOL OnIdle(LONG lCount);
```

### <a name="parameters"></a>Parametri

*lCount*<br/>
Un contatore viene incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi dell'applicazione è vuota. Questo conteggio viene reimpostato su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile utilizzare il parametro *lCount* per determinare la durata relativa del periodo di inattività dell'applicazione senza elaborare un messaggio.

### <a name="return-value"></a>Valore restituito

Diverso da zero per ricevere più tempo di elaborazione inattivo; 0 se non è necessario più tempo di inattività.

### <a name="remarks"></a>Osservazioni

`OnIdle` viene chiamato nel ciclo di messaggi predefinito quando la coda di messaggi dell'applicazione è vuota. Usare la sostituzione per chiamare le attività del gestore inattivo in background.

`OnIdle` deve restituire 0 per indicare che non è richiesto alcun tempo di elaborazione inattivo. Il parametro *lCount* viene incrementato ogni volta che `OnIdle` viene chiamato quando la coda di messaggi è vuota e viene reimpostata su 0 ogni volta che viene elaborato un nuovo messaggio. È possibile chiamare le diverse routine inattive in base a questo conteggio.

Nell'esempio seguente viene riepilogata l'elaborazione del ciclo inattivo:

1. Se il ciclo di messaggi nel libreria Microsoft Foundation Class controlla la coda di messaggi e non trova alcun messaggio in sospeso, chiama `OnIdle` per l'oggetto applicazione e fornisce 0 come argomento *lCount* .

2. `OnIdle` esegue un'elaborazione e restituisce un valore diverso da zero per indicare che deve essere chiamato di nuovo per eseguire un'ulteriore elaborazione.

3. Il ciclo di messaggi verifica nuovamente la coda dei messaggi. Se nessun messaggio è in sospeso, chiama di nuovo `OnIdle`, incrementando l'argomento *lCount* .

4. Infine, `OnIdle` termina l'elaborazione di tutte le attività inattive e restituisce 0. In questo modo si indica al ciclo di messaggi di arrestare la chiamata di `OnIdle` fino a quando non viene ricevuto il messaggio successivo dalla coda di messaggi, a quel punto il ciclo inattivo viene riavviato con l'argomento impostato su 0.

Non eseguire attività lunghe durante `OnIdle` perché l'applicazione non è in grado di elaborare l'input dell'utente finché `OnIdle` non restituisce.

> [!NOTE]
> L'implementazione predefinita di `OnIdle` aggiorna gli oggetti dell'interfaccia utente del comando, ad esempio voci di menu e pulsanti della barra degli strumenti, ed esegue la pulizia interna della struttura dei dati. Se pertanto si esegue l'override di `OnIdle`, è necessario chiamare `CWinApp::OnIdle` con il `lCount` nella versione sottoposta a override. Chiamare prima di tutto l'elaborazione inattiva della classe di base, ovvero fino a quando la classe di base `OnIdle` restituisce 0. Se è necessario eseguire il lavoro prima del completamento dell'elaborazione della classe di base, esaminare l'implementazione della classe di base per selezionare il *lCount* appropriato durante il quale eseguire il lavoro.

Se non si desidera che `OnIdle` venga chiamato ogni volta che un messaggio viene recuperato dalla coda di messaggi, è possibile eseguire l'override di [CWinThreadIsIdleMessage](../../mfc/reference/cwinthread-class.md#isidlemessage). Se un'applicazione ha impostato un timer molto breve o se il sistema sta inviando il messaggio di WM_SYSTIMER, `OnIdle` verrà chiamato ripetutamente e diminuirà le prestazioni.

### <a name="example"></a>Esempio

Nei due esempi seguenti viene illustrato come utilizzare `OnIdle`. Il primo esempio elabora due attività inattive usando l'argomento *lCount* per definire la priorità delle attività. La prima attività è con priorità alta ed è consigliabile farlo quando possibile. La seconda attività è meno importante e deve essere eseguita solo quando si verifica una pausa lungo nell'input dell'utente. Si noti la chiamata alla versione della classe base di `OnIdle`. Il secondo esempio gestisce un gruppo di attività inattive con priorità diverse.

[!code-cpp[NVC_MFCWindowing#51](../../mfc/reference/codesnippet/cpp/cwinapp-class_27.cpp)]

##  <a name="opendocumentfile"></a>CWinApp:: OpenDocumentFile

Il Framework chiama questo metodo per aprire il file [CDocument](../../mfc/reference/cdocument-class.md) denominato per l'applicazione.

```
virtual CDocument* OpenDocumentFile(
    LPCTSTR lpszFileName
    BOOL bAddToMRU = TRUE);
```

### <a name="parameters"></a>Parametri

*lpszFileName*<br/>
in Nome del file da aprire.

*bAddToMRU*<br/>
in TRUE indica che il documento è uno dei file più recenti. FALSE indica che il documento non è uno dei file più recenti.

### <a name="return-value"></a>Valore restituito

Puntatore a un `CDocument` in caso di esito positivo; in caso contrario, NULL.

### <a name="remarks"></a>Osservazioni

Se un documento con tale nome è già aperto, la prima finestra cornice che contiene tale documento otterrà lo stato attivo. Se un'applicazione supporta più modelli di documento, il Framework usa l'estensione del nome file per trovare il modello di documento appropriato per provare a caricare il documento. Se l'operazione riesce, il modello di documento crea una finestra cornice e una visualizzazione per il documento.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#52](../../mfc/reference/codesnippet/cpp/cwinapp-class_16.cpp)]

##  <a name="parsecommandline"></a>CWinApp::P arseCommandLine

Chiamare questa funzione membro per analizzare la riga di comando e inviare i parametri, uno alla volta, a [CCommandLineInfo::P arseparam](../../mfc/reference/ccommandlineinfo-class.md#parseparam).

```
void ParseCommandLine(CCommandLineInfo& rCmdInfo);
```

### <a name="parameters"></a>Parametri

*rCmdInfo*<br/>
Riferimento a un oggetto [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) .

### <a name="remarks"></a>Osservazioni

Quando si avvia un nuovo progetto MFC utilizzando la creazione guidata applicazione, la creazione guidata applicazione creerà un'istanza locale di `CCommandLineInfo`, quindi chiamerà `ProcessShellCommand` e `ParseCommandLine` nella funzione membro [InitInstance](#initinstance) . Una riga di comando segue la route descritta di seguito:

1. Dopo essere stato creato in `InitInstance`, l'oggetto `CCommandLineInfo` viene passato al `ParseCommandLine`.

2. `ParseCommandLine` chiama quindi `CCommandLineInfo::ParseParam` ripetutamente, una volta per ogni parametro.

3. `ParseParam` riempie l'oggetto `CCommandLineInfo`, che viene quindi passato a [ProcessShellCommand](#processshellcommand).

4. `ProcessShellCommand` gestisce gli argomenti e i flag della riga di comando.

Si noti che è possibile chiamare `ParseCommandLine` direttamente in base alle esigenze.

Per una descrizione dei flag della riga di comando, vedere [CCommandLineInfo:: m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand).

##  <a name="pretranslatemessage"></a>CWinApp::P reTranslateMessage

Eseguire l'override di questa funzione per filtrare i messaggi della finestra prima che vengano inviati alle funzioni di Windows [TranslateMessage](/windows/win32/api/winuser/nf-winuser-translatemessage) e [DispatchMessage](/windows/win32/api/winuser/nf-winuser-dispatchmessage) l'implementazione predefinita esegue la conversione del tasto di scelta rapida, quindi è necessario chiamare la funzione membro `CWinApp::PreTranslateMessage` nella versione sottoposta a override.

```
virtual BOOL PreTranslateMessage(MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*pMsg*<br/>
Puntatore a una struttura [msg](/windows/win32/api/winuser/ns-winuser-msg) che contiene il messaggio da elaborare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato elaborato completamente in `PreTranslateMessage` e non deve essere ulteriormente elaborato. Zero se il messaggio deve essere elaborato in modo normale.

##  <a name="processmessagefilter"></a>CWinApp::P rocessMessageFilter

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
Puntatore a un truttura di [messaggi](/windows/win32/api/winuser/ns-winuser-msg)di Windows.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Una funzione hook elabora gli eventi prima che vengano inviati all'elaborazione normale dei messaggi dell'applicazione.

Se si sostituisce questa funzionalità avanzata, assicurarsi di chiamare la versione della classe base per gestire l'elaborazione dell'hook del Framework.

##  <a name="processshellcommand"></a>CWinApp::P rocessShellCommand

Questa funzione membro viene chiamata da [InitInstance](#initinstance) per accettare i parametri passati dall'oggetto `CCommandLineInfo` identificato da *rCmdInfo*ed eseguire l'azione indicata.

```
BOOL ProcessShellCommand(CCommandLineInfo& rCmdInfo);
```

### <a name="parameters"></a>Parametri

*rCmdInfo*<br/>
Riferimento a un oggetto [CCommandLineInfo](../../mfc/reference/ccommandlineinfo-class.md) .

### <a name="return-value"></a>Valore restituito

Diverso da zero se il comando della shell viene elaborato correttamente. Se è 0, restituisce FALSE da [InitInstance](#initinstance).

### <a name="remarks"></a>Osservazioni

Quando si avvia un nuovo progetto MFC utilizzando la creazione guidata applicazione, la creazione guidata applicazione creerà un'istanza locale di `CCommandLineInfo`, quindi chiamerà `ProcessShellCommand` e [ParseCommandLine](#parsecommandline) nella funzione membro `InitInstance`. Una riga di comando segue la route descritta di seguito:

1. Dopo essere stato creato in `InitInstance`, l'oggetto `CCommandLineInfo` viene passato al `ParseCommandLine`.

2. `ParseCommandLine` chiama quindi [CCommandLineInfo::P arseparam](../../mfc/reference/ccommandlineinfo-class.md#parseparam) ripetutamente, una volta per ogni parametro.

3. `ParseParam` riempie l'oggetto `CCommandLineInfo`, che viene quindi passato al `ProcessShellCommand`.

4. `ProcessShellCommand` gestisce gli argomenti e i flag della riga di comando.

I membri dati dell'oggetto `CCommandLineInfo`, identificati da [CCommandLineInfo:: m_nShellCommand](../../mfc/reference/ccommandlineinfo-class.md#m_nshellcommand), sono del tipo enumerato seguente, definito all'interno della classe `CCommandLineInfo`.

```
enum {
    FileNew,
    FileOpen,
    FilePrint,
    FilePrintTo,
    FileDDE
    };
```

Per una breve descrizione di ognuno di questi valori, vedere `CCommandLineInfo::m_nShellCommand`.

##  <a name="processwndprocexception"></a>CWinApp::P rocessWndProcException

Il Framework chiama questa funzione membro ogni volta che il gestore non rileva un'eccezione generata in uno dei gestori di comandi o messaggi dell'applicazione.

```
virtual LRESULT ProcessWndProcException(
    CException* e,
    const MSG* pMsg);
```

### <a name="parameters"></a>Parametri

*e*<br/>
Puntatore a un'eccezione non rilevata.

*pMsg*<br/>
Truttura [msg](/windows/win32/api/winuser/ns-winuser-msg)che contiene informazioni sul messaggio di Windows che ha causato la generazione di un'eccezione da parte del Framework.

### <a name="return-value"></a>Valore restituito

Valore che deve essere restituito a Windows. Si tratta in genere di 0L per i messaggi di Windows, 1L (TRUE) per i messaggi di comando.

### <a name="remarks"></a>Osservazioni

Non chiamare direttamente questa funzione membro.

L'implementazione predefinita di questa funzione membro crea una finestra di messaggio. Se l'eccezione non rilevata ha origine con un menu, una barra degli strumenti o un errore del comando Accelerator, nella finestra di messaggio viene visualizzato il messaggio "comando non riuscito"; in caso contrario, viene visualizzato il messaggio "errore interno dell'applicazione".

Eseguire l'override di questa funzione membro per fornire la gestione globale delle eccezioni. Chiamare la funzionalità di base solo se si desidera che venga visualizzata la finestra di messaggio.

##  <a name="register"></a>CWinApp:: Register

Esegue tutte le attività di registrazione non gestite dal `RegisterShellFileTypes`.

```
virtual BOOL Register();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita restituisce semplicemente TRUE. Eseguire l'override di questa funzione per fornire eventuali passaggi di registrazione personalizzati.

##  <a name="registershellfiletypes"></a>CWinApp:: RegisterShellFileTypes

Chiamare questa funzione membro per registrare tutti i tipi di documento dell'applicazione con gestione file di Windows.

```
void RegisterShellFileTypes(BOOL bCompat = FALSE);
```

### <a name="parameters"></a>Parametri

*bCompat*<br/>
in TRUE aggiunge le voci di registrazione per i comandi della shell stampa e stampa in, consentendo a un utente di stampare i file direttamente dalla Shell oppure trascinando il file in un oggetto Printer. Viene inoltre aggiunta una chiave DefaultIcon. Per impostazione predefinita, questo parametro è FALSE per la compatibilità con le versioni precedenti.

### <a name="remarks"></a>Osservazioni

Ciò consente all'utente di aprire un file di dati creato dall'applicazione facendo doppio clic su di esso in gestione file. Chiamare `RegisterShellFileTypes` dopo aver chiamato [AddDocTemplate](#adddoctemplate) per ogni modello di documento nell'applicazione. Chiamare anche la funzione membro [EnableShellOpen](#enableshellopen) quando si chiama `RegisterShellFileTypes`.

`RegisterShellFileTypes` scorre l'elenco di oggetti [CDocTemplate](../../mfc/reference/cdoctemplate-class.md) gestiti dall'applicazione e, per ogni modello di documento, aggiunge voci al database di registrazione che Windows gestisce per le associazioni di file. Il file Manager usa queste voci per aprire un file di dati quando l'utente fa doppio clic su di esso. In questo modo si elimina la necessità di spedire un. File REG con l'applicazione.

> [!NOTE]
> `RegisterShellFileTypes` funziona solo se l'utente esegue il programma con diritti di amministratore. Se il programma non dispone di diritti di amministratore, non può modificare le chiavi del registro di sistema.

Se il database di registrazione associa già un'estensione di file specificata a un altro tipo di file, non viene creata alcuna nuova associazione. Per la registrazione di queste informazioni, vedere la classe `CDocTemplate` per il formato delle stringhe necessarie.

##  <a name="registerwithrestartmanager"></a>CWinApp:: RegisterWithRestartManager

Registra l'applicazione con Gestione riavvio.

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
|*bRegisterRecoveryCallback*|in TRUE indica che questa istanza dell'applicazione utilizza una funzione di callback di ripristino. FALSE indica che non lo è. Il Framework chiama la funzione di callback di ripristino quando l'applicazione viene chiusa in modo imprevisto. Per ulteriori informazioni, vedere [CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback).|
|*strRestartIdentifier*|in Stringa univoca che identifica questa istanza della gestione riavvio. L'identificatore di gestione riavvio è univoco per ogni istanza di un'applicazione.|
|*pwzCommandLineArgs*|in Stringa che contiene argomenti aggiuntivi dalla riga di comando.|
|*dwRestartFlags*|in Flag facoltativi per Gestione riavvio. Per altre informazioni, vedere la sezione Osservazioni.|
|*pRecoveryCallback*|in Funzione di callback di ripristino. Questa funzione deve prendere un parametro LPVOID come input e restituire un valore DWORD. La funzione di callback di recupero predefinita è `CWinApp::ApplicationRecoveryCallback`.|
|*lpvParam*|in Parametro di input per la funzione di callback di ripristino. Per ulteriori informazioni, vedere [CWinApp:: ApplicationRecoveryCallback](#applicationrecoverycallback).|
|*dwPingInterval*|in Periodo di attesa del gestore di riavvio per la restituzione della funzione di callback di ripristino. Questo parametro è in millisecondi.|
|*dwCallbackFlags*|in Flag passati alla funzione di callback di ripristino. Riservato per utilizzi futuri.|

### <a name="return-value"></a>Valore restituito

S_OK se il metodo ha esito positivo; in caso contrario, un codice di errore.

### <a name="remarks"></a>Osservazioni

Se l'applicazione usa l'implementazione MFC predefinita per il salvataggio automatico dei file, è necessario usare la versione semplice di `RegisterWithRestartManager`. Utilizzare la versione complessa di `RegisterWithRestartManager` se si desidera personalizzare il comportamento di salvataggio automatico dell'applicazione.

Se si chiama questo metodo con una stringa vuota per *strRestartIdentifier*, `RegisterWithRestartManager` crea una stringa identificatore univoco per questa istanza della gestione riavvio.

Quando un'applicazione viene chiusa in modo imprevisto, la gestione riavvio riavvia l'applicazione dalla riga di comando e fornisce l'identificatore di riavvio univoco come argomento facoltativo. In questo scenario, il Framework chiama `RegisterWithRestartManager` due volte. La prima chiamata deriva da [CWinApp:: InitInstance](#initinstance) con una stringa vuota per l'identificatore di stringa. Quindi, il metodo [CWinApp::P rocessshellcommand](#processshellcommand) chiama `RegisterWithRestartManager` con l'identificatore di riavvio univoco.

Dopo aver registrato un'applicazione con Gestione riavvio, gestione riavvio esegue il monitoraggio dell'applicazione. Se l'applicazione viene chiusa in modo imprevisto, gestione riavvio chiama la funzione di callback di ripristino durante il processo di arresto. Gestione riavvio attende *dwPingInterval* per una risposta dalla funzione di callback di ripristino. Se la funzione di callback di ripristino non risponde entro questo intervallo di tempo, l'applicazione viene chiusa senza eseguire la funzione di callback di ripristino.

Per impostazione predefinita, i dwRestartFlags non sono supportati, ma vengono forniti per un uso futuro. I valori possibili per *dwRestartFlags* sono i seguenti:

- RESTART_NO_CRASH

- RESTART_NO_HANG

- RESTART_NO_PATCH

- RESTART_NO_REBOOT

##  <a name="reopenpreviousfilesatrestart"></a>CWinApp:: ReopenPreviousFilesAtRestart

Determina se Gestione riavvio riapre i file che sono stati aperti quando l'applicazione è stata chiusa in modo imprevisto.

```
virtual BOOL ReopenPreviousFilesAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che Gestione riavvio riapre i file aperti in precedenza; FALSE indica che Gestione riavvio non lo è.

##  <a name="restartinstance"></a>CWinApp:: RestartInstance

Gestisce il riavvio di un'applicazione avviato da Gestione riavvio.

```
virtual BOOL CWinApp::RestartInstance();
```

### <a name="return-value"></a>Valore restituito

TRUE se il gestore di recupero dati apre documenti aperti in precedenza; FALSE se il gestore di recupero dati contiene un errore o se non sono presenti documenti aperti in precedenza.

### <a name="remarks"></a>Osservazioni

Quando Gestione riavvio riavvia un'applicazione, il Framework chiama questo metodo. Questo metodo recupera il gestore di recupero dati e ripristina i file salvati in modo automatico. Questo metodo chiama [CDataRecoveryHandler:: RestoreAutosavedDocuments](../../mfc/reference/cdatarecoveryhandler-class.md#restoreautosaveddocuments) per determinare se l'utente vuole ripristinare i file salvati in modo automatico.

Questo metodo restituisce FALSE se [CDataRecoveryHandler](../../mfc/reference/cdatarecoveryhandler-class.md) determina che non sono presenti documenti aperti. Se non sono presenti documenti aperti, l'applicazione viene avviata normalmente.

##  <a name="restoreautosavedfilesatrestart"></a>CWinApp:: RestoreAutosavedFilesAtRestart

Determina se la gestione riavvio ripristina i file salvati in automatico quando riavvia l'applicazione.

```
virtual BOOL RestoreAutosavedFilesAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che la gestione riavvio ripristina i file salvati in automatico; FALSE indica che Gestione riavvio non lo è.

##  <a name="run"></a>CWinApp:: Run

Fornisce un ciclo di messaggi predefinito.

```
virtual int Run();
```

### <a name="return-value"></a>Valore restituito

Valore **int** restituito da `WinMain`.

### <a name="remarks"></a>Osservazioni

`Run` acquisisce e invia messaggi di Windows fino a quando l'applicazione non riceve un messaggio di WM_QUIT. Se nella coda di messaggi dell'applicazione non sono attualmente presenti messaggi, `Run` chiama [OnIdle](#onidle) per eseguire l'elaborazione del tempo di inattività. I messaggi in arrivo passano alla funzione membro [PreTranslateMessage](#pretranslatemessage) per un'elaborazione speciale, quindi alla funzione di Windows `TranslateMessage` per la traduzione della tastiera standard; Infine, viene chiamata la funzione `DispatchMessage` Windows.

`Run` raramente viene ignorato, ma è possibile eseguirne l'override per fornire un comportamento speciale.

##  <a name="runautomated"></a>CWinApp:: RunAutomated

Chiamare questa funzione per determinare se è presente l'opzione " **/Automation**" o " **-Automation**", che indica se l'applicazione server è stata avviata da un'applicazione client.

```
BOOL RunAutomated();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata trovata l'opzione. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni sull'automazione OLE, vedere l'articolo [server di automazione](../../mfc/automation-servers.md).

##  <a name="runembedded"></a>CWinApp:: RunEmbedded

Chiamare questa funzione per determinare se è presente l'opzione " **l'opzione/Embedding**" o " **-Embedding**", che indica se l'applicazione server è stata avviata da un'applicazione client.

```
BOOL RunEmbedded();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è stata trovata l'opzione. in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

Se presente, l'opzione viene rimossa dalla riga di comando. Per ulteriori informazioni sull'incorporamento, vedere l'articolo [Server: implementazione di un server](../../mfc/servers-implementing-a-server.md).

##  <a name="saveallmodified"></a>CWinApp:: SaveAllModified

Chiamata eseguita dal Framework per salvare tutti i documenti quando la finestra cornice principale dell'applicazione deve essere chiusa o tramite un messaggio di WM_QUERYENDSESSION.

```
virtual BOOL SaveAllModified();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se è sicuro terminare l'applicazione; 0 se non è sicuro per terminare l'applicazione.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di questa funzione membro chiama la funzione membro [CDocument:: SaveModified](../../mfc/reference/cdocument-class.md#savemodified) a sua volta per tutti i documenti modificati all'interno dell'applicazione.

##  <a name="selectprinter"></a>CWinApp:: SelectPrinter

Chiamare questa funzione membro per selezionare una stampante specifica e rilasciare la stampante selezionata in precedenza nella finestra di dialogo Stampa.

```
void SelectPrinter(
    HANDLE hDevNames,
    HANDLE hDevMode,
    BOOL bFreeOld = TRUE);
```

### <a name="parameters"></a>Parametri

*hDevNames*<br/>
Handle per un truttura [DEVNAMES](/windows/win32/api/commdlg/ns-commdlg-devnames)che identifica i nomi di driver, dispositivo e porta di output di una stampante specifica.

*hDevMode*<br/>
Handle per una struttura [DEVMODE](/windows/win32/api/wingdi/ns-wingdi-devmodea) che specifica le informazioni sull'inizializzazione del dispositivo e sull'ambiente di una stampante.

*bFreeOld*<br/>
Libera la stampante selezionata in precedenza.

### <a name="remarks"></a>Osservazioni

Se *hDevMode* e *HDEVNAMES* sono entrambi null, `SelectPrinter` utilizza la stampante predefinita corrente.

##  <a name="sethelpmode"></a>CWinApp:: SetHelpMode

Imposta il tipo di guida dell'applicazione.

```
void SetHelpMode(AFX_HELP_TYPE eHelpType);
```

### <a name="parameters"></a>Parametri

*eHelpType*<br/>
Specifica il tipo di guida da usare. Per ulteriori informazioni, vedere [CWinApp:: m_eHelpType](#m_ehelptype) .

### <a name="remarks"></a>Osservazioni

Imposta il tipo di guida dell'applicazione.

Per impostare il tipo di guida dell'applicazione su HTMLHelp, è possibile chiamare [EnableHTMLHelp](#enablehtmlhelp). Una volta chiamato `EnableHTMLHelp`, l'applicazione deve usare HTMLHelp come applicazione della guida. Se si desidera modificare per utilizzare WinHelp, è possibile chiamare `SetHelpMode` e impostare *eHelpType* su `afxWinHelp`.

##  <a name="setregistrykey"></a>CWinApp:: SetRegistryKey

Consente di archiviare le impostazioni dell'applicazione nel registro di sistema anziché nei file INI.

```
void SetRegistryKey(LPCTSTR lpszRegistryKey);
void SetRegistryKey(UINT nIDRegistryKey);
```

### <a name="parameters"></a>Parametri

*lpszRegistryKey*<br/>
Puntatore a una stringa che contiene il nome della chiave.

*nIDRegistryKey*<br/>
ID di una risorsa di stringa contenente il nome della chiave del registro di sistema.

### <a name="remarks"></a>Osservazioni

Questa funzione imposta *m_pszRegistryKey*, che viene quindi utilizzata dalle funzioni membro `GetProfileInt`, `GetProfileString`, `WriteProfileInt`e `WriteProfileString` di `CWinApp`. Se questa funzione è stata chiamata, anche l'elenco dei file usati di recente (MRU) viene archiviato nel registro di sistema. La chiave del registro di sistema è in genere il nome di una società. Viene archiviato in una chiave nel formato seguente: HKEY_CURRENT_USER \SOFTWARE\\< nome della società\>\\< nome dell'applicazione\>\\< nome della sezione\>\\< nome del valore\>.

##  <a name="supportsapplicationrecovery"></a>CWinApp:: SupportsApplicationRecovery

Determina se la gestione riavvio recupera un'applicazione che è stata chiusa in modo imprevisto.

```
virtual BOOL SupportsApplicationRecovery() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che la gestione riavvio esegue il ripristino dell'applicazione. FALSE indica che Gestione riavvio non lo è.

##  <a name="supportsautosaveatinterval"></a>CWinApp:: SupportsAutosaveAtInterval

Determina se Gestione riavvio Salva in automatico i documenti aperti a intervalli regolari.

```
virtual BOOL SupportsAutosaveAtInterval() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che la gestione riavvio Salva in automatico i documenti aperti; FALSE indica che Gestione riavvio non lo è.

##  <a name="supportsautosaveatrestart"></a>CWinApp:: SupportsAutosaveAtRestart

Determina se Gestione riavvio Salva tutti i documenti aperti quando l'applicazione viene riavviata.

```
virtual BOOL SupportsAutosaveAtRestart() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che la gestione riavvio Salva in automatico i documenti aperti al riavvio dell'applicazione. FALSE indica che Gestione riavvio non lo è.

##  <a name="supportsrestartmanager"></a>CWinApp:: SupportsRestartManager

Determina se l'applicazione supporta Gestione riavvio.

```
virtual BOOL SupportsRestartManager() const;
```

### <a name="return-value"></a>Valore restituito

TRUE indica che l'applicazione supporta Gestione riavvio. FALSE indica che l'applicazione non lo è.

##  <a name="unregister"></a>CWinApp:: Annulla registrazione

Annulla la registrazione di tutti i file registrati dall'oggetto applicazione.

```
virtual BOOL Unregister();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero in caso di esito positivo; in caso contrario, 0.

### <a name="remarks"></a>Osservazioni

La funzione `Unregister` Annulla la registrazione eseguita dall'oggetto applicazione e dalla funzione [Register](#register) . In genere, entrambe le funzioni vengono chiamate in modo implicito da MFC e pertanto non verranno visualizzate nel codice.

Eseguire l'override di questa funzione per eseguire passaggi di annullamento della registrazione personalizzati.

##  <a name="unregistershellfiletypes"></a>CWinApp:: UnregisterShellFileTypes

Chiamare questa funzione membro per annullare la registrazione di tutti i tipi di documento dell'applicazione con gestione file di Windows.

```
void UnregisterShellFileTypes();
```

##  <a name="winhelp"></a>CWinApp:: WinHelp

Chiamare questa funzione membro per richiamare l'applicazione WinHelp.

```
virtual void WinHelp(
    DWORD_PTR dwData,
    UINT nCmd = HELP_CONTEXT);
```

### <a name="parameters"></a>Parametri

*dwData*<br/>
Specifica dati aggiuntivi. Il valore utilizzato dipende dal valore del parametro *nCmd* .

*nCmd*<br/>
Specifica il tipo di Guida richiesto. Per un elenco dei valori possibili e il modo in cui influiscono sul parametro *dwData* , vedere la funzione di Windows [WinHelp](/windows/win32/api/winuser/nf-winuser-winhelpw) .

### <a name="remarks"></a>Osservazioni

Il Framework chiama anche questa funzione per richiamare l'applicazione WinHelp.

Il Framework chiude automaticamente l'applicazione WinHelp al termine dell'applicazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#53](../../mfc/reference/codesnippet/cpp/cwinapp-class_28.cpp)]

##  <a name="writeprofilebinary"></a>CWinApp:: WriteProfileBinary

Chiamare questa funzione membro per scrivere dati binari nella sezione specificata del registro di sistema dell'applicazione o. File INI.

```
BOOL WriteProfileBinary(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPBYTE pData,
    UINT nBytes);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dalla distinzione tra maiuscole e minuscole. la stringa può essere costituita da qualsiasi combinazione di lettere maiuscole e minuscole.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata.

*pData*<br/>
Punta ai dati da scrivere.

*nBytes*<br/>
Contiene il numero di byte da scrivere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

Questo esempio USA `CWinApp* pApp = AfxGetApp();` per ottenere la classe CWinApp che illustra un modo in cui è possibile usare `WriteProfileBinary` e `GetProfileBinary` da qualsiasi funzione in un'applicazione MFC.

[!code-cpp[NVC_MFCWindowing#54](../../mfc/reference/codesnippet/cpp/cwinapp-class_29.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp:: GetProfileBinary](#getprofilebinary).

##  <a name="writeprofileint"></a>CWinApp:: WriteProfileInt

Chiamare questa funzione membro per scrivere il valore specificato nella sezione specificata del registro di sistema dell'applicazione o. File INI.

```
BOOL WriteProfileInt(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    int nValue);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dalla distinzione tra maiuscole e minuscole. la stringa può essere costituita da qualsiasi combinazione di lettere maiuscole e minuscole.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata.

*nValue*<br/>
Contiene il valore da scrivere.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

Questo esempio USA `CWinApp* pApp = AfxGetApp();` per ottenere la classe CWinApp che illustra un modo in cui `WriteProfileString`, `WriteProfileInt`, `GetProfileString`e `GetProfileInt` possono essere usati da qualsiasi funzione in un'applicazione MFC.

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp:: GetProfileInt](#getprofileint).

##  <a name="writeprofilestring"></a>CWinApp:: WriteProfileString

Chiamare questa funzione membro per scrivere la stringa specificata nella sezione specificata del registro di sistema dell'applicazione o. File INI.

```
BOOL WriteProfileString(
    LPCTSTR lpszSection,
    LPCTSTR lpszEntry,
    LPCTSTR lpszValue);
```

### <a name="parameters"></a>Parametri

*lpszSection*<br/>
Punta a una stringa con terminazione null che specifica la sezione che contiene la voce. Se la sezione non esiste, viene creata. Il nome della sezione è indipendente dalla distinzione tra maiuscole e minuscole. la stringa può essere costituita da qualsiasi combinazione di lettere maiuscole e minuscole.

*lpszEntry*<br/>
Punta a una stringa con terminazione null che contiene la voce in cui deve essere scritto il valore. Se la voce non esiste nella sezione specificata, viene creata. Se questo parametro è NULL, la sezione specificata da *lpszSection* viene eliminata.

*lpszValue*<br/>
Punta alla stringa da scrivere. Se questo parametro è NULL, viene eliminata la voce specificata dal parametro *lpszEntry* .

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCWindowing#43](../../mfc/reference/codesnippet/cpp/cwinapp-class_9.cpp)]

Per un altro esempio, vedere l'esempio per [CWinApp:: GetProfileInt](#getprofileint).

##  <a name="setappid"></a>CWinApp:: seappid

Imposta in modo esplicito l'ID modello utente dell'applicazione per l'applicazione. Questo metodo deve essere chiamato prima che un'interfaccia utente venga presentata all'utente (il posto migliore è il costruttore dell'applicazione).

```
void SetAppID(LPCTSTR lpcszAppID);
```

### <a name="parameters"></a>Parametri

*lpcszAppID*<br/>
Specifica l'ID del modello utente dell'applicazione.

### <a name="remarks"></a>Osservazioni

## <a name="see-also"></a>Vedere anche

[Classe CWinThread](../../mfc/reference/cwinthread-class.md)<br/>
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)
