---
title: Window Objects | Microsoft Docs
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
- objects [MFC], window
- Windows window [MFC]
- MFC, windows
- frame windows [MFC], C++ window objects
- window objects [MFC]
- windows [MFC], C++ window objects
- window messages [MFC]
- HWND
- messages [MFC], Windows
- Visual C++, window objects [MFC]
- HWND, window objects [MFC]
ms.assetid: 28b33ce2-af05-4617-9d03-1cb9a02be687
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
ms.openlocfilehash: f8cfcd860a2bd271a213dc14aa1ad01aa59375f4
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="window-objects"></a>Window Objects
MFC supplies class [CWnd](../mfc/reference/cwnd-class.md) to encapsulate the `HWND` handle of a window. The `CWnd` object is a C++ window object, distinct from the `HWND` that represents a Windows window but containing it. Use `CWnd` to derive your own child window classes, or use one of the many MFC classes derived from `CWnd`. Class `CWnd` is the base class for all windows, including frame windows, dialog boxes, child windows, controls, and control bars such as toolbars. A good understanding of [the relationship between a C++ window object and an HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md) is crucial for effective programming with MFC.  
  
 MFC provides some default functionality and management of windows, but you can derive your own class from `CWnd` and use its member functions to customize the provided functionality. You can create child windows by constructing a `CWnd` object and calling its [Create](../mfc/reference/cwnd-class.md#create) member function, then customize the child windows using `CWnd` member functions. You can embed objects derived from [CView](../mfc/reference/cview-class.md), such as form views or tree views, in a frame window. And you can support multiple views of your documents via splitter panes, supplied by class [CSplitterWnd](../mfc/reference/csplitterwnd-class.md).  
  
 Each object derived from class `CWnd` contains a message map, through which you can map Windows messages or command IDs to your own handlers.  
  
 The general literature on programming for Windows is a good resource for learning how to use the `CWnd` member functions, which encapsulate the `HWND` APIs.  
  
## <a name="functions-for-operating-on-a-cwnd"></a>Functions for Operating On a CWnd  
 `CWnd` and its [derived window classes](../mfc/derived-window-classes.md) provide constructors, destructors, and member functions to initialize the object, create the underlying Windows structures, and access the encapsulated `HWND`. `CWnd` also provides member functions that encapsulate Windows APIs for sending messages, accessing the window's state, converting coordinates, updating, scrolling, accessing the Clipboard, and many other tasks. Most Windows window-management APIs that take an `HWND` argument are encapsulated as member functions of `CWnd`. The names of the functions and their parameters are preserved in the `CWnd` member function. For details about the Windows APIs encapsulated by `CWnd`, see class [CWnd](../mfc/reference/cwnd-class.md).  
  
## <a name="cwnd-and-windows-messages"></a>CWnd and Windows Messages  
 One of the primary purposes of `CWnd` is to provide an interface for handling Windows messages, such as `WM_PAINT` or `WM_MOUSEMOVE`. Many of the member functions of `CWnd` are handlers for standard messages — those beginning with the identifier **afx_msg** and the prefix "On," such as `OnPaint` and **OnMouseMove**. [Message Handling and Mapping](../mfc/message-handling-and-mapping.md) covers messages and message handling in detail. The information there applies equally to the framework's windows and those that you create yourself for special purposes.  
  
### <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [The relationship between a C++ window object and an HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md)  
  
-   [Derived window classes](../mfc/derived-window-classes.md)  
  
-   [Creating windows](../mfc/creating-windows.md)  
  
-   [Destroying window objects](../mfc/destroying-window-objects.md)  
  
-   [Detaching a CWnd from Its HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Working with window objects](../mfc/working-with-window-objects.md)  
  
-   [Device contexts](../mfc/device-contexts.md): objects that make Windows drawing device independent  
  
-   [Graphic objects](../mfc/graphic-objects.md): pens, brushes, fonts, bitmaps, palettes, regions  
  
## <a name="see-also"></a>See Also  
 [Windows](../mfc/windows.md)


