---
title: CMemoryException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMemoryException
- AFX/CMemoryException
- AFX/CMemoryException::CMemoryException
dev_langs:
- C++
helpviewer_keywords:
- CMemoryException [MFC], CMemoryException
ms.assetid: 9af0ed57-d12a-45ca-82b5-c910a60f7edf
caps.latest.revision: 20
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
ms.openlocfilehash: ed7fb0e3689129bf41b13511c70073253bb81b4a
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cmemoryexception-class"></a>CMemoryException Class
Represents an out-of-memory exception condition.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CMemoryException : public CSimpleException  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CMemoryException::CMemoryException](#cmemoryexception)|Constructs a `CMemoryException` object.|  
  
## <a name="remarks"></a>Remarks  
 No further qualification is necessary or possible. Memory exceptions are thrown automatically by **new**. If you write your own memory functions, using `malloc`, for example, then you are responsible for throwing memory exceptions.  
  
 For more information on `CMemoryException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CMemoryException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afx.h  
  
##  <a name="cmemoryexception"></a>  CMemoryException::CMemoryException  
 Constructs a `CMemoryException` object.  
  
```  
CMemoryException();  
```  
  
### <a name="remarks"></a>Remarks  
 Do not use this constructor directly, but rather call the global function [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). this global function can succeed in an out-of-memory situation because it constructs the exception object in previously allocated memory. for more information about exception processing, see the article [exceptions](../exception-handling-in-mfc.md).  
  
## <a name="see-also"></a>See Also  
 [CException Class](cexception-class.md)   
 [Hierarchy Chart](../hierarchy-chart.md)




