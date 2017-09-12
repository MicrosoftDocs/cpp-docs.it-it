---
title: CWindowDC Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWindowDC
- AFXWIN/CWindowDC
- AFXWIN/CWindowDC::CWindowDC
- AFXWIN/CWindowDC::m_hWnd
dev_langs:
- C++
helpviewer_keywords:
- CWindowDC [MFC], CWindowDC
- CWindowDC [MFC], m_hWnd
ms.assetid: 876a3641-4cde-471c-b0d1-fe58b32af79c
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
ms.openlocfilehash: 6910ab7d9692e9392e660e860973ac721e3154b0
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cwindowdc-class"></a>CWindowDC Class
Derived from `CDC`.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CWindowDC : public CDC  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowDC::CWindowDC](#cwindowdc)|Constructs a `CWindowDC` object.|  
  
### <a name="protected-data-members"></a>Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowDC::m_hWnd](#m_hwnd)|The `HWND` to which this `CWindowDC` is attached.|  
  
## <a name="remarks"></a>Remarks  
 Calls the Windows function [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947\(v=vs.85\).aspx)at construction time and [ReleaseDC](http://msdn.microsoft.com/library/windows/desktop/dd162920\(v=vs.85\).aspx) at destruction time. This means that a `CWindowDC` object accesses the entire screen area of a [CWnd](../../mfc/reference/cwnd-class.md) (both client and nonclient areas).  
  
 For more information on using `CWindowDC`, see [Device Contexts](../../mfc/device-contexts.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CDC](../../mfc/reference/cdc-class.md)  
  
 `CWindowDC`  
  
## <a name="requirements"></a>Requirements  
 Header: afxwin.h  
  
##  <a name="cwindowdc"></a>  CWindowDC::CWindowDC  
 Constructs a `CWindowDC` object that accesses the entire screen area (both client and nonclient) of the `CWnd` object pointed to by `pWnd`.  
  
```  
explicit CWindowDC(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parameters  
 `pWnd`  
 The window whose client area the device-context object will access.  
  
### <a name="remarks"></a>Remarks  
 The constructor calls the Windows function [GetWindowDC](http://msdn.microsoft.com/library/windows/desktop/dd144947).  
  
 An exception (of type `CResourceException`) is thrown if the Windows `GetWindowDC` call fails. A device context may not be available if Windows has already allocated all of its available device contexts. Your application competes for the five common display contexts available at any given time under Windows.  
  
### <a name="example"></a>Example  
 [!code-cpp[NVC_MFCDocView#188](../../mfc/codesnippet/cpp/cwindowdc-class_1.cpp)]  
  
##  <a name="m_hwnd"></a>  CWindowDC::m_hWnd  
 The `HWND` of the `CWnd` pointer is used to construct the `CWindowDC` object.  
  
```  
HWND m_hWnd;  
```  
  
### <a name="remarks"></a>Remarks  
 `m_hWnd` is a protected variable of type `HWND`.  
  
### <a name="example"></a>Example  
  See the example for [CWindowDC::CWindowDC](#cwindowdc).  
  
## <a name="see-also"></a>See Also  
 [CDC Class](../../mfc/reference/cdc-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CDC Class](../../mfc/reference/cdc-class.md)

