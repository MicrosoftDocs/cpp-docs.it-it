---
title: CLinearTransition Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition::CLinearTransition
- AFXANIMATIONCONTROLLER/CLinearTransition::Create
- AFXANIMATIONCONTROLLER/CLinearTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CLinearTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CLinearTransition [MFC], CLinearTransition
- CLinearTransition [MFC], Create
- CLinearTransition [MFC], m_dblFinalValue
- CLinearTransition [MFC], m_duration
ms.assetid: 7fcb2dba-beb8-4933-9f5d-3b7fb1585ef0
caps.latest.revision: 18
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
ms.openlocfilehash: cbafeb7077e81d0914299d1226b70e1ee14c5aac
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="clineartransition-class"></a>CLinearTransition Class
Encapsulates a linear transition.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CLinearTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::CLinearTransition](#clineartransition)|Constructs a linear transition object and initializes it with duration and final value.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CLinearTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CLinearTransition::m_duration](#m_duration)|The duration of the transition.|  
  
## <a name="remarks"></a>Remarks  
 During a linear transition, the value of the animation variable transitions linearly from its initial value to a specified final value. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 [CLinearTransition](../../mfc/reference/clineartransition-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="clineartransition"></a>  CLinearTransition::CLinearTransition  
 Constructs a linear transition object and initializes it with duration and final value.  
  
```  
CLinearTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE dblFinalValue);
```  
  
### <a name="parameters"></a>Parameters  
 `duration`  
 The duration of the transition.  
  
 `dblFinalValue`  
 The value of the animation variable at the end of the transition.  
  
##  <a name="create"></a>  CLinearTransition::Create  
 Calls the transition library to create encapsulated transition COM object.  
  
```  
virtual BOOL Create(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parameters  
`pLibrary`  
 A pointer to an [IUIAnimationTransitionLibrary interface](https://msdn.microsoft.com/library/windows/desktop/dd371897), which defines a library of standard transitions.  
  
### <a name="return-value"></a>Return Value  
 TRUE if transition is created successfully; otherwise FALSE.  
  
##  <a name="m_dblfinalvalue"></a>  CLinearTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_duration"></a>  CLinearTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

