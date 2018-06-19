---
title: Le classi correlate ai controlli Rich Edit | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f428242ac84adaf36ea0263f8e193dfeca7d0609
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341398"
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit
Il [CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md), e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) classi forniscono le funzionalità di controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) all'interno del contesto dell'architettura documento/visualizzazione MFC. `CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi OLE sul client che sono nella vista. `CRichEditCntrItem` fornisce accesso a elemento client OLE lato contenitore. Per modificare il contenuto di un `CRichEditView`, utilizzare [CRichEditView:: GetRichEditCtrl](../mfc/reference/cricheditview-class.md#getricheditctrl) per accedere all'oggetto controllo rich edit.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

