---
title: Creating the Header Control | Microsoft Docs
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
- CHeaderCtrl class [MFC], creating
- header controls [MFC], creating
ms.assetid: 7864d9d2-4a2c-4622-b58b-7b110a1e28d2
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
ms.openlocfilehash: 19990137630ff7074523f98399ca21b0accc00ee
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="creating-the-header-control"></a>Creating the Header Control
The header control is not directly available in the dialog editor (although you can add a list control, which includes a header control).  
  
### <a name="to-put-a-header-control-in-a-dialog-box"></a>To put a header control in a dialog box  
  
1.  Manually embed a member variable of type [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) in your dialog class.  
  
2.  In [OnInitDialog](../mfc/reference/cdialog-class.md#oninitdialog), create and set the styles for the `CHeaderCtrl`, position it, and display it.  
  
3.  Add items to the header control.  
  
4.  Use the Properties window to map handler functions in the dialog class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
### <a name="to-put-a-header-control-in-a-view-not-a-clistview"></a>To put a header control in a view (not a CListView)  
  
1.  Embed a [CHeaderCtrl](../mfc/reference/cheaderctrl-class.md) object in your view class.  
  
2.  Style, position, and display the header control window in the view's [OnInitialUpdate](../mfc/reference/cview-class.md#oninitialupdate) member function.  
  
3.  Add items to the header control.  
  
4.  Use the Properties window to map handler functions in the view class for any header-control notification messages you need to handle (see [Mapping Messages to Functions](../mfc/reference/mapping-messages-to-functions.md)).  
  
 In either case, the embedded control object is created when the view or dialog object is created. Then you must call [CHeaderCtrl::Create](../mfc/reference/cheaderctrl-class.md#create) to create the control window. To position the control, call [CHeaderCtrl::Layout](../mfc/reference/cheaderctrl-class.md#layout) to determine the control's initial size and position and [SetWindowPos](../mfc/reference/cwnd-class.md#setwindowpos) to set the position you want. Then add items as described in [Adding Items to the Header Control](../mfc/adding-items-to-the-header-control.md).  
  
 For more information, see [Creating a Header Control](http://msdn.microsoft.com/library/windows/desktop/bb775238) in the Windows SDK.  
  
## <a name="see-also"></a>See Also  
 [Using CHeaderCtrl](../mfc/using-cheaderctrl.md)   
 [Controls](../mfc/controls-mfc.md)


