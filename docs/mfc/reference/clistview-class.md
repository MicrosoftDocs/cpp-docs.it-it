---
title: "CListView Class | Microsoft Docs"
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
  - "CListView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CListView class"
  - "visualizzazioni, and common controls"
ms.assetid: 7626bdb2-a1b8-4eab-b631-6743710a8432
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CListView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Semplifica l'utilizzo del controllo elenco e [CListCtrl](../../mfc/reference/clistctrl-class.md), la classe che incapsula funzionalità di controllo list, con l'architettura del visualizzazione MFC.  
  
## Sintassi  
  
```  
class CListView : public CCtrlView  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListView::CListView](../Topic/CListView::CListView.md)|Costruisce un oggetto `CListView`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListView::GetListCtrl](../Topic/CListView::GetListCtrl.md)|Restituisce il controllo elenco associato alla visualizzazione.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CListView::RemoveImageList](../Topic/CListView::RemoveImageList.md)|Rimuove l'elenco specificato dalla visualizzazione elenco.|  
  
## Note  
 Per ulteriori informazioni su questa architettura, vedere i cenni preliminari sulla classe [CView](../../mfc/reference/cview-class.md) e riferimenti incrociati indicati in.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CCtrlView](../../mfc/reference/cctrlview-class.md)  
  
 `CListView`  
  
## Requisiti  
 **Header:** afxcview.h  
  
## Vedere anche  
 [Esempio ROWLIST MFC](../../top/visual-cpp-samples.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCtrlView Class](../../mfc/reference/cctrlview-class.md)