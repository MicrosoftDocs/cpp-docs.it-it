---
title: Detaching a CWnd from Its HWND | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CWnd
dev_langs:
- C++
helpviewer_keywords:
- HWND, detaching CWnd from
- removing HWNDs from CWnds
- CWnd objects [MFC], detaching from HWND
- detaching CWnds from HWNDs
- Detach method (CWnd class)
ms.assetid: 6efadf84-0517-4a3f-acfd-216e088f19c6
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
ms.openlocfilehash: 7b93a8205a5e6bafbf1561735e02b137ad4aa56e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="detaching-a-cwnd-from-its-hwnd"></a>Detaching a CWnd from Its HWND
If you need to circumvent the object-`HWND` relationship, MFC provides another `CWnd` member function, [Detach](../mfc/reference/cwnd-class.md#detach), which disconnects the C++ window object from the Windows window. This prevents the destructor from destroying the Windows window when the object is destroyed.  
  
## <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [Creating windows](../mfc/creating-windows.md)  
  
-   [Window destruction sequence](../mfc/window-destruction-sequence.md)  
  
-   [Allocating and deallocating window memory](../mfc/allocating-and-deallocating-window-memory.md)  
  
## <a name="see-also"></a>See Also  
 [Window Objects](../mfc/window-objects.md)


