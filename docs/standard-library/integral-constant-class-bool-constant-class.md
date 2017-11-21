---
title: Classe integral_constant, classe bool_constant | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- type_traits/std::integral_constant
- XTR1COMMON/std::integral_constant
- type_traits/std::bool_constant
- XTR1COMMON/std::bool_constant
dev_langs: C++
helpviewer_keywords:
- std::integral_constant [C++]
- std::bool_constant [C++]
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
caps.latest.revision: "23"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: d519e7310237a00e1423f70adea5fa0590ec5350
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="integralconstant-class-boolconstant-class"></a>Classe integral_constant, classe bool_constant
Crea una costante integrale da un tipo e da un valore.  
  
## <a name="syntax"></a>Sintassi  
  
```
template<class T, T v>
struct integral_constant {  
   static constexpr T value = v;  
   typedef T value_type;  
   typedef integral_constant<T, v> type;  
   constexpr operator value_type() const noexcept;  
   constexpr value_type operator()() const noexcept;  
   };  
```
  
### <a name="parameters"></a>Parametri  
*T*  
Il tipo della costante.  
  
*v*  
Il valore della costante.  
  
## <a name="remarks"></a>Note  
La classe modello `integral_constant`, quando è specializzata con un tipo integrale *T* e un valore *v* di quel tipo, rappresenta un oggetto che contiene una costante del tipo integrale con il valore specificato. Il membro denominato `type` è un alias per il tipo di specializzazione del modello generato e il membro `value` contiene il valore *v* usato per creare la specializzazione.  
  
La classe modello `bool_constant` è una specializzazione parziale esplicita di `integral_constant` che usa `bool` come argomento *T*.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__integral_constant.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "integral_constant<int, 5> == "   
        << std::integral_constant<int, 5>::value << std::endl;   
    std::cout << "integral_constant<bool, false> == " << std::boolalpha   
        << std::integral_constant<bool, false>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
integral_constant<int, 5> == 5  
integral_constant<bool, false> == false  
```  
  
## <a name="requirements"></a>Requisiti  

**Intestazione:** \<type_traits>
  
**Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [false_type](../standard-library/type-traits-typedefs.md#false_type)   
 [true_type](../standard-library/type-traits-typedefs.md#true_type)

