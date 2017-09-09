---
title: bad_weak_ptr Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- memory/std::bad_weak_ptr
dev_langs:
- C++
helpviewer_keywords:
- bad_weak_ptr
- bad_weak_ptr class
ms.assetid: a09336d5-7237-4480-ab6b-3787e0e6025e
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
ms.openlocfilehash: ea321c5fe61ef2e2bbec82e3bcbe366bbe619da2
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="badweakptr-class"></a>bad_weak_ptr Class
Reports bad weak_ptr exception.  
  
## <a name="syntax"></a>Syntax  
  
```  
class bad_weak_ptr : public std::exception 
 {  
public:  
    bad_weak_ptr();
    const char *what() throw();
 };  
```  
  
## <a name="remarks"></a>Remarks  
 The class describes an exception that can be thrown from the [shared_ptr Class](../standard-library/shared-ptr-class.md) constructor that takes an argument of type [weak_ptr Class](../standard-library/weak-ptr-class.md). The member function `what` returns `"bad_weak_ptr"`.  
  
## <a name="example"></a>Example  
  
```cpp  
// std__memory__bad_weak_ptr.cpp   
// compile with: /EHsc   
#include <memory>   
#include <iostream>   
 
int main()
{
    std::weak_ptr<int> wp;

    {
        std::shared_ptr<int> sp(new int);
        wp = sp;
    }

    try
    {
        std::shared_ptr<int> sp1(wp); // weak_ptr has expired   
    }
    catch (const std::bad_weak_ptr&)
    {
        std::cout << "bad weak pointer" << std::endl;
    }
    catch (...)
    {
        std::cout << "unknown exception" << std::endl;
    }

    return (0);
}
```  
  
```Output  
bad weak pointer  
```  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<memory>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [weak_ptr Class](../standard-library/weak-ptr-class.md)

