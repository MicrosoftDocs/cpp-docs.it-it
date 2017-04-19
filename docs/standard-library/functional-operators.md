---
title: Operatori &lt;functional&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- functional/std::operator!=
- functional/std::operator==
dev_langs:
- C++
helpviewer_keywords:
- functional operators
ms.assetid: d4b3c760-f3e2-4b65-bdaa-d42e8dd6f5e1
caps.latest.revision: 13
author: corob-msft
ms.author: corob
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 0194fbc3e45c270ca7537285c5c6b4e768c65a90
ms.openlocfilehash: 3a4ab558f46f99850aed286865ae5dbbd7d4a6af
ms.lasthandoff: 02/24/2017

---
# <a name="ltfunctionalgt-operators"></a>Operatori &lt;functional&gt;
|||  
|-|-|  
|[operator!=](#operator_neq)|[operator==](#operator_eq_eq)|  
  
##  <a name="operator_eq_eq"></a>  operator==  
 Verifica se l'oggetto chiamabile è vuoto.  
  
```  
template <class Fty>  
bool operator==(const function<Fty>& f, null_ptr_type npc);

template <class Fty>  
bool operator==(null_ptr_type npc, const function<Fty>& f);
```  
  
### <a name="parameters"></a>Parametri  
 `Fty`  
 Tipo di funzione di cui eseguire il wrapping.  
  
 `f`  
 Oggetto function.  
  
 `npc`  
 Puntatore Null.  
  
### <a name="remarks"></a>Note  
 Gli operatori accettano entrambi un argomento che è un riferimento a un oggetto `function` e un argomento che è una costante puntatore Null. Entrambi restituiscono true solo se l'oggetto `function` è vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__operator_eq.cpp
// compile with: /EHsc   
#include <functional>   
#include <iostream>   

int neg(int val)
{
    return (-val);
}

int main()
{
    std::function<int(int)> fn0;
    std::cout << std::boolalpha << "empty == "
        << (fn0 == 0) << std::endl;

    std::function<int(int)> fn1(neg);
    std::cout << std::boolalpha << "empty == "
        << (fn1 == 0) << std::endl;

    return (0);
}
  
```  
  
```Output  
empty == true  
empty == false  
```  
  
##  <a name="operator_neq"></a>  operator!=  
 Verifica se l'oggetto chiamabile non è vuoto.  
  
```  
template <class Fty>  
bool operator!=(const function<Fty>& f, null_ptr_type npc);

template <class Fty>  
bool operator!=(null_ptr_type npc, const function<Fty>& f);
```  
  
### <a name="parameters"></a>Parametri  
 `Fty`  
 Tipo di funzione di cui eseguire il wrapping.  
  
 `f`  
 Oggetto function.  
  
 `npc`  
 Puntatore Null.  
  
### <a name="remarks"></a>Note  
 Gli operatori accettano entrambi un argomento che è un riferimento a un oggetto `function` e un argomento che è una costante puntatore Null. Tutte e due restituiscono true solo se l'oggetto `function` non è vuoto.  
  
### <a name="example"></a>Esempio  
  
```cpp  
// std__functional__operator_ne.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
int neg(int val)   
    {   
    return (-val);   
    }   
  
int main()   
    {   
    std::function<int (int)> fn0;   
    std::cout << std::boolalpha << "not empty == "   
        << (fn0 != 0) << std::endl;   
  
    std::function<int (int)> fn1(neg);   
    std::cout << std::boolalpha << "not empty == "   
        << (fn1 != 0) << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
not empty == false  
not empty == true  
```  
  
## <a name="see-also"></a>Vedere anche  
 [\<functional>](../standard-library/functional.md)


