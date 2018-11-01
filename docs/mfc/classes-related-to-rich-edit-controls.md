---
title: Classi correlate ai controlli Rich Edit
ms.date: 11/04/2016
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
ms.openlocfilehash: 92134d0bd4d02bff7aeadd5e9ca7438c61de3bec
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50586160"
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit

Il [CRichEditView](../mfc/reference/cricheditview-class.md), [CRichEditDoc](../mfc/reference/cricheditdoc-class.md), e [CRichEditCntrItem](../mfc/reference/cricheditcntritem-class.md) classi forniscono la funzionalità del controllo rich edit ([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)) all'interno del contesto dell'architettura documento/visualizzazione di MFC. `CRichEditView` gestisce il testo e la caratteristica di formattazione del testo. `CRichEditDoc` gestisce l'elenco di elementi di client OLE che sono nella vista. `CRichEditCntrItem` fornisce l'accesso dal contenitore per l'elemento client OLE. Per modificare il contenuto di un `CRichEditView`, usare [CRichEditView:: GetRichEditCtrl](../mfc/reference/cricheditview-class.md#getricheditctrl) per accedere all'oggetto controllo rich edit.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](../mfc/using-cricheditctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)

