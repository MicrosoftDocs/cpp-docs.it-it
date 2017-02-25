---
title: "Classe CMFCPopupMenuBar | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCPopupMenuBar"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCPopupMenuBar (classe)"
ms.assetid: 4c93c459-7f70-4240-8c63-280bb811e374
caps.latest.revision: 32
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 34
---
# Classe CMFCPopupMenuBar
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una barra dei menu incorporata in un menu di scelta rapida.  
  
## Sintassi  
  
```  
class CMFCPopupMenuBar : public CMFCToolBar  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenuBar::AdjustSizeImmediate](../Topic/CMFCPopupMenuBar::AdjustSizeImmediate.md)|Immediatamente ricalcola il layout di riquadro.  \(Override [CPane::AdjustSizeImmediate](../Topic/CPane::AdjustSizeImmediate.md)\).|  
|[CMFCPopupMenuBar::BuildOrigItems](../Topic/CMFCPopupMenuBar::BuildOrigItems.md)|Carica gli elementi del menu di scelta rapida da una risorsa menu specificata.|  
|[CMFCPopupMenuBar::CloseDelayedSubMenu](../Topic/CMFCPopupMenuBar::CloseDelayedSubMenu.md)|Chiude un pulsante in ritardo di menu di scelta rapida.|  
|[CMFCPopupMenuBar::ExportToMenu](../Topic/CMFCPopupMenuBar::ExportToMenu.md)|Compila un menu dei pulsanti di menu di scelta rapida.|  
|[CMFCPopupMenuBar::FindDestintationToolBar](../Topic/CMFCPopupMenuBar::FindDestintationToolBar.md)|Individuare la barra degli strumenti in cui un punto specificato si trova.|  
|[CMFCPopupMenuBar::GetCurrentMenuImageSize](../Topic/CMFCPopupMenuBar::GetCurrentMenuImageSize.md)|Indica la dimensione delle immagini di menu\- pulsante.|  
|[CMFCPopupMenuBar::GetDefaultMenuId](../Topic/CMFCPopupMenuBar::GetDefaultMenuId.md)|Restituisce l'identificatore della voce di menu predefinita.|  
|[CMFCPopupMenuBar::GetLastCommandIndex](../Topic/CMFCPopupMenuBar::GetLastCommandIndex.md)|Ottiene l'indice del comando di menu recentemente richiamato.|  
|[CMFCPopupMenuBar::GetOffset](../Topic/CMFCPopupMenuBar::GetOffset.md)|Ottiene l'offset della riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::ImportFromMenu](../Topic/CMFCPopupMenuBar::ImportFromMenu.md)|Sono inclusi i pulsanti di menu di scelta rapida da un menu specificato.|  
|[CMFCPopupMenuBar::IsDropDownListMode](../Topic/CMFCPopupMenuBar::IsDropDownListMode.md)|Indica se la barra dei menu di scelta rapida è in modalità dell'elenco a discesa.|  
|[CMFCPopupMenuBar::IsPaletteMode](../Topic/CMFCPopupMenuBar::IsPaletteMode.md)|Indica se la barra dei menu di scelta rapida è in modalità della tavolozza.|  
|[CMFCPopupMenuBar::IsRibbonPanel](../Topic/CMFCPopupMenuBar::IsRibbonPanel.md)|Indica se questo è un pannello della barra multifunzione \(`FALSE` per impostazione predefinita\).|  
|[CMFCPopupMenuBar::IsRibbonPanelInRegularMode](../Topic/CMFCPopupMenuBar::IsRibbonPanelInRegularMode.md)|Indica se questo è un pannello della barra multifunzione in modalità normale \(`FALSE` per impostazione predefinita\).|  
|[CMFCPopupMenuBar::LoadFromHash](../Topic/CMFCPopupMenuBar::LoadFromHash.md)|Carica un menu archiviato.|  
|[CMFCPopupMenuBar::RestoreDelayedSubMenu](../Topic/CMFCPopupMenuBar::RestoreDelayedSubMenu.md)|Ripristina un pulsante in ritardo del menu per chiudere la barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::SetButtonStyle](../Topic/CMFCPopupMenuBar::SetButtonStyle.md)|Imposta lo stile del pulsante della barra degli strumenti all'indice specificato.  \(Override [CMFCToolBar::SetButtonStyle](../Topic/CMFCToolBar::SetButtonStyle.md)\).|  
|[CMFCPopupMenuBar::SetOffset](../Topic/CMFCPopupMenuBar::SetOffset.md)|Impostare l'offset della riga della barra dei menu di scelta rapida.|  
|[CMFCPopupMenuBar::StartPopupMenuTimer](../Topic/CMFCPopupMenuBar::StartPopupMenuTimer.md)|Avvia il timer per un pulsante in ritardo specificato il menu di scelta rapida.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCPopupMenuBar::m\_bDisableSideBarInXPMode](../Topic/CMFCPopupMenuBar::m_bDisableSideBarInXPMode.md)|Specifica se la barra laterale grigia viene visualizzato quando l'applicazione ha un aspetto di Windows XP.|  
  
## Note  
 `CMFCPopupMenuBar` viene creata contemporaneamente a [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md) e viene incorporato in.  `CMFCPopupMenuBar` copre l'intera area client dell'oggetto di `CMFCPopupMenu`.  Supporta l'input della tastiera e del mouse.  Trasferisce tale input a `CMFCPopupMenu` e alla finestra cornice di primo livello.  
  
## Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un oggetto di `CMFCPopupMenuBar` da un oggetto di `CMFCPopupMenu`.  Questo frammento di codice fa parte di [Esempio client di disegno](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_DrawClient#7](../../mfc/reference/codesnippet/CPP/cmfcpopupmenubar-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCPopupMenuBar](../../mfc/reference/cmfcpopupmenubar-class.md)  
  
## Requisiti  
 **Intestazione:** afxpopupmenubar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCColorBar Class](../../mfc/reference/cmfccolorbar-class.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)