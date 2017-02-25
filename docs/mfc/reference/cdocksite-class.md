---
title: "CDockSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockSite"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockSite class"
ms.assetid: 0fcfff79-5f50-4281-b2de-a55653bbea40
caps.latest.revision: 28
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 30
---
# CDockSite Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Fornisce la funzionalità per disporre i riquadri che derivano dalla [CPane Class](../../mfc/reference/cpane-class.md) in set di righe.  
  
## Sintassi  
  
```  
class CDockSite: public CBasePane  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockSite::AddRow](../Topic/CDockSite::AddRow.md)||  
|[CDockSite::AdjustDockingLayout](../Topic/CDockSite::AdjustDockingLayout.md)|Esegue l'override di [CBasePane::AdjustDockingLayout](../Topic/CBasePane::AdjustDockingLayout.md).|  
|[CDockSite::AdjustLayout](../Topic/CDockSite::AdjustLayout.md)|Esegue l'override di [CBasePane::AdjustLayout](../Topic/CBasePane::AdjustLayout.md).|  
|[CDockSite::AlignDockSite](../Topic/CDockSite::AlignDockSite.md)||  
|[CDockSite::CalcFixedLayout](../Topic/CDockSite::CalcFixedLayout.md)|Esegue l'override di [CBasePane::CalcFixedLayout](../Topic/CBasePane::CalcFixedLayout.md).|  
|[CDockSite::CanAcceptPane](../Topic/CDockSite::CanAcceptPane.md)|Esegue l'override di [CBasePane::CanAcceptPane](../Topic/CBasePane::CanAcceptPane.md).|  
|[CDockSite::CreateEx](../Topic/CDockSite::CreateEx.md)|Esegue l'override di [CBasePane::CreateEx](../Topic/CBasePane::CreateEx.md).|  
|[CDockSite::CreateRow](../Topic/CDockSite::CreateRow.md)||  
|[CDockSite::DockPane](../Topic/CDockSite::DockPane.md)|Esegue l'override di [CBasePane::DockPane](../Topic/CBasePane::DockPane.md).|  
|[CDockSite::DoesAllowDynInsertBefore](../Topic/CDockSite::DoesAllowDynInsertBefore.md)|Esegue l'override di [CBasePane::DoesAllowDynInsertBefore](../Topic/CBasePane::DoesAllowDynInsertBefore.md).|  
|[CDockSite::FindRowIndex](../Topic/CDockSite::FindRowIndex.md)||  
|[CDockSite::FixupVirtualRects](../Topic/CDockSite::FixupVirtualRects.md)||  
|[CDockSite::GetDockSiteID](../Topic/CDockSite::GetDockSiteID.md)||  
|[CDockSite::GetDockSiteRowsList](../Topic/CDockSite::GetDockSiteRowsList.md)||  
|[CDockSite::IsAccessibilityCompatible](../Topic/CDockSite::IsAccessibilityCompatible.md)|Esegue l'override`CBasePane::IsAccessibilityCompatible`.|  
|[CDockSite::IsDragMode](../Topic/CDockSite::IsDragMode.md)||  
|[CDockSite::IsLastRow](../Topic/CDockSite::IsLastRow.md)||  
|[CDockSite::IsRectWithinDockSite](../Topic/CDockSite::IsRectWithinDockSite.md)||  
|[CDockSite::IsResizable](../Topic/CDockSite::IsResizable.md)|Esegue l'override di [CBasePane::IsResizable](../Topic/CBasePane::IsResizable.md).|  
|[CDockSite::MovePane](../Topic/CDockSite::MovePane.md)||  
|[CDockSite::OnInsertRow](../Topic/CDockSite::OnInsertRow.md)||  
|[CDockSite::OnRemoveRow](../Topic/CDockSite::OnRemoveRow.md)||  
|[CDockSite::OnResizeRow](../Topic/CDockSite::OnResizeRow.md)||  
|[CDockSite::OnSetWindowPos](../Topic/CDockSite::OnSetWindowPos.md)||  
|[CDockSite::OnShowRow](../Topic/CDockSite::OnShowRow.md)||  
|[CDockSite::OnSizeParent](../Topic/CDockSite::OnSizeParent.md)||  
|[CDockSite::PaneFromPoint](../Topic/CDockSite::PaneFromPoint.md)|Restituisce un riquadro ancorato nel sito di ancoraggio nel punto definito dal parametro specificato.|  
|[CDockSite::DockPaneLeftOf](../Topic/CDockSite::DockPaneLeftOf.md)|Ancora un riquadro a sinistra di un altro riquadro.|  
|[CDockSite::FindPaneByID](../Topic/CDockSite::FindPaneByID.md)|Restituisce il riquadro identificato dall'ID specificato.|  
|[CDockSite::GetPaneList](../Topic/CDockSite::GetPaneList.md)|Restituisce un elenco dei riquadri ancorati nel sito di ancoraggio.|  
|[CDockSite::RectSideFromPoint](../Topic/CDockSite::RectSideFromPoint.md)||  
|[CDockSite::RemovePane](../Topic/CDockSite::RemovePane.md)||  
|[CDockSite::RemoveRow](../Topic/CDockSite::RemoveRow.md)||  
|[CDockSite::ReplacePane](../Topic/CDockSite::ReplacePane.md)||  
|[CDockSite::RepositionPanes](../Topic/CDockSite::RepositionPanes.md)||  
|[CDockSite::ResizeDockSite](../Topic/CDockSite::ResizeDockSite.md)||  
|[CDockSite::ResizeRow](../Topic/CDockSite::ResizeRow.md)||  
|[CDockSite::ShowPane](../Topic/CDockSite::ShowPane.md)|Mostra il riquadro.|  
|[CDockSite::ShowRow](../Topic/CDockSite::ShowRow.md)||  
|[CDockSite::SwapRows](../Topic/CDockSite::SwapRows.md)||  
  
## Note  
 Il framework crea `CDockSite` oggetti automaticamente quando si chiama [CFrameWndEx::EnableDocking](../Topic/CFrameWndEx::EnableDocking.md).  Le finestre del sito di ancoraggio sono posizionate sul bordo dell'area client nella finestra cornice principale.  
  
 In genere non è necessario chiamare i servizi forniti dal sito di ancoraggio perché [CFrameWndEx Class](../../mfc/reference/cframewndex-class.md) gestisce questi servizi.  
  
## Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della classe `CDockSite`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#27](../../mfc/reference/codesnippet/CPP/cdocksite-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md) [CCmdTarget](../../mfc/reference/ccmdtarget-class.md) [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md) [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## Requisiti  
 **Intestazione:** afxDockSite.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CBasePane Class](../../mfc/reference/cbasepane-class.md)