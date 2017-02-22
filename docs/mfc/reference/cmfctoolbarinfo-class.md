---
title: "CMFCToolBarInfo Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CMFCToolBarInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCToolBarInfo class"
ms.assetid: 6dc84482-eaaa-491f-aa5d-dd7a57886b46
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CMFCToolBarInfo Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contiene la risorsa ID delle immagini della barra degli strumenti in vari stati.  `CMFCToolBarInfo` è una classe di supporto utilizzata come parametro del metodo [CMFCToolBar::LoadToolBarEx](../Topic/CMFCToolBar::LoadToolBarEx.md).  
  
## Sintassi  
  
```  
class CMFCToolBarInfo  
```  
  
## Membri  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarInfo::m\_uiColdResID](../Topic/CMFCToolBarInfo::m_uiColdResID.md)|ID di risorsa bitmap della barra degli strumenti contenente le immagini \(fredde\) normali la barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiDisabledResID](../Topic/CMFCToolBarInfo::m_uiDisabledResID.md)|ID di risorsa bitmap della barra degli strumenti che contiene le immagini disabilitate della barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiHotResID](../Topic/CMFCToolBarInfo::m_uiHotResID.md)|ID di risorsa bitmap della barra degli strumenti contenente le immagini \(calde\) selezionate della barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiLargeColdResID](../Topic/CMFCToolBarInfo::m_uiLargeColdResID.md)|ID di risorsa bitmap della barra degli strumenti contenente le grandi dimensioni, immagini normali la barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiLargeDisabledResID](../Topic/CMFCToolBarInfo::m_uiLargeDisabledResID.md)|ID di risorsa bitmap della barra degli strumenti contenente le grandi dimensioni, immagini disabilitate della barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiLargeHotResID](../Topic/CMFCToolBarInfo::m_uiLargeHotResID.md)|ID di risorsa bitmap della barra degli strumenti contenente le grandi dimensioni, immagini selezionate della barra degli strumenti.|  
|[CMFCToolBarInfo::m\_uiMenuDisabledResID](../Topic/CMFCToolBarInfo::m_uiMenuDisabledResID.md)|ID di risorsa bitmap della barra degli strumenti che contiene le immagini disabilitate il menu.|  
|[CMFCToolBarInfo::m\_uiMenuResID](../Topic/CMFCToolBarInfo::m_uiMenuResID.md)|ID di risorsa bitmap della barra degli strumenti che contiene le immagini il menu.|  
  
## Note  
 Una bitmap completa della barra degli strumenti è costituito dalle immagini della barra degli strumenti \(pulsanti\) di dimensioni fisse.  Ogni ID di risorsa archiviato in un oggetto `CMFCToolBarInfo` è una bitmap che contiene una serie completa di immagini della barra degli strumenti in un unico stato, ad esempio immagini selezionato, disabilitato, grande, o del menu.  
  
## Gerarchia di ereditarietà  
 [CMFCToolBarInfo](../../mfc/reference/cmfctoolbarinfo-class.md)  
  
## Requisiti  
 **intestazione:** afxtoolbar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCToolBar Class](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCToolBar::LoadToolBarEx](../Topic/CMFCToolBar::LoadToolBarEx.md)