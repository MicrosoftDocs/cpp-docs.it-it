---
title: Informazioni sulle immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], image information in
- image lists [MFC], image information in
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
ms.openlocfilehash: 60cac844a83e898719cc67776b01eb2b0ffe4896
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50440222"
---
# <a name="image-information-in-image-lists"></a>Informazioni sulle immagini negli elenchi di immagini

[CImageList](../mfc/reference/cimagelist-class.md) include numerose funzioni che recuperano informazioni da un elenco di immagini. Il [funzione membro GetImageInfo](../mfc/reference/cimagelist-class.md#getimageinfo) la funzione membro inserisce un `IMAGEINFO` struttura con informazioni su una singola immagine, inclusi gli handle di bitmap di immagine e la maschera, il numero di regolatori di colore e bit per pixel e il rettangolo di delimitazione dell'immagine all'interno della bitmap. È possibile utilizzare queste informazioni per modificare direttamente le bitmap per l'immagine.

Il [GetImageCount](../mfc/reference/cimagelist-class.md#getimagecount) membro funzione recupera il numero di immagini in un elenco di immagini.

È possibile creare un'icona basata su un'immagine e una maschera in un elenco di immagini tramite il [funzione membro ExtractIcon](../mfc/reference/cimagelist-class.md#extracticon) funzione membro. La funzione restituisce l'handle della nuova icona.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)

