---
title: COccManager Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COccManager
- AFXOCC/COccManager
- AFXOCC/COccManager::CreateContainer
- AFXOCC/COccManager::CreateDlgControls
- AFXOCC/COccManager::CreateSite
- AFXOCC/COccManager::GetDefBtnCode
- AFXOCC/COccManager::IsDialogMessage
- AFXOCC/COccManager::IsLabelControl
- AFXOCC/COccManager::IsMatchingMnemonic
- AFXOCC/COccManager::OnEvent
- AFXOCC/COccManager::PostCreateDialog
- AFXOCC/COccManager::PreCreateDialog
- AFXOCC/COccManager::SetDefaultButton
- AFXOCC/COccManager::SplitDialogTemplate
dev_langs:
- C++
helpviewer_keywords:
- COccManager [MFC], CreateContainer
- COccManager [MFC], CreateDlgControls
- COccManager [MFC], CreateSite
- COccManager [MFC], GetDefBtnCode
- COccManager [MFC], IsDialogMessage
- COccManager [MFC], IsLabelControl
- COccManager [MFC], IsMatchingMnemonic
- COccManager [MFC], OnEvent
- COccManager [MFC], PostCreateDialog
- COccManager [MFC], PreCreateDialog
- COccManager [MFC], SetDefaultButton
- COccManager [MFC], SplitDialogTemplate
ms.assetid: 7d47aeed-d1ab-48e3-b4cf-d429718e370a
caps.latest.revision: 20
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
ms.openlocfilehash: bdb6d322e821527fb41ed3e6777dcdac240e5e74
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="coccmanager-class"></a>COccManager Class
Manages various custom control sites; implemented by `COleControlContainer` and `COleControlSite` objects.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COccManager : public CNoTrackObject  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[COccManager::CreateContainer](#createcontainer)|Creates a **COleContainer** object.|  
|[COccManager::CreateDlgControls](#createdlgcontrols)|Creates ActiveX controls, hosted by the associated `COleContainer` object.|  
|[COccManager::CreateSite](#createsite)|Creates a `COleClientSite` object.|  
|[COccManager::GetDefBtnCode](#getdefbtncode)|Retrieves the code of the default button.|  
|[COccManager::IsDialogMessage](#isdialogmessage)|Determines the target of a dialog message.|  
|[COccManager::IsLabelControl](#islabelcontrol)|Determines if the specified control is a label control.|  
|[COccManager::IsMatchingMnemonic](#ismatchingmnemonic)|Determines if the current mnemonic matches the mnemonic of the specified control.|  
|[COccManager::OnEvent](#onevent)|Attempts to handle the specified event.|  
|[COccManager::PostCreateDialog](#postcreatedialog)|Frees resources allocated during dialog creation.|  
|[COccManager::PreCreateDialog](#precreatedialog)|Processes a dialog template for ActiveX controls.|  
|[COccManager::SetDefaultButton](#setdefaultbutton)|Toggles the default state of the specified control.|  
|[COccManager::SplitDialogTemplate](#splitdialogtemplate)|Separates any existing ActiveX controls from common controls in the specified dialog template.|  
  
## <a name="remarks"></a>Remarks  
 The base class, **CNoTrackObject**, is an undocumented base class (located in AFXTLS.H). Designed for use by the MFC framework, classes derived from the **CNoTrackObject** class are exempt from memory leak detection. It is not recommended that you derive directly from **CNoTrackObject**.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 `CNoTrackObject`  
  
 `COccManager`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxocc.h  
  
##  <a name="createcontainer"></a>  COccManager::CreateContainer  
 Called by the framework to create a control container.  
  
```  
virtual COleControlContainer* CreateContainer(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 A pointer to the window object associated with the custom site container.  
  
### <a name="return-value"></a>Return Value  
 A pointer to the newly created container; otherwise **NULL**.  
  
### <a name="remarks"></a>Remarks  
 For more information on creating custom sites, see [COleControlContainer::AttachControlSite](../../mfc/reference/colecontrolcontainer-class.md#attachcontrolsite).  
  
##  <a name="createdlgcontrols"></a>  COccManager::CreateDlgControls  
 Call this function to create ActiveX controls specified by the `pOccDialogInfo` parameter.  
  
```  
virtual BOOL CreateDlgControls(
    CWnd* pWndParent,  
    LPCTSTR lpszResourceName,  
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo);

 
virtual BOOL CreateDlgControls(
    CWnd* pWndParent,  
    void* lpResource,  
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### <a name="parameters"></a>Parameters  
 *pWndParent*  
 A pointer to the parent of the dialog object.  
  
 `lpszResourceName`  
 The name of the resource being created.  
  
 `pOccDialogInfo`  
 A pointer to the dialog template used to create the dialog object.  
  
 `lpResource`  
 A pointer to a resource.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the control was created successfully; otherwise zero.  
  
##  <a name="createsite"></a>  COccManager::CreateSite  
 Called by the framework to create a control site, hosted by the container pointed to by `pCtrlCont`.  
  
```  
virtual COleControlSite* CreateSite(COleControlContainer* pCtrlCont);
```  
  
### <a name="parameters"></a>Parameters  
 `pCtrlCont`  
 A pointer to the control container hosting the new control site.  
  
### <a name="return-value"></a>Return Value  
 A pointer to the newly created control site.  
  
### <a name="remarks"></a>Remarks  
 Override this function to create a custom control site, using your [COleControlSite](../../mfc/reference/colecontrolsite-class.md)-derived class.  
  
 Each control container can host multiple sites. Create additional sites with multiple calls to `CreateSite`.  
  
##  <a name="getdefbtncode"></a>  COccManager::GetDefBtnCode  
 Call this function to determine if the control is a default push button.  
  
```  
static DWORD AFX_CDECL GetDefBtnCode(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 The window object containing the button control.  
  
### <a name="return-value"></a>Return Value  
 One of the following values:  
  
- **DLGC_DEFPUSHBUTTON** Control is the default button in the dialog.  
  
- **DLGC_UNDEFPUSHBUTTON** Control is not the default button in the dialog.  
  
- **0** Control is not a button.  
  
##  <a name="isdialogmessage"></a>  COccManager::IsDialogMessage  
 Called by the framework to determine whether a message is intended for the specified dialog box and, if it is, processes the message.  
  
```  
virtual BOOL IsDialogMessage(
    CWnd* pWndDlg,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parameters  
 *pWndDlg*  
 A pointer to the intended target dialog of the message.  
  
 `lpMsg`  
 A pointer to an `MSG` structure that contains the message to be checked.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the message is processed; otherwise zero.  
  
### <a name="remarks"></a>Remarks  
 The default behavior of `IsDialogMessage` is to check for keyboard messages and convert them into selections for the corresponding dialog box. For example, the TAB key, when pressed, selects the next control or group of controls.  
  
 Override this function to provide custom behavior for messages sent to the specified dialog.  
  
##  <a name="islabelcontrol"></a>  COccManager::IsLabelControl  
 Call this function to determine if the specified control is a label control.  
  
```  
static BOOL AFX_CDECL IsLabelControl(CWnd* pWnd);  
static BOOL AFX_CDECL IsLabelControl(COleControlSiteOrWnd* pWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 A pointer to the window containing the control.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the control is a label; otherwise zero  
  
### <a name="remarks"></a>Remarks  
 A label control is one that acts like a label for whatever control is next in the ordering.  
  
##  <a name="ismatchingmnemonic"></a>  COccManager::IsMatchingMnemonic  
 Call this function to determine if the current mnemonic matches that represented by the control.  
  
```  
static BOOL AFX_CDECL IsMatchingMnemonic(
    CWnd* pWnd,  
    LPMSG lpMsg);

 
static BOOL AFX_CDECL IsMatchingMnemonic(
    COleControlSiteOrWnd* pWnd,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 A pointer to the window containing the control.  
  
 `lpMsg`  
 A pointer to the message containing the mnemonic to match.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the mnemonic matches the control; otherwise zero  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="onevent"></a>  COccManager::OnEvent  
 Called by the framework to handle the specified event.  
  
```  
virtual BOOL OnEvent(
    CCmdTarget* pCmdTarget,  
    UINT idCtrl,  
    AFX_EVENT* pEvent,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parameters  
 *pCmdTarget*  
 A pointer to the `CCmdTarget` object attempting to handle the event  
  
 `idCtrl`  
 The resource ID of the control.  
  
 `pEvent`  
 The event being handled.  
  
 `pHandlerInfo`  
 If not **NULL**, `OnEvent` fills in the **pTarget** and **pmf** members of the **AFX_CMDHANDLERINFO** structure instead of dispatching the command. Typically, this parameter should be **NULL**.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the event was handled, otherwise zero.  
  
### <a name="remarks"></a>Remarks  
 Override this function to customize the default event-handling process.  
  
##  <a name="precreatedialog"></a>  COccManager::PreCreateDialog  
 Called by the framework to process a dialog template for ActiveX controls before creating the actual dialog box.  
  
```  
virtual const DLGTEMPLATE* PreCreateDialog(
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo,  
    const DLGTEMPLATE* pOrigTemplate);
```  
  
### <a name="parameters"></a>Parameters  
 `pOccDialogInfo`  
 An **_AFX_OCC_DIALOG_INFO** structure containing information on the dialog template and any ActiveX controls hosted by the dialog.  
  
 *pOrigTemplate*  
 A pointer to the dialog template to be used in creating the dialog box.  
  
### <a name="return-value"></a>Return Value  
 A pointer to a dialog template structure used to create the dialog box.  
  
### <a name="remarks"></a>Remarks  
 The default behavior makes a call to `SplitDialogTemplate`, determining if there are any ActiveX controls present and then returns the resultant dialog template.  
  
 Override this function to customize the process of creating a dialog box hosting ActiveX controls.  
  
##  <a name="postcreatedialog"></a>  COccManager::PostCreateDialog  
 Called by the framework to free memory allocated for the dialog template.  
  
```  
virtual void PostCreateDialog(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### <a name="parameters"></a>Parameters  
 `pOccDialogInfo`  
 An **_AFX_OCC_DIALOG_INFO** structure containing information on the dialog template and any ActiveX controls hosted by the dialog.  
  
### <a name="remarks"></a>Remarks  
 This memory was allocated by a call to `SplitDialogTemplate`, and was used for any hosted ActiveX controls in the dialog box.  
  
 Override this function to customize the process of cleaning up any resources used by the dialog box object.  
  
##  <a name="setdefaultbutton"></a>  COccManager::SetDefaultButton  
 Call this function to set the control as the default button.  
  
```  
static void AFX_CDECL SetDefaultButton(
    CWnd* pWnd,  
    BOOL bDefault);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 A pointer to the window containing the control.  
  
 `bDefault`  
 Nonzero if the control should become the default button; otherwise zero.  
  
### <a name="return-value"></a>Return Value  
 Nonzero if successful; otherwise zero.  
  
### <a name="remarks"></a>Remarks  
  
> [!NOTE]
>  The control must have the **OLEMISC_ACTSLIKEBUTTON** status bit set. For more information on **OLEMISC** flags, see the [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) topic in the Windows SDK.  
  
##  <a name="splitdialogtemplate"></a>  COccManager::SplitDialogTemplate  
 Called by the framework to split the ActiveX controls from common dialog controls.  
  
```  
virtual DLGTEMPLATE* SplitDialogTemplate(
    const DLGTEMPLATE* pTemplate,  
    DLGITEMTEMPLATE** ppOleDlgItems);
```  
  
### <a name="parameters"></a>Parameters  
 `pTemplate`  
 A pointer to the dialog template to be examined.  
  
 `ppOleDlgItems`  
 A list of pointers to dialog box items that are ActiveX controls.  
  
### <a name="return-value"></a>Return Value  
 A pointer to a dialog template structure containing only non-ActiveX controls. If no ActiveX controls are present, **NULL** is returned.  
  
### <a name="remarks"></a>Remarks  
 If any ActiveX controls are found, the template is analyzed and a new template, containing only non-ActiveX controls, is created. Any ActiveX controls found during this process are added to `ppOleDlgItems`.  
  
 If there are no ActiveX controls in the template, **NULL** is returned *.*  
  
> [!NOTE]
>  Memory allocated for the new template is freed in the `PostCreateDialog` function.  
  
 Override this function to customize this process.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleControlSite Class](../../mfc/reference/colecontrolsite-class.md)   
 [COleControlContainer Class](../../mfc/reference/colecontrolcontainer-class.md)

