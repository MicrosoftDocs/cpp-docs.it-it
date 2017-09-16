---
title: Processing Notification Messages in Extended Combo Box Controls | Microsoft Docs
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
- extended combo boxes [MFC], notifications
- notifications [MFC], extended combo box controls
ms.assetid: 4e442758-d054-4746-bb1a-6ff84accb127
caps.latest.revision: 10
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
ms.openlocfilehash: 5ab3d37f2c5341814f5830964a30564b444b6d65
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="processing-notification-messages-in-extended-combo-box-controls"></a>Processing Notification Messages in Extended Combo Box Controls
As users interact with the extended combo box, the control (`CComboBoxEx`) sends notification messages to its parent window, usually a view or dialog object. Handle these messages if you want to do something in response. For example, when the user activates the drop-down list or clicks in the control's edit box, the **CBEN_BEGINEDIT** notification is sent.  
  
 Use the Properties window to add notification handlers to the parent class for those messages you want to implement.  
  
 The following list describes the various notifications sent by the extended combo box control.  
  
-   **CBEN_BEGINEDIT** Sent when the user activates the drop-down list or clicks in the control's edit box.  
  
-   **CBEN_DELETEITEM** Sent when an item has been deleted.  
  
-   **CBEN_DRAGBEGIN** Sent when the user begins dragging the image of the item displayed in the edit portion of the control.  
  
-   **CBEN_ENDEDIT** Sent when the user has concluded an operation within the edit box or has selected an item from the control's drop-down list.  
  
-   **CBEN_GETDISPINFO** Sent to retrieve display information about a callback item.  
  
-   **CBEN_INSERTITEM** Sent when a new item has been inserted in the control.  
  
## <a name="see-also"></a>See Also  
 [Using CComboBoxEx](../mfc/using-ccomboboxex.md)   
 [Controls](../mfc/controls-mfc.md)


