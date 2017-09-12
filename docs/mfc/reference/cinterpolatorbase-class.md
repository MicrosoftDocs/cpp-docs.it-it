---
title: CInterpolatorBase Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase::CInterpolatorBase
- AFXANIMATIONCONTROLLER/CInterpolatorBase::CreateInstance
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDependencies
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetDuration
- AFXANIMATIONCONTROLLER/CInterpolatorBase::GetFinalValue
- AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateValue
- AFXANIMATIONCONTROLLER/CInterpolatorBase::InterpolateVelocity
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetCustomInterpolator
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetDuration
- AFXANIMATIONCONTROLLER/CInterpolatorBase::SetInitialValueAndVelocity
dev_langs:
- C++
helpviewer_keywords:
- CInterpolatorBase [MFC], CInterpolatorBase
- CInterpolatorBase [MFC], CreateInstance
- CInterpolatorBase [MFC], GetDependencies
- CInterpolatorBase [MFC], GetDuration
- CInterpolatorBase [MFC], GetFinalValue
- CInterpolatorBase [MFC], InterpolateValue
- CInterpolatorBase [MFC], InterpolateVelocity
- CInterpolatorBase [MFC], SetCustomInterpolator
- CInterpolatorBase [MFC], SetDuration
- CInterpolatorBase [MFC], SetInitialValueAndVelocity
ms.assetid: bbc3dce7-8398-47f9-b97e-e4fd2d737232
caps.latest.revision: 19
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
ms.openlocfilehash: 258c0403dee25d1b3e08a954010d186880c8f734
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cinterpolatorbase-class"></a>CInterpolatorBase Class
Implements a callback, which is called by the Animation API when it has to calculate a new value of an animation variable.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CInterpolatorBase : public CUIAnimationInterpolatorBase<CInterpolatorBase>;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInterpolatorBase::CInterpolatorBase](#cinterpolatorbase)|Constructs the `CInterpolatorBase` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CInterpolatorBase::CreateInstance](#createinstance)|Creates an instance of `CInterpolatorBase` and stores a pointer to custom interpolator, which will be handling events.|  
|[CInterpolatorBase::GetDependencies](#getdependencies)|Gets the interpolator's dependencies. (Overrides `CUIAnimationInterpolatorBase::GetDependencies`.)|  
|[CInterpolatorBase::GetDuration](#getduration)|Gets the interpolator's duration. (Overrides `CUIAnimationInterpolatorBase::GetDuration`.)|  
|[CInterpolatorBase::GetFinalValue](#getfinalvalue)|Gets the final value to which the interpolator leads. (Overrides `CUIAnimationInterpolatorBase::GetFinalValue`.)|  
|[CInterpolatorBase::InterpolateValue](#interpolatevalue)|Interpolates the value at a given offset (Overrides `CUIAnimationInterpolatorBase::InterpolateValue`.)|  
|[CInterpolatorBase::InterpolateVelocity](#interpolatevelocity)|Interpolates the velocity at a given offset (Overrides `CUIAnimationInterpolatorBase::InterpolateVelocity`.)|  
|[CInterpolatorBase::SetCustomInterpolator](#setcustominterpolator)|Stores a pointer to custom interpolator, which will be handling events.|  
|[CInterpolatorBase::SetDuration](#setduration)|Sets the interpolator's duration (Overrides `CUIAnimationInterpolatorBase::SetDuration`.)|  
|[CInterpolatorBase::SetInitialValueAndVelocity](#setinitialvalueandvelocity)|Sets the interpolator's initial value and velocity. (Overrides `CUIAnimationInterpolatorBase::SetInitialValueAndVelocity`.)|  
  
## <a name="remarks"></a>Remarks  
 This handler is created and passed to `IUIAnimationTransitionFactory::CreateTransition` when a `CCustomTransition` object is being created as a part of animation initialization process (started by `CAnimationController::AnimateGroup`). Usually you don't need to use this class directly, it just routs all events to a `CCustomInterpolator`-derived class, whose pointer is passed to constructor of `CCustomTransition`.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `CUIAnimationCallbackBase`  
  
 `CUIAnimationInterpolatorBase`  
  
 `CInterpolatorBase`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="cinterpolatorbase"></a>  CInterpolatorBase::CInterpolatorBase  
 Constructs the CInterpolatorBase object.  
  
```  
CInterpolatorBase();
```  
  
##  <a name="createinstance"></a>  CInterpolatorBase::CreateInstance  
 Creates an instance of CInterpolatorBase and stores a pointer to custom interpolator, which will be handling events.  
  
```  
static COM_DECLSPEC_NOTHROW HRESULT CreateInstance(
    CCustomInterpolator* pInterpolator,  
    IUIAnimationInterpolator** ppHandler);
```  
  
### <a name="parameters"></a>Parameters  
 `pInterpolator`  
 A pointer to custom interpolator.  
  
 `ppHandler`  
 Output. Contains a pointer to instance of CInterpolatorBase when the function returns.  
  
### <a name="return-value"></a>Return Value  
  
##  <a name="getdependencies"></a>  CInterpolatorBase::GetDependencies  
 Gets the interpolator's dependencies.  
  
```  
IFACEMETHOD(GetDependencies)(
    __out UI_ANIMATION_DEPENDENCIES* initialValueDependencies,
    __out UI_ANIMATION_DEPENDENCIES* initialVelocityDependencies,
    __out UI_ANIMATION_DEPENDENCIES* durationDependencies);
```  
  
### <a name="parameters"></a>Parameters  
 `initialValueDependencies`  
 Output. Aspects of the interpolator that depend on the initial value passed to SetInitialValueAndVelocity.  
  
 `initialVelocityDependencies`  
 Output. Aspects of the interpolator that depend on the initial velocity passed to SetInitialValueAndVelocity.  
  
 `durationDependencies`  
 Output. Aspects of the interpolator that depend on the duration passed to SetDuration.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetDependencies method.  
  
##  <a name="getduration"></a>  CInterpolatorBase::GetDuration  
 Gets the interpolator's duration.  
  
```  
IFACEMETHOD(GetDuration)(__out UI_ANIMATION_SECONDS* duration);
```  
  
### <a name="parameters"></a>Parameters  
 `duration`  
 Output. The duration of the transition, in seconds.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetDuration method.  
  
##  <a name="getfinalvalue"></a>  CInterpolatorBase::GetFinalValue  
 Gets the final value to which the interpolator leads.  
  
```  
IFACEMETHOD(GetFinalValue)(__out DOUBLE* value);
```  
  
### <a name="parameters"></a>Parameters  
 `value`  
 Output. The final value of a variable at the end of the transition.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the GetFinalValue method.  
  
##  <a name="interpolatevalue"></a>  CInterpolatorBase::InterpolateValue  
 Interpolates the value at a given offset  
  
```  
IFACEMETHOD(InterpolateValue)(
  __in UI_ANIMATION_SECONDS offset, 
  __out DOUBLE* value);
```  
  
### <a name="parameters"></a>Parameters  
 `offset`  
 The offset from the start of the transition. The offset is always greater than or equal to zero and less than the duration of the transition. This method is not called if the duration of the transition is zero.  
  
 `value`  
 Output. The interpolated value.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the InterpolateValue method.  
  
##  <a name="interpolatevelocity"></a>  CInterpolatorBase::InterpolateVelocity  
 Interpolates the velocity at a given offset  
  
```  
IFACEMETHOD(InterpolateVelocity)(
  __in UI_ANIMATION_SECONDS offset,
  __out DOUBLE* velocity);
```  
  
### <a name="parameters"></a>Parameters  
 `offset`  
 The offset from the start of the transition. The offset is always greater than or equal to zero and less than or equal to the duration of the transition. This method is not called if the duration of the transition is zero.  
  
 `velocity`  
 Output. The velocity of the variable at the offset.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the InterpolateVelocity method.  
  
##  <a name="setcustominterpolator"></a>  CInterpolatorBase::SetCustomInterpolator  
 Stores a pointer to custom interpolator, which will be handling events.  
  
```  
void SetCustomInterpolator(CCustomInterpolator* pInterpolator);
```  
  
### <a name="parameters"></a>Parameters  
 `pInterpolator`  
 A pointer to custom interpolator.  
  
##  <a name="setduration"></a>  CInterpolatorBase::SetDuration  
 Sets the interpolator's duration  
  
```  
IFACEMETHOD(SetDuration)(__in UI_ANIMATION_SECONDS duration);
```  
  
### <a name="parameters"></a>Parameters  
 `duration`  
 The duration of the transition.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the SetDuration method.  
  
##  <a name="setinitialvalueandvelocity"></a>  CInterpolatorBase::SetInitialValueAndVelocity  
 Sets the interpolator's initial value and velocity.  
  
```  
IFACEMETHOD(SetInitialValueAndVelocity)(
  __in DOUBLE initialValue, 
  __in DOUBLE initialVelocity);
```  
  
### <a name="parameters"></a>Parameters  
 `initialValue`  
 The value of the variable at the start of the transition.  
  
 `initialVelocity`  
 The velocity of the variable at the start of the transition.  
  
### <a name="return-value"></a>Return Value  
 If the method succeeds, it returns S_OK. It returns E_FAIL if CCustomInterpolator is not set, or custom implementation returns FALSE from the SetInitialValueAndVelocity method.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

