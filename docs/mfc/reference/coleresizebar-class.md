---
title: "COleResizeBar Class | Microsoft Docs"
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
  - "COleResizeBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleResizeBar class"
  - "control bars, ridimensionamento"
  - "in-place items"
  - "in-place items, ridimensionamento"
  - "OLE items, ridimensionamento"
  - "resizing in-place OLE items"
ms.assetid: 56a708d9-28c5-4eb0-9404-77b688d91c63
caps.latest.revision: 23
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COleResizeBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un tipo di barra di controllo che supporta il ridimensionamento di elementi OLE sul posto.  
  
## Sintassi  
  
```  
class COleResizeBar : public CControlBar  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleResizeBar::COleResizeBar](../Topic/COleResizeBar::COleResizeBar.md)|Costruisce un oggetto `COleResizeBar`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleResizeBar::Create](../Topic/COleResizeBar::Create.md)|Crea e inizializza una finestra figlio di Windows e lo associa all'oggetto `COleResizeBar`.|  
  
## Note  
 Gli oggetti di`COleResizeBar` vengono visualizzati come [CRectTracker](../../mfc/reference/crecttracker-class.md) con un bordo tratteggiato e i quadratini di ridimensionamento esterni.  
  
 Gli oggetti di`COleResizeBar` sono membri generalmente incorporati degli oggetti della finestra cornice derivati dalla classe [COleIPFrameWnd](../../mfc/reference/coleipframewnd-class.md).  
  
 Per ulteriori informazioni, vedere l'articolo [attivazione](../../mfc/activation-cpp.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CControlBar](../../mfc/reference/ccontrolbar-class.md)  
  
 `COleResizeBar`  
  
## Requisiti  
 **Header:** afxole.h  
  
## Vedere anche  
 [MFC campione SUPERPAD](../../top/visual-cpp-samples.md)   
 [CControlBar Class](../../mfc/reference/ccontrolbar-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [COleServerDoc Class](../../mfc/reference/coleserverdoc-class.md)