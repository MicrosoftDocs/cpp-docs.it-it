---
title: "CMFCColorPopupMenu Class | Microsoft Docs"
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
  - "CMFCColorPopupMenu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCColorPopupMenu class"
ms.assetid: 0bf9efe8-aed5-4ab7-b23b-eb284b4668be
caps.latest.revision: 19
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCColorPopupMenu Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un menu di scelta rapida che l'utilizzo degli utenti selezionare colori in un documento o in un'applicazione.  
  
## Sintassi  
  
```  
class CMFCColorPopupMenu : public CMFCPopupMenu  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCColorPopupMenu::CMFCColorPopupMenu](../Topic/CMFCColorPopupMenu::CMFCColorPopupMenu.md)|Costruisce un oggetto `CMFCColorPopupMenu`.|  
|`CMFCColorPopupMenu::~CMFCColorPopupMenu`|Distruttore|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CMFCColorPopupMenu::CreateTearOffBar](../Topic/CMFCColorPopupMenu::CreateTearOffBar.md)|Crea un sradicano ancorabile la barra dei colori.  \(Override [CMFCPopupMenu::CreateTearOffBar](../Topic/CMFCPopupMenu::CreateTearOffBar.md)\).|  
|[CMFCColorPopupMenu::GetMenuBar](../Topic/CMFCColorPopupMenu::GetMenuBar.md)|Restituisce [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md) incorporato nel menu di scelta rapida.  \(Override [CMFCPopupMenu::GetMenuBar](../Topic/CMFCPopupMenu::GetMenuBar.md)\).|  
|`CMFCColorPopupMenu::GetThisClass`|Utilizzato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo della classe.|  
|[CMFCColorPopupMenu::SetPropList](../Topic/CMFCColorPopupMenu::SetPropList.md)|Imposta l'oggetto del controllo griglia delle proprietà dell'oggetto incorporato `CMFCColorBar`.|  
  
### Membri di dati  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`m_bEnabledInCustomizeMode`|Valore booleano che determina se visualizzare la barra dei colori.|  
|`m_wndColorBar`|L'oggetto `CMFCColorBar` che fornisce la selezione di colori.|  
  
### Note  
 Questa classe eredita la funzionalità del menu di scelta rapida della classe `CMFCPopupMenu` e gestisce un oggetto `CMFCColorBar` che fornisce la selezione di colori.  Quando il framework della barra degli strumenti è in modalità di personalizzazione e il membro `m_bEnabledInCustomizeMode` è impostato su `FALSE`, l'oggetto della barra dei colori non viene visualizzato.  Per ulteriori informazioni sulla modalità di personalizzazione, vedere [CMFCToolBar::IsCustomizeMode](../Topic/CMFCToolBar::IsCustomizeMode.md)  
  
 Per ulteriori informazioni su `CMFCColorBar`, vedere [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CFrameWnd](../../mfc/reference/cframewnd-class.md)  
  
 [CMiniFrameWnd](../../mfc/reference/cminiframewnd-class.md)  
  
 [CMFCPopupMenu](../../mfc/reference/cmfcpopupmenu-class.md)  
  
 [CMFCColorPopupMenu](../../mfc/reference/cmfccolorpopupmenu-class.md)  
  
## Requisiti  
 **intestazione:** afxcolorpopupmenu.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)