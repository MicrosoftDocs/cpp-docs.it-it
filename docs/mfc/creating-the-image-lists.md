---
title: Creazione degli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
ms.openlocfilehash: 6687b62b70103894d957a21019008e8781385feb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508791"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini

La creazione di elenchi di immagini è la stessa se si utilizza [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md).

> [!NOTE]
>  Sono necessari solo gli elenchi di immagini se il controllo elenco `LVS_ICON` include lo stile.

Usare la `CImageList` classe per creare uno o più elenchi di immagini (per icone a dimensione intera, icone piccole e Stati). Vedere [CImageList](../mfc/reference/cimagelist-class.md)e vedere [elenchi di immagini della visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) nell'Windows SDK.

Chiamare [CListCtrl::](../mfc/reference/clistctrl-class.md#setimagelist) seimagine per ogni elenco di immagini; passare un puntatore all'oggetto appropriato `CImageList` .

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
