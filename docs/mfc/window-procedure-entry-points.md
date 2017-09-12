---
title: Window Procedure Entry Points | Microsoft Docs
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
- state management, window procedures
- MFC, managing state data
- window procedure entry points
- entry points, window procedures
ms.assetid: a6b46a7f-6e42-45f2-9ae6-82e19fc57148
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
ms.openlocfilehash: 2807d55133f499413a2737c7876ad0bf00b511d8
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="window-procedure-entry-points"></a>Window Procedure Entry Points
To protect MFC window procedures, a module static links with a special window procedure implementation. The linkage occurs automatically when the module is linked with MFC. This window procedure uses the `AFX_MANAGE_STATE` macro to properly set the effective module state, then it calls **AfxWndProc**, which in turn delegates to the `WindowProc` member function of the appropriate `CWnd`-derived object.  
  
## <a name="see-also"></a>See Also  
 [Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md)


