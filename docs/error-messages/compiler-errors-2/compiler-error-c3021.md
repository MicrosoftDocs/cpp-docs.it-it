---
title: Errore del compilatore C3021 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3021
dev_langs:
- C++
helpviewer_keywords:
- C3021
ms.assetid: 0cef6d97-e267-438a-ac8b-0daf5bbbc2cf
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 82a69681910d92104d0fcf6523fe5917bdad691b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33244921"
---
# <a name="compiler-error-c3021"></a>Errore del compilatore C3021
'arg': argomento vuoto nella direttiva 'directive' OpenMP  
  
 Un argomento è obbligatorio per una direttiva OpenMP.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C3021:  
  
```  
// C3021.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include "omp.h"  
  
int g = 0;  
  
int main()  
{  
    int x, y, i;  
  
    #pragma omp parallel for schedule(static,)   // C3021  
    for (i = 0; i < 10; ++i) ;  
  
    #pragma omp parallel for schedule()   // C3021  
    for (i = 0; i < 10; ++i)  
        printf_s("Hello world, thread %d, iteration %d\n",  
                 omp_get_thread_num(), i);  
  
    #pragma omp parallel reduction()   // C3021  
      ;  
  
    #pragma omp parallel reduction(+ :)   // C3021  
      ;  
  
    //   
    // The following shows correct syntax examples.  
    //  
    #pragma omp parallel reduction(+ : x, y)  
      ;  
  
    #pragma omp parallel reduction(* : x, y)  
      ;  
  
    #pragma omp parallel reduction(- : x, y)  
      ;  
  
    #pragma omp parallel reduction(& : x, y)  
      ;  
  
    #pragma omp parallel reduction(^ : x, y)  
      ;  
  
    #pragma omp parallel reduction(| : x, y)  
      ;  
  
    #pragma omp parallel reduction(&& : x, y)  
      ;  
  
    #pragma omp parallel reduction(|| : x, y)  
      ;  
}  
```