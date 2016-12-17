---
title: "CMFCRibbonContextCaption Class | Microsoft Docs"
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
  - "CMFCRibbonContextCaption"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CMFCRibbonContextCaption class"
ms.assetid: cce2c0a2-8370-4266-997e-f8d0eeb3d616
caps.latest.revision: 24
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CMFCRibbonContextCaption Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa una didascalia a colori visualizzata all'inizio di una categoria della barra multifunzione o di una categoria contesto.  
  
## Sintassi  
  
```  
class CMFCRibbonContextCaption : public CMFCRibbonButton  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCRibbonContextCaption::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCRibbonContextCaption::GetColor](../Topic/CMFCRibbonContextCaption::GetColor.md)|Restituisce il colore della didascalia.|  
|[CMFCRibbonContextCaption::GetRightTabX](../Topic/CMFCRibbonContextCaption::GetRightTabX.md)||  
|`CMFCRibbonContextCaption::GetThisClass`|Usato dal framework per ottenere un puntatore all'oggetto [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) associato a questo tipo di classe.|  
  
## Note  
 Non è possibile creare direttamente istanze di questa classe.  La classe [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md) usa questa classe internamente per aggiungere colore alle categorie della barra multifunzione.  
  
 Per impostare il colore per le categorie della barra multifunzione, chiamare [CMFCRibbonCategory::SetTabColor](../Topic/CMFCRibbonCategory::SetTabColor.md).  Per impostare il colore per le categorie di contesto, chiamare [CMFCRibbonBar::AddContextCategory](../Topic/CMFCRibbonBar::AddContextCategory.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonContextCaption](../../mfc/reference/cmfcribboncontextcaption-class.md)  
  
## Requisiti  
 **Intestazione:** afxRibbonBar.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonButton Class](../../mfc/reference/cmfcribbonbutton-class.md)   
 [CMFCRibbonCategory Class](../../mfc/reference/cmfcribboncategory-class.md)   
 [CMFCRibbonBar Class](../../mfc/reference/cmfcribbonbar-class.md)