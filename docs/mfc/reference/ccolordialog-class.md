---
title: CColorDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CColorDialog
- AFXDLGS/CColorDialog
- AFXDLGS/CColorDialog::CColorDialog
- AFXDLGS/CColorDialog::DoModal
- AFXDLGS/CColorDialog::GetColor
- AFXDLGS/CColorDialog::GetSavedCustomColors
- AFXDLGS/CColorDialog::SetCurrentColor
- AFXDLGS/CColorDialog::OnColorOK
- AFXDLGS/CColorDialog::m_cc
dev_langs:
- C++
helpviewer_keywords:
- CColorDialog [MFC], CColorDialog
- CColorDialog [MFC], DoModal
- CColorDialog [MFC], GetColor
- CColorDialog [MFC], GetSavedCustomColors
- CColorDialog [MFC], SetCurrentColor
- CColorDialog [MFC], OnColorOK
- CColorDialog [MFC], m_cc
ms.assetid: d013dc25-9290-4b5d-a97e-95ad7208e13b
caps.latest.revision: 25
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
ms.openlocfilehash: 88568399cc2977fb246bf2e54f7706066a2ef6b5
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="ccolordialog-class"></a>CColorDialog Class
Allows you to incorporate a color-selection dialog box into your application.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CColorDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CColorDialog::CColorDialog](#ccolordialog)|Constructs a `CColorDialog` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CColorDialog::DoModal](#domodal)|Displays a color dialog box and allows the user to make a selection.|  
|[CColorDialog::GetColor](#getcolor)|Returns a **COLORREF** structure containing the values of the selected color.|  
|[CColorDialog::GetSavedCustomColors](#getsavedcustomcolors)|Retrieves custom colors created by the user.|  
|[CColorDialog::SetCurrentColor](#setcurrentcolor)|Forces the current color selection to the specified color.|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CColorDialog::OnColorOK](#oncolorok)|Override to validate the color entered into the dialog box.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CColorDialog::m_cc](#m_cc)|A structure used to customize the settings of the dialog box.|  
  
## <a name="remarks"></a>Remarks  
 A `CColorDialog` object is a dialog box with a list of colors that are defined for the display system. The user can select or create a particular color from the list, which is then reported back to the application when the dialog box exits.  
  
 To construct a `CColorDialog` object, use the provided constructor or derive a new class and use your own custom constructor.  
  
 Once the dialog box has been constructed, you can set or modify any values in the [m_cc](#m_cc) structure to initialize the values of the dialog box's controls. The `m_cc` structure is of type [CHOOSECOLOR](http://msdn.microsoft.com/library/windows/desktop/ms646830).  
  
 After initializing the dialog box's controls, call the `DoModal` member function to display the dialog box and allow the user to select a color. `DoModal` returns the user's selection of either the dialog box's OK ( **IDOK**) or Cancel ( **IDCANCEL**) button.  
  
 If `DoModal` returns **IDOK**, you can use one of `CColorDialog`'s member functions to retrieve the information input by the user.  
  
 You can use the Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) function to determine whether an error occurred during initialization of the dialog box and to learn more about the error.  
  
 `CColorDialog` relies on the COMMDLG.DLL file that ships with Windows versions 3.1 and later.  
  
 To customize the dialog box, derive a class from `CColorDialog`, provide a custom dialog template, and add a message map to process the notification messages from the extended controls. Any unprocessed messages should be passed to the base class.  
  
 Customizing the hook function is not required.  
  
> [!NOTE]
>  On some installations the `CColorDialog` object will not display with a gray background if you have used the framework to make other `CDialog` objects gray.  
  
 For more information on using `CColorDialog`, see [Common Dialog Classes](../../mfc/common-dialog-classes.md)  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CColorDialog`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdlgs.h  
  
##  <a name="ccolordialog"></a>  CColorDialog::CColorDialog  
 Constructs a `CColorDialog` object.  
  
```  
CColorDialog(
    COLORREF clrInit = 0,  
    DWORD dwFlags = 0,  
    CWnd* pParentWnd = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 *clrInit*  
 The default color selection. If no value is specified, the default is RGB(0,0,0) (black).  
  
 `dwFlags`  
 A set of flags that customize the function and appearance of the dialog box. For more information, see the [CHOOSECOLOR](http://msdn.microsoft.com/library/windows/desktop/ms646830) structure in the Windows SDK.  
  
 `pParentWnd`  
 A pointer to the dialog box's parent or owner window.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#49](../../mfc/codesnippet/cpp/ccolordialog-class_1.cpp)]  
  
##  <a name="domodal"></a>  CColorDialog::DoModal  
 Call this function to display the Windows common color dialog box and allow the user to select a color.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Return Value  
 **IDOK** or **IDCANCEL**. If **IDCANCEL** is returned, call the Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) function to determine whether an error occurred.  
  
 **IDOK** and **IDCANCEL** are constants that indicate whether the user selected the OK or Cancel button.  
  
### <a name="remarks"></a>Remarks  
 If you want to initialize the various color dialog-box options by setting members of the [m_cc](#m_cc) structure, you should do this before calling `DoModal` but after the dialog-box object is constructed.  
  
 After calling `DoModal`, you can call other member functions to retrieve the settings or information input by the user into the dialog box.  
  
### <a name="example"></a>Example  
  See the example for [CColorDialog::CColorDialog](#ccolordialog).  
  
##  <a name="getcolor"></a>  CColorDialog::GetColor  
 Call this function after calling `DoModal` to retrieve the information about the color the user selected.  
  
```  
COLORREF GetColor() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A [COLORREF](http://msdn.microsoft.com/library/windows/desktop/dd183449) value that contains the RGB information for the color selected in the color dialog box.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#50](../../mfc/codesnippet/cpp/ccolordialog-class_2.cpp)]  
  
##  <a name="getsavedcustomcolors"></a>  CColorDialog::GetSavedCustomColors  
 `CColorDialog` objects permit the user, in addition to choosing colors, to define up to 16 custom colors.  
  
```  
static COLORREF* PASCAL GetSavedCustomColors();
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to an array of 16 RGB color values that stores custom colors created by the user.  
  
### <a name="remarks"></a>Remarks  
 The `GetSavedCustomColors` member function provides access to these colors. These colors can be retrieved after [DoModal](#domodal) returns **IDOK**.  
  
 Each of the 16 RGB values in the returned array is initialized to RGB(255,255,255) (white). The custom colors chosen by the user are saved only between dialog box invocations within the application. If you wish to save these colors between invocations of the application, you must save them in some other manner, such as in an initialization (.INI) file.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#51](../../mfc/codesnippet/cpp/ccolordialog-class_3.cpp)]  
  
##  <a name="m_cc"></a>  CColorDialog::m_cc  
 A structure of type [CHOOSECOLOR](http://msdn.microsoft.com/library/windows/desktop/ms646830), whose members store the characteristics and values of the dialog box.  
  
```  
CHOOSECOLOR m_cc;  
```  
  
### <a name="remarks"></a>Remarks  
 After constructing a `CColorDialog` object, you can use `m_cc` to set various aspects of the dialog box before calling the [DoModal](#domodal) member function.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#53](../../mfc/codesnippet/cpp/ccolordialog-class_4.cpp)]  
  
##  <a name="oncolorok"></a>  CColorDialog::OnColorOK  
 Override to validate the color entered into the dialog box.  
  
```  
virtual BOOL OnColorOK();
```  
  
### <a name="return-value"></a>Return Value  
 Nonzero if the dialog box should not be dismissed; otherwise 0 to accept the color that was entered.  
  
### <a name="remarks"></a>Remarks  
 Override this function only if you want to provide custom validation of the color the user selects in the color dialog box.  
  
 The user can select a color by one of the following two methods:  
  
-   Clicking a color on the color palette. The selected color's RGB values are then reflected in the appropriate RGB edit boxes.  
  
-   Entering values in the RGB edit boxes  
  
 Overriding `OnColorOK` allows you to reject a color the user enters into a common color dialog box for any application-specific reason.  
  
 Normally, you do not need to use this function because the framework provides default validation of colors and displays a message box if an invalid color is entered.  
  
 You can call [SetCurrentColor](#setcurrentcolor) from within `OnColorOK` to force a color selection. Once `OnColorOK` has been fired (that is, the user clicks **OK** to accept the color change), you can call [GetColor](#getcolor) to get the RGB value of the new color.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#52](../../mfc/codesnippet/cpp/ccolordialog-class_5.cpp)]  
  
##  <a name="setcurrentcolor"></a>  CColorDialog::SetCurrentColor  
 Call this function after calling `DoModal` to force the current color selection to the color value specified in `clr`.  
  
```  
void SetCurrentColor(COLORREF clr);
```  
  
### <a name="parameters"></a>Parameters  
 `clr`  
 An RGB color value.  
  
### <a name="remarks"></a>Remarks  
 This function is called from within a message handler or `OnColorOK`. The dialog box will automatically update the user's selection based on the value of the `clr` parameter.  
  
### <a name="example"></a>Example  
  See the example for [CColorDialog::OnColorOK](#oncolorok).  
  
## <a name="see-also"></a>See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [MFC Sample DRAWCLI](../../visual-cpp-samples.md)   
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


