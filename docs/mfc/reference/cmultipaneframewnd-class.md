---
title: "CMultiPaneFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMultiPaneFrameWnd"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMultiPaneFrameWnd class"
ms.assetid: 989a548e-0d70-46b7-a513-8cf740e1be3e
caps.latest.revision: 36
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 38
---
# CMultiPaneFrameWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CMultiPaneFrameWnd` estende [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).  Può supportare più riquadri.  Anziché un singolo handle incorporate a una barra di controllo, `CMultiPaneFrameWnd` contiene un oggetto che consente all'utente per ancorare un `CMultiPaneFrameWnd` a un altro e per creare dinamicamente il mobile, più finestre a schede [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md).  
  
## Sintassi  
  
```  
class CMultiPaneFrameWnd : public CPaneFrameWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMultiPaneFrameWnd::AddPane](../Topic/CMultiPaneFrameWnd::AddPane.md)|Aggiunge un riquadro.  \(Override [CPaneFrameWnd::AddPane](../Topic/CPaneFrameWnd::AddPane.md)\).|  
|[CMultiPaneFrameWnd::AddRecentPane](../Topic/CMultiPaneFrameWnd::AddRecentPane.md)||  
|[CMultiPaneFrameWnd::AdjustLayout](../Topic/CMultiPaneFrameWnd::AdjustLayout.md)|Regola il layout della finestra cornice piccola.  \(Override [CPaneFrameWnd::AdjustLayout](../Topic/CPaneFrameWnd::AdjustLayout.md)\).|  
|[CMultiPaneFrameWnd::AdjustPaneFrames](../Topic/CMultiPaneFrameWnd::AdjustPaneFrames.md)|\(Override [CPaneFrameWnd::AdjustPaneFrames](../Topic/CPaneFrameWnd::AdjustPaneFrames.md)\).|  
|[CMultiPaneFrameWnd::CalcExpectedDockedRect](../Topic/CMultiPaneFrameWnd::CalcExpectedDockedRect.md)|Calcola il rettangolo previsto di una finestra ancorata.  \(Override [CPaneFrameWnd::CalcExpectedDockedRect](../Topic/CPaneFrameWnd::CalcExpectedDockedRect.md)\).|  
|[CMultiPaneFrameWnd::CanBeAttached](../Topic/CMultiPaneFrameWnd::CanBeAttached.md)|Determina se il riquadro corrente può essere ancorata a un altro riquadro o finestra cornice.  \(Override [CPaneFrameWnd::CanBeAttached](../Topic/CPaneFrameWnd::CanBeAttached.md)\).|  
|[CMultiPaneFrameWnd::CanBeDockedToPane](../Topic/CMultiPaneFrameWnd::CanBeDockedToPane.md)|Determina se la finestra cornice piccola può essere ancorata a un riquadro.  \(Override [CPaneFrameWnd::CanBeDockedToPane](../Topic/CPaneFrameWnd::CanBeDockedToPane.md)\).|  
|[CMultiPaneFrameWnd::CheckGripperVisibility](../Topic/CMultiPaneFrameWnd::CheckGripperVisibility.md)|\(Override [CPaneFrameWnd::CheckGripperVisibility](../Topic/CPaneFrameWnd::CheckGripperVisibility.md)\).|  
|[CMultiPaneFrameWnd::CloseMiniFrame](../Topic/CMultiPaneFrameWnd::CloseMiniFrame.md)|\(Override `CPaneFrameWnd::CloseMiniFrame`\).|  
|[CMultiPaneFrameWnd::ConvertToTabbedDocument](../Topic/CMultiPaneFrameWnd::ConvertToTabbedDocument.md)|Converte il riquadro a un documento a schede.  \(Override [CPaneFrameWnd::ConvertToTabbedDocument](../Topic/CPaneFrameWnd::ConvertToTabbedDocument.md)\).|  
|[CMultiPaneFrameWnd::DockFrame](../Topic/CMultiPaneFrameWnd::DockFrame.md)||  
|[CMultiPaneFrameWnd::DockPane](../Topic/CMultiPaneFrameWnd::DockPane.md)|Nuovamente il riquadro.  \(Override [CPaneFrameWnd::DockPane](../Topic/CPaneFrameWnd::DockPane.md)\).|  
|[CMultiPaneFrameWnd::DockRecentPaneToMainFrame](../Topic/CMultiPaneFrameWnd::DockRecentPaneToMainFrame.md)||  
|[CMultiPaneFrameWnd::GetCaptionText](../Topic/CMultiPaneFrameWnd::GetCaptionText.md)|Restituisce il testo della didascalia.  \(Override [CPaneFrameWnd::GetCaptionText](../Topic/CPaneFrameWnd::GetCaptionText.md)\).|  
|[CMultiPaneFrameWnd::GetPaneContainerManager](../Topic/CMultiPaneFrameWnd::GetPaneContainerManager.md)|Restituisce un riferimento all'oggetto interno dell'amministratore del contenitore.|  
|[CMultiPaneFrameWnd::GetFirstVisiblePane](../Topic/CMultiPaneFrameWnd::GetFirstVisiblePane.md)|Restituisce il primo riquadro visibile contenuto in una finestra cornice piccola.  \(Override [CPaneFrameWnd::GetFirstVisiblePane](../Topic/CPaneFrameWnd::GetFirstVisiblePane.md)\).|  
|[CMultiPaneFrameWnd::GetPane](../Topic/CMultiPaneFrameWnd::GetPane.md)|Restituisce un riquadro contenuto nella finestra cornice piccola.  \(Override [CPaneFrameWnd::GetPane](../Topic/CPaneFrameWnd::GetPane.md)\).|  
|[CMultiPaneFrameWnd::GetPaneCount](../Topic/CMultiPaneFrameWnd::GetPaneCount.md)|Restituisce il numero dei riquadri contenuti in una finestra cornice piccola.  \(Override [CPaneFrameWnd::GetPaneCount](../Topic/CPaneFrameWnd::GetPaneCount.md)\).|  
|[CMultiPaneFrameWnd::GetVisiblePaneCount](../Topic/CMultiPaneFrameWnd::GetVisiblePaneCount.md)|Restituisce il numero dei riquadri visibili contenuti in una finestra cornice piccola.  \(Override [CPaneFrameWnd::GetVisiblePaneCount](../Topic/CPaneFrameWnd::GetVisiblePaneCount.md)\).|  
|[CMultiPaneFrameWnd::InsertPane](../Topic/CMultiPaneFrameWnd::InsertPane.md)||  
|[CMultiPaneFrameWnd::LoadState](../Topic/CMultiPaneFrameWnd::LoadState.md)|Carica lo stato del riquadro dal Registro di sistema.  \(Override [CPaneFrameWnd::LoadState](../Topic/CPaneFrameWnd::LoadState.md)\).|  
|[CMultiPaneFrameWnd::OnDockToRecentPos](../Topic/CMultiPaneFrameWnd::OnDockToRecentPos.md)|Nuovamente la finestra cornice piccola nella posizione più recente.  \(Override [CPaneFrameWnd::OnDockToRecentPos](../Topic/CPaneFrameWnd::OnDockToRecentPos.md)\).|  
|[CMultiPaneFrameWnd::OnKillRollUpTimer](../Topic/CMultiPaneFrameWnd::OnKillRollUpTimer.md)|Arresta il timer di rollup.  \(Override [CPaneFrameWnd::OnKillRollUpTimer](../Topic/CPaneFrameWnd::OnKillRollUpTimer.md)\).|  
|[CMultiPaneFrameWnd::OnPaneRecalcLayout](../Topic/CMultiPaneFrameWnd::OnPaneRecalcLayout.md)|Regola il layout di riquadro in una finestra cornice piccola.  \(Override [CPaneFrameWnd::OnPaneRecalcLayout](../Topic/CPaneFrameWnd::OnPaneRecalcLayout.md)\).|  
|[CMultiPaneFrameWnd::OnSetRollUpTimer](../Topic/CMultiPaneFrameWnd::OnSetRollUpTimer.md)|Imposta il timer di rollup.  \(Override [CPaneFrameWnd::OnSetRollUpTimer](../Topic/CPaneFrameWnd::OnSetRollUpTimer.md)\).|  
|[CMultiPaneFrameWnd::OnShowPane](../Topic/CMultiPaneFrameWnd::OnShowPane.md)|Chiamato dal framework quando un riquadro della finestra cornice piccola è nascosto o visualizzare.  \(Override [CPaneFrameWnd::OnShowPane](../Topic/CPaneFrameWnd::OnShowPane.md)\).|  
|[CMultiPaneFrameWnd::PaneFromPoint](../Topic/CMultiPaneFrameWnd::PaneFromPoint.md)|Restituisce un riquadro se contiene un punto fornita dall'utente in una finestra cornice piccola.  \(Override [CPaneFrameWnd::PaneFromPoint](../Topic/CPaneFrameWnd::PaneFromPoint.md)\).|  
|[CMultiPaneFrameWnd::RemoveNonValidPanes](../Topic/CMultiPaneFrameWnd::RemoveNonValidPanes.md)|Chiamato dal framework per rimuovere i riquadri non validi.  \(Override [CPaneFrameWnd::RemoveNonValidPanes](../Topic/CPaneFrameWnd::RemoveNonValidPanes.md)\).|  
|[CMultiPaneFrameWnd::RemovePane](../Topic/CMultiPaneFrameWnd::RemovePane.md)|Rimuove un riquadro della finestra cornice piccola.  \(Override [CPaneFrameWnd::RemovePane](../Topic/CPaneFrameWnd::RemovePane.md)\).|  
|[CMultiPaneFrameWnd::ReplacePane](../Topic/CMultiPaneFrameWnd::ReplacePane.md)|Sostituisce un riquadro con un altro.  \(Override [CPaneFrameWnd::ReplacePane](../Topic/CPaneFrameWnd::ReplacePane.md)\).|  
|[CMultiPaneFrameWnd::SaveState](../Topic/CMultiPaneFrameWnd::SaveState.md)|Salvare lo stato del riquadro al Registro di sistema.  \(Override [CPaneFrameWnd::SaveState](../Topic/CPaneFrameWnd::SaveState.md)\).|  
|[CMultiPaneFrameWnd::Serialize](../Topic/CMultiPaneFrameWnd::Serialize.md)|\(Override `CPaneFrameWnd::Serialize`\).|  
|[CMultiPaneFrameWnd::SetDockState](../Topic/CMultiPaneFrameWnd::SetDockState.md)|Imposta lo stato di ancoraggio.  \(Override [CPaneFrameWnd::SetDockState](../Topic/CPaneFrameWnd::SetDockState.md)\).|  
|[CMultiPaneFrameWnd::SetLastFocusedPane](../Topic/CMultiPaneFrameWnd::SetLastFocusedPane.md)||  
|[CMultiPaneFrameWnd::SetPreDockState](../Topic/CMultiPaneFrameWnd::SetPreDockState.md)|Imposta lo stato predocking.  \(Override [CPaneFrameWnd::SetPreDockState](../Topic/CPaneFrameWnd::SetPreDockState.md)\).|  
|[CMultiPaneFrameWnd::StoreRecentDockSiteInfo](../Topic/CMultiPaneFrameWnd::StoreRecentDockSiteInfo.md)|\(Override [CPaneFrameWnd::StoreRecentDockSiteInfo](../Topic/CPaneFrameWnd::StoreRecentDockSiteInfo.md)\).|  
|[CMultiPaneFrameWnd::StoreRecentTabRelatedInfo](../Topic/CMultiPaneFrameWnd::StoreRecentTabRelatedInfo.md)|\(Override [CPaneFrameWnd::StoreRecentTabRelatedInfo](../Topic/CPaneFrameWnd::StoreRecentTabRelatedInfo.md)\).|  
  
## Note  
 La maggior parte dei metodi in questo l'override dei metodi della classe nella classe [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md).  
  
 Se un riquadro utilizza lo stile `AFX_CBRS_AUTO_ROLLUP` e ancoraggi utente al riquadro in una finestra cornice a più riquadri, l'utente può procedere nella finestra indipendentemente dalle impostazioni di stile degli altri riquadri ancorati.  
  
 Il framework crea automaticamente un oggetto `CMultiPaneFrameWnd` quando l'utente fa e un riquadro che utilizza lo stile `CBRS_FLOAT_MULTI`.  
  
 Per informazioni su derivare una classe dalla classe `CPaneFrameWnd` e crearla in modo dinamico, vedere [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un oggetto `CMultiPaneFrameWnd`.  Questo frammento di codice fa parte [Impostare l'esempio di dimensioni del riquadro](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#4](../../mfc/reference/codesnippet/CPP/cmultipaneframewnd-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)  
  
 [CMultiPaneFrameWnd](../../mfc/reference/cmultipaneframewnd-class.md)  
  
## Requisiti  
 **intestazione:** afxMultiPaneFrameWnd.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CPaneFrameWnd Class](../../mfc/reference/cpaneframewnd-class.md)