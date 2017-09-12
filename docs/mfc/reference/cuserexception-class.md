---
title: CUserException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CUserException
dev_langs:
- C++
helpviewer_keywords:
- operations [MFC], stopping
- exceptions [MFC], throwing
- CUserException class [MFC]
- errors [MFC], trapping
- operations [MFC]
- throwing exceptions [MFC], stopping user operations
ms.assetid: 2156ba6d-2cce-415a-9000-6f02c26fcd7d
caps.latest.revision: 23
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
ms.openlocfilehash: 35681dc28f5486a90acf8d07623cd0e3540e2355
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="cuserexception-class"></a>CUserException Class
Thrown to stop an end-user operation.  
  
## <a name="syntax"></a>Syntax  
  
```  
class CUserException : public CSimpleException  
```  
  
## <a name="remarks"></a>Remarks  
 Use `CUserException` when you want to use the throw/catch exception mechanism for application-specific exceptions. "User" in the class name can be interpreted as "my user did something exceptional that I need to handle."  
  
 A `CUserException` is usually thrown after calling the global function `AfxMessageBox` to notify the user that an operation has failed. When you write an exception handler, handle the exception specially since the user usually has already been notified of the failure. The framework throws this exception in some cases. To throw a `CUserException` yourself, alert the user and then call the global function `AfxThrowUserException`.  
  
 In the example below, a function containing operations that may fail alerts the user and throws a `CUserException`. The calling function catches the exception and handles it specially:  
  
 [!code-cpp[NVC_MFCExceptions#24](../../mfc/codesnippet/cpp/cuserexception-class_1.cpp)]  
  
 For more information on using `CUserException`, see the article [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 [CSimpleException](../../mfc/reference/csimpleexception-class.md)  
  
 `CUserException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afxwin.h  
  
## <a name="see-also"></a>See Also  
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CException Class](../../mfc/reference/cexception-class.md)

