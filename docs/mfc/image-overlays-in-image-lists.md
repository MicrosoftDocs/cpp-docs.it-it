---
title: Sovrapposizioni immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- overlays [MFC]
- image lists [MFC], image overlays in
- CImageList class [MFC], image overlays in
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
ms.openlocfilehash: 861bcd5165ad0938ae6bbd77fc4a9f09095ce789
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624471"
---
# <a name="image-overlays-in-image-lists"></a>Sovrapposizioni immagini negli elenchi di immagini

Ogni elenco di immagini ([CImageList](reference/cimagelist-class.md)) include un elenco di immagini da utilizzare come maschere sovrapposte. Una "maschera di sovrapposizione" è un'immagine disegnata in modo trasparente su un'altra immagine. Qualsiasi immagine può essere utilizzata come maschera di sovrapposizione. È possibile specificare fino a quattro maschere sovrapposte per ogni elenco di immagini.

È possibile aggiungere l'indice di un'immagine all'elenco di maschere sovrapposte usando la funzione membro [SetOverlayImage](reference/cimagelist-class.md#setoverlayimage) , l'indice di un'immagine e l'indice di una maschera di sovrapposizione. Si noti che gli indici per le maschere sovrapposte sono basati su uno anziché su zero.

È possibile creare una maschera di sovrapposizione su un'immagine usando una singola chiamata a `Draw` . I parametri includono l'indice dell'immagine da creare e l'indice di una maschera di sovrapposizione. È necessario usare la macro [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) per specificare l'indice della maschera di sovrapposizione. È anche possibile specificare un'immagine sovrapposta quando si chiama la funzione membro [DrawIndirect](reference/cimagelist-class.md#drawindirect) .

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](using-cimagelist.md)<br/>
[Controlli](controls-mfc.md)
