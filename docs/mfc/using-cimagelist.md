---
description: 'Altre informazioni su: uso di CImageList'
title: Utilizzo di CImageList
ms.date: 11/04/2016
helpviewer_keywords:
- image list control
- CImageList class [MFC], using
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
ms.openlocfilehash: 9e0126e3d5b083dc4a88bfb1ca2130be0e9fbaaa
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97202535"
---
# <a name="using-cimagelist"></a>Utilizzo di CImageList

Un elenco di immagini, rappresentato dalla classe [CImageList](../mfc/reference/cimagelist-class.md), è una raccolta di immagini di dimensioni uguali, ciascuna delle quali può essere definita in base al relativo indice. Gli elenchi di immagini vengono utilizzati per gestire in modo efficiente grandi set di icone o bitmap. Gli elenchi di immagini non sono controlli perché non sono Windows; vengono tuttavia usati con diversi tipi di controlli, inclusi i controlli elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)), i controlli struttura ad albero ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) e i controlli di tabulazione ([CTabCtrl](../mfc/reference/ctabctrl-class.md)).

Tutte le immagini in un elenco di immagini sono contenute in un'unica bitmap a caratteri wide in formato schermo-dispositivo. Un elenco di immagini può includere anche una bitmap monocromatica che contiene le maschere usate per creare le immagini in modo trasparente (stile icona). `CImageList` fornisce funzioni membro che consentono di creare immagini, creare ed eliminare definitivamente elenchi di immagini, aggiungere e rimuovere immagini, sostituire immagini, unire immagini e trascinare immagini.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Tipi di elenchi di immagini](../mfc/types-of-image-lists.md)

- [Uso di un elenco di immagini](../mfc/using-an-image-list.md)

- [Manipolazione degli elenchi di immagini](../mfc/manipulating-image-lists.md)

- [Disegno di immagini da un elenco di immagini](../mfc/drawing-images-from-an-image-list.md)

- [Sovrapposizioni immagini negli elenchi di immagini](../mfc/image-overlays-in-image-lists.md)

- [Trascinamento di immagini da un elenco di immagini](../mfc/dragging-images-from-an-image-list.md)

- [Informazioni sulle immagini negli elenchi di immagini](../mfc/image-information-in-image-lists.md)

## <a name="see-also"></a>Vedi anche

[Controlli](../mfc/controls-mfc.md)
