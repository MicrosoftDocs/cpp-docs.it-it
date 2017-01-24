---
title: "CFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFrameWnd class"
  - "frame window classes, classi base"
  - "frame windows, creazione"
  - "Single Document Interface (SDI), frame windows"
ms.assetid: e2220aba-5bf4-4002-b960-fbcafcad01f1
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CFrameWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce la funzionalità di interfaccia a documento singolo \(SDI\) di Windows è sovrapposto o finestra cornice popup, con membri per gestire la finestra.  
  
## Sintassi  
  
```  
class CFrameWnd : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::CFrameWnd](../Topic/CFrameWnd::CFrameWnd.md)|Costruisce un oggetto `CFrameWnd`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::ActivateFrame](../Topic/CFrameWnd::ActivateFrame.md)|Rende disponibile il frame visibile e dell'utente.|  
|[CFrameWnd::BeginModalState](../Topic/CFrameWnd::BeginModalState.md)|Imposta la finestra cornice a modale.|  
|[CFrameWnd::Create](../Topic/CFrameWnd::Create.md)|Chiamare per creare e inizializzare la finestra cornice di Windows associata all'oggetto `CFrameWnd`.|  
|[CFrameWnd::CreateView](../Topic/CFrameWnd::CreateView.md)|Crea una visualizzazione in un intervallo che non è derivato da `CView`.|  
|[CFrameWnd::DockControlBar](../Topic/CFrameWnd::DockControlBar.md)|Inoltre una barra di controllo.|  
|[CFrameWnd::EnableDocking](../Topic/CFrameWnd::EnableDocking.md)|Consente una barra di controllo per ancorare.|  
|[CFrameWnd::EndModalState](../Topic/CFrameWnd::EndModalState.md)|Termina lo stato modale della finestra cornice.  Abilita tutte le finestre disabilitate da `BeginModalState`.|  
|[CFrameWnd::FloatControlBar](../Topic/CFrameWnd::FloatControlBar.md)|Fa verrà visualizzata una barra di controllo.|  
|[CFrameWnd::GetActiveDocument](../Topic/CFrameWnd::GetActiveDocument.md)|Restituisce l'oggetto attivo **CDocument**.|  
|[CFrameWnd::GetActiveFrame](../Topic/CFrameWnd::GetActiveFrame.md)|Restituisce l'oggetto attivo `CFrameWnd`.|  
|[CFrameWnd::GetActiveView](../Topic/CFrameWnd::GetActiveView.md)|Restituisce l'oggetto attivo `CView`.|  
|[CFrameWnd::GetControlBar](../Topic/CFrameWnd::GetControlBar.md)|Recupera la barra di controllo.|  
|[CFrameWnd::GetDockState](../Topic/CFrameWnd::GetDockState.md)|Recupera lo stato di ancoraggio di una finestra cornice.|  
|[CFrameWnd::GetMenuBarState](../Topic/CFrameWnd::GetMenuBarState.md)|Recupera lo stato di visualizzazione del menu nell'applicazione corrente MFC.|  
|[CFrameWnd::GetMenuBarVisibility](../Topic/CFrameWnd::GetMenuBarVisibility.md)|Indica se il comportamento predefinito del menu nell'applicazione corrente MFC è nascosto o visibile.|  
|[CFrameWnd::GetMessageBar](../Topic/CFrameWnd::GetMessageBar.md)|Restituisce un puntatore alla barra di stato che appartiene alla finestra cornice.|  
|[CFrameWnd::GetMessageString](../Topic/CFrameWnd::GetMessageString.md)|Recupera il messaggio che corrisponde a un ID di comando|  
|[CFrameWnd::GetTitle](../Topic/CFrameWnd::GetTitle.md)|Recupera il titolo della barra di controllo relativa.|  
|[CFrameWnd::InitialUpdateFrame](../Topic/CFrameWnd::InitialUpdateFrame.md)|Causa la funzione membro `OnInitialUpdate` appartenente a tutte le visualizzazioni nella finestra cornice chiamare.|  
|[CFrameWnd::InModalState](../Topic/CFrameWnd::InModalState.md)|Restituisce un valore che indica se una finestra cornice è in uno stato modale.|  
|[CFrameWnd::IsTracking](../Topic/CFrameWnd::IsTracking.md)|Determina se la barra di divisione attualmente spostare.|  
|[CFrameWnd::LoadAccelTable](../Topic/CFrameWnd::LoadAccelTable.md)|Chiamata per caricare una tabella di tasti di scelta rapida.|  
|[CFrameWnd::LoadBarState](../Topic/CFrameWnd::LoadBarState.md)|Chiamare per ripristinare le impostazioni della barra di controllo.|  
|[CFrameWnd::LoadFrame](../Topic/CFrameWnd::LoadFrame.md)|Chiamare per creare dinamicamente una finestra cornice per informazioni sulle risorse.|  
|[CFrameWnd::NegotiateBorderSpace](../Topic/CFrameWnd::NegotiateBorderSpace.md)|Negozia lo spazio del bordo della finestra cornice.|  
|[CFrameWnd::OnBarCheck](../Topic/CFrameWnd::OnBarCheck.md)|Chiamato ogni volta che un'azione eseguita sulla barra di controllo specificata.|  
|[CFrameWnd::OnContextHelp](../Topic/CFrameWnd::OnContextHelp.md)|Guida di handle MAIUSC\+F1 per gli elementi sul posto.|  
|[CFrameWnd::OnSetPreviewMode](../Topic/CFrameWnd::OnSetPreviewMode.md)|Imposta la finestra cornice principale dell'applicazione in e dalla modalità anteprima di stampa.|  
|[CFrameWnd::OnUpdateControlBarMenu](../Topic/CFrameWnd::OnUpdateControlBarMenu.md)|Chiamato dal framework quando il menu collegato viene aggiornato.|  
|[CFrameWnd::RecalcLayout](../Topic/CFrameWnd::RecalcLayout.md)|Riposizionare le barre di controllo dell'oggetto `CFrameWnd`.|  
|[CFrameWnd::SaveBarState](../Topic/CFrameWnd::SaveBarState.md)|Chiamare per salvare le impostazioni della barra di controllo.|  
|[CFrameWnd::SetActivePreviewView](../Topic/CFrameWnd::SetActivePreviewView.md)|Definisce la visualizzazione specificata per la visualizzazione attiva per l'anteprima complesso.|  
|[CFrameWnd::SetActiveView](../Topic/CFrameWnd::SetActiveView.md)|Imposta l'oggetto attivo `CView`.|  
|[CFrameWnd::SetDockState](../Topic/CFrameWnd::SetDockState.md)|Chiamare per ancorare la finestra cornice nella finestra principale.|  
|[CFrameWnd::SetMenuBarState](../Topic/CFrameWnd::SetMenuBarState.md)|Imposta lo stato di visualizzazione del menu nell'applicazione corrente MFC a nascosti o visualizzati.|  
|[CFrameWnd::SetMenuBarVisibility](../Topic/CFrameWnd::SetMenuBarVisibility.md)|Imposta il comportamento predefinito del menu nell'applicazione corrente MFC essere nascosto o visibile.|  
|[CFrameWnd::SetMessageText](../Topic/CFrameWnd::SetMessageText.md)|Imposta il testo di una barra di stato standard.|  
|[CFrameWnd::SetProgressBarPosition](../Topic/CFrameWnd::SetProgressBarPosition.md)|Imposta la posizione corrente per l'indicatore di stato Windows 7 viene visualizzato nella barra delle applicazioni.|  
|[CFrameWnd::SetProgressBarRange](../Topic/CFrameWnd::SetProgressBarRange.md)|Imposta l'intervallo per l'indicatore di stato Windows 7 viene visualizzato nella barra delle applicazioni.|  
|[CFrameWnd::SetProgressBarState](../Topic/CFrameWnd::SetProgressBarState.md)|Imposta il tipo e lo stato dell'indicatore di stato viene visualizzato su un pulsante della barra delle applicazioni.|  
|[CFrameWnd::SetTaskbarOverlayIcon](../Topic/CFrameWnd::SetTaskbarOverlayIcon.md)|Di overload.  Applica una sovrapposizione a un pulsante della barra delle applicazioni per indicare lo stato applicazione o una notifica all'utente.|  
|[CFrameWnd::SetTitle](../Topic/CFrameWnd::SetTitle.md)|Imposta il titolo della barra di controllo relativa.|  
|[CFrameWnd::ShowControlBar](../Topic/CFrameWnd::ShowControlBar.md)|Chiamare per visualizzare la barra di controllo.|  
|[CFrameWnd::ShowOwnedWindows](../Topic/CFrameWnd::ShowOwnedWindows.md)|Mostra tutte le finestre che sono discendenti dell'oggetto `CFrameWnd`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::OnCreateClient](../Topic/CFrameWnd::OnCreateClient.md)|Crea una finestra client per il frame.|  
|[CFrameWnd::OnHideMenuBar](../Topic/CFrameWnd::OnHideMenuBar.md)|Chiamata prima del menu nell'applicazione corrente MFC è nascosto.|  
|[CFrameWnd::OnShowMenuBar](../Topic/CFrameWnd::OnShowMenuBar.md)|Chiamata prima del menu nell'applicazione corrente MFC visualizzare.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWnd::m\_bAutoMenuEnable](../Topic/CFrameWnd::m_bAutoMenuEnable.md)|I controlli automatici abilitare e disabilitare la funzionalità per le voci di menu.|  
|[CFrameWnd::rectDefault](../Topic/CFrameWnd::rectDefault.md)|Passare questo `CRect` statico come parametro quando creano un oggetto `CFrameWnd` per consentire a Windows scegliere la dimensione iniziale e la posizione della finestra.|  
  
## Note  
 Per creare una finestra cornice utile per l'applicazione, derivare una classe da `CFrameWnd`.  Aggiungere le variabili membro alla classe derivata all'archivio dati specifici dell'applicazione.  Implementare la funzione membro per la gestione e una mappa messaggi nella classe derivata per specificare l'evento che si verifica quando i messaggi vengono indirizzati alla finestra.  
  
 Esistono tre modi per creare una finestra cornice:  
  
-   Direttamente costruiscala utilizzando [Crea](../Topic/CFrameWnd::Create.md).  
  
-   Direttamente costruiscalo utilizzando [LoadFrame](../Topic/CFrameWnd::LoadFrame.md).  
  
-   Costruiscalo indirettamente utilizzando un modello di documento.  
  
 Prima di chiamare **Crea** o `LoadFrame`, è necessario costruire l'oggetto della finestra cornice nell'heap tramite l'operatore C\+\+ **new**.  Prima di chiamare **Crea**, è inoltre possibile registrare una classe finestra con la funzione globale [AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) per impostare gli stili della classe e l'icona del frame.  
  
 Utilizzare la funzione membro **Crea** per passare i parametri di creazione del frame come argomenti diretti.  
  
 `LoadFrame` richiede meno argomenti che **Crea**e ne recupera la maggior parte dei relativi valori predefiniti delle risorse, inclusi la barra del titolo del frame, l'icona, la tabella dei tasti di scelta rapida e il menu.  Per essere accessibile da `LoadFrame`, tutte queste risorse devono avere lo stesso ID di risorsa, ad esempio **IDR\_MAINFRAME**\).  
  
 Quando un oggetto `CFrameWnd` contiene le visualizzazioni e i documenti, vengono create indirettamente dal framework anziché direttamente dal programmatore.  L'oggetto `CDocTemplate` orchestra la creazione del frame, la creazione delle visualizzazioni contenitore e la connessione delle visualizzazioni al documento appropriato.  I parametri del costruttore `CDocTemplate` specificano `CRuntimeClass` delle tre classi in questione \(documento, frame e visualizzazione.  Un oggetto `CRuntimeClass` viene utilizzato dal framework per creare dinamicamente i nuovi frame una volta specificato dall'utente \(ad esempio, utilizzando il nuovo comando del file o comandi della finestra \(MDI\) dell'interfaccia a documenti multipli il nuovo\).  
  
 Una classe della finestra cornice derivata da `CFrameWnd` deve essere dichiarata con `DECLARE_DYNCREATE` in modo che il meccanismo di sopra `RUNTIME_CLASS` per funzionare correttamente.  
  
 `CFrameWnd` contiene le implementazioni predefinite per eseguire le seguenti funzioni di una finestra principale di un'applicazione tipica di Windows:  
  
-   Una finestra cornice `CFrameWnd` tiene traccia della visualizzazione attualmente attiva a \- indipendente dalla finestra attiva di Windows o dallo stato attivo per l'input corrente.  Quando il frame viene riattivato, la visualizzazione attiva viene trasmessa chiamando `CView::OnActivateView`.  
  
-   I messaggi di comando e molti messaggi comuni di frame\- notifica, inclusi quelli gestiti da `OnSetFocus`, `OnHScroll`e funzioni `OnVScroll``CWnd`, delegati sono attualmente da una finestra cornice `CFrameWnd` alla visualizzazione attiva.  
  
-   La visualizzazione attualmente attiva o attualmente alla finestra cornice figlio MDI attiva nel caso di una cornice MDI\) può determinare la barra del titolo della finestra cornice.  Questa funzionalità può essere disabilitata disattivando il bit di stile **FWS\_ADDTOTITLE** della finestra cornice.  
  
-   Una finestra cornice `CFrameWnd` gestisce il posizionamento delle barre di controllo, visualizzazioni e altre finestre figlio nell'area client della finestra cornice.  Una finestra cornice rende aggiornare tempo di inattività della barra degli strumenti e altri pulsanti della barra di controllo.  Una finestra cornice `CFrameWnd` dispone anche di implementazioni predefinite dei controlli per attivare e disattivare la barra degli strumenti e la barra di stato.  
  
-   Una finestra cornice `CFrameWnd` gestisce la barra dei menu principale.  Quando verrà visualizzato un menu di scelta rapida, la finestra cornice utilizza il meccanismo **UPDATE\_COMMAND\_UI** per determinare quali voci di menu devono essere abilitate, disabilitate, o essere archiviata.  Quando l'utente seleziona una voce di menu, la finestra cornice aggiorna la barra di stato con la stringa di messaggio per il comando.  
  
-   Una finestra cornice `CFrameWnd` ha una tabella di tasti di scelta rapida facoltativa che converte automaticamente i tasti di scelta rapida.  
  
-   Una finestra cornice `CFrameWnd` ha una guida facoltativa ID impostata con `LoadFrame` utilizzata per guida sensibile al contesto.  Una finestra cornice è il orchestrator principale degli stati semimodal come soluzione della guida sensibile al contesto \(MAIUSC\+F1\) e anteprima di stampa.  
  
-   Una finestra cornice `CFrameWnd` aperto un file trascinato da File Manager e rilasciato alla finestra cornice.  Se un'estensione di file è registrata e associata all'applicazione, la finestra cornice risponde alla richiesta aperta \(DDE\) di scambio dinamico dati che si verifica quando l'utente apre un file di dati nel File Manager o quando la funzione Windows **ShellExecute** è denominata.  
  
-   Se la finestra cornice è la finestra principale \(ovvero `CWinThread::m_pMainWnd`\), quando l'utente chiude l'applicazione, la finestra cornice richiede all'utente di salvare tutti i documenti modificati \(per `OnClose` e `OnQueryEndSession`\).  
  
-   Se la finestra cornice è la finestra principale, la finestra cornice è il contesto per eseguire WinHelp.  Se la finestra cornice interromperà WINHELP.EXE se è stato avviato per la guida per l'applicazione.  
  
 Non utilizzare l'operatore C\+\+ **delete** per eliminare una finestra cornice.  In alternativa, utilizzare `CWnd::DestroyWindow`.  L'implementazione `CFrameWnd``PostNcDestroy` eliminato l'oggetto C\+\+ quando la finestra viene distrutta.  Quando l'utente chiude la finestra cornice, il gestore predefinito `OnClose` chiamerà `DestroyWindow`.  
  
 Per ulteriori informazioni su `CFrameWnd`, vedere [Applicazioni utilizzano](../../mfc/frame-windows.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CFrameWnd`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [CMDIFrameWnd Class](../../mfc/reference/cmdiframewnd-class.md)   
 [CMDIChildWnd Class](../../mfc/reference/cmdichildwnd-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CRuntimeClass Structure](../../mfc/reference/cruntimeclass-structure.md)