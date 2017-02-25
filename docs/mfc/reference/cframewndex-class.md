---
title: "CFrameWndEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFrameWndEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFrameWndEx class"
ms.assetid: 5830aca8-4a21-4f31-91f1-dd5477ffcc8d
caps.latest.revision: 39
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 41
---
# CFrameWndEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa la funzionalità di interfaccia a documento singolo \(SDI\) di Windows è sovrapposto o finestra cornice popup e fornisce membri per gestire la finestra.  Estende la classe [CFrameWnd](../../mfc/reference/cframewnd-class.md).  
  
## Sintassi  
  
```  
class CFrameWndEx : public CFrameWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFrameWndEx::ActiveItemRecalcLayout](../Topic/CFrameWndEx::ActiveItemRecalcLayout.md)|Regola il layout dell'elemento client OLE e dell'area client di frame.|  
|`CFrameWndEx::AddDockSite`|Questo metodo non viene utilizzato.|  
|[CFrameWndEx::AddPane](../Topic/CFrameWndEx::AddPane.md)|Registra una barra di controllo con l'amministratore di ancoraggio.|  
|[CFrameWndEx::AdjustDockingLayout](../Topic/CFrameWndEx::AdjustDockingLayout.md)|Ricalcola il layout dei riquadri che sono ancorati alla finestra cornice.|  
|[CFrameWndEx::DelayUpdateFrameMenu](../Topic/CFrameWndEx::DelayUpdateFrameMenu.md)|Imposta il menu e quindi gli aggiornamenti del frame durante l'elaborazione di comando è inattiva.|  
|[CFrameWndEx::DockPane](../Topic/CFrameWndEx::DockPane.md)|Nuovamente il riquadro specificato alla finestra cornice.|  
|[CFrameWndEx::DockPaneLeftOf](../Topic/CFrameWndEx::DockPaneLeftOf.md)|Ancoraggio il riquadro a sinistra di un altro riquadro.|  
|[CFrameWndEx::EnableAutoHidePanes](../Topic/CFrameWndEx::EnableAutoHidePanes.md)|Attiva la modalità nascondi automaticamente per i riquadri quando vengono ancorati ai lati indicati della finestra cornice principale.|  
|[CFrameWndEx::EnableDocking](../Topic/CFrameWndEx::EnableDocking.md)|Consente l'ancoraggio dei riquadri che appartengono alla finestra cornice.|  
|[CFrameWndEx::EnableFullScreenMainMenu](../Topic/CFrameWndEx::EnableFullScreenMainMenu.md)|Mostra o nasconde il menu principale in una modalità schermo intero.|  
|[CFrameWndEx::EnableFullScreenMode](../Topic/CFrameWndEx::EnableFullScreenMode.md)|Attiva la modalità schermo intero per la finestra cornice.|  
|[CFrameWndEx::EnableLoadDockState](../Topic/CFrameWndEx::EnableLoadDockState.md)|Abilita o disabilita il caricamento dello stato di ancoraggio.|  
|[CFrameWndEx::EnablePaneMenu](../Topic/CFrameWndEx::EnablePaneMenu.md)|Abilita o disabilita la gestione automatica dei menu del riquadro.|  
|[CFrameWndEx::GetActivePopup](../Topic/CFrameWndEx::GetActivePopup.md)|Restituisce un puntatore al menu di scelta rapida attualmente visualizzate.|  
|[CFrameWndEx::GetDefaultResId](../Topic/CFrameWndEx::GetDefaultResId.md)|Restituisce l'id della risorsa specificata quando il framework caricare la finestra cornice.|  
|[CFrameWndEx::GetDockingManager](../Topic/CFrameWndEx::GetDockingManager.md)|Recupera l'oggetto [CDockingManager Class](../../mfc/reference/cdockingmanager-class.md) per la finestra cornice.|  
|[CFrameWndEx::GetMenuBar](../Topic/CFrameWndEx::GetMenuBar.md)|Restituisce un puntatore a un oggetto barra dei menu collegato alla finestra cornice.|  
|[CFrameWndEx::GetPane](../Topic/CFrameWndEx::GetPane.md)|Restituisce un puntatore al riquadro con l'id specificato|  
|[CFrameWndEx::GetRibbonBar](../Topic/CFrameWndEx::GetRibbonBar.md)|Recupera il controllo della barra multifunzione per il frame.|  
|[CFrameWndEx::GetTearOffBars](../Topic/CFrameWndEx::GetTearOffBars.md)|Restituisce un elenco di oggetti riquadro che si trovano nello stato di sradicamento.|  
|[CFrameWndEx::GetToolbarButtonToolTipText](../Topic/CFrameWndEx::GetToolbarButtonToolTipText.md)|Chiamato dal framework quando l'applicazione visualizza la descrizione comandi per un pulsante della barra degli strumenti.|  
|[CFrameWndEx::InsertPane](../Topic/CFrameWndEx::InsertPane.md)|Registra un riquadro con l'amministratore di ancoraggio.|  
|[CFrameWndEx::IsFullScreen](../Topic/CFrameWndEx::IsFullScreen.md)|Determina se la finestra cornice in modalità schermo intero.|  
|[CFrameWndEx::IsMenuBarAvailable](../Topic/CFrameWndEx::IsMenuBarAvailable.md)|Determina se il puntatore all'oggetto barra dei menu è valido.|  
|[CFrameWndEx::IsPointNearDockSite](../Topic/CFrameWndEx::IsPointNearDockSite.md)|Indica se il punto si trova in una zona di allineamento.|  
|[CFrameWndEx::IsPrintPreview](../Topic/CFrameWndEx::IsPrintPreview.md)|Indica se la finestra cornice in modalità anteprima di stampa.|  
|[CFrameWndEx::LoadFrame](../Topic/CFrameWndEx::LoadFrame.md)|Questo metodo viene chiamato dopo la costruzione per creare la finestra cornice e per caricare le risorse.|  
|[CFrameWndEx::NegotiateBorderSpace](../Topic/CFrameWndEx::NegotiateBorderSpace.md)|Negoziazione client del bordo di risorse OLE.|  
|[CFrameWndEx::OnActivate](../Topic/CFrameWndEx::OnActivate.md)|Il framework chiama questo metodo quando l'input viene passato a o a partire dal frame.|  
|[CFrameWndEx::OnActivateApp](../Topic/CFrameWndEx::OnActivateApp.md)|Chiamato dal framework quando l'applicazione viene selezionata o deselezionata.|  
|[CFrameWndEx::OnChangeVisualManager](../Topic/CFrameWndEx::OnChangeVisualManager.md)|Chiamato dal framework quando una modifica al frame richiede una modifica al gestore visualizzazione.|  
|[CFrameWndEx::OnClose](../Topic/CFrameWndEx::OnClose.md)|Il framework chiama questo metodo per chiudere il frame.|  
|[CFrameWndEx::OnCloseDockingPane](../Topic/CFrameWndEx::OnCloseDockingPane.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Chiudi** in un riquadro ancorato.|  
|[CFrameWndEx::OnCloseMiniFrame](../Topic/CFrameWndEx::OnCloseMiniFrame.md)|Chiamato dal framework quando l'utente fa clic sul pulsante **Chiudi** su una mini finestra cornice mobile.|  
|[CFrameWndEx::OnClosePopupMenu](../Topic/CFrameWndEx::OnClosePopupMenu.md)|Chiamato dal framework quando un menu di scelta rapida attivo elabora un messaggio di WM\_DESTROY.|  
|[CFrameWndEx::OnCmdMsg](../Topic/CFrameWndEx::OnCmdMsg.md)|Invia i messaggi di comando.|  
|[CFrameWndEx::OnContextHelp](../Topic/CFrameWndEx::OnContextHelp.md)|Chiamato dal framework al contesto di visualizzazione è correlato la guida.|  
|[CFrameWndEx::OnCreate](../Topic/CFrameWndEx::OnCreate.md)|Chiamato dal framework dopo il frame viene creato.|  
|[CFrameWndEx::OnDestroy](../Topic/CFrameWndEx::OnDestroy.md)|Chiamato dal framework quando il frame viene eliminato.|  
|[CFrameWndEx::OnDrawMenuImage](../Topic/CFrameWndEx::OnDrawMenuImage.md)|Chiamato dal framework quando l'applicazione consente di disegnare l'immagine associata a una voce di menu.|  
|[CFrameWndEx::OnDrawMenuLogo](../Topic/CFrameWndEx::OnDrawMenuLogo.md)|Chiamato dal framework quando un oggetto `CMFCPopupMenu` elabora un messaggio [WM\_PAINT](http://msdn.microsoft.com/library/windows/desktop/dd145213).|  
|[CFrameWndEx::OnDWMCompositionChanged](../Topic/CFrameWndEx::OnDWMCompositionChanged.md)|Chiamato dal framework quando la composizione di \(DWM\) di Gestione finestre desktop è stata abilitata o disabilitata.|  
|[CFrameWndEx::OnExitSizeMove](../Topic/CFrameWndEx::OnExitSizeMove.md)|Chiamato dal framework quando il frame smette di spostare o ridimensionare.|  
|[CFrameWndEx::OnGetMinMaxInfo](../Topic/CFrameWndEx::OnGetMinMaxInfo.md)|Chiamato dal framework quando il frame viene ridimensionato per impostare i limiti di dimensioni della finestra.|  
|[CFrameWndEx::OnIdleUpdateCmdUI](../Topic/CFrameWndEx::OnIdleUpdateCmdUI.md)|Chiamato dal framework per aggiornare la visualizzazione del frame durante l'elaborazione di comando è inattiva.|  
|[CFrameWndEx::OnLButtonDown](../Topic/CFrameWndEx::OnLButtonDown.md)|Il framework chiama questo metodo quando viene premuto il pulsante sinistro del mouse.|  
|[CFrameWndEx::OnLButtonUp](../Topic/CFrameWndEx::OnLButtonUp.md)|Il framework chiama questo metodo quando l'utente rilascia il pulsante sinistro del mouse.|  
|[CFrameWndEx::OnMenuButtonToolHitTest](../Topic/CFrameWndEx::OnMenuButtonToolHitTest.md)|Chiamato dal framework quando un oggetto `CMFCToolBarButton` elabora un messaggio `WM_NCHITTEST`.|  
|[CFrameWndEx::OnMenuChar](../Topic/CFrameWndEx::OnMenuChar.md)|Chiamato dal framework quando un menu visualizzati e dall'utente preme un tasto non corrisponde a un comando.|  
|[CFrameWndEx::OnMouseMove](../Topic/CFrameWndEx::OnMouseMove.md)|Il framework chiama questo metodo quando il puntatore viene spostato.|  
|[CFrameWndEx::OnMoveMiniFrame](../Topic/CFrameWndEx::OnMoveMiniFrame.md)|Chiamato dal framework quando una finestra del riquadro viene spostato.|  
|[CFrameWndEx::OnNcActivate](../Topic/CFrameWndEx::OnNcActivate.md)|Chiamato dal framework quando l'area non client del frame ridisegnare per indicare una modifica nello stato attivo.|  
|[CFrameWndEx::OnNcCalcSize](../Topic/CFrameWndEx::OnNcCalcSize.md)|Chiamato dal framework quando la dimensione e la posizione dell'area client devono essere calcolate.|  
|[CFrameWndEx::OnNcHitTest](../Topic/CFrameWndEx::OnNcHitTest.md)|Chiamato dal framework quando il puntatore viene spostato oppure quando si preme un pulsante del mouse o rilasciato.|  
|[CFrameWndEx::OnNcMouseMove](../Topic/CFrameWndEx::OnNcMouseMove.md)|Chiamato dal framework quando il puntatore viene spostato in un'altra area non client.|  
|[CFrameWndEx::OnNcPaint](../Topic/CFrameWndEx::OnNcPaint.md)|Chiamato dal framework quando l'area non client deve essere disegnato.|  
|[CFrameWndEx::OnPaneCheck](../Topic/CFrameWndEx::OnPaneCheck.md)|Chiamato dal framework per controllare la visibilità di un riquadro.|  
|[CFrameWndEx::OnPostPreviewFrame](../Topic/CFrameWndEx::OnPostPreviewFrame.md)|Chiamato dal framework quando l'utente ha modificato la modalità anteprima di stampa.|  
|[CFrameWndEx::OnPowerBroadcast](../Topic/CFrameWndEx::OnPowerBroadcast.md)|Chiamato dal framework quando un evento di risparmio energia disponibili si verifica.|  
|[CFrameWndEx::OnSetMenu](../Topic/CFrameWndEx::OnSetMenu.md)|Chiamato dal framework per sostituire il menu della finestra cornice.|  
|[CFrameWndEx::OnSetPreviewMode](../Topic/CFrameWndEx::OnSetPreviewMode.md)|Chiamato dal framework per impostare la modalità anteprima di stampa per il frame.|  
|[CFrameWndEx::OnSetText](../Topic/CFrameWndEx::OnSetText.md)|Chiamato dal framework per impostare il testo di una finestra.|  
|[CFrameWndEx::OnShowCustomizePane](../Topic/CFrameWndEx::OnShowCustomizePane.md)|Chiamato dal framework quando un rapido personalizzare il riquadro è abilitato.|  
|[CFrameWndEx::OnShowPanes](../Topic/CFrameWndEx::OnShowPanes.md)|Chiamato dal framework per visualizzare o nascondere i riquadri.|  
|[CFrameWndEx::OnShowPopupMenu](../Topic/CFrameWndEx::OnShowPopupMenu.md)|Chiamato dal framework quando un menu di scelta rapida viene abilitato.|  
|[CFrameWndEx::OnSize](../Topic/CFrameWndEx::OnSize.md)|Il framework chiama il metodo dopo le modifiche della dimensione del frame.|  
|[CFrameWndEx::OnSizing](../Topic/CFrameWndEx::OnSizing.md)|Il framework chiama questo metodo quando l'utente ridimensiona il frame.|  
|[CFrameWndEx::OnSysColorChange](../Topic/CFrameWndEx::OnSysColorChange.md)|Chiamato dal framework quando la modifica di colori di sistema.|  
|[CFrameWndEx::OnTearOffMenu](../Topic/CFrameWndEx::OnTearOffMenu.md)|Chiamato dal framework quando un menu con una barra di sradicamento è abilitato.|  
|[CFrameWndEx::OnToolbarContextMenu](../Topic/CFrameWndEx::OnToolbarContextMenu.md)|Chiamato dal framework per compilare un menu di scelta rapida della barra degli strumenti.|  
|[CFrameWndEx::OnToolbarCreateNew](../Topic/CFrameWndEx::OnToolbarCreateNew.md)|Il framework chiama questo metodo per creare una nuova barra degli strumenti.|  
|[CFrameWndEx::OnToolbarDelete](../Topic/CFrameWndEx::OnToolbarDelete.md)|Chiamato dal framework quando una barra degli strumenti viene eliminato.|  
|[CFrameWndEx::OnUpdateFrameMenu](../Topic/CFrameWndEx::OnUpdateFrameMenu.md)|Chiamato dal framework per impostare il menu di frame.|  
|[CFrameWndEx::OnUpdateFrameTitle](../Topic/CFrameWndEx::OnUpdateFrameTitle.md)|Il framework chiama questo metodo per aggiornare la didascalia della finestra cornice.|  
|[CFrameWndEx::OnUpdatePaneMenu](../Topic/CFrameWndEx::OnUpdatePaneMenu.md)|Chiamato dal framework per aggiornare il menu del riquadro.|  
|[CFrameWndEx::OnWindowPosChanged](../Topic/CFrameWndEx::OnWindowPosChanged.md)|Chiamato dal framework quando la dimensione di frame, il percorso, o l'ordine z di modifica a causa di una chiamata a un metodo di gestione della finestra.|  
|[CFrameWndEx::PaneFromPoint](../Topic/CFrameWndEx::PaneFromPoint.md)|Restituisce il riquadro ancorato contenente il punto specificato.|  
|[CFrameWndEx::PreTranslateMessage](../Topic/CFrameWndEx::PreTranslateMessage.md)|Messaggi specifici della finestra di handle prima che vengano inviati.|  
|[CFrameWndEx::RecalcLayout](../Topic/CFrameWndEx::RecalcLayout.md)|Regola il layout del frame e le relative finestre figlio.|  
|[CFrameWndEx::RemovePaneFromDockManager](../Topic/CFrameWndEx::RemovePaneFromDockManager.md)|Annulla la registrazione di un riquadro e lo rimuove dall'interno dell'amministratore di ancoraggio.|  
|[CFrameWndEx::SetDockState](../Topic/CFrameWndEx::SetDockState.md)|Ripristina il layout di ancoraggio lo stato di ancoraggio memorizzato nel Registro di sistema.|  
|[CFrameWndEx::SetPrintPreviewFrame](../Topic/CFrameWndEx::SetPrintPreviewFrame.md)|Imposta la finestra cornice anteprima di stampa.|  
|[CFrameWndEx::SetupToolbarMenu](../Topic/CFrameWndEx::SetupToolbarMenu.md)|Inserisce i controlli definiti dall'utente in un menu della barra degli strumenti.|  
|[CFrameWndEx::ShowFullScreen](../Topic/CFrameWndEx::ShowFullScreen.md)|Passa la cornice principale tra le modalità schermo intero e normali.|  
|[CFrameWndEx::ShowPane](../Topic/CFrameWndEx::ShowPane.md)|Mostra o nasconde il riquadro specificato.|  
|[CFrameWndEx::UpdateCaption](../Topic/CFrameWndEx::UpdateCaption.md)|Chiamato dal framework per aggiornare la didascalia della struttura della finestra.|  
|[CFrameWndEx::WinHelp](../Topic/CFrameWndEx::WinHelp.md)|Richiamare l'applicazione `WinHelp` o la guida relativo contesto.|  
  
## Esempio  
 Nell'esempio seguente viene illustrato come ereditare una classe dalla classe `CFrameWndEx`.  Nell'esempio sono illustrate le firme del metodo nella sottoclasse e come eseguire l'override del metodo `OnShowPopupMenu`.  Questo frammento di codice fa parte [Esempio di cuscinetto di Word](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#3](../../mfc/reference/codesnippet/CPP/cframewndex-class_1.h)]  
[!code-cpp[NVC_MFC_WordPad#4](../../mfc/reference/codesnippet/CPP/cframewndex-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CFrameWndEx](../../mfc/reference/cframewndex-class.md)  
  
## Requisiti  
 **intestazione:** afxframewndex.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)