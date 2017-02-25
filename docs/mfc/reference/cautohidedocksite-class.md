---
title: "CAutoHideDockSite Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAutoHideDockSite"
  - "AllowShowOnPaneMenu"
  - "CAutoHideDockSite::AllowShowOnPaneMenu"
  - "CAutoHideDockSite.AllowShowOnPaneMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AllowShowOnPaneMenu method"
  - "CAutoHideDockSite class"
ms.assetid: 2a0f6bec-c369-4ab7-977d-564e7946ebad
caps.latest.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 33
---
# CAutoHideDockSite Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`CAutoHideDockSite` estende fino [CDockSite Class](../../mfc/reference/cdocksite-class.md) i riquadri di ancoraggio nascondi automaticamente il contenitore.  
  
## Sintassi  
  
```  
class CAutoHideDockSite : public CDockSite  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CAutoHideDockSite::CAutoHideDockSite`|Costruisce un oggetto `CAutoHideDockSite`.|  
|`CAutoHideDockSite::~CAutoHideDockSite`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indica se `CAutoHideDockSite` viene visualizzato il menu del riquadro.|  
|[CAutoHideDockSite::CanAcceptPane](../Topic/CAutoHideDockSite::CanAcceptPane.md)|Determina se un oggetto di base del riquadro è derivato da [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md).|  
|[CAutoHideDockSite::DockPane](../Topic/CAutoHideDockSite::DockPane.md)|Nuovamente il riquadro a questo oggetto `CAuotHideDockSite`.|  
|[CAutoHideDockSite::GetAlignRect](../Topic/CAutoHideDockSite::GetAlignRect.md)|Recupera la dimensione del sito di ancoraggio coordinate dello schermo.|  
|[CAutoHideDockSite::RepositionPanes](../Topic/CAutoHideDockSite::RepositionPanes.md)|Ridisegna il riquadro su `CAutoHideDockSite` con i margini e spaziatura globali del pulsante.|  
|[CAutoHideDockSite::SetOffsetLeft](../Topic/CAutoHideDockSite::SetOffsetLeft.md)|Imposta il margine a sinistra della barra di ancoraggio.|  
|[CAutoHideDockSite::SetOffsetRight](../Topic/CAutoHideDockSite::SetOffsetRight.md)|Imposta il margine sul lato destro della barra di ancoraggio.|  
|[CAutoHideDockSite::UnSetAutoHideMode](../Topic/CAutoHideDockSite::UnSetAutoHideMode.md)|Chiamate [CMFCAutoHideBar::UnSetAutoHideMode](../Topic/CMFCAutoHideBar::UnSetAutoHideMode.md) per gli oggetti in `CAutoHideDockSite`.|  
  
### Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CAutoHideDockSite::m\_nExtraSpace](../Topic/CAutoHideDockSite::m_nExtraSpace.md)|Definisce la dimensione dello spazio tra le barre degli strumenti e il bordo della barra di ancoraggio.  Questo spazio viene misurato dal bordo sinistro o dal bordo superiore, a seconda dell'allineamento per lo spazio di ancoraggio.|  
  
## Note  
 Quando si chiama [CFrameWndEx::EnableAutoHidePanes](../Topic/CFrameWndEx::EnableAutoHidePanes.md), il framework crea automaticamente un oggetto `CAutoHideDockSite`.  Nella maggior parte dei casi, non è necessario creare istanze direttamente o utilizzare questa classe.  
  
 La barra di ancoraggio è il divario tra il lato sinistro del riquadro di ancoraggio e la parte sinistra [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare un oggetto `CAutoHideDockSite` da un oggetto `CMFCAutoHideBar` e come impostare i margini sinistro e destro della barra di ancoraggio.  
  
 [!code-cpp[NVC_MFC_RibbonApp#29](../../mfc/reference/codesnippet/CPP/cautohidedocksite-class_1.cpp)]  
  
## Requisiti  
 **intestazione:** afxautohidedocksite.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)