---
title: Classe is_pointer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_pointer
- std::is_pointer
- type_traits/std::is_pointer
dev_langs:
- C++
helpviewer_keywords:
- is_pointer class
- is_pointer
ms.assetid: 44e0a403-7241-4e0a-8922-32877bcb9a4c
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
ms.openlocfilehash: 3bb2597b11ed4b5ebafac0e8548f9ddc18ac5fc4
ms.lasthandoff: 02/24/2017

---
# <a name="ispointer-class"></a>Classe is_pointer
Verifica se il tipo è un puntatore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
struct is_pointer;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un puntatore a `void`, un puntatore a un oggetto o un puntatore a una funzione oppure un form `cv-qualified` di uno di essi; in caso contrario, contiene false. Si noti che `is_pointer` contiene false se `Ty` è un puntatore a un membro o un puntatore a una funzione membro.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__is_pointer.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_pointer<trivial> == " << std::boolalpha   
        << std::is_pointer<trivial>::value << std::endl;   
    std::cout << "is_pointer<int trivial::*> == " << std::boolalpha   
        << std::is_pointer<int trivial::*>::value << std::endl;   
    std::cout << "is_pointer<trivial *> == " << std::boolalpha   
        << std::is_pointer<trivial *>::value << std::endl;   
    std::cout << "is_pointer<int> == " << std::boolalpha   
        << std::is_pointer<int>::value << std::endl;   
    std::cout << "is_pointer<int *> == " << std::boolalpha   
        << std::is_pointer<int *>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_pointer<trivial> == false  
is_pointer<int trivial::*> == false  
is_pointer<trivial *> == true  
is_pointer<int> == false  
is_pointer<int *> == true  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_member_pointer](../standard-library/is-member-pointer-class.md)   
 [Classe is_reference](../standard-library/is-reference-class.md)

