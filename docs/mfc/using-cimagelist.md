---
title: Utilizzo di CImageList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CImageList
dev_langs:
- C++
helpviewer_keywords:
- image list control
- CImageList class [MFC], using
ms.assetid: 3d2a909e-d641-46b7-aada-81cab1a29b41
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8dd30b21b1ec635c6d5b5f2f5c6c6d9eb6fc3fa7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33385791"
---
# <a name="using-cimagelist"></a>Utilizzo di CImageList
Un elenco di immagini, rappresentato dalla classe [CImageList](../mfc/reference/cimagelist-class.md), è una raccolta di immagini nella stessa dimensione, ognuno dei quali può fare riferimento al relativo indice. Elenchi di immagini vengono utilizzati per gestire in modo efficace grandi set di icone o bitmap. Elenchi di immagini non fanno controlli poiché non sono windows. Tuttavia, vengono utilizzati con diversi tipi di controlli, inclusi i controlli elenco ([CListCtrl](../mfc/reference/clistctrl-class.md)), struttura ad albero di controlli ([CTreeCtrl](../mfc/reference/ctreectrl-class.md)) e i controlli delle tabelle ([CTabCtrl](../mfc/reference/ctabctrl-class.md)).  
  
 Tutte le immagini in un elenco immagini sono contenute in una bitmap singola, ampia in formato dallo schermo. Un elenco di immagini può includere anche una bitmap monocromatica contenente maschere utilizzate per disegnare immagini in modo trasparente (stile icona). `CImageList` fornisce funzioni membro che consentono di disegnare immagini, creare e distruggere elenchi di immagini, aggiungere e rimuovere immagini, sostituire le immagini, immagini di tipo merge e trascinare le immagini.  
  
## <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Tipi di elenchi di immagini](../mfc/types-of-image-lists.md)  
  
-   [Uso di un elenco di immagini](../mfc/using-an-image-list.md)  
  
-   [Modifica degli elenchi di immagini](../mfc/manipulating-image-lists.md)  
  
-   [Disegno di immagini da un elenco di immagini](../mfc/drawing-images-from-an-image-list.md)  
  
-   [Sovrapposizioni immagini negli elenchi di immagini](../mfc/image-overlays-in-image-lists.md)  
  
-   [Trascinamento di immagini da un elenco di immagini](../mfc/dragging-images-from-an-image-list.md)  
  
-   [Informazioni sulle immagini negli elenchi di immagini](../mfc/image-information-in-image-lists.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Controlli](../mfc/controls-mfc.md)

