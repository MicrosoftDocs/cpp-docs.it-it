---
title: is_array Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::is_array
dev_langs:
- C++
helpviewer_keywords:
- is_array class
- is_array
ms.assetid: 61fb2201-8de3-4746-9721-617f02df170f
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.mt:
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
ms.openlocfilehash: d62f5b72ad7b8b012b55d60047b101dc0111616e
ms.contentlocale: it-it
ms.lasthandoff: 09/09/2017

---
# <a name="isarray-class"></a>is_array Class
Tests if type is array.  
  
## <a name="syntax"></a>Syntax  
  
```  
template <class Ty>  
struct is_array;  
```  
  
#### <a name="parameters"></a>Parameters  
 `Ty`  
 The type to query.  
  
## <a name="remarks"></a>Remarks  
 An instance of the type predicate holds true if the type `Ty` is an array type, otherwise it holds false.  
  
## <a name="example"></a>Example  
  
```cpp  
// std__type_traits__is_array.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_array<trivial> == " << std::boolalpha   
        << std::is_array<trivial>::value << std::endl;   
    std::cout << "is_array<int> == " << std::boolalpha   
        << std::is_array<int>::value << std::endl;   
    std::cout << "is_array<int[5]> == " << std::boolalpha   
        << std::is_array<int[5]>::value << std::endl;   
  
    return (0);   
    }  
```  
  
```Output  
is_array<trivial> == false  
is_array<int> == false  
is_array<int[5]> == true  
```  
  
## <a name="requirements"></a>Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## <a name="see-also"></a>See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [extent Class](../standard-library/extent-class.md)   
 [rank Class](../standard-library/rank-class.md)

