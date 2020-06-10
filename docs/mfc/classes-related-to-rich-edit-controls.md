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
ms.openlocfilehash: 584649a2bb2d9a118e390aebf9f7411c3123b1a3
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620719"
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit

Le classi [CRichEditView](reference/cricheditview-class.md), [CRichEditDoc](reference/cricheditdoc-class.md)e [CRichEditCntrItem](reference/cricheditcntritem-class.md) forniscono la funzionalità del controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) nel contesto dell'architettura documento/visualizzazione di MFC. `CRichEditView`mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc`mantiene l'elenco di elementi client OLE presenti nella vista. `CRichEditCntrItem`fornisce accesso sul lato contenitore all'elemento client OLE. Per modificare il contenuto di un `CRichEditView` , utilizzare [CRichEditView:: GetRichEditCtrl](reference/cricheditview-class.md#getricheditctrl) per accedere al controllo Rich Edit sottostante.

## <a name="see-also"></a>Vedere anche

[Uso di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
