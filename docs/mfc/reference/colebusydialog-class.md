---
title: COleBusyDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleBusyDialog
- AFXODLGS/COleBusyDialog
- AFXODLGS/COleBusyDialog::COleBusyDialog
- AFXODLGS/COleBusyDialog::DoModal
- AFXODLGS/COleBusyDialog::GetSelectionType
- AFXODLGS/COleBusyDialog::m_bz
dev_langs:
- C++
helpviewer_keywords:
- COleBusyDialog [MFC], COleBusyDialog
- COleBusyDialog [MFC], DoModal
- COleBusyDialog [MFC], GetSelectionType
- COleBusyDialog [MFC], m_bz
ms.assetid: c881a532-9672-4c41-b51b-5ce4a7246a6b
caps.latest.revision: 22
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
ms.openlocfilehash: 0a985c969c47fe0cac2bcc62f2c88a2ae5f85c86
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="colebusydialog-class"></a>COleBusyDialog Class
Used for the OLE Server Not Responding or Server Busy dialog boxes.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COleBusyDialog : public COleDialog  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[COleBusyDialog::COleBusyDialog](#colebusydialog)|Constructs a `COleBusyDialog` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COleBusyDialog::DoModal](#domodal)|Displays the OLE Server Busy dialog box.|  
|[COleBusyDialog::GetSelectionType](#getselectiontype)|Determines the choice made in the dialog box.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleBusyDialog::m_bz](#m_bz)|Structure of type **OLEUIBUSY** that controls the behavior of the dialog box.|  
  
## <a name="remarks"></a>Remarks  
 Create an object of class `COleBusyDialog` when you want to call these dialog boxes. After a `COleBusyDialog` object has been constructed, you can use the [m_bz](#m_bz) structure to initialize the values or states of controls in the dialog box. The `m_bz` structure is of type **OLEUIBUSY**. For more information about using this dialog class, see the [DoModal](#domodal) member function.  
  
> [!NOTE]
>  Application Wizard-generated container code uses this class.  
  
 For more information, see the [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) structure in the Windows SDK.  
  
 For more information on OLE-specific dialog boxes, see the article [Dialog Boxes in OLE](../../mfc/dialog-boxes-in-ole.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 [COleDialog](../../mfc/reference/coledialog-class.md)  
  
 `COleBusyDialog`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxodlgs.h  
  
##  <a name="colebusydialog"></a>  COleBusyDialog::COleBusyDialog  
 This function only constructs a `COleBusyDialog` object.  
  
```  
explicit COleBusyDialog(
    HTASK htaskBusy,  
    BOOL bNotResponding = FALSE,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 *htaskBusy*  
 Handle to the server task that is busy.  
  
 *bNotResponding*  
 If **TRUE**, call the Not Responding dialog box instead of the Server Busy dialog box. The wording in the Not Responding dialog box is slightly different than the wording in the Server Busy dialog box, and the Cancel button is disabled.  
  
 `dwFlags`  
 Creation flag. Can contain zero or more of the following values combined with the bitwise-OR operator:  
  
- **BZ_DISABLECANCELBUTTON** Disable the Cancel button when calling the dialog box.  
  
- **BZ_DISABLESWITCHTOBUTTON** Disable the Switch To button when calling the dialog box.  
  
- **BZ_DISABLERETRYBUTTON** Disable the Retry button when calling the dialog box.  
  
 `pParentWnd`  
 Points to the parent or owner window object (of type `CWnd`) to which the dialog object belongs. If it is **NULL**, the parent window of the dialog object is set to the main application window.  
  
### <a name="remarks"></a>Remarks  
 To display the dialog box, call [DoModal](#domodal).  
  
 For more information, see the [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) structure in the Windows SDK.  
  
##  <a name="domodal"></a>  COleBusyDialog::DoModal  
 Call this function to display the OLE Server Busy or Server Not Responding dialog box.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Return Value  
 Completion status for the dialog box. One of the following values:  
  
- **IDOK** if the dialog box was successfully displayed.  
  
- **IDCANCEL** if the user canceled the dialog box.  
  
- **IDABORT** if an error occurred. If **IDABORT** is returned, call the `COleDialog::GetLastError` member function to get more information about the type of error that occurred. For a listing of possible errors, see the [OleUIBusy](http://msdn.microsoft.com/library/windows/desktop/ms680125) function in the Windows SDK.  
  
### <a name="remarks"></a>Remarks  
 If you want to initialize the various dialog box controls by setting members of the [m_bz](#m_bz) structure, you should do this before calling `DoModal`, but after the dialog object is constructed.  
  
 If `DoModal` returns **IDOK**, you can call other member functions to retrieve the settings or information that was input by the user into the dialog box.  
  
##  <a name="getselectiontype"></a>  COleBusyDialog::GetSelectionType  
 Call this function to get the selection type chosen by the user in the Server Busy dialog box.  
  
```  
UINT GetSelectionType() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Type of selection made.  
  
### <a name="remarks"></a>Remarks  
 The return type values are specified by the **Selection** enumeration type declared in the `COleBusyDialog` class.  
  
```  
enum Selection {
    switchTo,
    retry,
    callUnblocked
    };
```  
  
 Brief descriptions of these values follow:  
  
- **COleBusyDialog::switchTo** Switch To button was pressed.  
  
- **COleBusyDialog::retry** Retry button was pressed.  
  
- **COleBusyDialog::callUnblocked** Call to activate the server is now unblocked.  
  
##  <a name="m_bz"></a>  COleBusyDialog::m_bz  
 Structure of type **OLEUIBUSY** used to control the behavior of the Server Busy dialog box.  
  
```  
OLEUIBUSY m_bz;  
```  
  
### <a name="remarks"></a>Remarks  
 Members of this structure can be modified directly or through member functions.  
  
 For more information, see the [OLEUIBUSY](http://msdn.microsoft.com/library/windows/desktop/ms682493) structure in the Windows SDK.  
  
## <a name="see-also"></a>See Also  
 [COleDialog Class](../../mfc/reference/coledialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDialog Class](../../mfc/reference/coledialog-class.md)

