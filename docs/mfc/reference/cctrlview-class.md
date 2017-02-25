---
title: "CCtrlView Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCtrlView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CCtrlView class"
  - "controlli [MFC], common"
  - "visualizzazioni, and common controls"
ms.assetid: ff488596-1e71-451f-8fec-b0831a7b44e0
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 21
---
# CCtrlView Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Adatta l'architettura di un documento visualizzazione ai controlli comuni supportate da Windows 98 e Windows NT versione 3,51 e successive.  
  
## Sintassi  
  
```  
class CCtrlView : public CView  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::CCtrlView](../Topic/CCtrlView::CCtrlView.md)|Costruisce un oggetto `CCtrlView`.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::OnDraw](../Topic/CCtrlView::OnDraw.md)|Chiamato dal framework per disegnare utilizzando il contesto di dispositivo specificato.|  
|[CCtrlView::PreCreateWindow](../Topic/CCtrlView::PreCreateWindow.md)|Chiamata prima della creazione della finestra di Windows associata a questo oggetto `CCtrlView`.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::m\_dwDefaultStyle](../Topic/CCtrlView::m_dwDefaultStyle.md)|Contiene lo stile predefinito per la classe di visualizzazione.|  
|[CCtrlView::m\_strClass](../Topic/CCtrlView::m_strClass.md)|Contiene il nome della classe di Windows per la classe di visualizzazione.|  
  
## Note  
 La classe `CCtrlView` e gli derivati, [CEditView](../../mfc/reference/ceditview-class.md), [CListView](../../mfc/reference/clistview-class.md), [CTreeView](../../mfc/reference/ctreeview-class.md)e [CRichEditView](../../mfc/reference/cricheditview-class.md), viene allungato l'architettura di un documento visualizzazione ai nuovi controlli comuni supportate da Windows 95\/98 e Windows NT versione 3,51 e successive.  Per ulteriori informazioni sull'architettura di un documento visualizzazione, vedere [L'architettura documento\/visualizzazione](../../mfc/document-view-architecture.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CCtrlView`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [CView Class](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CTreeView Class](../../mfc/reference/ctreeview-class.md)   
 [CListView Class](../../mfc/reference/clistview-class.md)   
 [CRichEditView Class](../../mfc/reference/cricheditview-class.md)