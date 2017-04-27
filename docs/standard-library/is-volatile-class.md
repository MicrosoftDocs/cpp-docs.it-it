---
title: Classe is_volatile | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_volatile
- type_traits/std::is_volatile
dev_langs:
- C++
helpviewer_keywords:
- is_volatile class
- is_volatile
ms.assetid: 54922e8a-db4e-4cae-8931-b3352f0b8d3b
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
translationtype: Machine Translation
ms.sourcegitcommit: 28baed4badda4f2c1d7e5b20235fe8d40c2a7195
ms.openlocfilehash: 367ae42b0e5e01cbbb346f1f74ac2ebfef20ce26
ms.lasthandoff: 02/24/2017

---
# <a name="isvolatile-class"></a>Classe is_volatile
Verifica se il tipo è volatile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
struct is_volatile;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del tipo predicato contiene true se `Ty` è `volatile-qualified`.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__is_volatile.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_volatile<trivial> == " << std::boolalpha   
        << std::is_volatile<trivial>::value << std::endl;   
    std::cout << "is_volatile<volatile trivial> == " << std::boolalpha   
        << std::is_volatile<volatile trivial>::value << std::endl;   
    std::cout << "is_volatile<int> == " << std::boolalpha   
        << std::is_volatile<int>::value << std::endl;   
    std::cout << "is_volatile<volatile int> == " << std::boolalpha   
        << std::is_volatile<volatile int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_volatile<trivial> == false  
is_volatile<volatile trivial> == true  
is_volatile<int> == false  
is_volatile<volatile int> == true  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_const](../standard-library/is-const-class.md)

