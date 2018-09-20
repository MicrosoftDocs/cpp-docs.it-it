---
title: Elementi di intestazione in un controllo intestazione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- header controls [MFC], header items in
- header items in header controls [MFC]
- CHeaderCtrl class [MFC], header items in
- controls [MFC], header
ms.assetid: ac79ef1f-a671-4ab2-93e9-b1aa016a48bf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 21f1893861c5cb6a134cffa75806cc53eadaf059
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442370"
---
# <a name="header-items-in-a-header-control"></a>Elementi di intestazione in un controllo Header

Si dispone di un notevole controllo sull'aspetto e comportamento degli elementi di intestazione che costituiscono un controllo header ([CHeaderCtrl](../mfc/reference/cheaderctrl-class.md)). Ogni elemento intestazione può avere una stringa, un'immagine bitmap, un'immagine da un elenco di immagini associato o un valore a 32 bit definita dall'applicazione associata. La stringa, bitmap o l'immagine viene visualizzato nell'elemento di intestazione.

È possibile personalizzare l'aspetto e il contenuto di nuovi elementi quando vengono creati tramite una chiamata [CHeaderCtrl:: InsertItem](../mfc/reference/cheaderctrl-class.md#insertitem) o modificando un elemento esistente, con una chiamata a [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md#getitem) e[ CHeaderCtrl::SetItem](../mfc/reference/cheaderctrl-class.md#setitem).

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Personalizzazione dell'aspetto dell'elemento intestazione](../mfc/customizing-the-header-item-s-appearance.md)

- [Ordinamento degli elementi nel controllo header](../mfc/ordering-items-in-the-header-control.md)

- [Fornire il supporto di trascinamento e rilascio per gli elementi dell'intestazione](../mfc/providing-drag-and-drop-support-for-header-items.md)

- [Utilizzo di elenchi immagini con controlli header](../mfc/using-image-lists-with-header-controls.md)

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](../mfc/using-cheaderctrl.md)

