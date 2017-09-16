---
title: CBaseKeyFrame Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::CBaseKeyFrame
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::AddToStoryboard
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::GetAnimationKeyframe
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::IsAdded
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::IsKeyframeAtOffset
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_bAdded
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_bIsKeyframeAtOffset
- AFXANIMATIONCONTROLLER/CBaseKeyFrame::m_keyframe
dev_langs:
- C++
helpviewer_keywords:
- CBaseKeyFrame [MFC], CBaseKeyFrame
- CBaseKeyFrame [MFC], AddToStoryboard
- CBaseKeyFrame [MFC], GetAnimationKeyframe
- CBaseKeyFrame [MFC], IsAdded
- CBaseKeyFrame [MFC], IsKeyframeAtOffset
- CBaseKeyFrame [MFC], m_bAdded
- CBaseKeyFrame [MFC], m_bIsKeyframeAtOffset
- CBaseKeyFrame [MFC], m_keyframe
ms.assetid: 285a2eff-e7c4-43be-b5aa-737727e6866d
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
ms.openlocfilehash: 5f79f26454a66666e317122c27df4ccf82a64bde
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cbasekeyframe-class"></a>CBaseKeyFrame Class
Implements the basic functionality of a keyframe.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CBaseKeyFrame : public CObject;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::CBaseKeyFrame](#cbasekeyframe)|Constructs a keyframe object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::AddToStoryboard](#addtostoryboard)|Adds a keyframe to storyboard.|  
|[CBaseKeyFrame::GetAnimationKeyframe](#getanimationkeyframe)|Returns the underlying keyframe value.|  
|[CBaseKeyFrame::IsAdded](#isadded)|Tells whether a keyframe has been added to storyboard.|  
|[CBaseKeyFrame::IsKeyframeAtOffset](#iskeyframeatoffset)|Specifies whether the keyframe should be added to storyboard at offset, or after transition.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CBaseKeyFrame::m_bAdded](#m_badded)|Specifies whether this keyframe has been added to a storyboard.|  
|[CBaseKeyFrame::m_bIsKeyframeAtOffset](#m_biskeyframeatoffset)|Specifies whether this keyframe should be added to storyboard at an offset from another existing keyframe, or at the end of some transition.|  
|[CBaseKeyFrame::m_keyframe](#m_keyframe)|Represents a Windows Animation API keyframe. When a keyframe is not initialized it is set to the predefined value UI_ANIMATION_KEYFRAME_STORYBOARD_START.|  
  
## <a name="remarks"></a>Remarks  
 Encapsulates UI_ANIMATION_KEYFRAME variable. Serves as a base class for any keyframe implementation. A keyframe represents a moment in time within a storyboard and can be used to specify the start and end times of transitions. There are two types of keyframes - keyframes added to storyboard at the specified offset (in time), or keyframes added after specified transition. Because durations of some transitions can't be known before animation starts, the actual values of some keyframes are determined at runtime only. Because keyframes may depend on transitions, which in their turn depend on keyframes, it's important to prevent infinite recursions when building keyframe chains.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CBaseKeyFrame`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxanimationcontroller.h  
  
##  <a name="addtostoryboard"></a>  CBaseKeyFrame::AddToStoryboard  
 Adds a keyframe to storyboard.  
  
```  
virtual BOOL AddToStoryboard(
    IUIAnimationStoryboard* pStoryboard,  
    BOOL bDeepAdd);
```  
  
### <a name="parameters"></a>Parameters  
 `pStoryboard`  
 A pointer to a storyboard.  
  
 `bDeepAdd`  
 If this parameter is TRUE and the keyframe being added depends on some other keyframe or transition, this method tries to add this keyframe or transition to storyboard first.  
  
### <a name="return-value"></a>Return Value  
 TRUE if keyframe was added to storyboard successfully; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
 This method is called to add a keyframe to storyboard.  
  
##  <a name="cbasekeyframe"></a>  CBaseKeyFrame::CBaseKeyFrame  
 Constructs a keyframe object.  
  
```  
CBaseKeyFrame();
```  
  
##  <a name="getanimationkeyframe"></a>  CBaseKeyFrame::GetAnimationKeyframe  
 Returns the underlying keyframe value.  
  
```  
UI_ANIMATION_KEYFRAME GetAnimationKeyframe() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A current keyframe. The default value is UI_ANIMATION_KEYFRAME_STORYBOARD_START.  
  
### <a name="remarks"></a>Remarks  
 This is an accessor to the underlying keyframe value.  
  
##  <a name="isadded"></a>  CBaseKeyFrame::IsAdded  
 Tells whether a keyframe has been added to storyboard.  
  
```  
BOOL IsAdded() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if a keyframe is added to a storyboard; otehrwise FALSE.  
  
### <a name="remarks"></a>Remarks  
 In the base class IsAdded always returns TRUE, but it's overridden in derived classes.  
  
##  <a name="iskeyframeatoffset"></a>  CBaseKeyFrame::IsKeyframeAtOffset  
 Specifies whether the keyframe should be added to storyboard at offset, or after transition.  
  
```  
BOOL IsKeyframeAtOffset() const;  
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if the keyframe should be added to storyboard at some specified offset. FALSE if the keyframe should be added to storyboard after some transition.  
  
### <a name="remarks"></a>Remarks  
 Specifies whether the keyframe should be added to storyboard at offset. The offset or transition must be specified in a derived class.  
  
##  <a name="m_badded"></a>  CBaseKeyFrame::m_bAdded  
 Specifies whether this keyframe has been added to a storyboard.  
  
```  
BOOL m_bAdded;  
```  
  
##  <a name="m_biskeyframeatoffset"></a>  CBaseKeyFrame::m_bIsKeyframeAtOffset  
 Specifies whether this keyframe should be added to storyboard at an offset from another existing keyframe, or at the end of some transition.  
  
```  
BOOL m_bIsKeyframeAtOffset;  
```  
  
##  <a name="m_keyframe"></a>  CBaseKeyFrame::m_keyframe  
 Represents a Windows Animation API keyframe. When a keyframe is not initialized it is set to the predefined value UI_ANIMATION_KEYFRAME_STORYBOARD_START.  
  
```  
UI_ANIMATION_KEYFRAME m_keyframe;  
```  
  
## <a name="see-also"></a>See Also  
 [Classes](../../mfc/reference/mfc-classes.md)

