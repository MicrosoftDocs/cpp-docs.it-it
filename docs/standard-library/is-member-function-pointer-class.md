---
title: Classe is_member_function_pointer | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_member_function_pointer
dev_langs: C++
helpviewer_keywords:
- is_member_function_pointer class
- is_member_function_pointer
ms.assetid: 02e372c4-2714-40f2-b376-2e10ca91c8ed
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 4355e16c099adfcf77d871f29d92274bb738eb52
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ismemberfunctionpointer-class"></a>Classe is_member_function_pointer
Verifica se il tipo è un puntatore a una funzione membro.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty>  
struct is_member_function_pointer;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del tipo predicato contiene true se il tipo `Ty` è un puntatore a una funzione membro o un puntatore `cv-qualified` a una funzione membro; in caso contrario, contiene false.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__is_member_function_pointer.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct functional   
    {   
    int f();   
    };   
  
int main()   
    {   
    std::cout << "is_member_function_pointer<trivial *> == "   
        << std::boolalpha   
        << std::is_member_function_pointer<trivial *>::value   
        << std::endl;   
    std::cout << "is_member_function_pointer<int trivial::*> == "   
        << std::boolalpha   
        << std::is_member_function_pointer<int trivial::*>::value   
        << std::endl;   
    std::cout << "is_member_function_pointer<int (functional::*)()> == "   
        << std::boolalpha   
        << std::is_member_function_pointer<int (functional::*)()>::value   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_member_function_pointer<trivial *> == false  
is_member_function_pointer<int trivial::*> == false  
is_member_function_pointer<int (functional::*)()> == true  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_member_pointer](../standard-library/is-member-pointer-class.md)