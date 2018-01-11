---
title: Le classi correlate ai controlli Rich Edit | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- rich edit controls [MFC], and CRichEditItem
- CRichEditCtrl class [MFC], related classes
- CRichEditDoc class [MFC], Rich Edit controls
- rich edit controls [MFC], classes related to
- classes [MFC], related to rich edit controls
- rich edit controls [MFC], and CRichEditView
- CRichEditCtrlItem class and CRichEditCtrl
- rich edit controls [MFC], and CRichEditDoc
- CRichEditView class [MFC], and CRichEditCtrl
ms.assetid: 4b31c2cc-6ea1-4146-b7c5-b0b5b419f14d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: a8373435f1f97b6b2038e5769c853d521b906715
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit
Il [CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md), e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) classi forniscono le funzionalità di controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) all'interno del contesto dell'architettura documento/visualizzazione MFC. `CRichEditView`gestisce il testo e la caratteristica di formattazione di testo. `CRichEditDoc`gestisce l'elenco di elementi presenti nella vista del client OLE. `CRichEditCntrItem`fornisce l'accesso lato contenitore per l'elemento client OLE. Per modificare il contenuto di un `CRichEditView`, utilizzare [CRichEditView:: GetRichEditCtrl](../mfc/reference/cricheditview-class.md#getricheditctrl) per accedere all'oggetto controllo rich edit.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

