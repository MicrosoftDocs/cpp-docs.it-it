---
title: CMFCRibbonComboBox Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::CMFCRibbonComboBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::AddItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::DeleteItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::EnableDropDownListResize
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::FindItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetCount
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetCurSel
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetDropDownHeight
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetIntermediateSize
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::GetItemData
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::HasEditBox
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::IsResizeDropDownList
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::OnSelectItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::RemoveAllItems
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::SelectItem
- AFXRIBBONCOMBOBOX/CMFCRibbonComboBox::SetDropDownHeight
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonComboBox [MFC], CMFCRibbonComboBox
- CMFCRibbonComboBox [MFC], AddItem
- CMFCRibbonComboBox [MFC], DeleteItem
- CMFCRibbonComboBox [MFC], EnableDropDownListResize
- CMFCRibbonComboBox [MFC], FindItem
- CMFCRibbonComboBox [MFC], GetCount
- CMFCRibbonComboBox [MFC], GetCurSel
- CMFCRibbonComboBox [MFC], GetDropDownHeight
- CMFCRibbonComboBox [MFC], GetIntermediateSize
- CMFCRibbonComboBox [MFC], GetItem
- CMFCRibbonComboBox [MFC], GetItemData
- CMFCRibbonComboBox [MFC], HasEditBox
- CMFCRibbonComboBox [MFC], IsResizeDropDownList
- CMFCRibbonComboBox [MFC], OnSelectItem
- CMFCRibbonComboBox [MFC], RemoveAllItems
- CMFCRibbonComboBox [MFC], SelectItem
- CMFCRibbonComboBox [MFC], SetDropDownHeight
ms.assetid: 9b29a6a4-cf17-4152-9b13-0bf90784b30d
caps.latest.revision: 35
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
ms.openlocfilehash: a11273bf776f9a8a0ea1b0870f0244b759c4eb80
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcribboncombobox-class"></a>CMFCRibbonComboBox Class
The `CMFCRibbonComboBox` class implements a combo box control that you can add to a ribbon bar, a ribbon panel, or a ribbon popup menu.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCRibbonComboBox : public CMFCRibbonEdit  
```  
  
## <a name="members"></a>Members  
  
### <a name="constructors"></a>Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonComboBox::CMFCRibbonComboBox](#cmfcribboncombobox)|Constructs a CMFCRibbonComboBox object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonComboBox::AddItem](#additem)|Appends a unique item to the list box.|  
|[CMFCRibbonComboBox::DeleteItem](#deleteitem)|Deletes a specified item from the list box.|  
|[CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize)|Specifies whether the list box can change size when it drops down.|  
|[CMFCRibbonComboBox::FindItem](#finditem)|Returns the index of the first item in the list box that matches a specified string.|  
|[CMFCRibbonComboBox::GetCount](#getcount)|Returns the number of items in the list box.|  
|[CMFCRibbonComboBox::GetCurSel](#getcursel)|Gets the index of the currently selected item in the list box.|  
|[CMFCRibbonComboBox::GetDropDownHeight](#getdropdownheight)|Gets the height of the list box when the list box is dropped down.|  
|[CMFCRibbonComboBox::GetIntermediateSize](#getintermediatesize)|Returns the size of the combo box as displayed in intermediate mode.|  
|[CMFCRibbonComboBox::GetItem](#getitem)|Returns the string associated with an item at a specified index in the list box.|  
|[CMFCRibbonComboBox::GetItemData](#getitemdata)|Returns the data associated with an item at a specified index in the list box.|  
|[CMFCRibbonComboBox::HasEditBox](#haseditbox)|Indicates whether the control contains an edit box.|  
|[CMFCRibbonComboBox::IsResizeDropDownList](#isresizedropdownlist)|Indicates whether or not the list box can be resized.|  
|[CMFCRibbonComboBox::OnSelectItem](#onselectitem)|Called by the framework when the user selects an item in the list box.|  
|[CMFCRibbonComboBox::RemoveAllItems](#removeallitems)|Deletes all items from the list box and clears the edit box.|  
|[CMFCRibbonComboBox::SelectItem](#selectitem)|Selects an item in the list box.|  
|[CMFCRibbonComboBox::SetDropDownHeight](#setdropdownheight)|Sets the height of the list box when it is dropped down.|  
  
## <a name="remarks"></a>Remarks  
 The ribbon combo box consists of a list box combined with either a static label or label that can be edited by the user. You must specify which type you want when you create your ribbon combo box.  
  
## <a name="example"></a>Example  
 The following example demonstrates how to construct an object of the `CMFCRibbonComboBox` class, add an item to the combo box, select an item in the combo box, and add a combo box to a panel.  
  
 [!code-cpp[NVC_MFC_RibbonApp#11](../../mfc/reference/codesnippet/cpp/cmfcribboncombobox-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCRibbonBaseElement](../../mfc/reference/cmfcribbonbaseelement-class.md)  
  
 [CMFCRibbonButton](../../mfc/reference/cmfcribbonbutton-class.md)  
  
 [CMFCRibbonEdit](../../mfc/reference/cmfcribbonedit-class.md)  
  
 [CMFCRibbonComboBox](../../mfc/reference/cmfcribboncombobox-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxribboncombobox.h  
  
##  <a name="additem"></a>  CMFCRibbonComboBox::AddItem  
 Appends a unique item to the list box.  
  
```  
virtual INT_PTR AddItem(
    LPCTSTR lpszItem,  
    DWORD_PTR dwData=0);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszItem`  
 The string of the item to add.  
  
 [in] `dwData`  
 The data associated with the item to add.  
  
### <a name="return-value"></a>Return Value  
 The zero-based index of the appended item.  
  
##  <a name="cmfcribboncombobox"></a>  CMFCRibbonComboBox::CMFCRibbonComboBox  
 Constructs a `CMFCRibbonComboBox` object.  
  
```  
public:  
CMFCRibbonComboBox(
    UINT nID,  
    BOOL bHasEditBox=TRUE,  
    Int nWidth=-1,  
    LPCTSTR lpszLabel=NULL,  
    Int nImage=-1);

