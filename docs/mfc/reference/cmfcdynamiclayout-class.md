---
title: CMFCDynamicLayout Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCDynamicLayout
- AFXLAYOUT/CMFCDynamicLayout
- AFXLAYOUT/CMFCDynamicLayout::AddItem
- AFXLAYOUT/CMFCDynamicLayout::Adjust
- AFXLAYOUT/CMFCDynamicLayout::Create
- AFXLAYOUT/CMFCDynamicLayout::GetHostWnd
- AFXLAYOUT/CMFCDynamicLayout::GetMinSize
- AFXLAYOUT/CMFCDynamicLayout::GetWindowRect
- AFXLAYOUT/CMFCDynamicLayout::HasItem
- AFXLAYOUT/CMFCDynamicLayout::IsEmpty
- AFXLAYOUT/CMFCDynamicLayout::LoadResource
- AFXLAYOUT/CMFCDynamicLayout::SetMinSize
dev_langs:
- C++
ms.assetid: c2df2976-f049-47fc-9cf0-abe3e01948bc
caps.latest.revision: 16
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
ms.openlocfilehash: 574595d3b7475376a27735c483df71e15298e614
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcdynamiclayout-class"></a>CMFCDynamicLayout Class
Specifies how controls in a window are moved and resized as the user resizes the window.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCDynamicLayout : public CObject  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCDynamicLayout::CMFCDynamicLayout`|Constructs a `CMFCDynamicLayout` object.|  
|`CMFCDynamicLayout::~CMFCDynamicLayout`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDynamicLayout::AddItem](#additem)|Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.|  
|[CMFCDynamicLayout::Adjust](#adjust)|Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.|  
|[CMFCDynamicLayout::Create](#create)|Stores and validates the host window.|  
|[CMFCDynamicLayout::GetHostWnd](#gethostwnd)|Returns a pointer to a host window.|  
|[CMFCDynamicLayout::GetMinSize](#getminsize)|Returns the window size below which layout is not adjusted.|  
|[CMFCDynamicLayout::GetWindowRect](#getwindowrect)|Retrieves the rectangle for the window's current client area.|  
|[CMFCDynamicLayout::HasItem](#hasitem)|Checks if a child control was added to dynamic layout.|  
|[CMFCDynamicLayout::IsEmpty](#isempty)|Checks if a dynamic layout has no child windows added.|  
|[CMFCDynamicLayout::LoadResource](#loadresource)|Reads the dynamic layout from AFX_DIALOG_LAYOUT resource and then applies the layout to the host window.|  
|static [CMFCDynamicLayout::MoveHorizontal](#movehorizontal)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.|  
|static [CMFCDynamicLayout::MoveHorizontalAndVertical](#movehorizontalandvertical)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.|  
|static [CMFCDynamicLayout::MoveNone](#movenone)|Gets a [MoveSettings](#movesettings_structure) value that represents no motion, vertical or horizontal, for a child control.|  
|static [CMFCDynamicLayout::MoveVertical](#movevertical)|Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved vertically when the user resizes its hosting window.|  
|[CMFCDynamicLayout::SetMinSize](#setminsize)|Sets the window size below which layout is not adjusted.|  
|static [CMFCDynamicLayout::SizeHorizontal](#sizehorizontal)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.|  
|static [CMFCDynamicLayout::SizeHorizontalAndVertical](#sizehorizontalandvertical)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.|  
|static [CMFCDynamicLayout::SizeNone](#sizenone)|Gets a [SizeSettings](#sizesettings_structure) value that represents no change in size for a child control.|  
|static [CMFCDynamicLayout::SizeVertical](#sizevertical)|Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized vertically when the user resizes its hosting window.|  
  
## <a name="nested-types"></a>Nested Types  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCDynamicLayout::MoveSettings Structure](#movesettings_structure)|Encapsulates move data for controls in a dynamic layout.|  
|[CMFCDynamicLayout::SizeSettings Structure](#sizesettings_structure)|Encapsulates size change data for controls in a dynamic layout.|  
  
## <a name="remarks"></a>Remarks  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCDynamicLayout](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxlayout.h  
  
##  <a name="additem"></a>  CMFCDynamicLayout::AddItem  
 Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.  
  
```  
BOOL AddItem(
    HWND hwnd,
    MoveSettings moveSettings SizeSettings sizeSettings);

 
BOOL AddItem(
    int nID,
    MoveSettings moveSettings SizeSettings sizeSettings);
