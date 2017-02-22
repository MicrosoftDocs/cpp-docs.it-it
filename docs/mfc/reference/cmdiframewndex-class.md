---
title: "Classe CMDIFrameWndEx | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMDIFrameWndEx.AddDockSite"
  - "CMDIFrameWndEx"
  - "CMDIFrameWndEx::AddDockSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMDIFrameWndEx (classe)"
ms.assetid: dbcafcb3-9a7a-4f11-9dfe-ba57565c81d0
caps.latest.revision: 42
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 44
---
# Classe CMDIFrameWndEx
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Estende la funzionalità di [CMDIFrameWnd](../../mfc/reference/cframewnd-class.md), una finestra cornice di \(MDI\) l'interfaccia a documenti multipli di Windows.  
  
## Sintassi  
  
```  
class CMDIFrameWndEx : public CMDIFrameWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIFrameWndEx::ActiveItemRecalcLayout](../Topic/CMDIFrameWndEx::ActiveItemRecalcLayout.md)|Ricalcola il layout dell'elemento attivo.|  
|`CMDIFrameWndEx::AddDockSite`|Questo metodo non viene utilizzato.|  
|[CMDIFrameWndEx::AddPane](../Topic/CMDIFrameWndEx::AddPane.md)|Registra un riquadro con l'amministratore di ancoraggio.|  
|[CMDIFrameWndEx::AdjustClientArea](../Topic/CMDIFrameWndEx::AdjustClientArea.md)|Ridurre l'area client per consentire un bordo.|  
|[CMDIFrameWndEx::AdjustDockingLayout](../Topic/CMDIFrameWndEx::AdjustDockingLayout.md)|Ricalcola il layout dei riquadri ancorati.|  
|[CMDIFrameWndEx::AreMDITabs](../Topic/CMDIFrameWndEx::AreMDITabs.md)|Determina se le schede MDI funzionalità o la funzionalità dei gruppi MDI a schede è abilitata.|  
|[CMDIFrameWndEx::CanCovertControlBarToMDIChild](../Topic/CMDIFrameWndEx::CanCovertControlBarToMDIChild.md)|Chiamato dal framework per determinare se la finestra cornice può convertire i riquadri ancorati a documenti a schede.|  
|[CMDIFrameWndEx::ControlBarToTabbedDocument](../Topic/CMDIFrameWndEx::ControlBarToTabbedDocument.md)|Converte il riquadro ancorato specificato in un documento a schede.|  
|[CMDIFrameWndEx::CreateDocumentWindow](../Topic/CMDIFrameWndEx::CreateDocumentWindow.md)|Crea una finestra del documento figlio.|  
|[CMDIFrameWndEx::CreateNewWindow](../Topic/CMDIFrameWndEx::CreateNewWindow.md)|Chiamato dal framework per creare una nuova finestra.|  
|`CMDIFrameWndEx::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMDIFrameWndEx::DockPane](../Topic/CMDIFrameWndEx::DockPane.md)|Nuovamente il riquadro specificato alla finestra cornice.|  
|[CMDIFrameWndEx::DockPaneLeftOf](../Topic/CMDIFrameWndEx::DockPaneLeftOf.md)|Ancoraggio il riquadro a sinistra di un altro riquadro.|  
|[CMDIFrameWndEx::EnableAutoHidePanes](../Topic/CMDIFrameWndEx::EnableAutoHidePanes.md)|Attiva la modalità nascondi automaticamente per i riquadri quando vengono ancorati sui lati indicati della finestra cornice principale.|  
|[CMDIFrameWndEx::EnableDocking](../Topic/CMDIFrameWndEx::EnableDocking.md)|Consente l'ancoraggio dei riquadri che appartengono alla finestra cornice MDI.|  
|[CMDIFrameWndEx::EnableFullScreenMainMenu](../Topic/CMDIFrameWndEx::EnableFullScreenMainMenu.md)|Mostra o nasconde il menu principale in modalità schermo intero.|  
|[CMDIFrameWndEx::EnableFullScreenMode](../Topic/CMDIFrameWndEx::EnableFullScreenMode.md)|Attiva la modalità schermo intero per la finestra cornice.|  
|[CMDIFrameWndEx::EnableLoadDockState](../Topic/CMDIFrameWndEx::EnableLoadDockState.md)|Abilita o disabilita il caricamento dello stato di ancoraggio.|  
|[CMDIFrameWndEx::EnableMDITabbedGroups](../Topic/CMDIFrameWndEx::EnableMDITabbedGroups.md)|Abilita o disabilita la funzionalità dei gruppi MDI a schede.|  
|[CMDIFrameWndEx::EnableMDITabs](../Topic/CMDIFrameWndEx::EnableMDITabs.md)|Abilita o disabilita la funzionalità delle schede MDI.  Una volta abilitata, la finestra cornice visualizzare una tabulazione ogni finestra figlio MDI.|  
|[CMDIFrameWndEx::EnableMDITabsLastActiveActivation](../Topic/CMDIFrameWndEx::EnableMDITabsLastActiveActivation.md)|Specifica se l'ultima scheda attiva deve essere attivata quando l'utente chiude la scheda corrente.|  
|[CMDIFrameWndEx::EnablePaneMenu](../Topic/CMDIFrameWndEx::EnablePaneMenu.md)|Abilita o disabilita la creazione automatica e la gestione del menu popup il riquadro, che visualizza un elenco dei riquadri applicazione.  .|  
|[CMDIFrameWndEx::EnableWindowsDialog](../Topic/CMDIFrameWndEx::EnableWindowsDialog.md)|Inserisce una voce di menu di cui l'id di comando chiama una finestra di dialogo di [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md).|  
|[CMDIFrameWndEx::GetActivePopup](../Topic/CMDIFrameWndEx::GetActivePopup.md)|Restituisce un puntatore al menu di scelta rapida attualmente visualizzate.|  
|[CMDIFrameWndEx::GetPane](../Topic/CMDIFrameWndEx::GetPane.md)|Restituisce un puntatore al riquadro che dispone dell'ID del controllo|  
|[CMDIFrameWndEx::GetDefaultResId](../Topic/CMDIFrameWndEx::GetDefaultResId.md)|Restituisce l'id delle risorse condivise nella finestra cornice MDI.|  
|[CMDIFrameWndEx::GetMDITabGroups](../Topic/CMDIFrameWndEx::GetMDITabGroups.md)|Restituisce un elenco di finestre MDI a schede.|  
|[CMDIFrameWndEx::GetMDITabs](../Topic/CMDIFrameWndEx::GetMDITabs.md)|Restituisce un riferimento alla finestra a schede sottolineata.|  
|[CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems](../Topic/CMDIFrameWndEx::GetMDITabsContextMenuAllowedItems.md)|Restituisce una combinazione di flag che determina le voci di menu di scelta rapida sono validi alla funzionalità dei gruppi MDI a schede è abilitata.|  
|[CMDIFrameWndEx::GetMenuBar](../Topic/CMDIFrameWndEx::GetMenuBar.md)|Restituisce un puntatore a un oggetto barra dei menu collegato alla finestra cornice.|  
|[CMDIFrameWndEx::GetRibbonBar](../Topic/CMDIFrameWndEx::GetRibbonBar.md)|Recupera il controllo della barra multifunzione per il frame.|  
|[CMDIFrameWndEx::GetTearOffBars](../Topic/CMDIFrameWndEx::GetTearOffBars.md)|Restituisce un elenco di [CPane](../../mfc/reference/cpane-class.md)di oggetti derivati in uno stato di sradicamento.|  
|`CMDIFrameWndEx::GetThisClass`|Chiamato dal framework per ottenere un puntatore all'oggetto di [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMDIFrameWndEx::GetToolbarButtonToolTipText](../Topic/CMDIFrameWndEx::GetToolbarButtonToolTipText.md)|Chiamato dal framework quando l'applicazione visualizza la descrizione comandi per un pulsante della barra degli strumenti.|  
|[CMDIFrameWndEx::InsertPane](../Topic/CMDIFrameWndEx::InsertPane.md)|Registra il riquadro specificato con l'amministratore di ancoraggio.|  
|[CMDIFrameWndEx::IsFullScreen](../Topic/CMDIFrameWndEx::IsFullScreen.md)|Determina se la finestra cornice in modalità schermo intero.|  
|[CMDIFrameWndEx::IsMDITabbedGroup](../Topic/CMDIFrameWndEx::IsMDITabbedGroup.md)|Determina se la funzionalità dei gruppi MDI a schede è abilitata.|  
|[CMDIFrameWndEx::IsMemberOfMDITabGroup](../Topic/CMDIFrameWndEx::IsMemberOfMDITabGroup.md)|Determina se la finestra a schede specificata si trova nell'elenco di finestre contenuti nei gruppi MDI a schede.|  
|[CMDIFrameWndEx::IsMenuBarAvailable](../Topic/CMDIFrameWndEx::IsMenuBarAvailable.md)|Determina se la finestra cornice con una barra dei menu.|  
|[CMDIFrameWndEx::IsPointNearDockSite](../Topic/CMDIFrameWndEx::IsPointNearDockSite.md)|Determina se un punto specificato è vicino al sito di ancoraggio.|  
|[CMDIFrameWndEx::IsPrintPreview](../Topic/CMDIFrameWndEx::IsPrintPreview.md)|Determina se la finestra cornice in modalità anteprima di stampa.|  
|[CMDIFrameWndEx::LoadFrame](../Topic/CMDIFrameWndEx::LoadFrame.md)|Crea una finestra cornice per informazioni sulle risorse.  \(Override `CMDIFrameWnd::LoadFrame`\).|  
|[CMDIFrameWndEx::LoadMDIState](../Topic/CMDIFrameWndEx::LoadMDIState.md)|Carica il layout specificato dei gruppi MDI a schede e dell'elenco di documenti aperti in precedenza.|  
|[CMDIFrameWndEx::MDITabMoveToNextGroup](../Topic/CMDIFrameWndEx::MDITabMoveToNextGroup.md)|Sposta nella scheda attiva ovvero dalla finestra a schede attivo sul gruppo a schede successivo o precedente.|  
|[CMDIFrameWndEx::MDITabNewGroup](../Topic/CMDIFrameWndEx::MDITabNewGroup.md)|Crea un nuovo gruppo a schede contenente una singola finestra.|  
|[CMDIFrameWndEx::NegotiateBorderSpace](../Topic/CMDIFrameWndEx::NegotiateBorderSpace.md)|Negozia lo spazio del bordo di una finestra cornice per l'attivazione sul posto OLE.|  
|[CMDIFrameWndEx::OnCloseDockingPane](../Topic/CMDIFrameWndEx::OnCloseDockingPane.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Chiudi** in un riquadro ancorabile.|  
|[CMDIFrameWndEx::OnCloseMiniFrame](../Topic/CMDIFrameWndEx::OnCloseMiniFrame.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Chiudi** su una mini finestra cornice mobile.|  
|[CMDIFrameWndEx::OnClosePopupMenu](../Topic/CMDIFrameWndEx::OnClosePopupMenu.md)|Chiamato dal framework quando un menu di scelta rapida attivo elabora un messaggio di `WM_DESTROY`.|  
|[CMDIFrameWndEx::OnCmdMsg](../Topic/CMDIFrameWndEx::OnCmdMsg.md)|Chiamato dal framework di destinazione e inviare messaggi di comando e aggiornare gli oggetti dell'interfaccia utente del comando.|  
|[CMDIFrameWndEx::OnDrawMenuImage](../Topic/CMDIFrameWndEx::OnDrawMenuImage.md)|Chiamato dal framework quando l'immagine associata a una voce di menu viene disegnata.|  
|[CMDIFrameWndEx::OnDrawMenuLogo](../Topic/CMDIFrameWndEx::OnDrawMenuLogo.md)|Chiamato dal framework quando [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)elabora un messaggio di `WM_PAINT`.|  
|[CMDIFrameWndEx::OnEraseMDIClientBackground](../Topic/CMDIFrameWndEx::OnEraseMDIClientBackground.md)|Chiamato dal framework quando la finestra cornice MDI genera un messaggio di `WM_ERASEBKGND`.|  
|[CMDIFrameWndEx::OnMenuButtonToolHitTest](../Topic/CMDIFrameWndEx::OnMenuButtonToolHitTest.md)|Chiamato dal framework quando un oggetto di [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)elabora un messaggio di `WM_NCHITTEST`.|  
|[CMDIFrameWndEx::OnMoveMiniFrame](../Topic/CMDIFrameWndEx::OnMoveMiniFrame.md)|Chiamato dal framework per spostare una finestra cornice piccola.|  
|[CMDIFrameWndEx::OnSetPreviewMode](../Topic/CMDIFrameWndEx::OnSetPreviewMode.md)|Imposta la modalità anteprima di stampa della finestra cornice principale dell'applicazione.  \(Override [CFrameWnd::OnSetPreviewMode](../Topic/CFrameWnd::OnSetPreviewMode.md)\).|  
|[CMDIFrameWndEx::OnShowCustomizePane](../Topic/CMDIFrameWndEx::OnShowCustomizePane.md)|Chiamato dal framework quando un rapido personalizzare il riquadro è attivato.|  
|[CMDIFrameWndEx::OnShowMDITabContextMenu](../Topic/CMDIFrameWndEx::OnShowMDITabContextMenu.md)|Chiamato dal framework quando un menu di scelta rapida deve essere visualizzato in una delle schede.  \(Valido per i gruppi a schede MDI solo\).|  
|[CMDIFrameWndEx::OnShowPanes](../Topic/CMDIFrameWndEx::OnShowPanes.md)|Chiamato dal framework per visualizzare o nascondere i riquadri.|  
|[CMDIFrameWndEx::OnShowPopupMenu](../Topic/CMDIFrameWndEx::OnShowPopupMenu.md)|Chiamato dal framework quando un menu di scelta rapida viene attivato.|  
|[CMDIFrameWndEx::OnSizeMDIClient](../Topic/CMDIFrameWndEx::OnSizeMDIClient.md)|Chiamato dal framework quando la dimensione della finestra client MDI viene modificato.|  
|[CMDIFrameWndEx::OnTearOffMenu](../Topic/CMDIFrameWndEx::OnTearOffMenu.md)|Chiamato dal framework quando un menu con una barra di sradicamento è attivato.|  
|[CMDIFrameWndEx::OnUpdateFrameMenu](../Topic/CMDIFrameWndEx::OnUpdateFrameMenu.md)|Chiamato dal framework per aggiornare il menu di frame.  \(Override `CMDIFrameWnd::OnUpdateFrameMenu`\).|  
|[CMDIFrameWndEx::PaneFromPoint](../Topic/CMDIFrameWndEx::PaneFromPoint.md)|Restituisce il riquadro ancorato contenente il punto specificato.|  
|`CMDIFrameWndEx::PreTranslateMessage`|Utilizzato da [CWinApp](../../mfc/reference/cwinapp-class.md) classe per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows di [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) e di [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955).  \(Override `CMDIFrameWnd::PreTranslateMessage`\).|  
|[CMDIFrameWndEx::RecalcLayout](../Topic/CMDIFrameWndEx::RecalcLayout.md)|Chiamato dal framework per ricalcolare il layout della finestra cornice.  \(Override [CFrameWnd::RecalcLayout](../Topic/CFrameWnd::RecalcLayout.md)\).|  
|[CMDIFrameWndEx::RemovePaneFromDockManager](../Topic/CMDIFrameWndEx::RemovePaneFromDockManager.md)|Annulla la registrazione di un riquadro e lo rimuove dall'amministratore di ancoraggio.|  
|[CMDIFrameWndEx::SaveMDIState](../Topic/CMDIFrameWndEx::SaveMDIState.md)|Salva il layout corrente dei gruppi MDI a schede e dell'elenco di documenti aperti in precedenza.|  
|[CMDIFrameWndEx::SetPrintPreviewFrame](../Topic/CMDIFrameWndEx::SetPrintPreviewFrame.md)|Imposta la finestra cornice anteprima di stampa.|  
|[CMDIFrameWndEx::SetupToolbarMenu](../Topic/CMDIFrameWndEx::SetupToolbarMenu.md)|Modifica di un oggetto della barra degli strumenti cercando elementi fittizi e sostituendoli con gli elementi definiti dall'utente specificati.|  
|[CMDIFrameWndEx::ShowFullScreen](../Topic/CMDIFrameWndEx::ShowFullScreen.md)|Passa la cornice principale dalla modalità normale nella modalità schermo intero.|  
|[CMDIFrameWndEx::ShowPane](../Topic/CMDIFrameWndEx::ShowPane.md)|Mostra o nasconde il riquadro specificato.|  
|[CMDIFrameWndEx::ShowWindowsDialog](../Topic/CMDIFrameWndEx::ShowWindowsDialog.md)|Crea una casella di [CMFCWindowsManagerDialog](../../mfc/reference/cmfcwindowsmanagerdialog-class.md) e aperta.|  
|[CMDIFrameWndEx::TabbedDocumentToControlBar](../Topic/CMDIFrameWndEx::TabbedDocumentToControlBar.md)|Converte il documento a schede specificato a un riquadro ancorato.|  
|[CMDIFrameWndEx::UpdateCaption](../Topic/CMDIFrameWndEx::UpdateCaption.md)|Chiamato dal framework per aggiornare la didascalia della struttura della finestra.|  
|[CMDIFrameWndEx::UpdateMDITabbedBarsIcons](../Topic/CMDIFrameWndEx::UpdateMDITabbedBarsIcons.md)|Imposta l'icona per ciascun riquadro catalogato MDI.|  
|[CMDIFrameWndEx::WinHelp](../Topic/CMDIFrameWndEx::WinHelp.md)|Chiamato dal framework per avviare la guida di applicazione o del contesto di WinHelp.  \(Override [CWnd::WinHelp](../Topic/CWnd::WinHelp.md)\).|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMDIFrameWndEx::m\_bCanCovertControlBarToMDIChild](../Topic/CMDIFrameWndEx::m_bCanCovertControlBarToMDIChild.md)|Determina se i riquadri ancorati possono essere convertiti nelle finestre figlio MDI.|  
|[CMDIFrameWndEx::m\_bDisableSetRedraw](../Topic/CMDIFrameWndEx::m_bDisableSetRedraw.md)|Abilita o disabilita ridisegnate l'ottimizzazione per le finestre figlio MDI.|  
  
## Note  
 Per sfruttare le funzionalità di personalizzazione estese in un'applicazione MDI, derivare la classe della finestra cornice MDI dell'applicazione da `CMDIFrameWndEx` anziché `CMDIFrameWnd`.  
  
## Esempio  
 Nell'esempio deriva una classe da `CMDIFrameWndEx`.  Nel frammento di codice proviene da [Esempio DrawClient: A oggetti OLE basata sulla barra multifunzione MFC che disegna applicazione](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#1](../../mfc/reference/codesnippet/CPP/cmdiframewndex-class_1.h)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMDIFrameWnd](../../mfc/reference/cmdiframewnd-class.md)  
  
 [CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)  
  
## Requisiti  
 **Intestazione:** afxMDIFrameWndEx.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMDIFrameWnd](../../mfc/reference/cframewnd-class.md)   
 [Classe CMDIChildWndEx](../../mfc/reference/cmdichildwndex-class.md)