protected:  
CMFCRibbonComboBox();
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nID`  
 The ID of the combo box.  
  
 [in] `bHasEditBox`  
 `TRUE` if you want an edit box within the control; `FALSE` otherwise.  
  
 [in] `nWidth`  
 Width of the combo box in pixels; or -1 for the default width.  
  
 [in] `lpszLabel`  
 The display label of the combo box.  
  
 [in] `nImage`  
 The small image index of the combo box.  
  
### <a name="remarks"></a>Remarks  
 The default width is 108 pixels.  
  
##  <a name="deleteitem"></a>  CMFCRibbonComboBox::DeleteItem  
 Deletes a specified item from the list box.  
  
```  
BOOL DeleteItem(int iIndex);
BOOL DeleteItem(DWORD_PTR dwData);

BOOL DeleteItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of the item to be deleted.  
  
 [in] `dwData`  
 The data associated with the item to be deleted.  
  
 [in] `lpszText`  
 The string of the item to be deleted. If there are multiple items with the same string, the first item is deleted.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the specified item has been deleted; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="enabledropdownlistresize"></a>  CMFCRibbonComboBox::EnableDropDownListResize  
 Specifies whether the list box can change size when it drops down.  
  
```  
void EnableDropDownListResize(BOOL bEnable=FALSE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bEnable`  
 `TRUE` to enable resizing; `FALSE` to disable resizing.  
  
### <a name="remarks"></a>Remarks  
 When resizing is enabled, the list box will change size to fit the items it displays.  
  
##  <a name="finditem"></a>  CMFCRibbonComboBox::FindItem  
 Returns the index of the first item in the list box that matches a specified string.  
  
```  
int FindItem(LPCTSTR lpszText) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszText`  
 The string of an item in the list box.  
  
### <a name="return-value"></a>Return Value  
 The zero-based index of the item; or -1 if the item is not found.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getcount"></a>  CMFCRibbonComboBox::GetCount  
 Returns the number of items in the list box.  
  