```  
  
### <a name="parameters"></a>Parameters  
 `hwnd`  
 The handle to the window to add.  
  
 `nID`  
 The ID of the child control to add.  
  
 `moveSettings`  
 A structure that describes how the control should be moved as the window size changes.  
  
 `sizeSettings`  
 A structure that describes how the control should be resized as the window size changes.  
  
### <a name="return-value"></a>Return Value  
 TRUE if the item was added successfully; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
 The position and size of a child control is changed dynamically when a hosting window is being resized.  
  
##  <a name="adjust"></a>  CMFCDynamicLayout::Adjust  
 Adds a child window, typically a control, to the list of windows that are controlled by the dynamic layout manager.  
  
```  
void Adjust();
```  
  
### <a name="remarks"></a>Remarks  
 The position and size of a child control is changed dynamically when a hosting window is being resized.  
  
##  <a name="create"></a>  CMFCDynamicLayout::Create  
 Stores and validates the host window.  
  
```  
BOOL Create(CWnd* pHostWnd);
```  
  
### <a name="parameters"></a>Parameters  
 pHostWnd  
 A pointer to the host window.  
  
### <a name="return-value"></a>Return Value  
 TRUE if creation succeeded; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="gethostwnd"></a>  CMFCDynamicLayout::GetHostWnd  
 Returns a pointer to a host window.  
  
```  
CWnd* GetHostWnd();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to the host window.  
  
### <a name="remarks"></a>Remarks  
 By default all child control positions recalculated relative to this window.  
  
##  <a name="getminsize"></a>  CMFCDynamicLayout::GetMinSize  
 Returns the window size below which layout is not adjusted.  
  
```  
CSize GetMinSize();
```  
  
### <a name="return-value"></a>Return Value  
 The window size below which layout is not adjusted.  
  
### <a name="remarks"></a>Remarks  
 The position and size of a child control is changed dynamically when a hosting window is being resized, but there is a minimum size below which the layout is not adjusted. The user can resize the window to a smaller size, but parts of the window are then hidden from view.  
  
##  <a name="getwindowrect"></a>  CMFCDynamicLayout::GetWindowRect  
 Retrieves the rectangle for the window's current client area.  
  
```  
void GetHostWndRect(CRect& rect,);
```  
  
### <a name="parameters"></a>Parameters  
 `rect`  
 After the function returns, this parameter contains the bounding rectangle of the layout area. This is an out parameter; the input value is overwritten.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="hasitem"></a>  CMFCDynamicLayout::HasItem  
 Checks if a child control was added to dynamic layout.  
  
```  
BOOL HasItem(HWND hwnd);
```  
  
### <a name="parameters"></a>Parameters  
 `hwnd`  
 The window handle for the control.  
  
### <a name="return-value"></a>Return Value  
 TRUE if layout already has this item; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="isempty"></a>  CMFCDynamicLayout::IsEmpty  
 Checks if a dynamic layout has no child windows added.  
  
```  
BOOL IsEmpty();
```  
  
### <a name="return-value"></a>Return Value  
 TRUE if layout has no items; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="loadresource"></a>  CMFCDynamicLayout::LoadResource  
 Reads the dynamic layout from AFX_DIALOG_LAYOUT resource and then applies the layout to the host window.  
  
```  
static BOOL LoadResource(CWnd* pHostWnd,
    LPVOID lpResource,
    DWORD dwSize);  
```  
  
### <a name="parameters"></a>Parameters  
 `pHostWnd`  
 A pointer to the host window.  
  
 `lpResource`  
 A pointer to the buffer that contains the AFX_DIALOG_LAYOUT resource.  
  
 `dwSize`  
 The buffer size in bytes.  
  
### <a name="return-value"></a>Return Value  
 TRUE if resource is loaded and applied to the host window; otherwise FALSE.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="movehorizontal"></a>  CMFCDynamicLayout::MoveHorizontal  
 Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.  
  
```  
static MoveSettings MoveHorizontal(int nRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nRatio`  
 Defines as a percentage how far a child control is moved horizontally when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="movehorizontalandvertical"></a>  CMFCDynamicLayout::MoveHorizontalAndVertical  
 Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved horizontally when the user resizes its hosting window.  
  
