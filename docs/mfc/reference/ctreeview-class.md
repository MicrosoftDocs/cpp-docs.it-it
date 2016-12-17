---
title: "CTreeView Class | Microsoft Docs"
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
  - "CTreeView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTreeView class"
  - "CTreeView class, controlli comuni"
  - "directory lists"
  - "file lists [C++]"
  - "tree view controls"
ms.assetid: 5df583a6-d69f-42ca-9d8d-57e04558afff
caps.latest.revision: 22
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTreeView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Semplifica l'utilizzo del controllo struttura ad albero e [CTreeCtrl](../../mfc/reference/ctreectrl-class.md), la classe che incapsula funzionalità del controllo struttura ad albero, con l'architettura del visualizzazione MFC.  
  
## Sintassi  
  
```  
class CTreeView : public CCtrlView  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeView::CTreeView](../Topic/CTreeView::CTreeView.md)|Costruisce un oggetto `CTreeView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CTreeView::GetTreeCtrl](../Topic/CTreeView::GetTreeCtrl.md)|Restituisce il controllo struttura ad albero associato alla visualizzazione.|  
  
## Note  
 Per ulteriori informazioni su questa architettura, vedere i cenni preliminari sulla classe [CView](../../mfc/reference/cview-class.md) e riferimenti incrociati indicati in.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CTreeView`  
  
## Requisiti  
 **Header:** afxcview.h  
  
## Vedere anche  
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [CTreeCtrl Class](../../mfc/reference/ctreectrl-class.md)