---
title: "CMFCBaseToolBar Class | Microsoft Docs"
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
  - "CMFCBaseToolBar::CreateObject"
  - "~CMFCBaseToolBar"
  - "CMFCBaseToolBar"
  - "CMFCBaseToolBar::CMFCBaseToolBar"
  - "CMFCBaseToolBar::~CMFCBaseToolBar"
  - "CMFCBaseToolBar.~CMFCBaseToolBar"
  - "CreateObject"
  - "CMFCBaseToolBar.CMFCBaseToolBar"
  - "CMFCBaseToolBar.CreateObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "~CMFCBaseToolBar destructor"
  - "CMFCBaseToolBar class"
  - "CMFCBaseToolBar class, costruttore"
  - "CMFCBaseToolBar class, distruttore"
  - "CreateObject method"
ms.assetid: 5d79206d-55e4-46f8-b1b8-042e34d7f9da
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCBaseToolBar Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Classe base per le barre degli strumenti.  
  
## Sintassi  
  
```  
class CMFCBaseToolBar : public CPane  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCBaseToolBar::CMFCBaseToolBar`|Costruttore predefinito.|  
|`CMFCBaseToolBar::~CMFCBaseToolBar`|Distruttore|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCBaseToolBar::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCBaseToolBar::GetDockingMode](../Topic/CMFCBaseToolBar::GetDockingMode.md)|Restituisce la modalità di ancoraggio.  \(Override [CBasePane::GetDockingMode](../Topic/CBasePane::GetDockingMode.md)\).|  
|[CMFCBaseToolBar::GetMinSize](../Topic/CMFCBaseToolBar::GetMinSize.md)|Restituisce la dimensione minima di una barra degli strumenti.  \(Override [CPane::GetMinSize](../Topic/CPane::GetMinSize.md)\).|  
|[CMFCBaseToolBar::OnAfterChangeParent](../Topic/CMFCBaseToolBar::OnAfterChangeParent.md)|Chiamato dal framework dopo le modifiche del padre del riquadro.  \(Override [CBasePane::OnAfterChangeParent](../Topic/CBasePane::OnAfterChangeParent.md)\).|  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
## Requisiti  
 **intestazione:** afxbasetoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)