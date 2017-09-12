---
title: CMFCPropertyGridToolTipCtrl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Create
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Deactivate
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::GetLastRect
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Hide
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::SetTextMargin
- AFXPROPERTYGRIDTOOLTIPCTRL/CMFCPropertyGridToolTipCtrl::Track
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyGridToolTipCtrl [MFC], CMFCPropertyGridToolTipCtrl
- CMFCPropertyGridToolTipCtrl [MFC], Create
- CMFCPropertyGridToolTipCtrl [MFC], Deactivate
- CMFCPropertyGridToolTipCtrl [MFC], GetLastRect
- CMFCPropertyGridToolTipCtrl [MFC], Hide
- CMFCPropertyGridToolTipCtrl [MFC], SetTextMargin
- CMFCPropertyGridToolTipCtrl [MFC], Track
ms.assetid: 84b436e5-6695-4da0-9569-1a875e087711
caps.latest.revision: 24
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
ms.openlocfilehash: bdc742b8713252d57dbf58888f51b37d7042623f
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcpropertygridtooltipctrl-class"></a>CMFCPropertyGridToolTipCtrl Class
Implements a tooltip control that the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md) uses to display tooltips.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCPropertyGridToolTipCtrl : public CWnd  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl](#cmfcpropertygridtooltipctrl)|Constructs a `CMFCPropertyGridToolTipCtrl` object.|  
|`CMFCPropertyGridToolTipCtrl::~CMFCPropertyGridToolTipCtrl`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|[CMFCPropertyGridToolTipCtrl::Create](#create)|Creates a window for the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::Deactivate](#deactivate)|Deactivates and hides the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::GetLastRect](#getlastrect)|Returns the coordinates of the last position of the tooltip control.|  
|[CMFCPropertyGridToolTipCtrl::Hide](#hide)|Hides the tooltip control.|  
|`CMFCPropertyGridToolTipCtrl::PreTranslateMessage`|Used by class [CWinApp](../../mfc/reference/cwinapp-class.md) to translate window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. (Overrides [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage).)|  
|[CMFCPropertyGridToolTipCtrl::SetTextMargin](#settextmargin)|Sets the spacing between the tooltip text and the border of the tooltip window.|  
|[CMFCPropertyGridToolTipCtrl::Track](#track)|Displays the tooltip control.|  
  
## <a name="remarks"></a>Remarks  
 Tooltips are displayed when the pointer rests on a property name. The [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md) class displays a tooltip so that it is easily readable by the user. Usually, the position of a tooltip is determined by the position of the pointer. By using this class, the tooltip appears over the property name and resembles the natural property extension, so that the property name is fully visible.  
  
 MFC automatically creates this control and uses it in the [CMFCPropertyGridCtrl Class](../../mfc/reference/cmfcpropertygridctrl-class.md).  
  
## <a name="example"></a>Example  
 The following example demonstrates how to construct an object of the `CMFCPropertyGridToolTipCtrl` class, and how to display the tooltip control.  
  
 [!code-cpp[NVC_MFC_RibbonApp#23](../../mfc/reference/codesnippet/cpp/cmfcpropertygridtooltipctrl-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCPropertyGridToolTipCtrl](../../mfc/reference/cmfcpropertygridtooltipctrl-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxpropertygridtooltipctrl.h  
  
##  <a name="cmfcpropertygridtooltipctrl"></a>  CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl  
 Constructs a `CMFCPropertyGridToolTipCtrl` object.  
  
```  
CMFCPropertyGridToolTipCtrl::CMFCPropertyGridToolTipCtrl();
```  
  
##  <a name="create"></a>  CMFCPropertyGridToolTipCtrl::Create  
 Creates a window for the tooltip control.  
  
```  
BOOL Create(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pWndParent`  
 A pointer to the parent window.  
  
### <a name="return-value"></a>Return Value  
 TRUE if the window was successfully created; otherwise, FALSE.  
  
##  <a name="deactivate"></a>  CMFCPropertyGridToolTipCtrl::Deactivate  
 Deactivates and hides the tooltip control.  
  
```  
void Deactivate();
```  
  
### <a name="remarks"></a>Remarks  
 This method sets the last position and text to empty values, so that future calls to [CMFCPropertyGridToolTipCtrl::Track](#track) display the tooltip.  
  
##  <a name="getlastrect"></a>  CMFCPropertyGridToolTipCtrl::GetLastRect  
 Returns the coordinates of the last position of the tooltip control.  
  
```  
void GetLastRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [out] `rect`  
 Contains the last position of the tooltip control.  
  
##  <a name="hide"></a>  CMFCPropertyGridToolTipCtrl::Hide  
 Hides the tooltip control.  
  
```  
void Hide();
```  
  
##  <a name="settextmargin"></a>  CMFCPropertyGridToolTipCtrl::SetTextMargin  
 Sets the spacing between the tooltip text and the border of the tooltip window.  
  
```  
void SetTextMargin(int nTextMargin);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nTextMargin`  
 Specifies the spacing between the tooltip control text and the border of the tooltip window. The default value is 10 pixels.  
  
##  <a name="track"></a>  CMFCPropertyGridToolTipCtrl::Track  
 Displays the tooltip control.  
  
```  
void Track(
    CRect rect,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `rect`  
 Specifies the position and size of the tooltip control.  
  
 [in] `strText`  
 Specifies the text to be shown in the tooltip.  
  
### <a name="remarks"></a>Remarks  
 This method displays the tooltip control at the position and size specified by `rect`. If the position, size, and text have not changed since the last time this method was called, this method has no effect.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)

