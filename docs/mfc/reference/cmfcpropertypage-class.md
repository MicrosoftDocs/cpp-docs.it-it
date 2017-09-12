---
title: CMFCPropertyPage Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage
- AFXPROPERTYPAGE/CMFCPropertyPage::CMFCPropertyPage
dev_langs:
- C++
helpviewer_keywords:
- CMFCPropertyPage [MFC], CMFCPropertyPage
ms.assetid: d279d7f2-2d81-418d-9f23-6147d6e8df09
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
ms.openlocfilehash: 70f39e3c8eb89ea6e5c772d5b1ca147da0244d8c
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcpropertypage-class"></a>CMFCPropertyPage Class
The `CMFCPropertyPage` class supports the display of pop-up menus on a property page.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCPropertyPage : public CPropertyPage  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCPropertyPage::CMFCPropertyPage](#cmfcpropertypage)|Constructs a `CMFCPropertyPage` object.|  
|`CMFCPropertyPage::~CMFCPropertyPage`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCPropertyPage::CreateObject`|Used by the framework to create a dynamic instance of this class type.|  
|`CMFCPropertyPage::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
|`CMFCPropertyPage::OnSetActive`|This member function is called by the framework when the page is chosen by the user and becomes the active page. (Overrides [CPropertyPage::OnSetActive](../../mfc/reference/cpropertypage-class.md#onsetactive).)|  
|`CMFCPropertyPage::PreTranslateMessage`|Translates window messages before they are dispatched to the [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) and [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934) Windows functions. For more information and method syntax, see [CWnd::PreTranslateMessage](../../mfc/reference/cwnd-class.md#pretranslatemessage). (Overrides `CPropertyPage::PreTranslateMessage`.)|  
  
## <a name="remarks"></a>Remarks  
 The `CMFCPropertyPage` class represents individual pages of a property sheet, otherwise known as a tab dialog box.  
  
 Use the `CMFCPropertyPage` class together with the [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md) class. To use menus on a property page, replace all occurrences of the `CPropertyPage` class with the `CMFCPropertyPage` class.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CPropertyPage](../../mfc/reference/cpropertypage-class.md)  
  
 [CMFCPropertyPage](../../mfc/reference/cmfcpropertypage-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxpropertypage.h  
  
##  <a name="cmfcpropertypage"></a>  CMFCPropertyPage::CMFCPropertyPage  
 Constructs a `CMFCPropertyPage` object.  
  
```  
CMFCPropertyPage(
    UINT nIDTemplate,  
    UINT nIDCaption=0);

 
CMFCPropertyPage(
    LPCTSTR lpszTemplateName,  
    UINT nIDCaption=0);
```  
  
### <a name="parameters"></a>Parameters  
 `nIDTemplate`  
 Resource ID of the template for this page.  
  
 `nIDCaption`  
 Resource ID of the label to put in the tab for this page. If 0, the name is obtained from the dialog box template for this page. The default value is 0.  
  
 `lpszTemplateName`  
 Points to the name of the template for this page. Cannot be `NULL`.  
  
### <a name="return-value"></a>Return Value  
  
### <a name="remarks"></a>Remarks  
 For more information about the constructor parameters, see [CPropertyPage::CPropertyPage](../../mfc/reference/cpropertypage-class.md#cpropertypage).  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md)

