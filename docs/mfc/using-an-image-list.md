---
title: Utilizzo di un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
ms.openlocfilehash: 0d9566739a15e5d216eb052a7265313850515648
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81366570"
---
# <a name="using-an-image-list"></a>Utilizzo di un elenco di immagini

L'utilizzo tipico di un elenco di immagini segue il modello seguente:Typical usage of an image list follows the pattern below:

- Costruire un [Oggetto CImageList](../mfc/reference/cimagelist-class.md) e chiamare uno [Create](../mfc/reference/cimagelist-class.md#create) degli overload della relativa funzione Create `CImageList` per creare un elenco immagini e associarlo all'oggetto.

- Se non sono state aggiunte immagini durante la creazione dell'elenco immagini, aggiungere immagini all'elenco immagini chiamando la funzione membro [Add](../mfc/reference/cimagelist-class.md#add) o [Read.](../mfc/reference/cimagelist-class.md#read)

- Associare l'elenco immagini a un controllo chiamando la funzione membro appropriata di tale controllo o disegnare immagini dall'elenco immagini utilizzando la funzione membro [Draw](../mfc/reference/cimagelist-class.md#draw) dell'elenco immagini.

- Forse consentire all'utente di trascinare un'immagine, utilizzando il supporto incorporato dell'elenco di immagini per il trascinamento.

> [!NOTE]
> Se l'elenco immagini è stato creato con `CImageList` l'operatore **new,** è necessario eliminare l'oggetto al termine dell'operazione.

## <a name="see-also"></a>Vedere anche

[Uso di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)
