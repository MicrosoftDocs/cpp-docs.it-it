---
title: Utilizzo di un elenco di immagini
ms.date: 11/04/2016
helpviewer_keywords:
- lists [MFC], image
- CImageList class [MFC], using
- image lists [MFC]
ms.assetid: e0aed188-a1e6-400e-9f51-033d61c5541f
ms.openlocfilehash: 710831ea8ef6b52292ba3e8eb84a69575c6c7508
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87226828"
---
# <a name="using-an-image-list"></a>Utilizzo di un elenco di immagini

L'utilizzo tipico di un elenco di immagini segue il modello seguente:

- Costruire un oggetto [CImageList](../mfc/reference/cimagelist-class.md) e chiamare uno degli overload della relativa funzione [create](../mfc/reference/cimagelist-class.md#create) per creare un elenco di immagini e collegarlo all' `CImageList` oggetto.

- Se non sono state aggiunte immagini quando è stato creato l'elenco di immagini, aggiungere immagini all'elenco di immagini chiamando la funzione membro [Add](../mfc/reference/cimagelist-class.md#add) o [Read](../mfc/reference/cimagelist-class.md#read) .

- Associare l'elenco di immagini a un controllo chiamando la funzione membro appropriata del controllo oppure creare immagini dall'elenco di immagini utilizzando la [funzione membro di](../mfc/reference/cimagelist-class.md#draw) creazione dell'elenco immagini.

- Potrebbe consentire all'utente di trascinare un'immagine, usando il supporto incorporato dell'elenco immagini per il trascinamento.

> [!NOTE]
> Se l'elenco immagini è stato creato con l' **`new`** operatore, è necessario eliminare definitivamente l' `CImageList` oggetto al termine dell'operazione.

## <a name="see-also"></a>Vedere anche

[Utilizzo di CImageList](../mfc/using-cimagelist.md)<br/>
[Controlli](../mfc/controls-mfc.md)
