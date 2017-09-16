---
title: CWinFormsDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::CWinFormsDialog
- AFXWINFORMS/CWinFormsDialog::GetControl
- AFXWINFORMS/CWinFormsDialog::GetControlHandle
- AFXWINFORMS/CWinFormsDialog::OnInitDialog
dev_langs:
- C++
helpviewer_keywords:
- CWinFormsDialog [MFC], CWinFormsDialog
- CWinFormsDialog [MFC], GetControl
- CWinFormsDialog [MFC], GetControlHandle
- CWinFormsDialog [MFC], OnInitDialog
ms.assetid: e3cec000-a578-448e-b06a-8af256312f61
caps.latest.revision: 26
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
ms.openlocfilehash: 8da9f9575bdc58f858191c302a94cc59e45621bf
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cwinformsdialog-class"></a>CWinFormsDialog Class
A wrapper for an MFC dialog class that hosts a Windows Forms user control.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <typename TManagedControl>  
class CWinFormsDialog :   
    public CDialog  
```  
  
#### <a name="parameters"></a>Parameters  
 `TManagedControl`  
 The .NET Framework user control to be displayed in the MFC application.  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsDialog::CWinFormsDialog](#cwinformsdialog)|Constructs a `CWinFormsDialog` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsDialog::GetControl](#getcontrol)|Retrieves a reference to the Windows Forms user control.|  
|[CWinFormsDialog::GetControlHandle](#getcontrolhandle)|Retrieves a window handle to the Windows Forms user control.|  
|[CWinFormsDialog::OnInitDialog](#oninitdialog)|Initializes the MFC dialog box by creating and hosting a Windows Forms user control on it.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name||  
|----------|-|  
|[CWinFormsDialog::operator -&gt;](#operator_-_gt)|Replaces [CWinFormsDialog::GetControl](#getcontrol) in expressions.|  
|[CWinFormsDialog::operator TManagedControl^](#operator_tmanagedcontrol)|Casts a type as a reference to a Windows Forms user control.|  
  
## <a name="remarks"></a>Remarks  
 `CWinFormsDialog` is a wrapper for an MFC dialog class ( [CDialog](../../mfc/reference/cdialog-class.md)) that hosts a Windows Forms user control. This allows the display of .NET Framework controls on a modal or modeless MFC dialog box.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md) and [Hosting a Windows Form User Control as an MFC Dialog Box](../../dotnet/hosting-a-windows-form-user-control-as-an-mfc-dialog-box.md).  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwinforms.h  
  
##  <a name="cwinformsdialog"></a>  CWinFormsDialog::CWinFormsDialog  
 Constructs a `CWinFormsDialog` object.  
  
```  
CWinFormsDialog(UINT nIDTemplate = IDD);
```  
  
### <a name="parameters"></a>Parameters  
 `nIDTemplate`  
 Contains the ID of a dialog box template resource. Use the dialog editor to create the dialog template and store it in the application's resource script file. For more information on dialog templates, see [CDialog Class](../../mfc/reference/cdialog-class.md).  
  
##  <a name="getcontrol"></a>  CWinFormsDialog::GetControl  
 Retrieves a reference to the Windows Forms user control.  
  
```  
inline TManagedControl^ GetControl() const;  
```  
  
### <a name="return-value"></a>Return Value  
 Returns a reference to the Windows Forms control in the MFC dialog box.  
  
##  <a name="getcontrolhandle"></a>  CWinFormsDialog::GetControlHandle  
 Retrieves a window handle to the Windows Forms user control.  
  
```  
inline HWND GetControlHandle() const throw();
```  
  
### <a name="return-value"></a>Return Value  
 Returns a window handle to the Windows Forms user control.  
  
##  <a name="oninitdialog"></a>  CWinFormsDialog::OnInitDialog  
 Initializes the MFC dialog box by creating and hosting a Windows Forms user control on it.  
  
```  
virtual BOOL OnInitDialog();
```  
  
### <a name="return-value"></a>Return Value  
 A boolean value that specifies whether the application has set the input focus to one of the controls in the dialog box. If `OnInitDialog` returns nonzero, Windows sets the input focus to the first control in the dialog box. This method can return 0 only if the application has explicitly set the input focus to one of the controls in the dialog box.  
  
### <a name="remarks"></a>Remarks  
 When the MFC dialog box is created (using the [Create](../../mfc/reference/cdialog-class.md#create), [CreateIndirect](../../mfc/reference/cdialog-class.md#createindirect), or [DoModal](../../mfc/reference/cdialog-class.md#domodal) method inherited from [CDialog](../../mfc/reference/cdialog-class.md)), a `WM_INITDIALOG` message is sent and this method is called. It creates an instance of a Windows Forms control on the dialog box and adjusts the size of the dialog box to accommodate for the size of the user control. Then it hosts the new control in the MFC dialog box.  
  
 Override this member function if you need to perform special processing when the dialog box is initialized. For more information on using this method, see [CDialog::OnInitDialog](../../mfc/reference/cdialog-class.md#oninitdialog).  
  
##  <a name="operator_-_gt"></a>  CWinFormsDialog::operator -&gt;  
 Replaces [CWinFormsDialog::GetControl](#getcontrol) in expressions.  
  
```  
inline TManagedControl^  operator->() const throw();
```  
  
### <a name="remarks"></a>Remarks  
 This operator provides a convenient syntax that replaces `GetControl` in expressions.  
  
 For information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_tmanagedcontrol_xor"></a>  CWinFormsDialog::operator TManagedControl^  
 Casts a type as a reference to a Windows Forms user control.  
  
```  
inline operator TManagedControl^() const throw();
```  
  
### <a name="remarks"></a>Remarks  
 This operator casts a type as a reference to a Windows Forms control. It is used to pass a `CWinFormsDialog<TManagedControl>` dialog box to functions that accept a pointer to a Windows Forms user control object.  
  
## <a name="see-also"></a>See Also  
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CWinFormsView Class](../../mfc/reference/cwinformsview-class.md)   
 [CDialog Class](../../mfc/reference/cdialog-class.md)

