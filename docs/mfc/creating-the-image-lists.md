---
title: Creazione degli elenchi di immagini | Documenti Microsoft
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
ms.openlocfilehash: 8e5f5ac8396c32e56e4c0f2f951f45bb33714822
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33341525"
---
# <a name="creating-the-image-lists"></a>Creazione degli elenchi di immagini
Creazione di elenchi di immagini è lo stesso sia che si utilizzi [CListView](../mfc/reference/clistview-class.md) o [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  È solo necessario elenchi di immagini se il controllo elenco include il `LVS_ICON` stile.  
  
 Utilizzare classe `CImageList` per creare uno o più elenchi di immagini (per icone grandi icone piccole e stati). Vedere [CImageList](../mfc/reference/cimagelist-class.md)e vedere [elenchi di immagini di visualizzazione elenco](http://msdn.microsoft.com/library/windows/desktop/bb774736) in Windows SDK.  
  
 Chiamare [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) per ogni immagine elenco; passare un puntatore a appropriato `CImageList` oggetto.  
  
## <a name="see-also"></a>Vedere anche  
 [Utilizzo di CListCtrl](../mfc/using-clistctrl.md)   
 [Controlli](../mfc/controls-mfc.md)

