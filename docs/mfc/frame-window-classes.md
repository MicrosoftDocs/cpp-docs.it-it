---
title: Frame-Window Classes | Microsoft Docs
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
- frame window classes [MFC], about frame window classes
- frame window classes [MFC]
- windows [MFC], MDI
- document frame windows [MFC], classes
- single document interface (SDI), frame windows
- window classes [MFC], frame
- MFC, frame windows
- MDI [MFC], frame windows
- classes [MFC], window
ms.assetid: c27e43a7-8ad0-4759-b1b7-43f4725f4132
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
ms.openlocfilehash: f4817243b2dc96365af8f1b98008a4169d4aa6f0
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="frame-window-classes"></a>Frame-Window Classes
Each application has one "main frame window," a desktop window that usually has the application name in its caption. Each document usually has one "document frame window." A document frame window contains at least one view, which presents the document's data.  
  
## <a name="frame-windows-in-sdi-and-mdi-applications"></a>Frame Windows in SDI and MDI Applications  
 For an SDI application, there is one frame window derived from class [CFrameWnd](../mfc/reference/cframewnd-class.md). This window is both the main frame window and the document frame window. For an MDI application, the main frame window is derived from class [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md), and the document frame windows, which are MDI child windows, are derived from class [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  
  
## <a name="use-the-frame-window-class-or-derive-from-it"></a>Use the Frame-Window Class, or Derive from It  
 These classes provide most of the frame-window functionality you need for your applications. Under normal circumstances, the default behavior and appearance they provide will suit your needs. If you need additional functionality, derive from these classes.  
  
### <a name="what-do-you-want-to-know-more-about"></a>What do you want to know more about  
  
-   [Frame-window classes created by the Application Wizard](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Frame-window styles](../mfc/frame-window-styles-cpp.md)  
  
-   [Changing the styles of a window created by MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md)  
  
## <a name="see-also"></a>See Also  
 [Frame Windows](../mfc/frame-windows.md)


