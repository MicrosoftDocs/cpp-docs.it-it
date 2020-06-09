---
title: Elementi di intestazione in un controllo Header
ms.date: 11/04/2016
helpviewer_keywords:
- header controls [MFC], header items in
- header items in header controls [MFC]
- CHeaderCtrl class [MFC], header items in
- controls [MFC], header
ms.assetid: ac79ef1f-a671-4ab2-93e9-b1aa016a48bf
ms.openlocfilehash: a70d1d9225d2ac8ef2f7ed3ad9f603a64a937bc7
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84620094"
---
# <a name="header-items-in-a-header-control"></a>Elementi di intestazione in un controllo Header

È possibile controllare in modo significativo l'aspetto e il comportamento degli elementi di intestazione che costituiscono un controllo Header ([CHeaderCtrl](reference/cheaderctrl-class.md)). Ogni elemento dell'intestazione può includere una stringa, un'immagine bitmap, un'immagine da un elenco di immagini associato o un valore a 32 bit definito dall'applicazione associato. La stringa, la bitmap o l'immagine viene visualizzata nell'elemento dell'intestazione.

È possibile personalizzare l'aspetto e il contenuto dei nuovi elementi quando vengono creati effettuando una chiamata a [CHeaderCtrl:: InsertItem](reference/cheaderctrl-class.md#insertitem) o modificando un elemento esistente, con una chiamata a [CHeaderCtrl:: GetItem](reference/cheaderctrl-class.md#getitem) e [CHeaderCtrl:: SetItem](reference/cheaderctrl-class.md#setitem).

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Personalizzazione dell'aspetto dell'elemento di intestazione](customizing-the-header-item-s-appearance.md)

- [Ordinamento degli elementi nel controllo intestazione](ordering-items-in-the-header-control.md)

- [Fornire il supporto per il trascinamento della selezione per gli elementi di intestazione](providing-drag-and-drop-support-for-header-items.md)

- [Uso di elenchi di immagini con controlli Header](using-image-lists-with-header-controls.md)

## <a name="see-also"></a>Vedere anche

[Uso di CHeaderCtrl](using-cheaderctrl.md)
