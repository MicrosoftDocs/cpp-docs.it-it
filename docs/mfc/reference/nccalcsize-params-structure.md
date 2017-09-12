---
title: NCCALCSIZE_PARAMS Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- NCCALCSIZE_PARAMS
dev_langs:
- C++
helpviewer_keywords:
- NCCALCSIZE_PARAMS structure [MFC]
ms.assetid: 3424cd9f-806a-4089-82fb-414187589edf
caps.latest.revision: 13
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
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 2cd507ff9e7c7f6703425044c34b38bc1576109e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="nccalcsizeparams-structure"></a>NCCALCSIZE_PARAMS Structure
The `NCCALCSIZE_PARAMS` structure contains information that an application can use while processing the `WM_NCCALCSIZE` message to calculate the size, position, and valid contents of the client area of a window.  
  
## <a name="syntax"></a>Syntax  
  
```  
typedef struct tagNCCALCSIZE_PARAMS {  
    RECT rgrc[3];  
    PWINDOWPOS lppos;  
} NCCALCSIZE_PARAMS;  
```  
  
#### <a name="parameters"></a>Parameters  
 *rgrc*  
 Specifies an array of rectangles. The first contains the new coordinates of a window that has been moved or resized. The second contains the coordinates of the window before it was moved or resized. The third contains the coordinates of the client area of a window before it was moved or resized. If the window is a child window, the coordinates are relative to the client area of the parent window. If the window is a top-level window, the coordinates are relative to the screen.  
  
 *lppos*  
 Points to a [WINDOWPOS](../../mfc/reference/windowpos-structure1.md) structure that contains the size and position values specified in the operation that caused the window to be moved or resized.  
  
## <a name="requirements"></a>Requirements  
 **Header:** winuser.h  
  
## <a name="see-also"></a>See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::OnNcCalcSize](../../mfc/reference/cwnd-class.md#onnccalcsize)


