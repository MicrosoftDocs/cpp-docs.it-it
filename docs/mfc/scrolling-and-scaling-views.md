---
title: Scrolling and Scaling Views | Microsoft Docs
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
- message handlers [MFC]
- scaling views [MFC]
- message handling [MFC], scroll bars in view class [MFC]
- scroll bars [MFC], messages
- scrolling views [MFC]
ms.assetid: f98a3421-c336-407e-97ee-dbb2ffd76fbd
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
ms.openlocfilehash: 3ba8ef3c6b1eaa228d136289323209d8bf220023
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="scrolling-and-scaling-views"></a>Scrolling and Scaling Views
MFC supports views that scroll and views that are automatically scaled to the size of the frame window that displays them. Class `CScrollView` supports both kinds of views.  
  
 For more information about scrolling and scaling, see class [CScrollView](../mfc/reference/cscrollview-class.md) in the *MFC Reference*. For a scrolling example, see the [Scribble sample](../visual-cpp-samples.md).  
  
## <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   Scrolling a view  
  
-   Scaling a view  
  
-   [View coordinates](http://msdn.microsoft.com/library/windows/desktop/dd145205)  
  
##  <a name="_core_scrolling_a_view"></a> Scrolling a View  
 Frequently the size of a document is greater than the size its view can display. This may occur because the document's data increases or the user shrinks the window that frames the view. In such cases, the view must support scrolling.  
  
 Any view can handle scroll-bar messages in its `OnHScroll` and `OnVScroll` member functions. You can either implement scroll-bar message handling in these functions, doing all the work yourself, or you can use the `CScrollView` class to handle scrolling for you.  
  
 `CScrollView` does the following:  
  
-   Manages window and viewport sizes and mapping modes  
  
-   Scrolls automatically in response to scroll-bar messages  
  
 You can specify how much to scroll for a "page" (when the user clicks in a scroll-bar shaft) and a "line" (when the user clicks in a scroll arrow). Plan these values to suit the nature of your view. For example, you might want to scroll in 1-pixel increments for a graphics view but in increments based on the line height in text documents.  
  
##  <a name="_core_scaling_a_view"></a> Scaling a View  
 When you want the view to automatically fit the size of its frame window, you can use `CScrollView` for scaling instead of scrolling. The logical view is stretched or shrunk to fit the window's client area exactly. A scaled view has no scroll bars.  
  
## <a name="see-also"></a>See Also  
 [Using Views](../mfc/using-views.md)


