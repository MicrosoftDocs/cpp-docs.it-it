---
title: When to Initialize CWnd Objects | Microsoft Docs
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
- window objects [MFC], when to initialize CWnd
- initializing CWnd objects [MFC]
- initializing objects [MFC], CWnd
- CWnd objects [MFC], when HWND is attached
- HWND, when attached to CWnd object
- CWnd objects [MFC], when to initialize
ms.assetid: 4d31bcb1-73db-4f2f-b71c-89b087569a10
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
ms.openlocfilehash: f455efb704581bf2b94fa5113f63968e6ae85ac8
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="when-to-initialize-cwnd-objects"></a>When to Initialize CWnd Objects
You cannot create your own child windows or call any Windows API functions in the constructor of a `CWnd`-derived object. This is because the `HWND` for the `CWnd` object has not been created yet. Most Windows-specific initialization, such as adding child windows, must be done in an [OnCreate](../mfc/reference/cwnd-class.md#oncreate) message handler.  
  
## <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [Creating document frame windows](../mfc/creating-document-frame-windows.md)  
  
-   [Document/view creation](../mfc/document-view-creation.md)  
  
## <a name="see-also"></a>See Also  
 [Using Frame Windows](../mfc/using-frame-windows.md)


