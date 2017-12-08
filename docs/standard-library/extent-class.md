---
title: Classe extent | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::extent
dev_langs: C++
helpviewer_keywords:
- extent class
- extent
ms.assetid: 6d16263d-90b2-4330-9ec7-b59ed898792d
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 185cb6108801b31c19301a0f7488352a6948f5bb
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="extent-class"></a>Classe extent
Ottiene una dimensione di matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class Ty, unsigned I = 0>  
struct extent;  
```  
  
#### <a name="parameters"></a>Parametri  
 `Ty`  
 Tipo su cui eseguire una query.  
  
 `I`  
 La matrice associata alla query.  
  
## <a name="remarks"></a>Note  
 Se `Ty` è un tipo di matrice con almeno `I` dimensioni, la query di tipo contiene il numero di elementi nella dimensione specificata da `I`. Se `Ty` non è un tipo di matrice o la sua classificazione è minore di `I`, o se `I` è zero e `Ty` è di tipo "matrice di valori associati sconosciuti di `U`", la query di tipo contiene il valore 0.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__type_traits__extent.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "extent 0 == "   
        << std::extent<int[5][10]>::value << std::endl;   
    std::cout << "extent 1 == "   
        << std::extent<int[5][10], 1>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
extent 0 == 5  
extent 1 == 10  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)   
 [Classe remove_all_extents](../standard-library/remove-all-extents-class.md)   
 [Classe remove_extent](../standard-library/remove-extent-class.md)