---
title: CVSListBox Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CVSListBox
- AFXVSLISTBOX/CVSListBox
- AFXVSLISTBOX/CVSListBox::CVSListBox
- AFXVSLISTBOX/CVSListBox::AddItem
- AFXVSLISTBOX/CVSListBox::EditItem
- AFXVSLISTBOX/CVSListBox::GetCount
- AFXVSLISTBOX/CVSListBox::GetItemData
- AFXVSLISTBOX/CVSListBox::GetItemText
- AFXVSLISTBOX/CVSListBox::GetSelItem
- AFXVSLISTBOX/CVSListBox::RemoveItem
- AFXVSLISTBOX/CVSListBox::SelectItem
- AFXVSLISTBOX/CVSListBox::SetItemData
- AFXVSLISTBOX/CVSListBox::GetListHwnd
dev_langs:
- C++
helpviewer_keywords:
- CVSListBox [MFC], CVSListBox
- CVSListBox [MFC], AddItem
- CVSListBox [MFC], EditItem
- CVSListBox [MFC], GetCount
- CVSListBox [MFC], GetItemData
- CVSListBox [MFC], GetItemText
- CVSListBox [MFC], GetSelItem
- CVSListBox [MFC], RemoveItem
- CVSListBox [MFC], SelectItem
- CVSListBox [MFC], SetItemData
- CVSListBox [MFC], GetListHwnd
ms.assetid: c79be7b4-46ed-4af8-a41e-68962782d8ef
caps.latest.revision: 30
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
ms.openlocfilehash: d84db3fe2c27925db01188f43a3d467e6119ca2b
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cvslistbox-class"></a>CVSListBox Class
The `CVSListBox` class supports an editable list control.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CVSListBox : public CVSListBoxBase  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CVSListBox::CVSListBox](#cvslistbox)|Constructs a `CVSListBox` object.|  
|`CVSListBox::~CVSListBox`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CVSListBox::AddItem](#additem)|Adds a string to a list control. (Overrides `CVSListBoxBase::AddItem`.)|  
|[CVSListBox::EditItem](#edititem)|Starts an edit operation on the text of a list control item. (Overrides `CVSListBoxBase::EditItem`.)|  
|[CVSListBox::GetCount](#getcount)|Retrieves the number of strings in an editable list control. (Overrides `CVSListBoxBase::GetCount`.)|  
|[CVSListBox::GetItemData](#getitemdata)|Retrieves an application-specific 32-bit value that is associated with an editable list control item. (Overrides `CVSListBoxBase::GetItemData`.)|  
|[CVSListBox::GetItemText](#getitemtext)|Retrieves the text of an editable list control item. (Overrides `CVSListBoxBase::GetItemText`.)|  
|[CVSListBox::GetSelItem](#getselitem)|Retrieves the zero-based index of the currently selected item in an editable list control. (Overrides `CVSListBoxBase::GetSelItem`.)|  
|`CVSListBox::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. For more information and method syntax, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). (Overrides `CVSListBoxBase::PreTranslateMessage`.)|  
|[CVSListBox::RemoveItem](#removeitem)|Removes an item from an editable list control. (Overrides `CVSListBoxBase::RemoveItem`.)|  
|[CVSListBox::SelectItem](#selectitem)|Selects an editable list control string. (Overrides `CVSListBoxBase::SelectItem`.)|  
|[CVSListBox::SetItemData](#setitemdata)|Associates an application-specific 32-bit value with an editable list control item. (Overrides `CVSListBoxBase::SetItemData`.)|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CVSListBox::GetListHwnd](#getlisthwnd)|Returns the handle to the current embedded list view control.|  
  
## <a name="remarks"></a>Remarks  
 The `CVSListBox` class provides a set of edit buttons that enable the user to create, modify, delete, or rearrange the items in a list control.  
  
 The following is a picture of the editable list control. The second list entry, which is titled "Item2", is selected for editing.  
  
 ![CVSListBox control](../../mfc/reference/media/cvslistbox.png "cvslistbox")  
  
 If you use the resource editor to add an editable list control, notice that the **Toolbox** pane of the editor does not provide a predefined editable list control. Instead, add a static control such as the **Group Box** control. The framework uses the static control as a placeholder to specify the size and position of the editable list control.  
  
 To use an editable list control in a dialog box template, declare a `CVSListBox` variable in your dialog box class. To support data exchange between the variable and the control, define a `DDX_Control` macro entry in the `DoDataExchange` method of the dialog box. By default, the editable list control is created without edit buttons. Use the inherited CVSListBoxBase::SetStandardButtons method to enable the edit buttons.  
  
 For more information, see the Samples directory, the `New Controls` sample, the Page3.cpp and Page3.h files.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CStatic](../../mfc/reference/cstatic-class.md)  
  
 `CVSListBoxBase`  
  
 [CVSListBox](../../mfc/reference/cvslistbox-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxvslistbox.h  
  
##  <a name="additem"></a>  CVSListBox::AddItem  
 Adds a string to a list control.  
  
```  
virtual int AddItem(
    const CString& strIext,  
    DWORD_PTR dwData=0,  
    int iIndex=-1);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `strIext`  
 A reference to a string.  
  
 [in] `dwData`  
 An application-specific 32-bit value that is associated with the string. The default value is 0.  
  
 [in] `iIndex`  
 The zero-based index of the position that will hold the string. If the `iIndex` parameter is -1, the string is added to the end of the list. The default value is -1.  
  
### <a name="return-value"></a>Return Value  
 The zero-based index of the position of the string in the list control.  
  
### <a name="remarks"></a>Remarks  
 Use the [CVSListBox::GetItemData](#getitemdata) method to retrieve the value that is specified by the `dwData` parameter. This value can be an application-specific integer or a pointer to other data.  
  
##  <a name="cvslistbox"></a>  CVSListBox::CVSListBox  
 Constructs a `CVSListBox` object.  
  
```  
CVSListBox();
```  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="edititem"></a>  CVSListBox::EditItem  
 Starts an edit operation on the text of a list control item.  
  
```  
virtual BOOL EditItem(int iIndex);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 Zero-based index of a list control item.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the edit operation starts successfully; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
 The user starts an edit operation either by double-clicking the label of an item, or by pressing the **F2** or **SPACEBAR** key when an item has the focus.  
  
##  <a name="getcount"></a>  CVSListBox::GetCount  
 Retrieves the number of strings in an editable list control.  
  
```  
virtual int GetCount() const;  
```  
  
### <a name="return-value"></a>Return Value  
 The number of items in the list control.  
  
### <a name="remarks"></a>Remarks  
 Note that the count is one greater than the index value of the last item because the index is zero-based.  
  
##  <a name="getitemdata"></a>  CVSListBox::GetItemData  
 Retrieves an application-specific 32-bit value that is associated with an editable list control item.  
  
```  
virtual DWORD_PTR GetItemData(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an editable list control item.  
  
### <a name="return-value"></a>Return Value  
 The 32-bit value that is associated with the specified item.  
  
### <a name="remarks"></a>Remarks  
 Use the [CVSListBox::SetItemData](#setitemdata) or [CVSListBox::AddItem](#additem) method to associate the 32-bit value with the list control item. This value can be an application-specific integer or a pointer to other data.  
  
##  <a name="getitemtext"></a>  CVSListBox::GetItemText  
 Retrieves the text of an editable list control item.  
  
```  
virtual CString GetItemText(int iIndex) const;  
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an editable list control item.  
  
### <a name="return-value"></a>Return Value  
 A [CString](../../atl-mfc-shared/reference/cstringt-class.md) object that contains the text of the specified item.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="getlisthwnd"></a>  CVSListBox::GetListHwnd  
 Returns the handle to the current embedded list view control.  
  
```  
virtual HWND GetListHwnd() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A handle to the embedded list view control.  
  
### <a name="remarks"></a>Remarks  
 Use this method to retrieve a handle to the embedded list view control that supports the `CVSListBox` class.  
  
##  <a name="getselitem"></a>  CVSListBox::GetSelItem  
 Retrieves the zero-based index of the currently selected item in an editable list control.  
  
```  
virtual int GetSelItem() const;  
```  
  
### <a name="return-value"></a>Return Value  
 If this method is successful, the zero-based index of the currently selected item; otherwise, -1.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="removeitem"></a>  CVSListBox::RemoveItem  
 Removes an item from an editable list control.  
  
```  
virtual BOOL RemoveItem(int iIndex);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an editable list control item.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if the specified item is removed; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="selectitem"></a>  CVSListBox::SelectItem  
 Selects an editable list control string.  
  
```  
virtual BOOL SelectItem(int iItem);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iItem`  
 The zero-based index of an editable list control item.  
  
### <a name="return-value"></a>Return Value  
 `TRUE` if this method is successful; otherwise, `FALSE`.  
  
### <a name="remarks"></a>Remarks  
 This method selects the specified item, and if it is required, scrolls the item into view.  
  
##  <a name="setitemdata"></a>  CVSListBox::SetItemData  
 Associates an application-specific 32-bit value with an editable list control item.  
  
```  
virtual void SetItemData(
    int iIndex,  
    DWORD_PTR dwData);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `iIndex`  
 The zero-based index of an editable list control item.  
  
 [in] `dwData`  
 A 32-bit value. This value can be an application-specific integer or a pointer to other data.  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)

