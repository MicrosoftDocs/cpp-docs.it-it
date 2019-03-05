---
title: Utilizzo di CImageList
ms.date: 11/04/2016
f1_keywords:
- CImageList
helpviewer_keywords:
- image list control
- CImageList class [MFC], using
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
ms.openlocfilehash: c3e4cec75ce23beb2a617d672170f86c608ca0a2
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57294590"
---
# <a name="using-cimagelist"></a>Utilizzo di CImageList

Un elenco di immagini, rappresentato dalla classe [CImageList](../mfc/reference/cimagelist-class.md), è una raccolta di immagini stessa dimensione, ognuno dei quali può essere indicato dal relativo indice. Elenchi di immagini consentono di gestire in modo efficiente grandi set di icone o bitmap. Elenchi di immagini non stessi sono controlli perché non sono finestre. Tuttavia, vengono usati con diversi tipi di controlli, inclusi i controlli di elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)), i controlli di struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) e controlli ([CTabCtrl](../mfc/reference/ctabctrl-class.md)).

Tutte le immagini in un elenco di immagini sono contenute in una bitmap singola, ampia nel formato di dispositivo dello schermo. Un elenco di immagini può includere anche una bitmap monocromatica che contiene le maschere utilizzate per disegnare immagini in modo trasparente (stile icona). `CImageList` fornisce funzioni membro che consentono di disegnare immagini, creare e distruggere gli elenchi di immagini, aggiungere e rimuovere immagini, sostituire le immagini, immagini di tipo merge e trascinare le immagini.

## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Tipi di elenchi di immagini](../mfc/types-of-image-lists.md)

- [Uso di un elenco di immagini](../mfc/using-an-image-list.md)

- [Modifica degli elenchi di immagini](../mfc/manipulating-image-lists.md)

- [Disegno di immagini da un elenco di immagini](../mfc/drawing-images-from-an-image-list.md)

- [Sovrapposizioni immagini negli elenchi di immagini](../mfc/image-overlays-in-image-lists.md)

- [Trascinamento di immagini da un elenco di immagini](../mfc/dragging-images-from-an-image-list.md)

- [Informazioni sulle immagini negli elenchi di immagini](../mfc/image-information-in-image-lists.md)

## <a name="see-also"></a>Vedere anche

[Controlli](../mfc/controls-mfc.md)
