---
title: "CWinApp Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CWinApp"
  - "hInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "application objects [C++]"
  - "CWinApp class"
  - "HINSTANCE"
  - "main object"
ms.assetid: e426a3cd-0d15-40d6-bd55-beaa5feb2343
caps.latest.revision: 27
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 29
---
# CWinApp Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base da cui deriva un oggetto di un'applicazione Windows.  
  
## Sintassi  
  
```  
class CWinApp : public CWinThread  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::CWinApp](../Topic/CWinApp::CWinApp.md)|Costruisce un oggetto `CWinApp`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::AddDocTemplate](../Topic/CWinApp::AddDocTemplate.md)|Aggiunge un modello di documento all'elenco dell'applicazione dei modelli di documento disponibili.|  
|[CWinApp::AddToRecentFileList](../Topic/CWinApp::AddToRecentFileList.md)|Aggiunge un nome file all'elenco dei file aperti più di recente \(MRU\).|  
|[CWinApp::ApplicationRecoveryCallback](../Topic/CWinApp::ApplicationRecoveryCallback.md)|Chiamato dal framework quando la chiusura dell'applicazione in modo imprevisto.|  
|[CWinApp::CloseAllDocuments](../Topic/CWinApp::CloseAllDocuments.md)|Chiude tutti i documenti aperti.|  
|[CWinApp::CreatePrinterDC](../Topic/CWinApp::CreatePrinterDC.md)|Crea un contesto di dispositivo della stampante.|  
|[CWinApp::DelRegTree](../Topic/CWinApp::DelRegTree.md)|Elimina una chiave specificata e tutte le relative sottochiavi.|  
|[CWinApp::DoMessageBox](../Topic/CWinApp::DoMessageBox.md)|Implementa [AfxMessageBox](../Topic/AfxMessageBox.md) per l'applicazione.|  
|[CWinApp::DoWaitCursor](../Topic/CWinApp::DoWaitCursor.md)|Disattiva il cursore di attesa e chiuderlo.|  
|[CWinApp::EnableD2DSupport](../Topic/CWinApp::EnableD2DSupport.md)|Abilita il supporto `D2D` di applicazione.  Chiamare questo metodo prima che venga inizializzata la finestra principale.|  
|[CWinApp::EnableHtmlHelp](../Topic/CWinApp::EnableHtmlHelp.md)|Implementa HTMLHelp per l'applicazione, anziché WinHelp.|  
|[CWinApp::EnableTaskbarInteraction](../Topic/CWinApp::EnableTaskbarInteraction.md)|Abilita l'interazione della barra delle applicazioni.|  
|[CWinApp::ExitInstance](../Topic/CWinApp::ExitInstance.md)|Override da liberare quando l'applicazione viene chiusa.|  
|[CWinApp::GetApplicationRecoveryParameter](../Topic/CWinApp::GetApplicationRecoveryParameter.md)|Recupera il parametro di input per il metodo di recupero dell'applicazione.|  
|[CWinApp::GetApplicationRecoveryPingInterval](../Topic/CWinApp::GetApplicationRecoveryPingInterval.md)|Restituisce la durata di Gestione riavvio della funzione di callback di recupero da restituire.|  
|[CWinApp::GetApplicationRestartFlags](../Topic/CWinApp::GetApplicationRestartFlags.md)|Restituisce i flag per Gestione riavvio.|  
|[CWinApp::GetAppRegistryKey](../Topic/CWinApp::GetAppRegistryKey.md)|Chiave per RETURN" \\ RegistryKey ProfileName \\ software \\ "HKEY\_CURRENT\_USER.|  
|[CWinApp::GetDataRecoveryHandler](../Topic/CWinApp::GetDataRecoveryHandler.md)|Ottiene il gestore di ripristinare i dati per questa istanza dell'applicazione.|  
|[CWinApp::GetFirstDocTemplatePosition](../Topic/CWinApp::GetFirstDocTemplatePosition.md)|Recupera la posizione del primo modello di documento.|  
|[CWinApp::GetHelpMode](../Topic/CWinApp::GetHelpMode.md)|Recupera il tipo della guida utilizzato dall'applicazione.|  
|[CWinApp::GetNextDocTemplate](../Topic/CWinApp::GetNextDocTemplate.md)|Recupera il percorso di un modello di documento.  Può essere utilizzato in modo ricorsivo.|  
|[CWinApp::GetPrinterDeviceDefaults](../Topic/CWinApp::GetPrinterDeviceDefaults.md)|Recupera le impostazioni predefinite del dispositivo della stampante.|  
|[CWinApp::GetProfileBinary](../Topic/CWinApp::GetProfileBinary.md)|Recupera i dati binari da una voce nel file di .INI dell'applicazione.|  
|[CWinApp::GetProfileInt](../Topic/CWinApp::GetProfileInt.md)|Recupera un numero intero da una voce nel file di .INI dell'applicazione.|  
|[CWinApp::GetProfileString](../Topic/CWinApp::GetProfileString.md)|Recupera una stringa da una voce nel file di .INI dell'applicazione.|  
|[CWinApp::GetSectionKey](../Topic/CWinApp::GetSectionKey.md)|Restituisce la chiave per HKEY\_CURRENT\_USER\\"Software"\\RegistryKey\\AppName\\lpszSection.|  
|[CWinApp::HideApplication](../Topic/CWinApp::HideApplication.md)|Nasconde l'applicazione prima di chiudere tutti i documenti.|  
|[CWinApp::HtmlHelp](../Topic/CWinApp::HtmlHelp.md)|Chiama la funzione Windows `HTMLHelp`.|  
|[CWinApp::InitInstance](../Topic/CWinApp::InitInstance.md)|Un override per eseguire l'inizializzazione dell'istanza di Windows, ad esempio creare la finestra oggetto.|  
|[CWinApp::IsTaskbarInteractionEnabled](../Topic/CWinApp::IsTaskbarInteractionEnabled.md)|Indica se l'interazione della barra delle applicazioni di Windows 7 è abilitata.|  
|[CWinApp::LoadCursor](../Topic/CWinApp::LoadCursor.md)|Carica una risorsa cursore.|  
|[CWinApp::LoadIcon](../Topic/CWinApp::LoadIcon.md)|Carica una risorsa icona.|  
|[CWinApp::LoadOEMCursor](../Topic/CWinApp::LoadOEMCursor.md)|Carica un cursore predefinito OEM di Windows che le costanti **OCR\_** specificano in WINDOWS.H.|  
|[CWinApp::LoadOEMIcon](../Topic/CWinApp::LoadOEMIcon.md)|Carica l'icona predefinita OEM di Windows che le costanti **OIC\_** specificano in WINDOWS.H.|  
|[CWinApp::LoadStandardCursor](../Topic/CWinApp::LoadStandardCursor.md)|Carica un cursore predefinito Windows che le costanti **IDC\_** specificano in WINDOWS.H.|  
|[CWinApp::LoadStandardIcon](../Topic/CWinApp::LoadStandardIcon.md)|Carica l'icona predefinita Windows che le costanti **IDI\_** specificano in WINDOWS.H.|  
|[CWinApp::OnDDECommand](../Topic/CWinApp::OnDDECommand.md)|Chiamato dal framework in risposta a un comando di esecuzione \(DDE\) di scambio dinamico dati.|  
|[CWinApp::OnIdle](../Topic/CWinApp::OnIdle.md)|Override per eseguire l'elaborazione specifica dell'applicazione di tempo di inattività.|  
|[CWinApp::OpenDocumentFile](../Topic/CWinApp::OpenDocumentFile.md)|Chiamato dal framework per aprire un documento da un file.|  
|[CWinApp::ParseCommandLine](../Topic/CWinApp::ParseCommandLine.md)|Analizza i singoli parametri e i flag nella riga di comando.|  
|[CWinApp::PreTranslateMessage](../Topic/CWinApp::PreTranslateMessage.md)|Filtri dei messaggi prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CWinApp::ProcessMessageFilter](../Topic/CWinApp::ProcessMessageFilter.md)|Alcuni messaggi di interruzione prima che raggiungano l'applicazione.|  
|[CWinApp::ProcessShellCommand](../Topic/CWinApp::ProcessShellCommand.md)|Gestisce gli argomenti della riga di comando e i flag.|  
|[CWinApp::ProcessWndProcException](../Topic/CWinApp::ProcessWndProcException.md)|Intercetti tutte le eccezioni non gestite generate dal messaggio e i gestori comandi dell'applicazione.|  
|[CWinApp::Register](../Topic/CWinApp::Register.md)|Performs ha personalizzato la registrazione.|  
|[CWinApp::RegisterWithRestartManager](../Topic/CWinApp::RegisterWithRestartManager.md)|Registra l'applicazione con Gestione riavvio.|  
|[CWinApp::ReopenPreviousFilesAtRestart](../Topic/CWinApp::ReopenPreviousFilesAtRestart.md)|Determina se Gestione riavvio riaprire i file non aperti quando l'applicazione viene rilasciato in modo imprevisto.|  
|[CWinApp::RestartInstance](../Topic/CWinApp::RestartInstance.md)|Gestisce il riavvio di un'applicazione avviata da Gestione riavvio.|  
|[CWinApp::RestoreAutosavedFilesAtRestart](../Topic/CWinApp::RestoreAutosavedFilesAtRestart.md)|Determina se Gestione riavvio ripristina i file autosaved quando si riavvia l'applicazione.|  
|[CWinApp::Run](../Topic/CWinApp::Run.md)|Esegue il ciclo di messaggi predefinito.  Override per personalizzare il ciclo di messaggi.|  
|[CWinApp::RunAutomated](../Topic/CWinApp::RunAutomated.md)|Verifica la riga di comando dell'applicazione per l'opzione **\/Automation**.  Obsoleta.  Al contrario, utilizzare il valore in [CCommandLineInfo::m\_bRunAutomated](../Topic/CCommandLineInfo::m_bRunAutomated.md) dopo aver chiamato [ParseCommandLine](../Topic/CWinApp::ParseCommandLine.md).|  
|[CWinApp::RunEmbedded](../Topic/CWinApp::RunEmbedded.md)|Verifica la riga di comando dell'applicazione per l'opzione **\/Embedding**.  Obsoleta.  Al contrario, utilizzare il valore in [CCommandLineInfo::m\_bRunEmbedded](../Topic/CCommandLineInfo::m_bRunEmbedded.md) dopo aver chiamato [ParseCommandLine](../Topic/CWinApp::ParseCommandLine.md).|  
|[CWinApp::SaveAllModified](../Topic/CWinApp::SaveAllModified.md)|Richiede all'utente di salvare tutti i documenti modificati.|  
|[CWinApp::SelectPrinter](../Topic/CWinApp::SelectPrinter.md)|Selezionare una stampante precedentemente indicata da un utente tramite una finestra di dialogo stampa.|  
|[CWinApp::SetHelpMode](../Topic/CWinApp::SetHelpMode.md)|Set e inizializza il tipo della guida utilizzato dall'applicazione.|  
|[CWinApp::SupportsApplicationRecovery](../Topic/CWinApp::SupportsApplicationRecovery.md)|Determina se Gestione riavvio recupera un'applicazione che viene rilasciato in modo imprevisto.|  
|[CWinApp::SupportsAutosaveAtInterval](../Topic/CWinApp::SupportsAutosaveAtInterval.md)|Determina se Gestione riavvio autosaves i documenti aperti a intervalli regolari.|  
|[CWinApp::SupportsAutosaveAtRestart](../Topic/CWinApp::SupportsAutosaveAtRestart.md)|Determina se Gestione riavvio autosaves tutti i documenti aperti quando l'applicazione viene riavviata.|  
|[CWinApp::SupportsRestartManager](../Topic/CWinApp::SupportsRestartManager.md)|Determina se l'applicazione supporta Gestione riavvio.|  
|[CWinApp::Unregister](../Topic/CWinApp::Unregister.md)|Annulla la registrazione tutto conosciuto per essere registrato dall'oggetto `CWinApp`.|  
|[CWinApp::WinHelp](../Topic/CWinApp::WinHelp.md)|Chiama la funzione Windows `WinHelp`.|  
|[CWinApp::WriteProfileBinary](../Topic/CWinApp::WriteProfileBinary.md)|Scrive i dati binari in una voce nel file di .INI dell'applicazione.|  
|[CWinApp::WriteProfileInt](../Topic/CWinApp::WriteProfileInt.md)|Scrive un Integer a una voce nel file di .INI dell'applicazione.|  
|[CWinApp::WriteProfileString](../Topic/CWinApp::WriteProfileString.md)|Scrive una stringa a una voce nel file di .INI dell'applicazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::EnableShellOpen](../Topic/CWinApp::EnableShellOpen.md)|Consente all'utente nei file di dati aperti dal File Manager di Windows.|  
|[CWinApp::LoadStdProfileSettings](../Topic/CWinApp::LoadStdProfileSettings.md)|Le impostazioni del file standard .INI carichi e abilita la funzionalità dell'elenco file utilizzati di recente.|  
|[CWinApp::OnContextHelp](../Topic/CWinApp::OnContextHelp.md)|Guida di handle MAIUSC\+F1 interno dell'applicazione.|  
|[CWinApp::OnFileNew](../Topic/CWinApp::OnFileNew.md)|Implementa il comando `ID_FILE_NEW`.|  
|[CWinApp::OnFileOpen](../Topic/CWinApp::OnFileOpen.md)|Implementa il comando `ID_FILE_OPEN`.|  
|[CWinApp::OnFilePrintSetup](../Topic/CWinApp::OnFilePrintSetup.md)|Implementa il comando `ID_FILE_PRINT_SETUP`.|  
|[CWinApp::OnHelp](../Topic/CWinApp::OnHelp.md)|Guida di handle nell'applicazione utilizzando il contesto corrente\).|  
|[CWinApp::OnHelpFinder](../Topic/CWinApp::OnHelpFinder.md)|Gestisce i controlli `ID_DEFAULT_HELP` e `ID_HELP_FINDER`.|  
|[CWinApp::OnHelpIndex](../Topic/CWinApp::OnHelpIndex.md)|Gestisce il comando `ID_HELP_INDEX` e fornisce un argomento della Guida predefinito.|  
|[CWinApp::OnHelpUsing](../Topic/CWinApp::OnHelpUsing.md)|Gestisce il comando `ID_HELP_USING`.|  
|[CWinApp::RegisterShellFileTypes](../Topic/CWinApp::RegisterShellFileTypes.md)|Registra i tipi di documento di qualsiasi applicazione con il File Manager di Windows.|  
|[CWinApp::SetAppID](../Topic/CWinApp::SetAppID.md)|Impostato in modo esplicito l'id modello dell'applicazione per l'applicazione.  Questo metodo deve essere chiamato prima che qualsiasi interfaccia utente è identico all'utente \(la posizione migliore dal costruttore di applicazione\).|  
|[CWinApp::SetRegistryKey](../Topic/CWinApp::SetRegistryKey.md)|Le impostazioni dell'applicazione causato da archiviare nel Registro di sistema anziché file di .INI.|  
|[CWinApp::UnregisterShellFileTypes](../Topic/CWinApp::UnregisterShellFileTypes.md)|Annulla la registrazione dei tipi di documento di qualsiasi applicazione con il File Manager di Windows.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::m\_bHelpMode](../Topic/CWinApp::m_bHelpMode.md)|Indica se l'utente è in modalità di contesto della guida \(in genere chiamato con MAIUSC\+F1\).|  
|[CWinApp::m\_eHelpType](../Topic/CWinApp::m_eHelpType.md)|Specifica il tipo della guida utilizzato dall'applicazione.|  
|[CWinApp::m\_hInstance](../Topic/CWinApp::m_hInstance.md)|Identifica l'istanza corrente dell'applicazione.|  
|[CWinApp::m\_lpCmdLine](../Topic/CWinApp::m_lpCmdLine.md)|Punta a una stringa con terminazione null che specifica la riga di comando per l'applicazione.|  
|[CWinApp::m\_nCmdShow](../Topic/CWinApp::m_nCmdShow.md)|Specifica come finestra deve essere visualizzato inizialmente.|  
|[CWinApp::m\_pActiveWnd](../Topic/CWinApp::m_pActiveWnd.md)|Puntatore alla finestra principale dell'applicazione contenitore quando un server OLE è attivo sul posto.|  
|[CWinApp::m\_pszAppID](../Topic/CWinApp::m_pszAppID.md)|Identificazione di modello l'applicazione|  
|[CWinApp::m\_pszAppName](../Topic/CWinApp::m_pszAppName.md)|Specifica il nome dell'applicazione.|  
|[CWinApp::m\_pszExeName](../Topic/CWinApp::m_pszExeName.md)|Il nome del modulo dell'applicazione.|  
|[CWinApp::m\_pszHelpFilePath](../Topic/CWinApp::m_pszHelpFilePath.md)|Il percorso del file della Guida dell'applicazione.|  
|[CWinApp::m\_pszProfileName](../Topic/CWinApp::m_pszProfileName.md)|Il nome file del .INI dell'applicazione.|  
|[CWinApp::m\_pszRegistryKey](../Topic/CWinApp::m_pszRegistryKey.md)|Utilizzato per determinare la chiave del Registro di sistema completo per memorizzare le impostazioni di profilo di un'applicazione.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinApp::m\_dwRestartManagerSupportFlags](../Topic/CWinApp::m_dwRestartManagerSupportFlags.md)|Flag che determinano quali Gestione riavvio funziona.|  
|[CWinApp::m\_nAutosaveInterval](../Topic/CWinApp::m_nAutosaveInterval.md)|La durata in millisecondi tra autosaves.|  
|[CWinApp::m\_pDataRecoveryHandler](../Topic/CWinApp::m_pDataRecoveryHandler.md)|Puntatore al gestore di ripristinare i dati per l'applicazione.|  
  
## Note  
 Un oggetto applicazione fornisce funzioni membro per inizializzare l'applicazione \(e ogni istanza\) ed eseguire l'applicazione.  
  
 Ogni applicazione che utilizza le classi MFC \(Microsoft Foundation può contenere un solo oggetto derivato da `CWinApp`.  Questo oggetto viene creato quando altri oggetti globali C\+\+ vengono creati ed è già disponibile quando Windows chiama la funzione `WinMain`, fornita dalla libreria MFC.  Dichiarare l'oggetto derivato `CWinApp` a livello globale.  
  
 Quando si deriva una classe di applicazione da `CWinApp`, eseguire l'override della funzione membro [InitInstance](../Topic/CWinApp::InitInstance.md) per creare l'oggetto della finestra principale dell'applicazione.  
  
 Oltre alle funzioni membro `CWinApp`, la libreria MFC fornisce le seguenti funzioni globali per accedere all'oggetto `CWinApp` e altre informazioni globali:  
  
-   [AfxGetApp](../Topic/AfxGetApp.md) ottiene un puntatore all'oggetto `CWinApp`.  
  
-   [AfxGetInstanceHandle](../Topic/AfxGetInstanceHandle.md) ottiene un handle all'istanza di applicazione corrente.  
  
-   [AfxGetResourceHandle](../Topic/AfxGetResourceHandle.md) ottiene un handle alle risorse dell'applicazione.  
  
-   [AfxGetAppName](../Topic/AfxGetAppName.md) ottiene un puntatore a una stringa contenente il nome dell'applicazione.  In alternativa, se un puntatore all'oggetto `CWinApp`, utilizzare `m_pszExeName` ottenere il nome dell'applicazione.  
  
 Vedere [CWinApp: La classe di applicazione](../../mfc/cwinapp-the-application-class.md) per ulteriori informazioni sulla classe `CWinApp`, inclusi cenni preliminari sulle seguenti:  
  
-   `CWinApp`\- derivato codice scritto dalla creazione guidata applicazione.  
  
-   Il ruolo di `CWinApp` nella sequenza di esecuzione dell'applicazione.  
  
-   Implementazioni predefinite della funzione membro di `CWinApp`.  
  
-   i overridables principali di `CWinApp`.  
  
 Il membro dati **m\_hPrevInstance** non esiste più.  Per informazioni sul rilevamento un'istanza precedente `CWinApp`, vedere l'articolo della Knowledge Base "come identificare un'istanza precedente di un'applicazione" \(KB106385\) [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;106385](http://support.microsoft.com/default.aspx?scid=kb;en-us;106385).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWinThread](../../mfc/reference/cwinthread-class.md)  
  
 `CWinApp`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CWinThread Class](../../mfc/reference/cwinthread-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Procedura: Aggiungere il supporto di Gestione riavvio](../../mfc/how-to-add-restart-manager-support.md)