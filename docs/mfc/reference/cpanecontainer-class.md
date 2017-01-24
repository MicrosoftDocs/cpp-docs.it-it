---
title: "CPaneContainer Class | Microsoft Docs"
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
  - "CPaneContainer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneContainer class"
ms.assetid: beb79e08-f611-4d66-ba04-053baa79bf86
caps.latest.revision: 32
caps.handback.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPaneContainer Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe `CPaneContainer` è un componente di base del modello di ancoraggio implementato da MFC.  Un oggetto di questa classe archivia i puntatori a due riquadri agganciati o a due istanze `CPaneContainer.` inoltre memorizza un puntatore al separatore che separa i riquadri \(o i contenitori\).  Impossibile annidare i contenitori nei contenitori, il framework può compilare una struttura ad albero binaria che rappresenta layout complessi di ancoraggio.  La radice della struttura ad albero binaria viene archiviata in un oggetto [CPaneContainerManager](../../mfc/reference/cpanecontainermanager-class.md).  
  
## Sintassi  
  
```  
class CPaneContainer : public CObject    
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneContainer::CPaneContainer](../Topic/CPaneContainer::CPaneContainer.md)|Costruttore predefinito.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneContainer::AddPane](../Topic/CPaneContainer::AddPane.md)||  
|[CPaneContainer::AddRef](../Topic/CPaneContainer::AddRef.md)||  
|[CPaneContainer::AddSubPaneContainer](../Topic/CPaneContainer::AddSubPaneContainer.md)||  
|[CPaneContainer::CalcAvailablePaneSpace](../Topic/CPaneContainer::CalcAvailablePaneSpace.md)||  
|[CPaneContainer::CalcAvailableSpace](../Topic/CPaneContainer::CalcAvailableSpace.md)||  
|[CPaneContainer::CalculateRecentSize](../Topic/CPaneContainer::CalculateRecentSize.md)||  
|[CPaneContainer::CheckPaneDividerVisibility](../Topic/CPaneContainer::CheckPaneDividerVisibility.md)||  
|[CPaneContainer::Copy](../Topic/CPaneContainer::Copy.md)||  
|[CPaneContainer::DeletePane](../Topic/CPaneContainer::DeletePane.md)||  
|[CPaneContainer::FindSubPaneContainer](../Topic/CPaneContainer::FindSubPaneContainer.md)||  
|[CPaneContainer::FindTabbedPane](../Topic/CPaneContainer::FindTabbedPane.md)||  
|[CPaneContainer::GetAssociatedSiblingPaneIDs](../Topic/CPaneContainer::GetAssociatedSiblingPaneIDs.md)||  
|[CPaneContainer::GetLeftPane](../Topic/CPaneContainer::GetLeftPane.md)||  
|[CPaneContainer::GetLeftPaneContainer](../Topic/CPaneContainer::GetLeftPaneContainer.md)||  
|[CPaneContainer::GetMinSize](../Topic/CPaneContainer::GetMinSize.md)||  
|[CPaneContainer::GetMinSizeLeft](../Topic/CPaneContainer::GetMinSizeLeft.md)||  
|[CPaneContainer::GetMinSizeRight](../Topic/CPaneContainer::GetMinSizeRight.md)||  
|[CPaneContainer::GetNodeCount](../Topic/CPaneContainer::GetNodeCount.md)||  
|[CPaneContainer::GetPaneDivider](../Topic/CPaneContainer::GetPaneDivider.md)||  
|[CPaneContainer::GetParentPaneContainer](../Topic/CPaneContainer::GetParentPaneContainer.md)||  
|[CPaneContainer::GetRecentPaneDividerRect](../Topic/CPaneContainer::GetRecentPaneDividerRect.md)||  
|[CPaneContainer::GetRecentPaneDividerStyle](../Topic/CPaneContainer::GetRecentPaneDividerStyle.md)||  
|[CPaneContainer::GetRecentPercent](../Topic/CPaneContainer::GetRecentPercent.md)||  
|[CPaneContainer::GetRefCount](../Topic/CPaneContainer::GetRefCount.md)||  
|[CPaneContainer::GetResizeStep](../Topic/CPaneContainer::GetResizeStep.md)||  
|[CPaneContainer::GetRightPane](../Topic/CPaneContainer::GetRightPane.md)||  
|[CPaneContainer::GetRightPaneContainer](../Topic/CPaneContainer::GetRightPaneContainer.md)||  
|[CPaneContainer::GetTotalReferenceCount](../Topic/CPaneContainer::GetTotalReferenceCount.md)||  
|[CPaneContainer::GetWindowRect](../Topic/CPaneContainer::GetWindowRect.md)||  
|[CPaneContainer::IsDisposed](../Topic/CPaneContainer::IsDisposed.md)||  
|[CPaneContainer::IsEmpty](../Topic/CPaneContainer::IsEmpty.md)||  
|[CPaneContainer::IsLeftPane](../Topic/CPaneContainer::IsLeftPane.md)||  
|[CPaneContainer::IsLeftPaneContainer](../Topic/CPaneContainer::IsLeftPaneContainer.md)||  
|[CPaneContainer::IsLeftPartEmpty](../Topic/CPaneContainer::IsLeftPartEmpty.md)||  
|[CPaneContainer::IsRightPartEmpty](../Topic/CPaneContainer::IsRightPartEmpty.md)||  
|[CPaneContainer::IsVisible](../Topic/CPaneContainer::IsVisible.md)||  
|[CPaneContainer::Move](../Topic/CPaneContainer::Move.md)||  
|[CPaneContainer::OnDeleteHidePane](../Topic/CPaneContainer::OnDeleteHidePane.md)||  
|[CPaneContainer::OnMoveInternalPaneDivider](../Topic/CPaneContainer::OnMoveInternalPaneDivider.md)||  
|[CPaneContainer::OnShowPane](../Topic/CPaneContainer::OnShowPane.md)||  
|[CPaneContainer::Release](../Topic/CPaneContainer::Release.md)||  
|[CPaneContainer::ReleaseEmptyPaneContainer](../Topic/CPaneContainer::ReleaseEmptyPaneContainer.md)||  
|[CPaneContainer::RemoveNonValidPanes](../Topic/CPaneContainer::RemoveNonValidPanes.md)||  
|[CPaneContainer::RemovePane](../Topic/CPaneContainer::RemovePane.md)||  
|[CPaneContainer::Resize](../Topic/CPaneContainer::Resize.md)||  
|[CPaneContainer::ResizePane](../Topic/CPaneContainer::ResizePane.md)||  
|[CPaneContainer::ResizePartOfPaneContainer](../Topic/CPaneContainer::ResizePartOfPaneContainer.md)||  
|[CPaneContainer::Serialize](../Topic/CPaneContainer::Serialize.md)|Lettura o scrittura questo oggetto da o in un archivio.  \(Override [CObject::Serialize](../Topic/CObject::Serialize.md)\).|  
|[CPaneContainer::SetPane](../Topic/CPaneContainer::SetPane.md)||  
|[CPaneContainer::SetPaneContainer](../Topic/CPaneContainer::SetPaneContainer.md)||  
|[CPaneContainer::SetPaneDivider](../Topic/CPaneContainer::SetPaneDivider.md)||  
|[CPaneContainer::SetParentPaneContainer](../Topic/CPaneContainer::SetParentPaneContainer.md)||  
|[CPaneContainer::SetRecentPercent](../Topic/CPaneContainer::SetRecentPercent.md)||  
|[CPaneContainer::SetUpByID](../Topic/CPaneContainer::SetUpByID.md)||  
|[CPaneContainer::StoreRecentDockSiteInfo](../Topic/CPaneContainer::StoreRecentDockSiteInfo.md)||  
|[CPaneContainer::StretchPaneContainer](../Topic/CPaneContainer::StretchPaneContainer.md)||  
  
### Note  
 Gli oggetti di`CPaneContainer` vengono creati automaticamente dal framework.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come costruire un'istanza della classe `CPaneContainer`.  Questo frammento di codice fa parte [Impostare l'esempio di dimensioni del riquadro](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_SetPaneSize#2](../../mfc/reference/codesnippet/CPP/cpanecontainer-class_1.h)]  
[!code-cpp[NVC_MFC_SetPaneSize#1](../../mfc/reference/codesnippet/CPP/cpanecontainer-class_2.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CPaneContainer](../../mfc/reference/cpanecontainer-class.md)  
  
## Requisiti  
 **intestazione:** afxpanecontainer.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [CPaneContainerManager Class](../../mfc/reference/cpanecontainermanager-class.md)