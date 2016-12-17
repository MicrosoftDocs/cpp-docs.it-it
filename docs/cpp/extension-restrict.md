---
title: "__restrict | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__restrict"
  - "__restrict_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__restrict (parola chiave) [C++]"
ms.assetid: 2d151b4d-f930-49df-bd16-d8757ec7fa83
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# __restrict
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come il modificatore **\_\_declspec \( [restrict](../cpp/restrict.md) \)**, la parola chiave `__restrict` indica che per un simbolo non viene usato un alias nell'ambito corrente.  Tra la parola chiave `__restrict` e il modificatore `__declspec ( restrict )` esistono le differenze seguenti:  
  
-   La parola chiave `__restrict` è valida solo per variabili, mentre `__declspec ( restrict )` è valido solo per le dichiarazioni e le definizioni di funzione.  
  
-   `__restrict` è analogo a `restrict` nella specifica C99, ma è possibile sare `__restrict` in programmi C\+\+ o C.  
  
-   Quando si usa `__restrict`, il compilatore non trasferirà la proprietà noalias di una variabile.  In altre parole, se si assegna una variabile `__restrict` a una variabile non\-`__restrict` variable, il compilatore non consentirà comunque l'uso di un alias per la variabile non\-\_\_restrict.  Questo comportamento è diverso da quello della parola chiave `restrict` della specifica C99.  
  
 In generale, se si è interessati al comportamento di un'intera funzione, è preferibile usare `__declspec ( restrict )` anziché la parola chiave.  
  
 In Visual Studio 2015 e versioni successive è possibile usare `__restrict` nei riferimenti C\+\+.  
  
> [!NOTE]
>  Se usato in una variabile cui è associata la parola chiave [volatile](../cpp/volatile-cpp.md), `volatile` avrà la precedenza.  
  
## Esempio  
  
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
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)