---
title: CClientDC Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CClientDC
- AFXWIN/CClientDC
- AFXWIN/CClientDC::CClientDC
- AFXWIN/CClientDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- CClientDC [MFC], CClientDC
- CClientDC [MFC], m_hWnd
ms.assetid: 8a871d6b-06f8-496e-9fa3-9a5780848369
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
ms.openlocfilehash: d3948274f1862de8f5cc8191140940ed97cdb02c
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cclientdc-class"></a>CClientDC Class
Takes care of calling the Windows functions [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871) at construction time and [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920) at destruction time.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CClientDC : public CDC  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::CClientDC](#cclientdc)|Constructs a `CClientDC` object connected to the `CWnd`.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CClientDC::m_hWnd](#m_hwnd)|The `HWND` of the window for which this `CClientDC` is valid.|  
  
## <a name="remarks"></a>Remarks  
 This means that the device context associated with a `CClientDC` object is the client area of a window.  
  
 For more information on `CClientDC`, see [Device Contexts](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CClientDC`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwin.h  
  
##  <a name="cclientdc"></a>  CClientDC::CClientDC  
 Constructs a `CClientDC` object that accesses the client area of the [CWnd](../../mfc/reference/cwnd-class.md) pointed to by `pWnd`.  
  
```  
explicit CClientDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 The window whose client area the device context object will access.  
  
### <a name="remarks"></a>Remarks  
 The constructor calls the Windows function [GetDC](http://msdn.microsoft.com/library/windows/desktop/dd144871).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#42](../../mfc/codesnippet/cpp/cclientdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CClientDC::m_hWnd  
 The `HWND` of the `CWnd` pointer used to construct the `CClientDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Remarks  
 `m_hWnd` is a protected variable.  
  
### <a name="example"></a>Example  
  See the example for [CClientDC::CClientDC](#cclientdc).  
  
## <a name="see-also"></a>See Also  
 [MFC Sample MDI](../../visual-cpp-samples.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)

