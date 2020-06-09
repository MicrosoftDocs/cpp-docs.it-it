---
title: Creazione degli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
ms.openlocfilehash: bbba01a6a8e08ea53e164656733aa06e03dd87a7
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625953"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini

La creazione di elenchi di immagini è la stessa se si utilizza [CListView](reference/clistview-class.md) o [CListCtrl](reference/clistctrl-class.md).

> [!NOTE]
> Sono necessari solo gli elenchi di immagini se il controllo elenco include lo `LVS_ICON` stile.

Usare `CImageList` la classe per creare uno o più elenchi di immagini (per icone a dimensione intera, icone piccole e Stati). Vedere [CImageList](reference/cimagelist-class.md)e vedere [elenchi di immagini della visualizzazione elenco](/windows/win32/Controls/using-list-view-controls) nell'Windows SDK.

Chiamare [CListCtrl:: Seimagine](reference/clistctrl-class.md#setimagelist) per ogni elenco di immagini; passare un puntatore all'oggetto appropriato `CImageList` .

## <a name="see-also"></a>Vedere anche

[Utilizzo di CListCtrl](using-clistctrl.md)<br/>
[Controlli](controls-mfc.md)
