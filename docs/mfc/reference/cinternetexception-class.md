---
title: CInternetException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInternetException
- AFXINET/CInternetException
- AFXINET/CInternetException::CInternetException
- AFXINET/CInternetException::m_dwContext
- AFXINET/CInternetException::m_dwError
dev_langs:
- C++
helpviewer_keywords:
- CInternetException [MFC], CInternetException
- CInternetException [MFC], m_dwContext
- CInternetException [MFC], m_dwError
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
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
ms.openlocfilehash: 19c144cffcb44e75edcc003b642601866b8a5850
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cinternetexception-class"></a>CInternetException Class
Represents an exception condition related to an Internet operation.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CInternetException : public CException  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetException::CInternetException](#cinternetexception)|Constructs a `CInternetException` object.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CInternetException::m_dwContext](#m_dwcontext)|The context value associated with the operation that caused the exception.|  
|[CInternetException::m_dwError](#m_dwerror)|The error that caused the exception.|  
  
## <a name="remarks"></a>Remarks  
 The `CInternetException` class includes two public data members: one holds the error code associated with the exception, and the other holds the context identifier of the Internet application associated with the error.  
  
 For more information about context identifiers for Internet applications, see the article [Internet Programming with WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CInternetException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxinet.h  
  
##  <a name="cinternetexception"></a>  CInternetException::CInternetException  
 This member function is called when a `CInternetException` object is created.  
  
```  
CInternetException(DWORD dwError);
```  
  
### <a name="parameters"></a>Parameters  
 `dwError`  
 The error that caused the exception.  
  
### <a name="remarks"></a>Remarks  
 To throw a CInternetException, call the MFC global function [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).  
  
##  <a name="m_dwcontext"></a>  CInternetException::m_dwContext  
 The context value associated with the related Internet operation.  
  
```  
DWORD_PTR m_dwContext;  
```  
  
### <a name="remarks"></a>Remarks  
 The context identifier is originally specified in [CInternetSession](../../mfc/reference/cinternetsession-class.md) and passed by MFC to [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- and [CInternetFile](../../mfc/reference/cinternetfile-class.md)-derived classes. You can override this default and assign any `dwContext` parameter a value of your choosing. `dwContext` is associated with any operation of the given object. `dwContext` identifies the operation's status information returned by [CInternetSession::OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
##  <a name="m_dwerror"></a>  CInternetException::m_dwError  
 The error that caused the exception.  
  
```  
DWORD m_dwError;  
```  
  
### <a name="remarks"></a>Remarks  
 This error value may be a system error code, found in WINERROR.H, or an error value from WININET.H.  
  
 For a list of Win32 error codes, see [Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms681381). For a list of Internet-specific error messages, see  . Both topics are in the Windows SDK.  
  
## <a name="see-also"></a>See Also  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)

