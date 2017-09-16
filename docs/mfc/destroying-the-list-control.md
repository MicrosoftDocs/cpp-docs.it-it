---
title: Destroying the List Control | Microsoft Docs
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
- list controls [MFC], destroying
- CListCtrl class [MFC], destroying controls
ms.assetid: 513ec820-3a02-49d2-b073-a6a7a3fc91b3
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
ms.openlocfilehash: 5d0062a0ca0ebbc1d5fa79ae08d8d063089649a0
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="destroying-the-list-control"></a>Destroying the List Control
If you embed your [CListCtrl](../mfc/reference/clistctrl-class.md) object as a data member of a view or dialog class, it is destroyed when its owner is destroyed. If you use a [CListView](../mfc/reference/clistview-class.md), the framework destroys the control when it destroys the view.  
  
 If you arrange for some of your list data to be stored in the application rather than the list control, you will need to arrange for its deallocation. For more information, see [Callback Items and the Callback Mask](http://msdn.microsoft.com/library/windows/desktop/bb774736) in the Windows SDK.  
  
 In addition, you are responsible for deallocating any image lists you created and associated with the list control object.  
  
## <a name="see-also"></a>See Also  
 [Using CListCtrl](../mfc/using-clistctrl.md)   
 [Controls](../mfc/controls-mfc.md)


