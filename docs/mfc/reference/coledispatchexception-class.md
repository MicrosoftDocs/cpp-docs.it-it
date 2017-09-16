---
title: COleDispatchException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COleDispatchException
- AFXDISP/COleDispatchException
- AFXDISP/COleDispatchException::m_dwHelpContext
- AFXDISP/COleDispatchException::m_strDescription
- AFXDISP/COleDispatchException::m_strHelpFile
- AFXDISP/COleDispatchException::m_strSource
- AFXDISP/COleDispatchException::m_wCode
dev_langs:
- C++
helpviewer_keywords:
- COleDispatchException [MFC], m_dwHelpContext
- COleDispatchException [MFC], m_strDescription
- COleDispatchException [MFC], m_strHelpFile
- COleDispatchException [MFC], m_strSource
- COleDispatchException [MFC], m_wCode
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
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
ms.openlocfilehash: e462a1b0e3808f6077df7c8a643533471b9af7b3
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="coledispatchexception-class"></a>COleDispatchException Class
Handles exceptions specific to the OLE `IDispatch` interface, which is a key part of OLE automation.  
  
## <a name="syntax"></a>Syntax  
  
```  
class COleDispatchException : public CException  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[COleDispatchException::m_dwHelpContext](#m_dwhelpcontext)|Help context for error.|  
|[COleDispatchException::m_strDescription](#m_strdescription)|Verbal error description.|  
|[COleDispatchException::m_strHelpFile](#m_strhelpfile)|Help file to use with `m_dwHelpContext`.|  
|[COleDispatchException::m_strSource](#m_strsource)|Application that generated the exception.|  
|[COleDispatchException::m_wCode](#m_wcode)|`IDispatch`-specific error code.|  
  
## <a name="remarks"></a>Remarks  
 Like the other exception classes derived from the `CException` base class, `COleDispatchException` can be used with the **THROW**, `THROW_LAST`, **TRY**, **CATCH**, `AND_CATCH`, and `END_CATCH` macros.  
  
 In general, you should call [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) to create and throw a `COleDispatchException` object.  
  
 For more information on exceptions, see the articles [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md) and [Exceptions: OLE Exceptions](../../mfc/exceptions-ole-exceptions.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleDispatchException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxdisp.h  
  
##  <a name="m_dwhelpcontext"></a>  COleDispatchException::m_dwHelpContext  
 Identifies a help context in your application's help (.HLP) file.  
  
```  
DWORD m_dwHelpContext;  
```  
  
### <a name="remarks"></a>Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
### <a name="example"></a>Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strdescription"></a>  COleDispatchException::m_strDescription  
 Contains a verbal error description, such as "Disk full."  
  
```  
CString m_strDescription;  
```  
  
### <a name="remarks"></a>Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
### <a name="example"></a>Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strhelpfile"></a>  COleDispatchException::m_strHelpFile  
 The framework fills in this string with the name of the application's help file.  
  
```  
CString m_strHelpFile;  
```  
  
##  <a name="m_strsource"></a>  COleDispatchException::m_strSource  
 The framework fills in this string with the name of the application that generated the exception.  
  
```  
CString m_strSource;  
```  
  
### <a name="example"></a>Example  
  See the example for [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_wcode"></a>  COleDispatchException::m_wCode  
 Contains an error code specific to your application.  
  
```  
WORD m_wCode;  
```  
  
### <a name="remarks"></a>Remarks  
 This member is set by the function [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) when an exception is thrown.  
  
## <a name="see-also"></a>See Also  
 [MFC Sample CALCDRIV](../../visual-cpp-samples.md)   
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)   
 [COleException Class](../../mfc/reference/coleexception-class.md)

