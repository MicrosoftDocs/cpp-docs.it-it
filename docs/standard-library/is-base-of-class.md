---
title: Classe is_base_of | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_base_of
dev_langs: C++
helpviewer_keywords:
- is_base_of class
- is_base_of
ms.assetid: 436f6213-1d4c-4ffc-a588-fc7c4887dd86
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f297432293a7b2e8dd0c6d005c718a1edd5e13b9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="isbaseof-class"></a>Classe is_base_of
Verifica se un tipo è la base di un altro tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Base, class Derived>  
struct is_base_of;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Classe di base per cui eseguire la verifica.  
  
 `Derived`  
 Tipo derivato per cui eseguire la verifica.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se il tipo `Base` è una classe base del tipo `Derived`; in caso contrario, contiene false.  
  
## <a name="example"></a>Esempio  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct derived   
    : public base   
    {   
    };   
  
int main()   
    {   
    std::cout << "is_base_of<base, base> == " << std::boolalpha   
        << std::is_base_of<base, base>::value << std::endl;   
    std::cout << "is_base_of<base, derived> == " << std::boolalpha   
        << std::is_base_of<base, derived>::value << std::endl;   
    std::cout << "is_base_of<derived, base> == " << std::boolalpha   
        << std::is_base_of<derived, base>::value << std::endl;   
  
    return (0);   
    }  
```  
  
```Output  
is_base_of<base, base> == true  
is_base_of<base, derived> == true  
is_base_of<derived, base> == false  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe is_convertible](../standard-library/is-convertible-class.md)
