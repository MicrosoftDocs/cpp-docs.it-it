---
title: Restrict | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __restrict_cpp
dev_langs:
- C++
helpviewer_keywords:
- __restrict keyword [C++]
ms.assetid: 2d151b4d-f930-49df-bd16-d8757ec7fa83
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: e402fc9a32b92960f251796365199a608d6d1137
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943977"
---
# <a name="restrict"></a>__restrict
Ad esempio il **declspec ( [limitare](../cpp/restrict.md) )** modificatore, la **Restrict** parola chiave indica che un simbolo non è associato un alias nell'ambito corrente. Il **Restrict** parola chiave è diverso dal `__declspec ( restrict )` modificatore nei modi seguenti:  
  
-   Il **Restrict** parola chiave è valida solo per variabili, e `__declspec ( restrict )` è valido solo nelle dichiarazioni di funzione e definizioni.  
  
-   **Restrict** è simile a **limitare** nella specifica C99, ma **Restrict** è utilizzabile in programmi C++ o C.  
  
-   Quando **Restrict** viene utilizzato, il compilatore non trasferirà la proprietà noalias di una variabile. Vale a dire, se si assegna un **Restrict** variabile non -**Restrict** variabile, il compilatore consentirà comunque il non- Restrict variabile con un alias. Questo comportamento è diverso dal comportamento dei **limitare** parola chiave della specifica C99.  
  
 In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.  
  
 In Visual Studio 2015 e versioni successive **Restrict** può essere utilizzato nei riferimenti C++.  
  
> [!NOTE]
>  Quando viene usato in una variabile che ha il [volatile](../cpp/volatile-cpp.md) parola chiave **volatile** avrà la precedenza.  
  
## <a name="example"></a>Esempio  
  
```cpp 
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