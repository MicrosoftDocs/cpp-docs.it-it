---
title: Classe is_placeholder | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- functional/std::is_placeholder
dev_langs:
- C++
helpviewer_keywords:
- is_placeholder class
ms.assetid: 2b21a792-96d1-4bb8-b911-0db796510835
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 5491f0a8c5ef0c6999680beb8b82cd6280f87af1
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="isplaceholder-class"></a>Classe is_placeholder
Verifica se il tipo è un segnaposto.  
  
## <a name="syntax"></a>Sintassi  
  
struct is_placeholder {  
   static const int value;  
   };  
  
## <a name="remarks"></a>Note  
 Il valore costante `value` è 0 se il tipo `Ty` non è un segnaposto; in caso contrario, il relativo valore corrisponde alla posizione dell'argomento della chiamata di funzione a cui è associato. Usarlo per determinare il valore `N` per l'ennesimo segnaposto `_N`.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// std__functional__is_placeholder.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
using namespace std::placeholders;   
  
template<class Expr>
void test_for_placeholder(const Expr&)
{
    std::cout << std::is_placeholder<Expr>::value << std::endl;
}

int main()
{
    test_for_placeholder(3.0);
    test_for_placeholder(_3);

    return (0);
}  
```  
  
```Output  
0  
3  
```  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<functional>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Oggetto _1](../standard-library/1-object.md)

