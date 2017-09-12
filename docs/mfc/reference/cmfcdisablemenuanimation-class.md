---
title: CMFCDisableMenuAnimation Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation
- AFXPOPUPMENU/CMFCDisableMenuAnimation::Restore
dev_langs:
- C++
helpviewer_keywords:
- CMFCDisableMenuAnimation [MFC], Restore
ms.assetid: c6eb07da-c382-43d6-8028-007f2320e50e
caps.latest.revision: 22
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
ms.openlocfilehash: e3c4dae9f7d1082cb90fd022b15b4adc43f3d764
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcdisablemenuanimation-class"></a>CMFCDisableMenuAnimation Class
Disables pop-up menu animation.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCDisableMenuAnimation  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDisableMenuAnimation::CMFCDisableMenuAnimation`|Constructs a `CMFCDisableMenuAnimation` object.|  
|`CMFCDisableMenuAnimation::~CMFCDisableMenuAnimation`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCDisableMenuAnimation::Restore](#restore)|Restores the previous animation that the framework used to display a pop-up menu.|  
  
### <a name="data-members"></a>Data Members  
  
|||  
|-|-|  
|Name|Description|  
|`CMFCDisableMenuAnimation::m_animType`|Stores the previous pop-up menu animation type.|  
  
### <a name="remarks"></a>Remarks  
 Use this helper class to temporarily disable pop-up menu animation (for example, when you process mouse or keyboard commands).  
  
 A `CMFCDisableMenuAnimation` object disables pop-up menu animation during its lifetime. The constructor stores the current pop-up menu animation type in the `m_animType` field and sets the current animation type to `CMFCPopupMenu::NO_ANIMATION`. The destructor restores the previous animation type.  
  
 You can create a `CMFCDisableMenuAnimation` object on the stack to disable pop-up menu animation throughout a single function. If you want to disable popup menu animation between functions, create a `CMFCDisableMenuAnimation` object on the heap and then delete it when you want to restore pop-up menu animation.  
  
## <a name="example"></a>Example  
 The following example shows how to use the stack to temporarily disable menu animation.  
  
 [!code-cpp[NVC_MFC_Misc#1](../../mfc/reference/codesnippet/cpp/cmfcdisablemenuanimation-class_1.h)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CMFCDisableMenuAnimation](../../mfc/reference/cmfcdisablemenuanimation-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxpopupmenu.h  
  
##  <a name="restore"></a>  CMFCDisableMenuAnimation::Restore  
 Restores the previous animation that the framework used to display a pop-up menu.  
  
```  
void Restore ();
```  
  
### <a name="remarks"></a>Remarks  
 This method is called by the `CMFCDisableMenuAnimation` destructor to restore the previous animation that the framework used to display a pop-up menu.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPopupMenu Class](../../mfc/reference/cmfcpopupmenu-class.md)

