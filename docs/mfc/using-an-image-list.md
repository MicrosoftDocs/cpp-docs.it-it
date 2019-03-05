---
title: Utilizzo di un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
ms.openlocfilehash: cb95de134939e1b06e2a8b827424c986f8c48ef3
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57293875"
---
# <a name="using-an-image-list"></a>Utilizzo di un elenco di immagini

Uso tipico di un elenco di immagini segue il modello seguente:

- Costruire una [CImageList](../mfc/reference/cimagelist-class.md) dell'oggetto e chiamare uno degli overload del relativo [Create](../mfc/reference/cimagelist-class.md#create) funzione per creare un elenco di immagini e associarlo al `CImageList` oggetto.

- Se è stato aggiunto immagini quando è stato creato l'elenco di immagini, aggiungere immagini all'elenco di immagini tramite una chiamata di [Add](../mfc/reference/cimagelist-class.md#add) oppure [lettura](../mfc/reference/cimagelist-class.md#read) funzione membro.

- Associare l'elenco di immagini a un controllo chiamando la funzione membro appropriato del controllo o disegnare immagini dall'elenco immagini manualmente usando l'elenco di immagini [disegnare](../mfc/reference/cimagelist-class.md#draw) funzione membro.

- È possibile consentire all'utente di trascinare un'immagine, con il supporto incorporato dell'elenco di immagini per il trascinamento.

> [!NOTE]
>  Se l'elenco di immagini è stato creato con il **nuove** operatore, è necessario eliminare definitivamente il `CImageList` dell'oggetto al termine con esso.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)
