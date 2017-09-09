---
title: bad_exception Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- exception/std::bad_exception
dev_langs:
- C++
helpviewer_keywords:
- bad_exception class
ms.assetid: 5ae2c4ef-c7ad-4469-8a9e-a773e86bb000
caps.latest.revision: 20
author: corob-msft
ms.author: corob
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
ms.sourcegitcommit: 5d026c375025b169d5db8445cbb52c0c917b2d8d
ms.openlocfilehash: 2b61ecbc5e990f94f7d8fc4078ebaa644d78af88
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="badexception-class"></a>bad_exception Class
The class describes an exception that can be thrown from an unexpected handler.  
  
## <a name="syntax"></a>Syntax  
  
```  
class bad_exception    : public exception {};  
```  
  
## <a name="remarks"></a>Remarks  
 [unexpected](../standard-library/exception-functions.md#unexpected) will throw a `bad_exception` instead of terminating or instead of calling another function specified with [set_unexpected](../standard-library/exception-functions.md#set_unexpected) if `bad_exception` is included in the throw list of a function.  
  
 The value returned by **what** is an implementation-defined C string. None of the member functions throw any exceptions.  
  
 For a list of members inherited by the `bad_exception` class, see [exception Class](../standard-library/exception-class.md).  
  
## <a name="example"></a>Example  
 See [set_unexpected](../standard-library/exception-functions.md#set_unexpected) for an example of the use of [unexpected](../standard-library/exception-functions.md#unexpected) throwing a `bad_exception`.  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<exception>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
[exception Class](../standard-library/exception-class.md) [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)


