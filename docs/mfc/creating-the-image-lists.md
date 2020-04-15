---
title: Creazione degli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
ms.openlocfilehash: 440ab6fdfe7663557f6c6a6607e617c793d26674
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371580"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini

La creazione di elenchi immagini è la stessa sia che si utilizzi [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md).

> [!NOTE]
> Sono necessari elenchi immagini solo se `LVS_ICON` il controllo elenco include lo stile.

Utilizzare `CImageList` class per creare uno o più elenchi immagini (per icone a grandezza naturale, icone piccole e stati). Vedere [CImageList](../mfc/reference/cimagelist-class.md)e [Liste immagini visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) in Windows SDK.

Chiamare [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) per ogni elenco immagini; passare un puntatore `CImageList` all'oggetto appropriato.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](../mfc/using-clistctrl.md)<br/>
[Controlli](../mfc/controls-mfc.md)
