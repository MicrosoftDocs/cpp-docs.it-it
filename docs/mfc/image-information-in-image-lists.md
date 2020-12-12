---
description: 'Ulteriori informazioni su: informazioni sulle immagini negli elenchi di immagini'
title: Informazioni sulle immagini negli elenchi di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- CImageList class [MFC], image information in
- image lists [MFC], image information in
ms.assetid: 73c41543-fa91-405d-b15b-0feffa6a72c1
ms.openlocfilehash: c3a5f1cee0a06177d12b72673bf0ebf8e1a73933
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97290141"
---
# <a name="image-information-in-image-lists"></a>Informazioni sulle immagini negli elenchi di immagini

[CImageList](reference/cimagelist-class.md) include una serie di funzioni che recuperano informazioni da un elenco di immagini. La funzione membro [GetImageInfo](reference/cimagelist-class.md#getimageinfo) compila una `IMAGEINFO` struttura con informazioni su una singola immagine, inclusi gli handle delle bitmap di immagine e maschera, il numero di piani di colore e bit per pixel e il rettangolo di delimitazione dell'immagine nella bitmap dell'immagine. È possibile usare queste informazioni per modificare direttamente le bitmap per l'immagine.

La funzione membro [GetImageCount](reference/cimagelist-class.md#getimagecount) Recupera il numero di immagini in un elenco di immagini.

È possibile creare un'icona basata su un'immagine e una maschera in un elenco di immagini usando la funzione membro [ExtractIcon](reference/cimagelist-class.md#extracticon) . La funzione restituisce l'handle dell'icona nuova.

## <a name="see-also"></a>Vedi anche

[Utilizzo di CImageList](using-cimagelist.md)<br/>
[Controlli](controls-mfc.md)
