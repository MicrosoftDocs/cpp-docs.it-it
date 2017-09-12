---
title: CCubicTransition Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition::CCubicTransition
- AFXANIMATIONCONTROLLER/CCubicTransition::Create
- AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalValue
- AFXANIMATIONCONTROLLER/CCubicTransition::m_dblFinalVelocity
- AFXANIMATIONCONTROLLER/CCubicTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CCubicTransition [MFC], CCubicTransition
- CCubicTransition [MFC], Create
- CCubicTransition [MFC], m_dblFinalValue
- CCubicTransition [MFC], m_dblFinalVelocity
- CCubicTransition [MFC], m_duration
ms.assetid: 4fc30e9c-160c-45e1-bdbe-51adf8fee9c5
caps.latest.revision: 17
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
ms.openlocfilehash: 262d43aceb5987baef1a9fcf2323974848df11fd
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ccubictransition-class"></a>CCubicTransition Class
Encapsulates a cubic transition.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CCubicTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::CCubicTransition](#ccubictransition)|Constructs a transition object and initializes its parameters.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CCubicTransition::m_dblFinalValue](#m_dblfinalvalue)|The value of the animation variable at the end of the transition.|  
|[CCubicTransition::m_dblFinalVelocity](#m_dblfinalvelocity)|The velocity of the variable at the end of the transition.|  
|[CCubicTransition::m_duration](#m_duration)|The duration of the transition.|  
  
## <a name="remarks"></a>Remarks  
 During a cubic transition, the value of the animation variable changes from its initial value to a specified final value over the duration of the transition, ending at a specified velocity. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CCubicTransition`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="ccubictransition"></a>  CCubicTransition::CCubicTransition  
 Constructs a transition object and initializes its parameters.  
  
```  
CCubicTransition(
    UI_ANIMATION_SECONDS duration,  
    DOUBLE finalValue,  
    DOUBLE finalVelocity);
```  
  
### <a name="parameters"></a>Parameters  
 `duration`  
 The duration of the transition.  
  
 `finalValue`  
 The value of the animation variable at the end of the transition.  
  
 `finalVelocity`  
 The velocity of the variable at the end of the transition.  
  
##  <a name="create"></a>  CCubicTransition::Create  
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
  
##  <a name="m_dblfinalvalue"></a>  CCubicTransition::m_dblFinalValue  
 The value of the animation variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalValue;  
```  
  
##  <a name="m_dblfinalvelocity"></a>  CCubicTransition::m_dblFinalVelocity  
 The velocity of the variable at the end of the transition.  
  
```  
DOUBLE m_dblFinalVelocity;  
```  
  
##  <a name="m_duration"></a>  CCubicTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

