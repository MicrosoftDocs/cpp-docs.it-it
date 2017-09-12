---
title: CConstantTransition Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition::CConstantTransition
- AFXANIMATIONCONTROLLER/CConstantTransition::Create
- AFXANIMATIONCONTROLLER/CConstantTransition::m_duration
dev_langs:
- C++
helpviewer_keywords:
- CConstantTransition [MFC], CConstantTransition
- CConstantTransition [MFC], Create
- CConstantTransition [MFC], m_duration
ms.assetid: f6fa4780-a71b-4cd6-80aa-d4792ace36c2
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
ms.openlocfilehash: 593aba4c3494e697ebef42cf86fd200ed46a8afd
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cconstanttransition-class"></a>CConstantTransition Class
Encapsulates a constant transition.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CConstantTransition : public CBaseTransition;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CConstantTransition::CConstantTransition](#cconstanttransition)|Constructs a transition object and initializes its duration.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CConstantTransition::Create](#create)|Calls the transition library to create encapsulated transition COM object. (Overrides [CBaseTransition::Create](../../mfc/reference/cbasetransition-class.md#create).)|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CConstantTransition::m_duration](#m_duration)|The duration of the transition.|  
  
## <a name="remarks"></a>Remarks  
 During a constant transition, the value of an animation variable remains at the initial value over the duration of the transition. Because all transitions are cleared automatically, it's recommended to allocated them using operator new. The encapsulated IUIAnimationTransition COM object is created by CAnimationController::AnimateGroup, until then it's NULL. Changing member variables after creation of this COM object has no effect.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CBaseTransition](../../mfc/reference/cbasetransition-class.md)  
  
 `CConstantTransition`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cconstanttransition"></a>  CConstantTransition::CConstantTransition  
 Constructs a transition object and initializes its duration.  
  
```  
CConstantTransition (UI_ANIMATION_SECONDS duration);
```  
  
### <a name="parameters"></a>Parameters  
 `duration`  
 The duration of the transition.  
  
##  <a name="create"></a>  CConstantTransition::Create  
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
  
##  <a name="m_duration"></a>  CConstantTransition::m_duration  
 The duration of the transition.  
  
```  
UI_ANIMATION_SECONDS m_duration;  
```  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

