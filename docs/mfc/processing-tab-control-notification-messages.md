---
title: Processing Tab Control Notification Messages | Microsoft Docs
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
- notifications [MFC], tab controls
- CTabCtrl class [MFC], processing notifications
- notifications [MFC], processing in CTabCtrl
- processing notifications [MFC]
- tab controls [MFC], processing notifications
ms.assetid: 758ccb7a-9e73-48f8-9073-23f7cb09918c
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
ms.openlocfilehash: 76c40264c0726a321714704720ac177828daaffd
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="processing-tab-control-notification-messages"></a>Processing Tab Control Notification Messages
As users click tabs or buttons, the tab control ([CTabCtrl](../mfc/reference/ctabctrl-class.md)) sends notification messages to its parent window. Handle these messages if you want to do something in response. For example, when the user clicks a tab, you may want to preset control data on the page prior to displaying it.  
  
 Process **WM_NOTIFY** messages from the tab control in your view or dialog class. Use the Properties window to create an [OnChildNotify](../mfc/reference/cwnd-class.md#onchildnotify) handler function with a switch statement based on which notification message is being handled. For a list of the notifications a tab control can send to its parent window, see the **Notifications** section of [Tab Control Reference](http://msdn.microsoft.com/library/windows/desktop/bb760548) in the Windows SDK.  
  
## <a name="see-also"></a>See Also  
 [Using CTabCtrl](../mfc/using-ctabctrl.md)   
 [Controls](../mfc/controls-mfc.md)


