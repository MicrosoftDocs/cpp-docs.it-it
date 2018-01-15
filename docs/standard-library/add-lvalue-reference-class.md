---
title: Classe add_lvalue_reference | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::add_lvalue_reference
dev_langs: C++
helpviewer_keywords: add_lvalue_reference
ms.assetid: 9933afc2-ad0d-465d-98fe-7d547fa3efe2
caps.latest.revision: "21"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ec6ca5939fecb63fb044cf2a6088b04b43cbeb72
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="addlvaluereference-class"></a>Classe add_lvalue_reference
Crea un riferimento al tipo dal tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T>  
struct add_lvalue_reference;  
 
template <class T>  
using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo da modificare.  
  
## <a name="remarks"></a>Note  
 Un’istanza del modificatore del tipo contiene un tipo modificato che è `T` se `T` è un riferimento lvalue; in caso contrario `T&`.  
  
## <a name="example"></a>Esempio  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
using namespace std;  
int main()  
{  
    int val = 0;  
    add_lvalue_reference_t<int> p = (int&)val;  
    p = p;  // to quiet "unused" warning   
    cout << "add_lvalue_reference_t<int> == "  
        << typeid(p).name() << endl;  
  
    return (0);  
}  
```  
  
```Output  
add_lvalue_reference_t<int> == int  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe remove_reference](../standard-library/remove-reference-class.md)
