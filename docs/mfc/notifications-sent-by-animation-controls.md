---
title: Notifications Sent by Animation Controls | Microsoft Docs
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
- notifications [MFC], animation controls
- CAnimateCtrl class [MFC], notifications
- controls [MFC], animation
- animation controls [MFC], notifications
ms.assetid: 584f5824-446b-4a1a-85f7-ef61842c8186
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
ms.openlocfilehash: fc95f7d2d9e79ab14122f81847a730cbc31629e9
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="notifications-sent-by-animation-controls"></a>Notifications Sent by Animation Controls
An animation control ([CAnimateCtrl](../mfc/reference/canimatectrl-class.md)) sends two different types of notification messages. The notifications are sent in the form of [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messages.  
  
 The [ACN_START](http://msdn.microsoft.com/library/windows/desktop/bb761891) message is sent when the animation control has started playing a clip. The [ACN_STOP](http://msdn.microsoft.com/library/windows/desktop/bb761893) message is sent when the animation control has finished or stopped playing a clip.  
  
## <a name="see-also"></a>See Also  
 [Using CAnimateCtrl](../mfc/using-canimatectrl.md)   
 [Controls](../mfc/controls-mfc.md)