```  
static MoveSettings MoveHorizontalAndVertical(int nXRatio int nYRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nXRatio`  
 Defines as a percentage how far a child control is moved horizontally when the user resizes the host window.  
  
 `nYRatio`  
 Defines as a percentage how far a child control is moved vertically when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="movenone"></a>  CMFCDynamicLayout::MoveNone  
 Gets a [MoveSettings](#movesettings_structure) value that represents no motion, vertical or horizontal, for a child control.  
  
```  
static MoveSettings MoveNone();  
```  
  
### <a name="return-value"></a>Return Value  
 A [MoveSettings](#movesettings_structure) value that fixes the control in place, so that it does not move as the user resizes the host window.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="movesettings_structure"></a>  CMFCDynamicLayout::MoveSettings Structure  
 Encapsulates move data for controls in a dynamic layout.  
  
```  
struct CMFCDynamicLayout::MoveSettings;  
```  
  
### <a name="remarks"></a>Remarks  
 This is a nested class inside `CMFCDynamicLayout`.  

## <a name="cmfcdynamiclayoutmovesettingsishorizontal"></a>CMFCDynamicLayout::MoveSettings::IsHorizontal
Check if the move data specifies a nonzero horizontal move.  
  

```  
BOOL IsHorizontal() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `MoveSettings` object specifies a nonzero horizontal move.  

 ## <a name="cmfcdynamiclayoutmovesettingsisnone"></a>CMFCDynamicLayout::MoveSettings::IsNone
 Check if the move data specifies no movement.  
  
```  
BOOL IsNone() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `MoveSettings` object specifies no movement.  

## <a name="cmfcdynamiclayoutmovesettingsisvertical"></a>CMFCDynamicLayout::MoveSettings::IsVertical
  Check if the move data specifies a nonzero vertical movement.  
  
```  
BOOL IsVertical() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `MoveSettings` object specifies a nonzero vertical movement.  

##  <a name="movevertical"></a>  CMFCDynamicLayout::MoveVertical  
 Gets a [MoveSettings](#movesettings_structure) value that defines how much a child control is moved vertically when the user resizes its hosting window.  
  
```  
static MoveSettings MoveVertical(int nRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nRatio`  
 Defines as a percentage how far a child control is moved vertically when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [MoveSettings](#movesettings_structure) value that encapsulates the requested move ratio.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="setminsize"></a>  CMFCDynamicLayout::SetMinSize  
 Sets the window size below which layout is not adjusted.  
  
```  
void SetMinSize(const CSize& size);
```  
  
### <a name="parameters"></a>Parameters  
 `size`  
 The desired size below which layout is not adjusted.  
  
### <a name="remarks"></a>Remarks  
 The position and size of a child control is changed dynamically when a hosting window is being resized, but there is a minimum size below which the layout is not adjusted. The user can resize the window to a smaller size, but parts of the window are then hidden from view.  
  
##  <a name="sizehorizontal"></a>  CMFCDynamicLayout::SizeHorizontal  
 Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.  
  
```  
static SizeSettings SizeHorizontal(int nRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nRatio`  
 Defines as a percentage how far a child control is resized horizontally when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="sizehorizontalandvertical"></a>  CMFCDynamicLayout::SizeHorizontalAndVertical  
 Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized horizontally when the user resizes its hosting window.  
  
```  
static SizeSettings SizeHorizontalAndVertical(int nXRatio int nYRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nXRatio`  
 Defines as a percentage how far a child control is resized horizontally when the user resizes the host window.  
  
 `nYRatio`  
 Defines as a percentage how far a child control is resized vertically when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="sizenone"></a>  CMFCDynamicLayout::SizeNone  
 Gets a [SizeSettings](#sizesettings_structure) value that represents no change in size for a child control.  
  
```  
static SizeSettings SizeNone();  
```  
  
### <a name="return-value"></a>Return Value  
 A [SizeSettings](#sizesettings_structure) value that fixes the control at a certain size, so that it does not change size as the user resizes the host window.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="sizesettings_structure"></a>  CMFCDynamicLayout::SizeSettings Structure  
 Encapsulates size change data for controls in a dynamic layout.  
  
```  
struct CMFCDynamicLayout::SizeSettings;  
```  
  
### <a name="remarks"></a>Remarks  
 This is a nested class inside `CMFCDynamicLayout`.  

## <a name="cmfcdynamiclayoutsizesettingsishorizontal"></a>CMFCDynamicLayout::SizeSettings::IsHorizontal
Checks if the resize data specifies a nonzero horizontal resizing.  
  
```  
BOOL IsHorizontal() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `SizeSettings` object specifies a nonzero horizontal resizing. 

## <a name="cmfcdynamiclayoutsizesettingsisnone"></a>CMFCDynamicLayout::SizeSettings::IsNone
Checks if the resize data specifies no resizing.  
  
```  
BOOL IsNone() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `SizeSettings` object specifies no resizing.  

## <a name="cmfcdynamiclayoutsizesettingsisvertical"></a>CMFCDynamicLayout::SizeSettings::IsVertical
Checks if the resize data specifies a nonzero vertical resizing.  
  
```  
BOOL IsVertical() const 
```  
  
## <a name="return-value"></a>Return Value  
 TRUE if the `SizeSettings` object specifies a nonzero vertical resizing.  

##  <a name="sizevertical"></a>  CMFCDynamicLayout::SizeVertical  
 Gets a [SizeSettings](#sizesettings_structure) value that defines how much a child control is resized vertically when the user resizes its hosting window.  
  
```  
static SizeSettings SizeVertical(int nRatio);  
```  
  
### <a name="parameters"></a>Parameters  
 `nRatio`  
 Defines as a percentage how far a child control is resized vertically when the user resizes the host window.  
  
### <a name="return-value"></a>Return Value  
 A [SizeSettings](#sizesettings_structure) value that encapsulates the requested size ratio.  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)