```  
INT_PTR GetCount() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The number of items in the list box, or 0 if the list box contains no items.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getcursel"></a>  CMFCRibbonComboBox::GetCurSel  
 Gets the index of the currently selected item in the list box.  
  
```  
int GetCurSel() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The zero-based index of the currently selected item in the list box; or -1 if no item is selected.  
  
##  <a name="getdropdownheight"></a>  CMFCRibbonComboBox::GetDropDownHeight  
 Gets the height of the list box when the list box is dropped down.  
  
```  
int GetDropDownHeight();
```  
  
### <a name="return-value"></a>Return Value  
 The height, in pixels, of the list box.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getintermediatesize"></a>  CMFCRibbonComboBox::GetIntermediateSize  
 Returns the size of the combo box as displayed in intermediate mode.  
  
```  
virtual CSize GetIntermediateSize(CDC* pDC);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
 Pointer to a device context for the combo box.  
  
### <a name="return-value"></a>Return Value  
 The size of the combo box.  
  
### <a name="remarks"></a>Remarks  
 The size returned is based on the size of the combo box when it displays small images.  
  
##  <a name="getitem"></a>  CMFCRibbonComboBox::GetItem  
 Returns the string associated with an item at a specified index in the list box.  
  
```  
LPCTSTR GetItem(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### <a name="return-value"></a>Return Value  
 A pointer to the string that is associated with the item; otherwise, `NULL` if the index parameter is invalid, or if the index parameter is -1 and there is no item selected in the combo box.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getitemdata"></a>  CMFCRibbonComboBox::GetItemData  
 Returns the data associated with an item at a specified index in the list box.  
  
```  
DWORD_PTR GetItemData(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
### <a name="return-value"></a>Return Value  
 The data associated with the item; or 0 if the item does not exist, or if the index parameter is -1 and there is no selected item in the list box.  
  
##  <a name="haseditbox"></a>  CMFCRibbonComboBox::HasEditBox  
 Indicates whether the control contains an edit box.  
  
```  
BOOL HasEditBox() const;  
```  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the control contains an edit box; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="isresizedropdownlist"></a>  CMFCRibbonComboBox::IsResizeDropDownList  
 Indicates whether or not the list box can be resized.  
  
```  
BOOL IsResizeDropDownList() const;  
```  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the list box can be resized; otherwise `FALSE`. [CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize)  
  
### <a name="remarks"></a>Remarks  
 You can enable list box resizing by using the [CMFCRibbonComboBox::EnableDropDownListResize](#enabledropdownlistresize) method.  
  
##  <a name="onselectitem"></a>  CMFCRibbonComboBox::OnSelectItem  
 Called by the framework when a user selects an item in the list box.  
  
```  
virtual void OnSelectItem(int nItem);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nItem`  
 The index of the selected item.  
  
### <a name="remarks"></a>Remarks  
 Override this method if you want to process a user input selection.  
  
##  <a name="removeallitems"></a>  CMFCRibbonComboBox::RemoveAllItems  
 Deletes all items from the list box and clears the edit box.  
  
```  
void RemoveAllItems();
```  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="selectitem"></a>  CMFCRibbonComboBox::SelectItem  
 Selects an item in the list box.  
  
```  
BOOL SelectItem(int iIndex);
BOOL SelectItem(DWORD_PTR dwData);

BOOL SelectItem(LPCTSTR lpszText);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an item in the list box.  
  
 [in] `dwData`  
 The data associated with an item in the list box.  
  
 [in] `lpszText`  
 The string of an item in the list box.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the method was successful; otherwise `FALSE`.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="setdropdownheight"></a>  CMFCRibbonComboBox::SetDropDownHeight  
 Sets the height of the list box when it is dropped down.  
  
```  
void SetDropDownHeight(int nHeight);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `nHeight`  
 The height, in pixels, of the list box.  
  
### <a name="remarks"></a>Remarks  
 The default height is 150 pixels.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCRibbonEdit Class](../../mfc/reference/cmfcribbonedit-class.md)

