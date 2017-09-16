---
title: CMFCLinkCtrl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl
- AFXLINKCTRL/CMFCLinkCtrl::SetURL
- AFXLINKCTRL/CMFCLinkCtrl::SetURLPrefix
- AFXLINKCTRL/CMFCLinkCtrl::SizeToContent
- AFXLINKCTRL/CMFCLinkCtrl::OnDrawFocusRect
dev_langs:
- C++
helpviewer_keywords:
- CMFCLinkCtrl [MFC], SetURL
- CMFCLinkCtrl [MFC], SetURLPrefix
- CMFCLinkCtrl [MFC], SizeToContent
- CMFCLinkCtrl [MFC], OnDrawFocusRect
ms.assetid: 80f3874d-7cc8-410e-9ff1-62a225f5034b
caps.latest.revision: 27
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
ms.openlocfilehash: ce159218682677082c20a6ffe8d698570d53e984
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmfclinkctrl-class"></a>CMFCLinkCtrl Class
The `CMFCLinkCtrl` class displays a button as a hyperlink and invokes the link's target when the button is clicked.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMFCLinkCtrl : public CMFCButton  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCLinkCtrl::SetURL](#seturl)|Displays a specified URL as the button text.|  
|[CMFCLinkCtrl::SetURLPrefix](#seturlprefix)|Sets the implicit protocol (for example, "http:") of the URL.|  
|[CMFCLinkCtrl::SizeToContent](#sizetocontent)|Resizes the button to contain the button text or bitmap.|  
  
### <a name="protected-methods"></a>Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CMFCLinkCtrl::OnDrawFocusRect](#ondrawfocusrect)|Called by the framework before the focus rectangle of the button is drawn.|  
  
## <a name="remarks"></a>Remarks  
 When you click a button that is derived from the `CMFCLinkCtrl` class, the framework passes the URL of the button as a parameter to the `ShellExecute` method. Then the `ShellExecute` method opens the target of the URL.  
  
## <a name="example"></a>Example  
 The following example demonstrates how to set the size of a `CMFCLinkCtrl` object, and how to set a url and a tooltip in a `CMFCLinkCtrl` object. This example is part of the [New Controls sample](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_NewControls#9](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_1.h)]  
[!code-cpp[NVC_MFC_NewControls#10](../../mfc/reference/codesnippet/cpp/cmfclinkctrl-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CButton](../../mfc/reference/cbutton-class.md)  
  
 [CMFCButton](../../mfc/reference/cmfcbutton-class.md)  
  
 [CMFCLinkCtrl](../../mfc/reference/cmfclinkctrl-class.md)  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxlinkctrl.h  
  
##  <a name="ondrawfocusrect"></a>  CMFCLinkCtrl::OnDrawFocusRect  
 Called by the framework before the focus rectangle of the button is drawn.  
  
```  
virtual void OnDrawFocusRect(
    CDC* pDC,  
    const CRect& rectClient);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `pDC`  
 A pointer to a device context.  
  
 [in] `rectClient`  
 A rectangle that bounds the link control.  
  
### <a name="remarks"></a>Remarks  
 Override this method when you want to use your own code to draw the button's focus rectangle.  
  
##  <a name="seturl"></a>  CMFCLinkCtrl::SetURL  
 Displays a specified URL as the button text.  
  
```  
void SetURL(LPCTSTR lpszURL);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszURL`  
 The button text to display.  
  
### <a name="remarks"></a>Remarks  
  
##  <a name="seturlprefix"></a>  CMFCLinkCtrl::SetURLPrefix  
 Sets the implicit protocol (for example, "http:") of the URL.  
  
```  
void SetURLPrefix(LPCTSTR lpszPrefix);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `lpszPrefix`  
 The prefix of the URL protocol.  
  
### <a name="remarks"></a>Remarks  
 Use this method to set the URL prefix. The prefix is not displayed on the button's face, but you can use it to help browse to the URL's target.  
  
##  <a name="sizetocontent"></a>  CMFCLinkCtrl::SizeToContent  
 Resizes the button to contain the button text or bitmap.  
  
```  
virtual CSize SizeToContent(
    BOOL bVCenter=FALSE,  
    BOOL bHCenter=FALSE);
```  
  
### <a name="parameters"></a>Parameters  
 [in] `bVCenter`  
 `TRUE` to center the button text and bitmap vertically between the top and bottom of the link control; otherwise, `FALSE`. The default value is `FALSE`.  
  
 [in] `bHCenter`  
 `TRUE` to center the button text and bitmap horizontally between the left and right sides of the link control; otherwise, `FALSE`. The default value is `FALSE`.  
  
### <a name="return-value"></a>Return Value  
 A [CSize](../../atl-mfc-shared/reference/csize-class.md) object that contains the new size of the link control.  
  
### <a name="remarks"></a>Remarks  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [Classes](../../mfc/reference/mfc-classes.md)   
 [CLinkCtrl Class](../../mfc/reference/clinkctrl-class.md)   
 [CMFCButton Class](../../mfc/reference/cmfcbutton-class.md)

