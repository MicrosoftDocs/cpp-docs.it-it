---
title: "CDockingPanesRow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDockingPanesRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDockingPanesRow class"
ms.assetid: e7a17832-0ebb-4bce-b799-cec9b60f76fe
caps.latest.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 27
---
# CDockingPanesRow Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce un elenco dei riquadri inseriti nella stessa riga orizzontale o verticale \(colonna\) di un sito di ancoraggio.  
  
## Sintassi  
  
```  
class CDockingPanesRow : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CDockingPanesRow::CDockingPanesRow`|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDockingPanesRow::AddPane](../Topic/CDockingPanesRow::AddPane.md)||  
|[CDockingPanesRow::AddPaneFromRow](../Topic/CDockingPanesRow::AddPaneFromRow.md)||  
|[CDockingPanesRow::ArrangePanes](../Topic/CDockingPanesRow::ArrangePanes.md)|Dispone i riquadri in una riga in base ai parametri di margine e spaziatura specificati.|  
|[CDockingPanesRow::CalcFixedLayout](../Topic/CDockingPanesRow::CalcFixedLayout.md)||  
|[CDockingPanesRow::Create](../Topic/CDockingPanesRow::Create.md)||  
|[CDockingPanesRow::ExpandStretchedPanes](../Topic/CDockingPanesRow::ExpandStretchedPanes.md)||  
|[CDockingPanesRow::ExpandStretchedPanesRect](../Topic/CDockingPanesRow::ExpandStretchedPanesRect.md)||  
|[CDockingPanesRow::FixupVirtualRects](../Topic/CDockingPanesRow::FixupVirtualRects.md)||  
|[CDockingPanesRow::GetAvailableLength](../Topic/CDockingPanesRow::GetAvailableLength.md)||  
|[CDockingPanesRow::GetAvailableSpace](../Topic/CDockingPanesRow::GetAvailableSpace.md)||  
|[CDockingPanesRow::GetClientRect](../Topic/CDockingPanesRow::GetClientRect.md)||  
|[CDockingPanesRow::GetDockSite](../Topic/CDockingPanesRow::GetDockSite.md)||  
|[CDockingPanesRow::GetExtraSpace](../Topic/CDockingPanesRow::GetExtraSpace.md)||  
|[CDockingPanesRow::GetGroupFromPane](../Topic/CDockingPanesRow::GetGroupFromPane.md)||  
|[CDockingPanesRow::GetID](../Topic/CDockingPanesRow::GetID.md)||  
|[CDockingPanesRow::GetMaxPaneSize](../Topic/CDockingPanesRow::GetMaxPaneSize.md)||  
|[CDockingPanesRow::GetPaneCount](../Topic/CDockingPanesRow::GetPaneCount.md)||  
|[CDockingPanesRow::GetPaneList](../Topic/CDockingPanesRow::GetPaneList.md)||  
|[CDockingPanesRow::GetRowAlignment](../Topic/CDockingPanesRow::GetRowAlignment.md)||  
|[CDockingPanesRow::GetRowHeight](../Topic/CDockingPanesRow::GetRowHeight.md)||  
|[CDockingPanesRow::GetRowOffset](../Topic/CDockingPanesRow::GetRowOffset.md)||  
|[CDockingPanesRow::GetVisibleCount](../Topic/CDockingPanesRow::GetVisibleCount.md)||  
|[CDockingPanesRow::GetWindowRect](../Topic/CDockingPanesRow::GetWindowRect.md)||  
|[CDockingPanesRow::HasPane](../Topic/CDockingPanesRow::HasPane.md)||  
|[CDockingPanesRow::IsEmpty](../Topic/CDockingPanesRow::IsEmpty.md)||  
|[CDockingPanesRow::IsExclusiveRow](../Topic/CDockingPanesRow::IsExclusiveRow.md)||  
|[CDockingPanesRow::IsHorizontal](../Topic/CDockingPanesRow::IsHorizontal.md)||  
|[CDockingPanesRow::IsVisible](../Topic/CDockingPanesRow::IsVisible.md)||  
|[CDockingPanesRow::Move](../Topic/CDockingPanesRow::Move.md)||  
|[CDockingPanesRow::MovePane](../Topic/CDockingPanesRow::MovePane.md)||  
|[CDockingPanesRow::OnResizePane](../Topic/CDockingPanesRow::OnResizePane.md)||  
|[CDockingPanesRow::RedrawAll](../Topic/CDockingPanesRow::RedrawAll.md)||  
|[CDockingPanesRow::RemovePane](../Topic/CDockingPanesRow::RemovePane.md)||  
|[CDockingPanesRow::ReplacePane](../Topic/CDockingPanesRow::ReplacePane.md)||  
|[CDockingPanesRow::RepositionPanes](../Topic/CDockingPanesRow::RepositionPanes.md)||  
|[CDockingPanesRow::Resize](../Topic/CDockingPanesRow::Resize.md)||  
|[CDockingPanesRow::ResizeByPaneDivider](../Topic/CDockingPanesRow::ResizeByPaneDivider.md)||  
|[CDockingPanesRow::ScreenToClient](../Topic/CDockingPanesRow::ScreenToClient.md)||  
|[CDockingPanesRow::SetExtra](../Topic/CDockingPanesRow::SetExtra.md)||  
|[CDockingPanesRow::ShowDockSiteRow](../Topic/CDockingPanesRow::ShowDockSiteRow.md)||  
|[CDockingPanesRow::ShowPane](../Topic/CDockingPanesRow::ShowPane.md)||  
|[CDockingPanesRow::UpdateVisibleState](../Topic/CDockingPanesRow::UpdateVisibleState.md)||  
  
## Note  
 Gli oggetti `CDockingPanesRow` vengono creati internamente dagli oggetti del sito di ancoraggio.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come chiamare un oggetto `CDockingPanesRow` da un oggetto `CMFCAutoHideBar`.  
  
 [!code-cpp[NVC_MFC_RibbonApp#26](../../mfc/reference/codesnippet/CPP/cdockingpanesrow-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDockingPanesRow](../../mfc/reference/cdockingpanesrow-class.md)  
  
## Requisiti  
 **Intestazione:** afxDockingPanesRow.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)   
 [CPane Class](../../mfc/reference/cpane-class.md)