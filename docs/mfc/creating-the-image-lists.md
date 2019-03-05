---
title: Creazione degli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
ms.openlocfilehash: 844bfe71f7b03f299f57b0fd4558b7e9eacf67c2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57265782"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini

Creazione di elenchi di immagini non cambiano se si utilizza [CListView](../mfc/reference/clistview-class.md) oppure [CListCtrl](../mfc/reference/clistctrl-class.md).

> [!NOTE]
>  È solo necessario elenchi di immagini se il controllo elenco include il `LVS_ICON` stile.

Usare classe `CImageList` per creare uno o più elenchi di immagini (per le icone con dimensioni normali, icone piccole e stati). Visualizzare [CImageList](../mfc/reference/cimagelist-class.md)e visualizzare [elenchi di immagini di visualizzazione elenco](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows.

Chiamare [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) per ogni immagine elenco; passare un puntatore a appropriato `CImageList` oggetto.

## <a name="see-also"></a>Vedere anche

[Uso di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
