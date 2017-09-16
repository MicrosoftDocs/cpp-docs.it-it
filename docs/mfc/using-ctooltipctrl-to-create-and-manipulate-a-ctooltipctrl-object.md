---
title: Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CToolTipCtrl
dev_langs:
- C++
helpviewer_keywords:
- tool tips [MFC], creating
- CToolTipCtrl class [MFC], using
ms.assetid: 0a34583f-f66d-46a1-a239-31b80ea395ad
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
ms.openlocfilehash: cfc091afcfea3eae5cc877d0a1a177f4f7221ac3
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="using-ctooltipctrl-to-create-and-manipulate-a-ctooltipctrl-object"></a>Using CToolTipCtrl to Create and Manipulate a CToolTipCtrl Object
Here is an example of [CToolTipCtrl](../mfc/reference/ctooltipctrl-class.md) usage:  
  
### <a name="to-create-and-manipulate-a-ctooltipctrl"></a>To create and manipulate a CToolTipCtrl  
  
1.  Construct the `CToolTipCtrl` object.  
  
2.  Call [Create](../mfc/reference/ctooltipctrl-class.md#create) to create the Windows tool tip common control and attach it to the `CToolTipCtrl` object.  
  
3.  Call [AddTool](../mfc/reference/ctooltipctrl-class.md#addtool) to register a tool with the tool tip control, so that the information stored in the tool tip is displayed when the cursor is on the tool.  
  
4.  Call [SetToolInfo](../mfc/reference/ctooltipctrl-class.md#settoolinfo) to set the information that a tool tip maintains for a tool.  
  
5.  Call [SetToolRect](../mfc/reference/ctooltipctrl-class.md#settoolrect) to set a new bounding rectangle for a tool.  
  
6.  Call [HitTest](../mfc/reference/ctooltipctrl-class.md#hittest) to test a point to determine whether it is within the bounding rectangle of the given tool and, if so, retrieve information about the tool.  
  
7.  Call [GetToolCount](../mfc/reference/ctooltipctrl-class.md#gettoolcount) to retrieve a count of the tools registered with the tool tip control.  
  
## <a name="see-also"></a>See Also  
 [Using CToolTipCtrl](../mfc/using-ctooltipctrl.md)   
 [Controls](../mfc/controls-mfc.md)


