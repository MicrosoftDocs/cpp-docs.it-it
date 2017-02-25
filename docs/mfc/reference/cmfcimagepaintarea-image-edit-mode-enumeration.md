---
title: "Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IMAGE_EDIT_MODE Enumeration"
  - "CMFCImagePaintArea::IMAGE_EDIT_MODE Enumeration"
  - "CMFCImagePaintArea.IMAGE_EDIT_MODE Enumeration"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IMAGE_EDIT_MODE (metodo di enumerazione)"
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
caps.latest.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 16
---
# Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specificare la modalità di disegno da utilizzare per modificare un'immagine in una finestra di dialogo editor di immagini.  
  
## Sintassi  
  
```  
enum IMAGE_EDIT_MODE  
{  
   IMAGE_EDIT_MODE_PEN = 0,  
   IMAGE_EDIT_MODE_FILL,  
   IMAGE_EDIT_MODE_LINE,  
   IMAGE_EDIT_MODE_RECT,  
   IMAGE_EDIT_MODE_ELLIPSE,  
   IMAGE_EDIT_MODE_COLOR  
};  
```  
  
## Membri  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`IMAGE_EDIT_MODE_PEN`|Utilizzato per disegnare singoli pixel.|  
|`IMAGE_EDIT_MODE_FILL`|Utilizzato per riempire tutte le aree adiacenti che contengono il colore nella posizione corrente del cursore.|  
|`IMAGE_EDIT_MODE_LINE`|Per disegnare una riga.|  
|`IMAGE_EDIT_MODE_RECT`|Per disegnare un rettangolo.|  
|`IMAGE_EDIT_MODE_ELLIPSE`|Per disegnare un'ellisse.|  
|`IMAGE_EDIT_MODE_COLOR`|Utilizzato per impostare il colore corrente nel colore nella posizione corrente del cursore.|  
  
### Osservazioni  
 Le classi di `CMFCImageEditorDialog` e di `CMFCImagePaintArea` utilizzano questa enumerazione per impostare la modalità di disegno corrente.  La modalità di disegno e il colore corrente vengono utilizzati per modificare l'area racchiuso in una finestra di dialogo editor di immagini.  Per ulteriori informazioni su `CMFCImagePaintArea` e `CMFCImageEditorDialog`, vedere [CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md) e [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
 Quando si seleziona un colore da un'immagine utilizzando la modalità di disegno di `IMAGE_EDIT_MODE_COLOR`, il framework imposta la modalità di disegno corrente a `IMAGE_EDIT_MODE_PEN`.  
  
## Requisiti  
 **Intestazione:** afximagepaintarea.h  
  
## Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CMFCImagePaintArea Class](../../mfc/reference/cmfcimagepaintarea-class.md)   
 [CMFCImageEditorDialog Class](../../mfc/reference/cmfcimageeditordialog-class.md)