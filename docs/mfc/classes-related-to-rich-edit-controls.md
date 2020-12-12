---
description: 'Altre informazioni su: classi correlate ai controlli Rich Edit'
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
ms.openlocfilehash: b44c5a874c7f48c132f31483bf5ee73eafbe4da5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97176678"
---
# <a name="classes-related-to-rich-edit-controls"></a>Classi correlate ai controlli Rich Edit

Le classi [CRichEditView](reference/cricheditview-class.md), [CRichEditDoc](reference/cricheditdoc-class.md)e [CRichEditCntrItem](reference/cricheditcntritem-class.md) forniscono la funzionalità del controllo Rich Edit ([CRichEditCtrl](reference/cricheditctrl-class.md)) nel contesto dell'architettura documento/visualizzazione di MFC. `CRichEditView` mantiene il testo e la caratteristica di formattazione del testo. `CRichEditDoc` mantiene l'elenco di elementi client OLE presenti nella vista. `CRichEditCntrItem` fornisce accesso sul lato contenitore all'elemento client OLE. Per modificare il contenuto di un `CRichEditView` , utilizzare [CRichEditView:: GetRichEditCtrl](reference/cricheditview-class.md#getricheditctrl) per accedere al controllo Rich Edit sottostante.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CRichEditCtrl](using-cricheditctrl.md)<br/>
[Controlli](controls-mfc.md)
