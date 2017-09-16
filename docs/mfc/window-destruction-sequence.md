---
title: Window Destruction Sequence | Microsoft Docs
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
- destruction, windows
- destroying windows
- sequence [MFC], window destruction
- CWnd objects [MFC], destruction sequence
- sequence [MFC]
- windows [MFC], destroying
ms.assetid: 2d819196-6240-415f-a308-db43745e616c
caps.latest.revision: 9
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
ms.openlocfilehash: d8829a095c2372b030a8111d1145467f4f346927
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="window-destruction-sequence"></a>Window Destruction Sequence
In the MFC framework, when the user closes the frame window, the window's default [OnClose](../mfc/reference/cwnd-class.md#onclose) handler calls [DestroyWindow](../mfc/reference/cwnd-class.md#destroywindow). The last member function called when the Windows window is destroyed is [OnNcDestroy](../mfc/reference/cwnd-class.md#onncdestroy), which does some cleanup, calls the [Default](../mfc/reference/cwnd-class.md#default) member function to perform Windows cleanup, and lastly calls the virtual member function [PostNcDestroy](../mfc/reference/cwnd-class.md#postncdestroy). The [CFrameWnd](../mfc/reference/cframewnd-class.md) implementation of `PostNcDestroy` deletes the C++ window object.  
  
## <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
-   [Detaching a CWnd from its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
## <a name="see-also"></a>See Also  
 [Destroying Window Objects](../mfc/destroying-window-objects.md)


