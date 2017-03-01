---
title: Classe is_pod | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- is_pod
- std::is_pod
- type_traits/std::is_pod
dev_langs:
- C++
helpviewer_keywords:
- is_pod class
- is_pod
ms.assetid: d73ebdee-746b-4082-9fa4-2db71432eb0e
caps.latest.revision: 20
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
ms.openlocfilehash: 2236d6a9796b1353b919a63620606242cde169bd
ms.lasthandoff: 02/24/2017

---
# <a name="ispod-class"></a>Classe is_pod
Verifica se il tipo è POD.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>
struct is_pod;
```  
  
#### <a name="parameters"></a>Parametri  
*T*  
Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
`is_pod<T>::value` è `true` se il tipo *T* è POD (Plain Old Data). In caso contrario, sarà `false`.  
  
I tipi aritmetici, i tipi di enumerazione, i tipi di puntatori e i tipi di puntatore a membro sono POD.  
  
Una versione cv-qualified di un tipo POD è a sua volta un tipo POD.  
  
Una matrice di POD è a sua volta POD.  
  
Uno struct o un'unione, in cui tutti i membri dati non statici sono POD, è a sua volta POD se:  
  
-   Non ha costruttori dichiarati dall'utente.  
  
-   Non ha membri dati non statici privati o protetti.  
  
-   Non ha classi di base.  
  
-   Non ha funzioni virtuali.  
  
-   Non ha membri dati non statici di tipo di riferimento.  
  
-   Non ha un operatore di assegnazione di copia definito dall'utente.  
  
-   Non ha un distruttore definito dall'utente.  
  
Pertanto, è possibile creare in modo ricorsivo matrici e struct POD che contengono matrici e struct POD.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__is_pod.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial {   
    int val;   
};   
  
struct throws {   
    throws() {}  // User-declared ctor, so not POD
  
    int val;   
};   
  
int main() {   
    std::cout << "is_pod<trivial> == " << std::boolalpha   
        << std::is_pod<trivial>::value << std::endl;   
    std::cout << "is_pod<int> == " << std::boolalpha   
        << std::is_pod<int>::value << std::endl;   
    std::cout << "is_pod<throws> == " << std::boolalpha   
        << std::is_pod<throws>::value << std::endl;   
  
    return (0);   
}  
```  
  
```Output  
is_pod<trivial> == true  
is_pod<int> == true  
is_pod<throws> == false  
```  
  
## <a name="requirements"></a>Requisiti  
**Intestazione:** \<type_traits>  
  
**Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
[<type_traits>](../standard-library/type-traits.md)




