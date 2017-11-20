---
title: Classe is_scalar | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_scalar
dev_langs: C++
helpviewer_keywords:
- is_scalar class
- is_scalar
ms.assetid: a0cdfc9a-f27e-4808-890f-6ed7942db60c
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 1de66c68ce1b4b0ff53cb73d96c8a8c39719644d
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isscalar-class"></a>Classe is_scalar
Verifica se il tipo è scalare.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
struct is_scalar;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Ty` è un tipo integrale, un tipo a virgola mobile, un tipo di enumerazione, un tipo di puntatore o un puntatore a un tipo membro oppure un form `cv-qualified` di uno di essi; in caso contrario, contiene false.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__is_scalar.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_scalar<trivial> == " << std::boolalpha   
        << std::is_scalar<trivial>::value << std::endl;   
    std::cout << "is_scalar<trivial *> == " << std::boolalpha   
        << std::is_scalar<trivial *>::value << std::endl;   
    std::cout << "is_scalar<int> == " << std::boolalpha   
        << std::is_scalar<int>::value << std::endl;   
    std::cout << "is_scalar<float> == " << std::boolalpha   
        << std::is_scalar<float>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_scalar<trivial> == false  
is_scalar<trivial *> == true  
is_scalar<int> == true  
is_scalar<float> == true  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_compound](../standard-library/is-compound-class.md)
