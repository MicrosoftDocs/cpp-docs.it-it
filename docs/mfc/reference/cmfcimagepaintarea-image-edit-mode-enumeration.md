---
title: 'Enumerazione cmfcimagepaintarea:: Image_edit_mode | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: IMAGE_EDIT_MODE Enumeration
dev_langs: C++
helpviewer_keywords: IMAGE_EDIT_MODE Enumeration method [MFC]
ms.assetid: e51db66a-fa1c-4766-9dac-a25b595f871a
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 22e3b00bed830052c2abbc988152f4a14f1267ff
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmfcimagepaintareaimageeditmode-enumeration"></a>Enumerazione CMFCImagePaintArea::IMAGE_EDIT_MODE
Specifica una modalità di disegno che consente di modificare un'immagine in una finestra di dialogo editor di immagini.  
  
## <a name="syntax"></a>Sintassi  
  
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
  
## <a name="members"></a>Membri  
  
|||  
|-|-|  
|Nome|Descrizione|  
|`IMAGE_EDIT_MODE_PEN`|Utilizzato per disegnare i singoli pixel.|  
|`IMAGE_EDIT_MODE_FILL`|Utilizzato per riempire tutte le aree adiacenti che contengono il colore in corrispondenza della posizione del cursore.|  
|`IMAGE_EDIT_MODE_LINE`|Utilizzato per disegnare una linea.|  
|`IMAGE_EDIT_MODE_RECT`|Utilizzato per disegnare un rettangolo.|  
|`IMAGE_EDIT_MODE_ELLIPSE`|Utilizzato per disegnare un'ellisse.|  
|`IMAGE_EDIT_MODE_COLOR`|Utilizzato per impostare il colore corrente per il colore nella posizione del cursore corrente.|  
  
### <a name="remarks"></a>Note  
 Il `CMFCImagePaintArea` e `CMFCImageEditorDialog` classi usano questa enumerazione per impostare la modalità di disegno corrente. La modalità di disegno e il colore corrente vengono utilizzati per modificare l'area dell'immagine in una finestra di dialogo editor di immagini. Per ulteriori informazioni su `CMFCImagePaintArea` e `CMFCImageEditorDialog`, vedere [CMFCImagePaintArea classe](../../mfc/reference/cmfcimagepaintarea-class.md) e [CMFCImageEditorDialog classe](../../mfc/reference/cmfcimageeditordialog-class.md).  
  
 Quando si seleziona un colore da un'immagine utilizzando il `IMAGE_EDIT_MODE_COLOR` modalità di disegno, il framework imposta la modalità di disegno corrente `IMAGE_EDIT_MODE_PEN`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afximagepaintarea.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCImagePaintArea](../../mfc/reference/cmfcimagepaintarea-class.md)   
 [Classe CMFCImageEditorDialog](../../mfc/reference/cmfcimageeditordialog-class.md)
