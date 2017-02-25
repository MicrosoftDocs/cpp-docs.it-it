---
title: "CMFCDropDownFrame Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCDropDownFrame"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCDropDownFrame class"
ms.assetid: 09ff81a9-de00-43ec-9df9-b626f7728c4b
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 25
---
# CMFCDropDownFrame Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce funzionalità a discesa della finestra cornice le barre degli strumenti a discesa e i pulsanti della barra degli strumenti a discesa.  
  
## Sintassi  
  
```  
class CMFCDropDownFrame : public CMiniFrameWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`CMFCDropDownFrame::CMFCDropDownFrame`|Costruttore predefinito.|  
|`CMFCDropDownFrame::~CMFCDropDownFrame`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCDropDownFrame::Create](../Topic/CMFCDropDownFrame::Create.md)|Crea un oggetto `CMFCDropDownFrame`.|  
|`CMFCDropDownFrame::CreateObject`|Utilizzato dal framework di creare un'istanza dinamica di questo tipo della classe.|  
|[CMFCDropDownFrame::GetParentMenuBar](../Topic/CMFCDropDownFrame::GetParentMenuBar.md)|Recupera la barra dei menu del padre del frame a discesa.|  
|[CMFCDropDownFrame::GetParentPopupMenu](../Topic/CMFCDropDownFrame::GetParentPopupMenu.md)|Recupera il menu di scelta rapida padre del frame a discesa.|  
|`CMFCDropDownFrame::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCDropDownFrame::RecalcLayout](../Topic/CMFCDropDownFrame::RecalcLayout.md)|Riposizionare il frame a discesa.|  
|[CMFCDropDownFrame::SetAutoDestroy](../Topic/CMFCDropDownFrame::SetAutoDestroy.md)|Imposta se la finestra a discesa figlio della barra degli strumenti verrà automaticamente eliminato.|  
  
### Note  
 Questa classe non è destinata a essere utilizzata direttamente dal codice.  
  
 Il framework utilizza questa classe per fornire il comportamento del frame alle classi `CMFCDropDownToolbarButton` e `CMFCDropDownToolbar`.  Per ulteriori informazioni relative a queste classi, vedere [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md) e [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un oggetto `CMFCDropDownFrame` da una classe `CFrameWnd` e come impostare la finestra a discesa figlio della barra degli strumenti da eliminato automaticamente.  
  
 [!code-cpp[NVC_MFC_RibbonApp#36](../../mfc/reference/codesnippet/CPP/cmfcdropdownframe-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCDropDownFrame](../../mfc/reference/cmfcdropdownframe-class.md)  
  
## Requisiti  
 **intestazione:** afxdropdowntoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCDropDownToolBar Class](../../mfc/reference/cmfcdropdowntoolbar-class.md)   
 [CMFCDropDownToolbarButton Class](../../mfc/reference/cmfcdropdowntoolbarbutton-class.md)