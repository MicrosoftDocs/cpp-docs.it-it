---
title: Restrict | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- __restrict_cpp
dev_langs:
- C++
helpviewer_keywords:
- __restrict keyword [C++]
ms.assetid: 2d151b4d-f930-49df-bd16-d8757ec7fa83
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f2c21872c5d6fe6000038a3a2f4fe39451b566dd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="restrict"></a>__restrict
Ad esempio il **declspec ( [limitare](../cpp/restrict.md) )** modificatore, la `__restrict` parola chiave indica che un simbolo non è associato un alias nell'ambito corrente. Tra la parola chiave `__restrict` e il modificatore `__declspec ( restrict )` esistono le differenze seguenti:  
  
-   La parola chiave `__restrict` è valida solo per variabili, mentre `__declspec ( restrict )` è valido solo per le dichiarazioni e le definizioni di funzione.  
  
-   `__restrict` è analogo a `restrict` nella specifica C99, ma è possibile sare `__restrict` in programmi C++ o C.  
  
-   Quando si usa `__restrict`, il compilatore non trasferirà la proprietà noalias di una variabile. In altre parole, se si assegna una variabile `__restrict` a una variabile non-`__restrict` variable, il compilatore non consentirà comunque l'uso di un alias per la variabile non-__restrict. Questo comportamento è diverso da quello della parola chiave `restrict` della specifica C99.  
  
 In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.  
  
 In Visual Studio 2015 e versioni successive è possibile usare `__restrict` nei riferimenti C++.  
  
> [!NOTE]
>  Quando viene utilizzata su una variabile che dispone anche di [volatile](../cpp/volatile-cpp.md) (parola chiave), `volatile` avrà la precedenza.  
  
## <a name="example"></a>Esempio  
  
```  
// __restrict_keyword.c  
// compile with: /LD  
// In the following function, declare a and b as disjoint arrays  
// but do not have same assurance for c and d.  
void sum2(int n, int * __restrict a, int * __restrict b,   
          int * c, int * d) {  
   int i;  
   for (i = 0; i < n; i++) {  
      a[i] = b[i] + c[i];  
      c[i] = b[i] + d[i];  
    }  
}  
  
// By marking union members as __restrict, tell compiler that  
// only z.x or z.y will be accessed in any given scope.  
union z {  
   int * __restrict x;  
   double * __restrict y;  
};  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Parole chiave](../cpp/keywords-cpp.md)