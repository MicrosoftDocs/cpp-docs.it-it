---
title: CAutoHideDockSite Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CAutoHideDockSite
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::CanAcceptPane
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::DockPane
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::GetAlignRect
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::RepositionPanes
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::SetOffsetLeft
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::SetOffsetRight
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::UnSetAutoHideMode
- AFXAUTOHIDEDOCKSITE/CAutoHideDockSite::m_nExtraSpace
dev_langs:
- C++
helpviewer_keywords:
- CAutoHideDockSite [MFC], CanAcceptPane
- CAutoHideDockSite [MFC], DockPane
- CAutoHideDockSite [MFC], GetAlignRect
- CAutoHideDockSite [MFC], RepositionPanes
- CAutoHideDockSite [MFC], SetOffsetLeft
- CAutoHideDockSite [MFC], SetOffsetRight
- CAutoHideDockSite [MFC], UnSetAutoHideMode
- CAutoHideDockSite [MFC], m_nExtraSpace
ms.assetid: 2a0f6bec-c369-4ab7-977d-564e7946ebad
caps.latest.revision: 32
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
ms.openlocfilehash: a9c5bc719b9fa14e6d4f2c551d6d90324143844e
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cautohidedocksite-class"></a>CAutoHideDockSite Class
The `CAutoHideDockSite` extends the [CDockSite Class](../../mfc/reference/cdocksite-class.md) to implement auto-hide dock panes.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CAutoHideDockSite : public CDockSite  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|||  
|-|-|  
|Name|Description|  
|`CAutoHideDockSite::CAutoHideDockSite`|Constructs a `CAutoHideDockSite` object.|  
|`CAutoHideDockSite::~CAutoHideDockSite`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|||  
|-|-|  
|Name|Description|  
|`CAutoHideDockSite::AllowShowOnPaneMenu`|Indicates whether the `CAutoHideDockSite` is shown on the pane menu.|  
|[CAutoHideDockSite::CanAcceptPane](#canacceptpane)|Determines whether a base pane object is derived from the [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md).|  
|[CAutoHideDockSite::DockPane](#dockpane)|Docks a pane to this `CAuotHideDockSite` object.|  
|[CAutoHideDockSite::GetAlignRect](#getalignrect)|Retrieves the size of the dock site in screen coordinates.|  
|[CAutoHideDockSite::RepositionPanes](#repositionpanes)|Redraws the pane on the `CAutoHideDockSite` with the global margins and button spacing.|  
|[CAutoHideDockSite::SetOffsetLeft](#setoffsetleft)|Sets the margin on the left side of the docking bar.|  
|[CAutoHideDockSite::SetOffsetRight](#setoffsetright)|Sets the margin on the right side of the docking bar.|  
|[CAutoHideDockSite::UnSetAutoHideMode](#unsetautohidemode)|Calls [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) for objects on the `CAutoHideDockSite`.|  
  
### <a name="data-members"></a>Data Members  
  
|||  
|-|-|  
|Name|Description|  
|[CAutoHideDockSite::m_nExtraSpace](#m_nextraspace)|Defines the size of the space between the toolbars and the edge of the docking bar. This space is measured from either the left edge or the top edge, depending on the alignment for the dock space.|  
  
## <a name="remarks"></a>Remarks  
 When you call [CFrameWndEx::EnableAutoHidePanes](../../mfc/reference/cframewndex-class.md#enableautohidepanes), the framework automatically creates a `CAutoHideDockSite` object. In most cases, you should not have to instantiate or use this class directly.  
  
 The docking bar is the gap between the left side of the dock pane and the left side of the [CMFCAutoHideButton Class](../../mfc/reference/cmfcautohidebutton-class.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CDockSite](../../mfc/reference/cdocksite-class.md)  
  
## <a name="example"></a>Example  
 The following example demonstrates how to retrieve a `CAutoHideDockSite` object from a `CMFCAutoHideBar` object, and how to set the left and right margins of the docking bar.  
  
 [!code-cpp[NVC_MFC_RibbonApp#29](../../mfc/reference/codesnippet/cpp/cautohidedocksite-class_1.cpp)]  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxautohidedocksite.h  
  
##  <a name="canacceptpane"></a>  CAutoHideDockSite::CanAcceptPane  
 Determines whether a base pane is a [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) object or derived from `CMFCAutoHideBar`.  
  
```  
virtual BOOL CanAcceptPane(const CBasePane* pBar) const;  
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pBar`|The base pane that the framework tests.|  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if `pBar` is derived from `CMFCAutoHideBar`; `FALSE` otherwise.  
  
### <a name="remarks"></a>Remarks  
 If a base pane object is derived from `CMFCAutoHideBar`, it can contain a `CAutoHideDockSite`.  
  
##  <a name="dockpane"></a>  CAutoHideDockSite::DockPane  
 Docks a pane to this [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md) object.  
  
```  
virtual void DockPane(
    CPane* pWnd,  
    AFX_DOCK_METHOD dockMethod,  
    LPRECT lpRect = NULL);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pWnd`|The pane that the framework docks.|  
|[in] `dockMethod`|Docking options for the pane.|  
|[in] `lpRect`|A rectangle that specifies the boundaries for the docked pane.|  
  
### <a name="remarks"></a>Remarks  
 The default implementation does not use the parameter `dockMethod`, which is provided for future use.  
  
 If `lpRect` is `NULL`, the framework puts the pane in the default location on the dock site. If the dock site is horizontal, the default location is at the far left of the dock site. Otherwise, the default location is at the top of the dock site.  
  
##  <a name="getalignrect"></a>  CAutoHideDockSite::GetAlignRect  
 Retrieves the size of the dock site in screen coordinates.  
  
```  
void GetAlignRect(CRect& rect) const;  
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `rect`|A reference to a rectangle. The method stores the size of the dock site in this rectangle.|  
  
### <a name="remarks"></a>Remarks  
 The rectangle is adjusted for the offset margins so that they are not included.  
  
##  <a name="m_nextraspace"></a>  CAutoHideDockSite::m_nExtraSpace  
 The size of the space between the edges of the [CAutoHideDockSite Class](../../mfc/reference/cautohidedocksite-class.md) and the [CMFCAutoHideBar Class](../../mfc/reference/cmfcautohidebar-class.md) objects.  
  
```  
static int m_nExtraSpace;  
```  
  
### <a name="remarks"></a>Remarks  
 When a `CMFCAutoHideBar` is docked at a `CAutoHideDockSite`, it should not occupy the whole dock site. This global variable controls the extra space between the left or top border of the `CMFCAutoHideBar` and the corresponding `CAutoHideDockSite` edge. Whether the top or left edge is used depends on the current alignment.  
  
##  <a name="setoffsetleft"></a>  CAutoHideDockSite::SetOffsetLeft  
 Sets the margin on the left side of the docking bar.  
  
```  
void SetOffsetLeft(int nOffset);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nOffset`  
 The new offset.  
  
### <a name="remarks"></a>Remarks  
 [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) objects are positioned statically on the `CAutoHideDockSite` object. This means that the user cannot manually change the location of `CMFCAutoHideBar` objects. The `SetOffsetLeft` method controls the spacing between the left side of the left-most `CMFCAutoHideBar` and the left side of the `CAutoHideDockSite`.  
  
##  <a name="setoffsetright"></a>  CAutoHideDockSite::SetOffsetRight  
 Sets the margin on the right side of the docking bar.  
  
```  
void SetOffsetRight(int nOffset);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nOffset`  
 The new offset.  
  
### <a name="remarks"></a>Remarks  
 [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) objects are positioned statically on the `CAutoHideDockSite` object. This means that the user cannot manually change the location of the `CMFCAutoHideBar` objects. The `SetOffsetRight` method controls the spacing between the right side of the right-most `CMFCAutoHideBar` and the right side of the `CAutoHideDockSite`.  
  
##  <a name="repositionpanes"></a>  CAutoHideDockSite::RepositionPanes  
 Redraws the panes on the [CAutoHideDockSite](../../mfc/reference/cautohidedocksite-class.md).  
  
```  
virtual void RepositionPanes(CRect& rectNewClientArea);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `rectNewClientArea`|A reserved value.|  
  
### <a name="remarks"></a>Remarks  
 The default implementation does not use `rectNewClientArea`. It redraws the panes with the global toolbar margins and button spacing.  
  
##  <a name="unsetautohidemode"></a>  CAutoHideDockSite::UnSetAutoHideMode  
 Calls [CMFCAutoHideBar::UnSetAutoHideMode](../../mfc/reference/cmfcautohidebar-class.md#unsetautohidemode) for objects on the dock site.  
  
```  
void UnSetAutoHideMode(CMFCAutoHideBar* pAutoHideToolbar);
```  
  
### <a name="parameters"></a>Parameters  
  
|||  
|-|-|  
|Parameter|Description|  
|[in] `pAutoHideToolbar`|A pointer to a [CMFCAutoHideBar](../../mfc/reference/cmfcautohidebar-class.md) object pane located on the `CAutoHideDockSite`.|  
  
### <a name="remarks"></a>Remarks  
 This method searches for the row that contains `pAutoHideToolbar`. It calls `CMFCAutoHideBar.UnSetAutoHideMode` for all the `CMFCAutoHideBar` objects on that row. If `pAutoHideToolbar` is not found or it is `NULL`, this method calls `CMFCAutoHideBar.UnSetAutoHideMode` for all the `CMFCAutoHideBar` objects on the `CAutoHideDockSite`.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CDockSite Class](../../mfc/reference/cdocksite-class.md)

