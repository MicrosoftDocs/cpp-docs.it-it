---
title: CAnimationVariable Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::CAnimationVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::AddTransition
- AFXANIMATIONCONTROLLER/CAnimationVariable::ApplyTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::ClearTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::Create
- AFXANIMATIONCONTROLLER/CAnimationVariable::CreateTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::EnableIntegerValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationVariable::EnableValueChangedEvent
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetParentAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::GetVariable
- AFXANIMATIONCONTROLLER/CAnimationVariable::SetDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::SetParentAnimationObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_bAutodestroyTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_dblDefaultValue
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_lstTransitions
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_pParentObject
- AFXANIMATIONCONTROLLER/CAnimationVariable::m_variable
dev_langs:
- C++
helpviewer_keywords:
- CAnimationVariable [MFC], CAnimationVariable
- CAnimationVariable [MFC], AddTransition
- CAnimationVariable [MFC], ApplyTransitions
- CAnimationVariable [MFC], ClearTransitions
- CAnimationVariable [MFC], Create
- CAnimationVariable [MFC], CreateTransitions
- CAnimationVariable [MFC], EnableIntegerValueChangedEvent
- CAnimationVariable [MFC], EnableValueChangedEvent
- CAnimationVariable [MFC], GetDefaultValue
- CAnimationVariable [MFC], GetParentAnimationObject
- CAnimationVariable [MFC], GetValue
- CAnimationVariable [MFC], GetVariable
- CAnimationVariable [MFC], SetDefaultValue
- CAnimationVariable [MFC], SetParentAnimationObject
- CAnimationVariable [MFC], m_bAutodestroyTransitions
- CAnimationVariable [MFC], m_dblDefaultValue
- CAnimationVariable [MFC], m_lstTransitions
- CAnimationVariable [MFC], m_pParentObject
- CAnimationVariable [MFC], m_variable
ms.assetid: 506e697e-31a8-4033-a27e-292f4d7b42d9
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
ms.openlocfilehash: 85388a9f55358c1c1fb5f5964d25c29c0231f3c0
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="canimationvariable-class"></a>CAnimationVariable Class
Represents an animation variable.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CAnimationVariable;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::CAnimationVariable](#canimationvariable)|Constructs an animation variable object.|  
|[CAnimationVariable::~CAnimationVariable](#canimationvariable__~canimationvariable)|The destructor. Called when a CAnimationVariable object is being destroyed.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::AddTransition](#addtransition)|Adds a transition.|  
|[CAnimationVariable::ApplyTransitions](#applytransitions)|Adds transitions from the internal list to storyboard.|  
|[CAnimationVariable::ClearTransitions](#cleartransitions)|Clears transitions.|  
|[CAnimationVariable::Create](#create)|Creates the underlying animation variable COM object.|  
|[CAnimationVariable::CreateTransitions](#createtransitions)|Creates all transitions to be applied to this animation variable.|  
|[CAnimationVariable::EnableIntegerValueChangedEvent](#enableintegervaluechangedevent)|Enables or disables the IntegerValueChanged event.|  
|[CAnimationVariable::EnableValueChangedEvent](#enablevaluechangedevent)|Enables or disables the ValueChanged event.|  
|[CAnimationVariable::GetDefaultValue](#getdefaultvalue)|Returns default value.|  
|[CAnimationVariable::GetParentAnimationObject](#getparentanimationobject)|Returns the parent animation object.|  
|[CAnimationVariable::GetValue](#getvalue)|Overloaded. Returns the current value of animation variable.|  
|[CAnimationVariable::GetVariable](#getvariable)|Returns a pointer to IUIAnimationVariable COM object.|  
|[CAnimationVariable::SetDefaultValue](#setdefaultvalue)|Sets default value and releases IUIAnimationVariable COM object.|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::SetParentAnimationObject](#setparentanimationobject)|Sets the relationship between an animation variable and an animation object.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::m_bAutodestroyTransitions](#m_bautodestroytransitions)|Specifies whether related transition objects should be deleted.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CAnimationVariable::m_dblDefaultValue](#m_dbldefaultvalue)|Specifies the default value, which is propagated to IUIAnimationVariable.|  
|[CAnimationVariable::m_lstTransitions](#m_lsttransitions)|Contains a list of transitions that animate this animation variable.|  
|[CAnimationVariable::m_pParentObject](#m_pparentobject)|A pointer to an animation object that encapsulates this animation variable.|  
|[CAnimationVariable::m_variable](#m_variable)|Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.|  
  
## <a name="remarks"></a>Remarks  
 The CAnimationVariable class encapsulates IUIAnimationVariable COM object. It also holds a list of transitions to be applied to the animation variable in a storyboard. CAnimationVariable objects are embedded to animation objects, which can represent in an application an animated value, point, size, color and rectangle.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `CAnimationVariable`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="_dtorcanimationvariable"></a>  CAnimationVariable::~CAnimationVariable  
 The destructor. Called when a CAnimationVariable object is being destroyed.  
  
```  
virtual ~CAnimationVariable();
```  
  
##  <a name="addtransition"></a>  CAnimationVariable::AddTransition  
 Adds a transition.  
  
```  
void AddTransition(CBaseTransition* pTransition);
```  
  
### <a name="parameters"></a>Parameters  
 `pTransition`  
 A pointer to a transition to add.  
  
### <a name="remarks"></a>Remarks  
 This method is called to add a transition to the internal list of transitions to be applied to the animation variable. This list should be cleared when an animation has been scheduled.  
  
##  <a name="applytransitions"></a>  CAnimationVariable::ApplyTransitions  
 Adds transitions from the internal list to storyboard.  
  
```  
void ApplyTransitions(
    CAnimationController* pController,  
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDependOnKeyframes);
```  
  
### <a name="parameters"></a>Parameters  
 `pController`  
 A pointer to parent animation controller.  
  
 `pStoryboard`  
 A pointer to storyboard.  
  
 `bDependOnKeyframes`  
 TRUE, if this method should add transitions that depend on keyframes.  
  
### <a name="remarks"></a>Remarks  
 This method adds transitions from the internal list to storyboard. It's called from the top level code several times to add transitions that do not depend on keyframes and add transitions that depend on keyframes. If the underlying animation variable COM object has not been created, this method creates it at this stage.  
  
##  <a name="canimationvariable"></a>  CAnimationVariable::CAnimationVariable  
 Constructs an animation variable object.  
  
```  
CAnimationVariable(DOUBLE dblDefaultValue = 0.0);
```  
  
### <a name="parameters"></a>Parameters  
 `dblDefaultValue`  
 Specifies the default value.  
  
### <a name="remarks"></a>Remarks  
 Constructs an animation variable object and sets its default value. A default value is used when a variable is not animated, or can't be animated.  
  
##  <a name="cleartransitions"></a>  CAnimationVariable::ClearTransitions  
 Clears transitions.  
  
```  
void ClearTransitions(BOOL bAutodestroy);
```  
  
### <a name="parameters"></a>Parameters  
 `bAutodestroy`  
 Specifies whether this method should delete transition objects.  
  
### <a name="remarks"></a>Remarks  
 This method removes all transitions from the internal list of transitions. If bAutodestroy is TRUE, or m_bAutodestroyTransitions is TRUE, then transitions are deleted. Otherwise the caller should deallocate the transition objects.  
  
##  <a name="create"></a>  CAnimationVariable::Create  
 Creates the underlying animation variable COM object.  
  
```  
virtual BOOL Create(IUIAnimationManager* pManager);
```  
  
### <a name="parameters"></a>Parameters  
 `pManager`  
 A pointer to animation manager.  
  
### <a name="return-value"></a>Return Value  
 TRUE if the animation variable was successfully created; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
 This method creates the underlying animation variable COM object and sets its default value.  
  
##  <a name="createtransitions"></a>  CAnimationVariable::CreateTransitions  
 Creates all transitions to be applied to this animation variable.  
  
```  
BOOL CreateTransitions(
    IUIAnimationTransitionLibrary* pLibrary,  
    IUIAnimationTransitionFactory* \*not used*\);
```  
  
### <a name="parameters"></a>Parameters  
`pLibrary`  
 A pointer to an [IUIAnimationTransitionLibrary interface](https://msdn.microsoft.com/library/windows/desktop/dd371897), which defines a library of standard transitions.  
  
### <a name="return-value"></a>Return Value  
 TRUE if transitions were created successfully; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
 This method is called by the framework when it needs to create transitions that have been added to the variable's internal list of transitions.  
  
##  <a name="enableintegervaluechangedevent"></a>  CAnimationVariable::EnableIntegerValueChangedEvent  
 Enables or disables the IntegerValueChanged event.  
  
```  
void EnableIntegerValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parameters  
 `pController`  
 A pointer to parent controller.  
  
 `bEnable`  
 TRUE - enable event, FALSE - disable event.  
  
### <a name="remarks"></a>Remarks  
 When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationIntegerValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the integer value of animation variable is changed.  
  
##  <a name="enablevaluechangedevent"></a>  CAnimationVariable::EnableValueChangedEvent  
 Enables or disables the ValueChanged event.  
  
```  
void EnableValueChangedEvent (
    CAnimationController* pController,  
    BOOL bEnable);
```  
  
### <a name="parameters"></a>Parameters  
 `pController`  
 A pointer to parent controller.  
  
 `bEnable`  
 TRUE - enable event, FALSE - disable event.  
  
### <a name="remarks"></a>Remarks  
 When ValueChanged event is enabled, the framework calls virtual method CAnimationController::OnAnimationValueChanged. You need to override it in a class derived from CAnimationController in order to process this event. This method is called every time the value of animation variable is changed.  
  
##  <a name="getdefaultvalue"></a>  CAnimationVariable::GetDefaultValue  
 Returns default value.  
  
```  
DOUBLE GetDefaultValue() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The default value.  
  
### <a name="remarks"></a>Remarks  
 Use this function to obtain default value of animation variable. The default value can be set in constructor or by SetDefaultValue method.  
  
##  <a name="getparentanimationobject"></a>  CAnimationVariable::GetParentAnimationObject  
 Returns the parent animation object.  
  
```  
CAnimationBaseObject* GetParentAnimationObject();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to parent animation object, if relationship was established, otherwise NULL.  
  
### <a name="remarks"></a>Remarks  
 This method can be called to retrieve a pointer to a parent animation object (a container).  
  
##  <a name="getvalue"></a>  CAnimationVariable::GetValue  
 Returns the current value of animation variable.  
  
```  
HRESULT GetValue(DOUBLE& dblValue);  
HRESULT GetValue(INT32& nValue);
```  
  
### <a name="parameters"></a>Parameters  
 `dblValue`  
 The current value of the animation variable.  
  
 `nValue`  
 The current value of the animation variable.  
  
### <a name="return-value"></a>Return Value  
 S_OK if the value was obtained successfully, or underlying animation variable has not been created. Otherwise HRESULT error code.  
  
### <a name="remarks"></a>Remarks  
 This method can be called to retrieve the current value of animation variable. If the underlying COM object has not been created, dblValue will contain a default value, when the function returns.  
  
##  <a name="getvariable"></a>  CAnimationVariable::GetVariable  
 Returns a pointer to IUIAnimationVariable COM object.  
  
```  
IUIAnimationVariable* GetVariable();
```  
  
### <a name="return-value"></a>Return Value  
 A valid pointer to IUIAnimationVariable COM object, or NULL if animation variable was not created, or can't be created.  
  
### <a name="remarks"></a>Remarks  
 Use this function to access the underlying IUIAnimationVariable COM object and call its methods directly if needed.  
  
##  <a name="m_bautodestroytransitions"></a>  CAnimationVariable::m_bAutodestroyTransitions  
 Specifies whether related transition objects should be deleted.  
  
```  
BOOL m_bAutodestroyTransitions;  
```  
  
### <a name="remarks"></a>Remarks  
 Set this value to TRUE to force deletion of transition objects when they are being removed from the internal list of transitions. If this value is FALSE the transitions should be deleted by calling application. The list of transitions is always cleared after an animation has been scheduled. The default value is FALSE.  
  
##  <a name="m_dbldefaultvalue"></a>  CAnimationVariable::m_dblDefaultValue  
 Specifies the default value, which is propagated to IUIAnimationVariable.  
  
```  
DOUBLE m_dblDefaultValue;  
```  
  
##  <a name="m_lsttransitions"></a>  CAnimationVariable::m_lstTransitions  
 Contains a list of transitions that animate this animation variable.  
  
```  
CObList m_lstTransitions;  
```  
  
##  <a name="m_pparentobject"></a>  CAnimationVariable::m_pParentObject  
 A pointer to an animation object that encapsulates this animation variable.  
  
```  
CAnimationBaseObject* m_pParentObject;  
```  
  
##  <a name="m_variable"></a>  CAnimationVariable::m_variable  
 Stores a pointer to IUIAnimationVariable COM object. NULL if the COM object has not been created yet, or if creation failed.  
  
```  
ATL::CComPtr<IUIAnimationVariable> m_variable;  
```  
  
##  <a name="setdefaultvalue"></a>  CAnimationVariable::SetDefaultValue  
 Sets default value and releases IUIAnimationVariable COM object.  
  
```  
void SetDefaultValue(DOUBLE dblDefaultValue);
```  
  
### <a name="parameters"></a>Parameters  
 `dblDefaultValue`  
 Specifies the new default value.  
  
### <a name="remarks"></a>Remarks  
 Use this method to reset the default value. This method releases the internal IUIAnimationVariable COM object, therefore when animation variable is recreated, the underlying COM object gets the new default value. The default value is returned by GetValue if the COM object representing the animation variable is not created, or if the variable has not been animated.  
  
##  <a name="setparentanimationobject"></a>  CAnimationVariable::SetParentAnimationObject  
 Sets the relationship between an animation variable and an animation object.  
  
```  
void SetParentAnimationObject(CAnimationBaseObject* pParentObject);
```  
  
### <a name="parameters"></a>Parameters  
 `pParentObject`  
 A pointer to an animation object that contains this variable.  
  
### <a name="remarks"></a>Remarks  
 This method is called internally to establish one-to-one relationship between an animation variable and an animation object that encapsulates it.  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

