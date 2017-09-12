---
title: CMFCRibbonCustomizeDialog Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog
- AFXRIBBONCUSTOMIZEDIALOG/CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog
dev_langs:
- C++
helpviewer_keywords:
- CMFCRibbonCustomizeDialog [MFC], CMFCRibbonCustomizeDialog
ms.assetid: ce67de7f-5eaa-4c75-9b94-f290f36df073
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
ms.openlocfilehash: b9c20532c5bbe799de3df8bd63c51489f128a300
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfcribboncustomizedialog-class"></a>CMFCRibbonCustomizeDialog Class
Displays the ribbon **Customize** page.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCRibbonCustomizeDialog : public CMFCPropertySheet  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog](#cmfcribboncustomizedialog)|Constructs a `CMFCRibbonCustomizeDialog` object.|  
|`CMFCRibbonCustomizeDialog::~CMFCRibbonCustomizeDialog`|Destructor.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|`CMFCRibbonCustomizeDialog::GetThisClass`|Used by the framework to obtain a pointer to the [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) object that is associated with this class type.|  
  
## <a name="remarks"></a>Remarks  
 MFC instantiates this class automatically if you do not process the AFX_WM_ON_RIBBON_CUSTOMIZE message, or if you return 0 from the message handler.  
  
 If you want to use this class in your application to display the ribbon **Customize** dialog box, just instantiate it and call the `DoModal` method.  
  
 Because this class is derived from [CMFCPropertySheet Class](../../mfc/reference/cmfcpropertysheet-class.md), you can add custom pages by using the `CMFCPropertySheet` API.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPropertySheet](../../mfc/reference/cpropertysheet-class.md)  
  
 [CMFCPropertySheet](../../mfc/reference/cmfcpropertysheet-class.md)  
  
 [CMFCRibbonCustomizeDialog](../../mfc/reference/cmfcribboncustomizedialog-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxribboncustomizedialog.h  
  
##  <a name="cmfcribboncustomizedialog"></a>  CMFCRibbonCustomizeDialog::CMFCRibbonCustomizeDialog  
 Constructs a `CMFCRibbonCustomizeDialog` object.  
  
```  
CMFCRibbonCustomizeDialog(
    CWnd* pWndParent,  
    CMFCRibbonBar* pRibbon);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pWndParent`  
 A pointer to the parent window (usually the main frame).  
  
 [in] `pRibbon`  
 A pointer to the `CMFCRibbonBar` that is to be customized.  
  
### <a name="example"></a>Example  
 The following example demonstrates how to construct a `CMFCRibbonCustomizeDialog` object.  
  
 [!code-cpp[NVC_MFC_RibbonApp#18](../../mfc/reference/codesnippet/cpp/cmfcribboncustomizedialog-class_1.cpp)]  
  
### <a name="remarks"></a>Remarks  
 The constructor instantiates a [CMFCRibbonCustomizePropertyPage Class](../../mfc/reference/cmfcribboncustomizepropertypage-class.md) object and adds it to the collection of property sheet pages.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)

