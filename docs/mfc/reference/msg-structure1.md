---
title: MSG Structure1 | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- MSG
dev_langs:
- C++
helpviewer_keywords:
- MSG structure [MFC]
ms.assetid: dc166d27-9423-41f1-9599-5ba76d2f0138
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
ms.openlocfilehash: 2c07f74157d8bcccb9c5b23727ce0a9107bfb51b
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="msg-structure1"></a>MSG Structure1
The `MSG` structure contains message information from a thread's message queue.  
  
## <a name="syntax"></a>Syntax  
  
```  
typedef struct tagMSG {     // msg    
    HWND hwnd;  
    UINT message;  
    WPARAM wParam;  
    LPARAM lParam;  
    DWORD time;  
    POINT pt;  
} MSG;  
```  
  
#### <a name="parameters"></a>Parameters  
 *hwnd*  
 Identifies the window whose window procedure receives the message.  
  
 `message`  
 Specifies the message number.  
  
 `wParam`  
 Specifies additional information about the message. The exact meaning depends on the value of the **message** member.  
  
 `lParam`  
 Specifies additional information about the message. The exact meaning depends on the value of the **message** member.  
  
 `time`  
 Specifies the time at which the message was posted.  
  
 `pt`  
 Specifies the cursor position, in screen coordinates, when the message was posted.  
  
## <a name="requirements"></a>Requirements  
 **Header:** winuser.h  
  
## <a name="see-also"></a>See Also  
 [Structures, Styles, Callbacks, and Message Maps](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)


