---
title: Se (/openmp) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: if
dev_langs: C++
helpviewer_keywords: if OpenMP clause
ms.assetid: db5940b6-2414-4bf8-934d-3edd8393c0f8
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 381347686d8e63681b5d179e191546b8a5bf2f8b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="if-openmp"></a>if (OpenMP)
Specifica se un ciclo deve essere eseguito in parallelo o seriale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
if(expression)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `expression`  
 Un'espressione integrale che, se restituisce true (diverso da zero), fa sì che il codice in tale area per eseguire in parallelo. Se l'espressione restituisce false (zero), l'area parallela viene eseguito in serie (da un singolo thread).  
  
## <a name="remarks"></a>Note  
 `if`si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_if.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
void test(int val)  
{  
    #pragma omp parallel if (val)  
    if (omp_in_parallel())  
    {  
        #pragma omp single  
        printf_s("val = %d, parallelized with %d threads\n",  
                 val, omp_get_num_threads());  
    }  
    else  
    {  
        printf_s("val = %d, serialized\n", val);  
    }  
}  
  
int main( )  
{  
    omp_set_num_threads(2);  
    test(0);  
    test(2);  
}  
```  
  
```Output  
val = 0, serialized  
val = 2, parallelized with 2 threads  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)