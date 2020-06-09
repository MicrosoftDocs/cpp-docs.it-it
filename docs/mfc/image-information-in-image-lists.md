---
title: Informazioni sulle immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], image information in
- image lists [MFC], image information in
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
ms.openlocfilehash: c12198c769585763095d22b73d11f7af3c9d6fc0
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624504"
---
# <a name="image-information-in-image-lists"></a>Informazioni sulle immagini negli elenchi di immagini

[CImageList](reference/cimagelist-class.md) include una serie di funzioni che recuperano informazioni da un elenco di immagini. La funzione membro [GetImageInfo](reference/cimagelist-class.md#getimageinfo) compila una `IMAGEINFO` struttura con informazioni su una singola immagine, inclusi gli handle delle bitmap di immagine e maschera, il numero di piani di colore e bit per pixel e il rettangolo di delimitazione dell'immagine nella bitmap dell'immagine. È possibile usare queste informazioni per modificare direttamente le bitmap per l'immagine.

La funzione membro [GetImageCount](reference/cimagelist-class.md#getimagecount) Recupera il numero di immagini in un elenco di immagini.

È possibile creare un'icona basata su un'immagine e una maschera in un elenco di immagini usando la funzione membro [ExtractIcon](reference/cimagelist-class.md#extracticon) . La funzione restituisce l'handle dell'icona nuova.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](using-cimagelist.md)<br/>
[Controlli](controls-mfc.md)
