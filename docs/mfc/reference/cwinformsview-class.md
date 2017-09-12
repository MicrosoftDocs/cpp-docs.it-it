---
title: CWinFormsView Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsView
- AFXWINFORMS/CWinFormsView
- AFXWINFORMS/CWinFormsView::CWinFormsView
- AFXWINFORMS/CWinFormsView::GetControl
dev_langs:
- C++
helpviewer_keywords:
- CWinFormsView [MFC], CWinFormsView
- CWinFormsView [MFC], GetControl
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
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
ms.openlocfilehash: ad14f0caa84154a73a669704da8c977b905bc311
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cwinformsview-class"></a>CWinFormsView Class
Provides generic functionality for hosting of a Windows Forms control as an MFC view.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CWinFormsView : public CView;  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsView::CWinFormsView](#cwinformsview)|Constructs a `CWinFormsView` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWinFormsView::GetControl](#getcontrol)|Retrieves a pointer to the Windows Forms control.|  
  
### <a name="public-operators"></a>Public Operators  
  
|Name||  
|----------|-|  
|[CWinFormsView::operator Control^](#operator_control)|Casts a type as a pointer to a Windows Forms control.|  
  
## <a name="remarks"></a>Remarks  
 MFC uses the `CWinFormsView` class to host a .NET Framework Windows Forms control within an MFC view. The control is a child of the native view and occupies the entire client area of the MFC view. The result is similar to a `CFormView` view, allowing you to take advantage of the Windows Forms designer and run time to create rich form-based views.  
  
 For more information on using Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
> [!NOTE]
>  MFC Windows Forms integration works only in projects which link dynamically with MFC (projects in which AFXDLL is defined).  
  
> [!NOTE]
>  CWinFormsView does not support the MFC splitter window ( [CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)). Currently only the Windows Forms Splitter control is supported.  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwinforms.h  
  
##  <a name="cwinformsview"></a>  CWinFormsView::CWinFormsView  
 Constructs a `CWinFormsView` object.  
  
```  
CWinFormsView(System::Type^ pManagedViewType);  
```  
  
### <a name="parameters"></a>Parameters  
 `pManagedViewType`  
 A pointer to the data type of the Windows Forms user control.   
  
### <a name="example"></a>Example  
 In the following example, the `CUserView` class inherits from `CWinFormsView` and passes the type of `UserControl1` to the `CWinFormsView` constructor. `UserControl1` is a custom-built control in ControlLibrary1.dll.  
  
 [!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]  
  
 [!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]  
  
##  <a name="getcontrol"></a>  CWinFormsView::GetControl  
 Retrieves a pointer to the Windows Forms control.  
  
```  
System::Windows::Forms::Control^ GetControl() const;  
```  
  
### <a name="return-value"></a>Return Value  
 A pointer to a `System.Windows.Forms.Control` object.  
  
### <a name="remarks"></a>Remarks  
 For an example of how to use Windows Forms, see [Using a Windows Form User Control in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_control"></a>  CWinFormsView::operator Control^  
 Casts a type as a pointer to a Windows Forms control.  
  
```  
operator System::Windows::Forms::Control^() const;  
```  
  
### <a name="remarks"></a>Remarks  
 This operator allows you to pass a `CWinFormsView` view to functions that accept a pointer to a Windows Forms control of type <xref:System.Windows.Forms.Control>.  
  
### <a name="example"></a>Example  
  See [CWinFormsView::GetControl](#getcontrol).  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CWinFormsControl Class](../../mfc/reference/cwinformscontrol-class.md)   
 [CWinFormsDialog Class](../../mfc/reference/cwinformsdialog-class.md)   
 [CFormView Class](../../mfc/reference/cformview-class.md)

