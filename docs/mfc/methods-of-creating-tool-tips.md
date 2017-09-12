---
title: Methods of Creating Tool Tips | Microsoft Docs
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
- CToolTipCtrl class [MFC], creating tool tips
- tool tips [MFC], tool tip controls
- tool tips [MFC], creating
ms.assetid: b015e9f4-ddfb-49a4-a5a6-fa2d45e4d328
caps.latest.revision: 12
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
ms.openlocfilehash: 7f241e39e640da8927943d3628af9ccc7e430c0f
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="methods-of-creating-tool-tips"></a>Methods of Creating Tool Tips
MFC provides three classes to create and manage the tool tip control: [CWnd](../mfc/reference/cwnd-class.md), [CToolBarCtrl](../mfc/reference/ctoolbarctrl-class.md), [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) and [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md). The tool tip member functions in these classes wrap the Windows common control API. Class `CToolBarCtrl` and class `CToolTipCtrl` are derived from class `CWnd`.  
  
 `CWnd` provides four member functions to create and manage tool tips: [EnableToolTips](../mfc/reference/cwnd-class.md#enabletooltips), [CancelToolTips](../mfc/reference/cwnd-class.md#canceltooltips), [FilterToolTipMessage](../mfc/reference/cwnd-class.md#filtertooltipmessage), and [OnToolHitTest](../mfc/reference/cwnd-class.md#ontoolhittest). See these individual member functions for more information about how they implement tool tips.  
  
 If you create a toolbar using `CToolBarCtrl`, you can implement tool tips for that toolbar directly using the following member functions: [GetToolTips](../mfc/reference/ctoolbarctrl-class.md#gettooltips) and [SetToolTips](../mfc/reference/ctoolbarctrl-class.md#settooltips). See these individual member functions and [Handling Tool Tip Notifications](../mfc/handling-tool-tip-notifications.md) for more information about how they implement tool tips.  
  
 The `CToolTipCtrl` class provides the functionality of the Windows common tool tip control. A single tool tip control can provide information for more than one tool. A tool is either a window, such as a child window or control, or an application-defined rectangular area within a window's client area. The [CMFCToolTipCtrl](../mfc/reference/cmfctooltipctrl-class.md) class derives from `CToolTipCtrl` and provides additional visual styles and functionality.  
  
## <a name="see-also"></a>See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls-mfc.md)


