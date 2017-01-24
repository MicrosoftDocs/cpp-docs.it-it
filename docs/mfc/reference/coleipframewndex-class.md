---
title: "COleIPFrameWndEx Class | Microsoft Docs"
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
  - "COleIPFrameWndEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleIPFrameWndEx class"
ms.assetid: ebff1560-a1eb-4854-af00-95d4a192bd55
caps.latest.revision: 34
caps.handback.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleIPFrameWndEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `COleIPFrameWndEx` implementa un contenitore OLE che supporta MFC. È necessario derivare la classe della finestra cornice sul posto per l'applicazione dalla classe `COleIPFrameWndEx`, anziché dalla classe [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md).  
  
## Sintassi  
  
```  
class COleIPFrameWndEx : public COleIPFrameWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWndEx::AddDockSite](../Topic/COleIPFrameWndEx::AddDockSite.md)||  
|[COleIPFrameWndEx::AddPane](../Topic/COleIPFrameWndEx::AddPane.md)||  
|[COleIPFrameWndEx::AdjustDockingLayout](../Topic/COleIPFrameWndEx::AdjustDockingLayout.md)||  
|[COleIPFrameWndEx::DockPane](../Topic/COleIPFrameWndEx::DockPane.md)||  
|[COleIPFrameWndEx::DockPaneLeftOf](../Topic/COleIPFrameWndEx::DockPaneLeftOf.md)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[COleIPFrameWndEx::EnableAutoHidePanes](../Topic/COleIPFrameWndEx::EnableAutoHidePanes.md)||  
|[COleIPFrameWndEx::EnableDocking](../Topic/COleIPFrameWndEx::EnableDocking.md)||  
|[COleIPFrameWndEx::EnablePaneMenu](../Topic/COleIPFrameWndEx::EnablePaneMenu.md)||  
|[COleIPFrameWndEx::GetActivePopup](../Topic/COleIPFrameWndEx::GetActivePopup.md)|Restituisce un puntatore al menu di scelta rapida attualmente visualizzato.|  
|[COleIPFrameWndEx::GetContainerFrameWindow](../Topic/COleIPFrameWndEx::GetContainerFrameWindow.md)||  
|[COleIPFrameWndEx::GetDefaultResId](../Topic/COleIPFrameWndEx::GetDefaultResId.md)|Restituisce l'ID risorsa della finestra cornice specificata quando è stata caricata la finestra.|  
|[COleIPFrameWndEx::GetDockFrame](../Topic/COleIPFrameWndEx::GetDockFrame.md)||  
|[COleIPFrameWndEx::GetDockingManager](../Topic/COleIPFrameWndEx::GetDockingManager.md)||  
|[COleIPFrameWndEx::GetMainFrame](../Topic/COleIPFrameWndEx::GetMainFrame.md)||  
|[COleIPFrameWndEx::GetMenuBar](../Topic/COleIPFrameWndEx::GetMenuBar.md)|Restituisce un puntatore all'oggetto della barra dei menu collegato alla finestra cornice.|  
|[COleIPFrameWndEx::GetPane](../Topic/COleIPFrameWndEx::GetPane.md)||  
|[COleIPFrameWndEx::GetTearOffBars](../Topic/COleIPFrameWndEx::GetTearOffBars.md)|Restituisce un elenco di oggetti del riquadro che si trovano in uno stato a comparsa.|  
|[COleIPFrameWndEx::GetToolbarButtonToolTipText](../Topic/COleIPFrameWndEx::GetToolbarButtonToolTipText.md)|Chiamato dal framework prima che venga visualizzata la descrizione comando per un pulsante.|  
|[COleIPFrameWndEx::InsertPane](../Topic/COleIPFrameWndEx::InsertPane.md)||  
|[COleIPFrameWndEx::IsMenuBarAvailable](../Topic/COleIPFrameWndEx::IsMenuBarAvailable.md)|Determina se il puntatore all'oggetto della barra dei menu non è `NULL`.|  
|[COleIPFrameWndEx::IsPointNearDockSite](../Topic/COleIPFrameWndEx::IsPointNearDockSite.md)||  
|[COleIPFrameWndEx::LoadFrame](../Topic/COleIPFrameWndEx::LoadFrame.md)|Esegue l'override di `COleIPFrameWnd::LoadFrame`.|  
|[COleIPFrameWndEx::OnCloseDockingPane](../Topic/COleIPFrameWndEx::OnCloseDockingPane.md)||  
|[COleIPFrameWndEx::OnCloseMiniFrame](../Topic/COleIPFrameWndEx::OnCloseMiniFrame.md)||  
|[COleIPFrameWndEx::OnClosePopupMenu](../Topic/COleIPFrameWndEx::OnClosePopupMenu.md)|Chiamato dal framework quando un menu a comparsa attivo elabora un messaggio WM\_DESTROY.|  
|[COleIPFrameWndEx::OnCmdMsg](../Topic/COleIPFrameWndEx::OnCmdMsg.md)|Esegue l'override di `CFrameWnd::OnCmdMsg`.|  
|[COleIPFrameWndEx::OnDrawMenuImage](../Topic/COleIPFrameWndEx::OnDrawMenuImage.md)|Chiamato dal framework quando viene disegnata l'immagine associata a una voce di menu.|  
|[COleIPFrameWndEx::OnDrawMenuLogo](../Topic/COleIPFrameWndEx::OnDrawMenuLogo.md)|Chiamato dal framework quando un oggetto [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md) elabora un messaggio WM\_PAINT.|  
|[COleIPFrameWndEx::OnMenuButtonToolHitTest](../Topic/COleIPFrameWndEx::OnMenuButtonToolHitTest.md)|Chiamato dal framework quando un oggetto [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md) elabora un messaggio WM\_NCHITTEST.|  
|[COleIPFrameWndEx::OnMoveMiniFrame](../Topic/COleIPFrameWndEx::OnMoveMiniFrame.md)||  
|[COleIPFrameWndEx::OnSetPreviewMode](../Topic/COleIPFrameWndEx::OnSetPreviewMode.md)|Chiamare questa funzione membro per impostare la finestra cornice principale dell'applicazione nella modalità di anteprima di stampa ed e al di fuori di essa. Esegue l'override di [CFrameWnd::OnSetPreviewMode](../Topic/CFrameWnd::OnSetPreviewMode.md).|  
|[COleIPFrameWndEx::OnShowCustomizePane](../Topic/COleIPFrameWndEx::OnShowCustomizePane.md)||  
|[COleIPFrameWndEx::OnShowPanes](../Topic/COleIPFrameWndEx::OnShowPanes.md)||  
|[COleIPFrameWndEx::OnShowPopupMenu](../Topic/COleIPFrameWndEx::OnShowPopupMenu.md)|Chiamato dal framework durante l'attivazione di un menu a comparsa.|  
|[COleIPFrameWndEx::OnTearOffMenu](../Topic/COleIPFrameWndEx::OnTearOffMenu.md)|Chiamato dal framework durante l'attivazione di un menu con barra a comparsa.|  
|[COleIPFrameWndEx::PaneFromPoint](../Topic/COleIPFrameWndEx::PaneFromPoint.md)||  
|[COleIPFrameWndEx::PreTranslateMessage](../Topic/COleIPFrameWndEx::PreTranslateMessage.md)|Esegue l'override di `COleIPFrameWnd::PreTranslateMessage`.|  
|[COleIPFrameWndEx::RecalcLayout](../Topic/COleIPFrameWndEx::RecalcLayout.md)|Esegue l'override di `COleIPFrameWnd::RecalcLayout`.|  
|[COleIPFrameWndEx::RemovePaneFromDockManager](../Topic/COleIPFrameWndEx::RemovePaneFromDockManager.md)||  
|[COleIPFrameWndEx::SetDockState](../Topic/COleIPFrameWndEx::SetDockState.md)|Si applica lo stato di ancoraggio specificato ai pannelli che appartengono alla finestra cornice.|  
|[COleIPFrameWndEx::SetupToolbarMenu](../Topic/COleIPFrameWndEx::SetupToolbarMenu.md)|Modifica un oggetto barra degli strumenti cercando elementi fittizi e sostituendoli con gli elementi definiti dall'utente specificati.|  
|[COleIPFrameWndEx::ShowPane](../Topic/COleIPFrameWndEx::ShowPane.md)||  
|[COleIPFrameWndEx::WinHelp](../Topic/COleIPFrameWndEx::WinHelp.md)|Chiamato dal framework per avviare l'applicazione WinHelp o la Guida sensibile al contesto.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleIPFrameWndEx::InitUserToobars](../Topic/COleIPFrameWndEx::InitUserToobars.md)|Indica al framework di inizializzare un intervallo di ID dei controlli assegnati alle barre degli strumenti definite dall'utente.|  
  
## Esempio  
 L'esempio seguente illustra come creare una sottoclasse per un'istanza della classe `COleIPFrameWndEx` e sostituirne il metodo. L'esempio illustra come sostituire i metodi `OnDestory`, `RepositionFrame`, `RecalcLayout` e `CalcWindowRect`. Questo frammento di codice fa parte dell'[esempio di Word Pad](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_WordPad#1](../../mfc/reference/codesnippet/CPP/coleipframewndex-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md)  
  
 [COleIPFrameWndEx](../../mfc/reference/coleipframewndex-class.md)  
  
## Requisiti  
 **Intestazione:** afxoleipframewndex.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md)   
 [Classe CMDIFrameWndEx](../../mfc/reference/cmdiframewndex-class.md)