---
title: A.22 utilizzando la clausola default (None) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a3fa4e62-1e92-4896-ae3f-be268067d917
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2a820bed14e5c529a1ccd6956aa7db98ca6469b5
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33693887"
---
# <a name="a22---using-the-defaultnone-clause"></a>A.22   Utilizzo della clausola default(none)
Nell'esempio seguente consente di distinguere le variabili che sono interessate i `default(none)` clausola da quelli che non sono:  
  
```  
// openmp_using_clausedefault.c  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int x, y, z[1000];  
#pragma omp threadprivate(x)  
  
void fun(int a) {  
   const int c = 1;  
   int i = 0;  
  
   #pragma omp parallel default(none) private(a) shared(z)  
   {  
      int j = omp_get_num_thread();  
             //O.K.  - j is declared within parallel region  
      a = z[j];       // O.K.  - a is listed in private clause  
                      //      - z is listed in shared clause  
      x = c;          // O.K.  - x is threadprivate  
                      //      - c has const-qualified type  
      z[i] = y;       // C3052 error - cannot reference i or y here  
  
      #pragma omp for firstprivate(y)  
         for (i=0; i<10 ; i++) {  
            z[i] = y;  // O.K. - i is the loop control variable  
                       // - y is listed in firstprivate clause  
          }  
       z[i] = y;   // Error - cannot reference i or y here  
   }  
}  
```  
  
 Per ulteriori informazioni sul `default` clausola, vedere [sezione 2.7.2.5](../../parallel/openmp/2-7-2-5-default.md) nella pagina 28.