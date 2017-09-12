---
title: COM Interface Entry Points | Microsoft Docs
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
- entry points, COM interfaces
- state management, OLE/COM interfaces
- MFC COM, COM interface entry points
- OLE, interface entry points
- MFC, managing state data
- COM interfaces, entry points
ms.assetid: 9e7421dc-0731-4748-9e1b-90acbaf26d77
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
ms.openlocfilehash: 3b97fa6891e35a6aff492c70baad967466a46eb4
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="com-interface-entry-points"></a>COM Interface Entry Points
For member functions of a COM interface, use the [METHOD_PROLOGUE](com-interface-entry-points.md#method_prologue) macro to maintain the proper global state when calling methods of an exported interface.  
  
 Typically, member functions of interfaces implemented by `CCmdTarget`-derived objects already use this macro to provide automatic initialization of the `pThis` pointer. For example:  
  
 [!code-cpp[NVC_MFCConnectionPoints#5](../mfc/codesnippet/cpp/com-interface-entry-points_1.cpp)]  
  
 For additional information, see [Technical Note 38](../mfc/tn038-mfc-ole-iunknown-implementation.md) on MFC/OLE **IUnknown** implementation.  
  
 The `METHOD_PROLOGUE` macro is defined as:  
  
 `#define METHOD_PROLOGUE(theClass, localClass) \`  
  
 `theClass* pThis = \`  
  
 `((theClass*)((BYTE*)this - offsetof(theClass, m_x##localClass))); \`  
  
 `AFX_MANAGE_STATE(pThis->m_pModuleState) \`  
  
 The portion of the macro concerned with managing the global state is:  
  
 `AFX_MANAGE_STATE( pThis->m_pModuleState )`  
  
 In this expression, *m_pModuleState* is assumed to be a member variable of the containing object. It is implemented by the `CCmdTarget` base class and is initialized to the appropriate value by `COleObjectFactory`, when the object is instantiated.  
  
## <a name="see-also"></a>See Also  
 [Managing the State Data of MFC Modules](../mfc/managing-the-state-data-of-mfc-modules.md)


