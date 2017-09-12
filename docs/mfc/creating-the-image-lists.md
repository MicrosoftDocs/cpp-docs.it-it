---
title: Creating the Image Lists | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- CListCtrl class [MFC], creating image lists for
- image lists [MFC], creating for CListCtrl
- lists [MFC], image
ms.assetid: c2768515-deba-49e8-a6f3-5be6482afb19
caps.latest.revision: 11
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 7a384572397c78a91d93f2aaba338591a6158b5a
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="creating-the-image-lists"></a>Creating the Image Lists
Creating image lists is the same whether you use [CListView](../mfc/reference/clistview-class.md) or [CListCtrl](../mfc/reference/clistctrl-class.md).  
  
> [!NOTE]
>  You only need image lists if your list control includes the `LVS_ICON` style.  
  
 Use class `CImageList` to create one or more image lists (for full-size icons, small icons, and states). See [CImageList](../mfc/reference/cimagelist-class.md), and see [List View Image Lists](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the Windows SDK.  
  
 Call [CListCtrl::SetImageList](../mfc/reference/clistctrl-class.md#setimagelist) for each image list; pass a pointer to the appropriate `CImageList` object.  
  
## <a name="see-also"></a>See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)


