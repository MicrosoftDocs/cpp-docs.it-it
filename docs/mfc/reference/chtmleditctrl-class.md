---
title: CHtmlEditCtrl Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::Create
- AFXHTML/CHtmlEditCtrl::GetDHtmlDocument
- AFXHTML/CHtmlEditCtrl::GetStartDocument
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditCtrl [MFC], CHtmlEditCtrl
- CHtmlEditCtrl [MFC], Create
- CHtmlEditCtrl [MFC], GetDHtmlDocument
- CHtmlEditCtrl [MFC], GetStartDocument
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
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
ms.openlocfilehash: 1cc64d8ff812db406c70d2971ad982f089ba1a29
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="chtmleditctrl-class"></a>CHtmlEditCtrl Class
Provides the functionality of the WebBrowser ActiveX control in an MFC window.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CHtmlEditCtrl: public CWnd,   
    public CHtmlEditCtrlBase<CHtmlEditCtrl>  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditCtrl::CHtmlEditCtrl](#chtmleditctrl)|Constructs a `CHtmlEditCtrl` object.|  
  
### <a name="public-methods"></a>Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHtmlEditCtrl::Create](#create)|Creates a WebBrowser ActiveX control and attaches it to the `CHtmlEditCtrl` object. This function automatically puts the WebBrowser ActiveX control into edit mode.|  
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Retrieves the [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interface on the document currently loaded in the contained WebBrowser control.|  
|[CHtmlEditCtrl::GetStartDocument](#getstartdocument)|Retrieves the URL to a default document to load in the contained WebBrowser control.|  
  
## <a name="remarks"></a>Remarks  
 The hosted WebBrowser control is automatically put into edit mode after it is created.  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHtmlEditCtrl`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxhtml.h  
  
##  <a name="chtmleditctrl"></a>  CHtmlEditCtrl::CHtmlEditCtrl  
 Constructs a `CHtmlEditCtrl` object.  
  
```  
CHtmlEditCtrl();
```  
  
##  <a name="create"></a>  CHtmlEditCtrl::Create  
 Creates a WebBrowser ActiveX control and attaches it to the `CHtmlEditCtrl` object. The WebBrowser ActiveX control automatically navigates to a default document and then is placed in edit mode by this function.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    int nID,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `lpszWindowName`  
 This parameter is unused.  
  
 `dwStyle`  
 This parameter is unused.  
  
 `rect`  
 Specifies the control's size and position.  
  
 `pParentWnd`  
 Specifies the control's parent window. It must not be **NULL**.  
  
 `nID`  
 Specifies the control's ID.  
  
 `pContext`  
 This parameter is unused.  
  
### <a name="return-value"></a>Return Value  
 Returns **TRUE** on success, **FALSE** on failure.  
  
##  <a name="getdhtmldocument"></a>  CHtmlEditCtrl::GetDHtmlDocument  
 Retrieves the [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interface on the document currently loaded in the contained WebBrowser control  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;  
```  
  
### <a name="parameters"></a>Parameters  
 `ppDocument`  
 The document interface.  
  
##  <a name="getstartdocument"></a>  CHtmlEditCtrl::GetStartDocument  
 Retrieves the URL to a default document to load in the contained WebBrowser control.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)


