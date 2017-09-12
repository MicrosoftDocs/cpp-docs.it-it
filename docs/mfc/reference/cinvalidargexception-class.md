---
title: CInvalidArgException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInvalidArgException
- AFX/CInvalidArgException
- AFX/CInvalidArgException::CInvalidArgException
dev_langs:
- C++
helpviewer_keywords:
- CInvalidArgException [MFC], CInvalidArgException
ms.assetid: e43d7c67-1157-47f8-817a-804083e8186e
caps.latest.revision: 19
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
ms.openlocfilehash: a44d4ebff914361a8e675e1c6757537e0d3999ad
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cinvalidargexception-class"></a>CInvalidArgException Class
This class represents an invalid argument exception condition.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CInvalidArgException : public CSimpleException  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInvalidArgException::CInvalidArgException](#cinvalidargexception)|The constructor.|  
  
## <a name="remarks"></a>Remarks  
 A `CInvalidArgException` object represents an invalid argument exception condition.  
  
 For more information on Exception Handling, see the [CException Class](../../mfc/reference/cexception-class.md) topic and [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CInvalidArgException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afx.h  
  
##  <a name="cinvalidargexception"></a>  CInvalidArgException::CInvalidArgException  
 The constructor.  
  
```  
CInvalidArgException();
```  
  
### <a name="remarks"></a>Remarks  
 Do not use this constructor directly; call the global function **AfxThrowInvalidArgException**.  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CSimpleException Class](../../mfc/reference/csimpleexception-class.md)

