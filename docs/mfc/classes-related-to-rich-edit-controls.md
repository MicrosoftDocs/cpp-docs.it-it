---
title: Le classi correlate ai controlli Rich Edit | Microsoft Docs
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
ms.openlocfilehash: 9ee7b6400dcd5c91d054b31153c21008d5302bd0
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401264"
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit

Il [CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md), e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) classi forniscono la funzionalità del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) all'interno del contesto dell'architettura documento/visualizzazione di MFC. `CRichEditView` gestisce il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi di client OLE che sono nella vista. `CRichEditCntrItem` fornisce l'accesso dal contenitore per l'elemento client OLE. Per modificare il contenuto di un `CRichEditView`, usare [CRichEditView:: GetRichEditCtrl](../mfc/reference/cricheditview-class.md#getricheditctrl) per accedere all'oggetto controllo rich edit.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

