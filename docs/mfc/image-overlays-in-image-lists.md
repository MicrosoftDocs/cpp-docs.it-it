---
title: Sovrapposizioni immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- overlays [MFC]
- image lists [MFC], image overlays in
- CImageList class [MFC], image overlays in
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
ms.openlocfilehash: ec795193a28a68d8aee61e9932481a89c4b3e8e0
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69508378"
---
# <a name="image-overlays-in-image-lists"></a>Sovrapposizioni immagini negli elenchi di immagini

Ogni elenco di immagini ([CImageList](../mfc/reference/cimagelist-class.md)) include un elenco di immagini da utilizzare come maschere sovrapposte. Una "maschera di sovrapposizione" è un'immagine disegnata in modo trasparente su un'altra immagine. Qualsiasi immagine può essere utilizzata come maschera di sovrapposizione. È possibile specificare fino a quattro maschere sovrapposte per ogni elenco di immagini.

È possibile aggiungere l'indice di un'immagine all'elenco di maschere sovrapposte usando la funzione membro [SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) , l'indice di un'immagine e l'indice di una maschera di sovrapposizione. Si noti che gli indici per le maschere sovrapposte sono basati su uno anziché su zero.

È possibile creare una maschera di sovrapposizione su un'immagine usando una singola `Draw`chiamata a. I parametri includono l'indice dell'immagine da creare e l'indice di una maschera di sovrapposizione. È necessario usare la macro [INDEXTOOVERLAYMASK](/windows/win32/api/commctrl/nf-commctrl-indextooverlaymask) per specificare l'indice della maschera di sovrapposizione. È anche possibile specificare un'immagine sovrapposta quando si chiama la funzione membro [DrawIndirect](../mfc/reference/cimagelist-class.md#drawindirect) .

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)
