---
title: Sovrapposizioni immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- overlays [MFC]
- image lists [MFC], image overlays in
- CImageList class [MFC], image overlays in
ms.assetid: aaf4e1c4-cd12-42c8-9af4-1bb458889b4e
ms.openlocfilehash: 8dd0b30ef29a48ebc763564e6fe23632cd300831
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62407965"
---
# <a name="image-overlays-in-image-lists"></a>Sovrapposizioni immagini negli elenchi di immagini

Ogni elenco di immagini ([CImageList](../mfc/reference/cimagelist-class.md)) include un elenco di immagini da utilizzare come maschere di sovrapposizione. Una maschera di sovrimpressione"" è un'immagine raffigurata in modo trasparente in un'altra immagine. Tutte le immagini possono essere usata come maschera di sovrapposizione. È possibile specificare fino a quattro maschere di sovrapposizione per ogni elenco di immagini.

L'indice di un'immagine aggiungere all'elenco di maschere di sovrapposizione con il [funzione membro SetOverlayImage](../mfc/reference/cimagelist-class.md#setoverlayimage) funzione membro, l'indice di un'immagine e l'indice di una maschera di sovrapposizione. Si noti che gli indici per le maschere di sovrapposizione in base uno piuttosto che in base zero.

Si disegna una maschera di sovrimpressione su un'immagine con una singola chiamata a `Draw`. I parametri includono l'indice dell'immagine da disegnare e l'indice di una maschera di sovrapposizione. È necessario usare il [INDEXTOOVERLAYMASK](/windows/desktop/api/commctrl/nf-commctrl-indextooverlaymask) macro per specificare l'indice della maschera di sovrapposizione. È anche possibile specificare un'immagine sovrapposta quando si chiama il [DrawIndirect](../mfc/reference/cimagelist-class.md#drawindirect) funzione membro.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)
