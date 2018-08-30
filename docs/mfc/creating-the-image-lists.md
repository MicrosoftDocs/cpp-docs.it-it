---
title: Creazione degli elenchi di immagini | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53cf33a551dc95e7ed282b599673f627ff8a7b21
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43220937"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini
Creazione di elenchi di immagini non cambiano se si utilizza [CListView](../mfc/reference/clistview-class.md) oppure [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  È solo necessario elenchi di immagini se il controllo elenco include il `LVS_ICON` stile.  
  
 Usare classe `CImageList` per creare uno o più elenchi di immagini (per le icone con dimensioni normali, icone piccole e stati). Visualizzare [CImageList](../mfc/reference/cimagelist-class.md)e visualizzare [elenchi di immagini di visualizzazione elenco](/windows/desktop/Controls/using-list-view-controls) nel SDK di Windows.  
  
 Chiamare [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) per ogni immagine elenco; passare un puntatore a appropriato `CImageList` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

