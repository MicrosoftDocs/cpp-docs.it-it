---
title: WINDOWPLACEMENT Structure | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- WINDOWPLACEMENT
dev_langs:
- C++
helpviewer_keywords:
- WINDOWPLACEMENT structure [MFC]
ms.assetid: ea7d61f6-eb57-478e-9b08-7c1d07091aa8
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
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: e26448daeff10c576944e5d9af79fa08a67b86c4
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="windowplacement-structure"></a>WINDOWPLACEMENT Structure
The `WINDOWPLACEMENT` structure contains information about the placement of a window on the screen**.**  
  
## <a name="syntax"></a>Syntax  
  
```  
typedef struct tagWINDOWPLACEMENT {     /* wndpl */  
    UINT length;  
    UINT flags;  
    UINT showCmd;  
    POINT ptMinPosition;  
    POINT ptMaxPosition;  
    RECT rcNormalPosition;  
} WINDOWPLACEMENT;  
```  
  
#### <a name="parameters"></a>Parameters  
 *length*  
 Specifies the length, in bytes, of the structure**.**  
  
 `flags`  
 Specifies flags that control the position of the minimized window and the method by which the window is restored. This member can be one or both of the following flags:  
  
- **WPF_SETMINPOSITION** Specifies that the x- and y-positions of the minimized window can be specified**.** This flag must be specified if the coordinates are set in the **ptMinPosition** member.  
  
- **WPF_RESTORETOMAXIMIZED** Specifies that the restored window will be maximized, regardless of whether it was maximized before it was minimized. This setting is valid only the next time the window is restored. It does not change the default restoration behavior. This flag is valid only when the **SW_SHOWMINIMIZED** value is specified for the **showCmd** member.  
  
 *showCmd*  
 Specifies the current show state of the window. This member can be one of the following values:  
  
- **SW_HIDE** Hides the window and passes activation to another window.  
  
- **SW_MINIMIZE** Minimizes the specified window and activates the top-level window in the system's list.  
  
- **SW_RESTORE** Activates and displays a window. If the window is minimized or maximized, Windows restores it to its original size and position (same as **SW_SHOWNORMAL**).  
  
- **SW_SHOW** Activates a window and displays it in its current size and position.  
  
- **SW_SHOWMAXIMIZED** Activates a window and displays it as a maximized window.  
  
- **SW_SHOWMINIMIZED** Activates a window and displays it as an icon.  
  
- **SW_SHOWMINNOACTIVE** Displays a window as an icon. The window that is currently active remains active.  
  
- **SW_SHOWNA** Displays a window in its current state. The window that is currently active remains active.  
  
- **SW_SHOWNOACTIVATE** Displays a window in its most recent size and position. The window that is currently active remains active.  
  
- **SW_SHOWNORMAL** Activates and displays a window. If the window is minimized or maximized, Windows restores it to its original size and position (same as **SW_RESTORE**).  
  
 *ptMinPosition*  
 Specifies the position of the window's top-left corner when the window is minimized.  
  
 `ptMaxPosition`  
 Specifies the position of the window's top-left corner when the window is maximized.  
  
 *rcNormalPosition*  
 Specifies the window's coordinates when the window is in the normal (restored) position.  
  
## <a name="requirements"></a>Requirements  
 **Header:** winuser.h  
  
## <a name="see-also"></a>See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CWnd::SetWindowPlacement](../../mfc/reference/cwnd-class.md#setwindowplacement)


