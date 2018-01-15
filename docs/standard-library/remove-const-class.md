---
title: Classe remove_const | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::remove_const
dev_langs: C++
helpviewer_keywords:
- remove_const class
- remove_const
ms.assetid: feb76fb3-9228-41d6-80f6-2fbb04daec43
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 4419fc7f08cd15dd36c51544472a43b4134826d2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="removeconst-class"></a>Classe remove_const
Crea un tipo non const dal tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T>  
struct remove_const;
```  
  
```  
template <class T>  
using remove_const_t = typename remove_const<T>::type;  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo da modificare.  
  
## <a name="remarks"></a>Note  
 Un'istanza di `remove_const<T>` contiene un tipo modificato che è `T1` quando `T` è nel formato `const T1`, in caso contrario, `T`.  
  
## <a name="example"></a>Esempio  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_const_t<const int>*)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "remove_const_t<const int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
```  
  
```Output  
remove_const_t<const int> == int  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe add_const](../standard-library/add-const-class.md)   
 [Classe remove_cv](../standard-library/remove-cv-class.md)
