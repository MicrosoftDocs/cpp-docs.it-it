---
title: parallelo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: parallel
dev_langs: C++
helpviewer_keywords: parallel OpenMP directive
ms.assetid: b8e90073-e85b-4d39-8ed8-0364441794fb
caps.latest.revision: "12"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9f6b10c681eb12d38d33c50fe9e652ffd095dd4c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="parallel"></a>parallel
Definisce un'area parallela, ovvero il codice eseguito da più thread in parallelo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp parallel [clauses]  
{  
   code_block  
}  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `clause` (facoltativo)  
 Zero o più clausole.  Vedere la sezione Osservazioni per un elenco di clausole supportate da **parallela**.  
  
## <a name="remarks"></a>Note  
 Il **parallela** direttiva supporta le clausole OpenMP seguenti:  
  
-   [copyin](../../../parallel/openmp/reference/copyin.md)  
  
-   [default](../../../parallel/openmp/reference/default-openmp.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [if](../../../parallel/openmp/reference/if-openmp.md)  
  
-   [num_threads](../../../parallel/openmp/reference/num-threads.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
-   [condiviso](../../../parallel/openmp/reference/shared-openmp.md)  
  
 **parallelo** può anche essere utilizzato con il [sezioni](../../../parallel/openmp/reference/sections-openmp.md) e [per](../../../parallel/openmp/reference/for-openmp.md) direttive.  
  
 Per ulteriori informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrato come impostare il numero di thread e definire un'area parallela. Per impostazione predefinita, il numero di thread è uguale al numero di processori logici nel computer. Ad esempio, se si dispone di un computer con un processore fisico che ha attivato l'hyperthreading, avrà due processori logici e, pertanto, due thread.  
  
```  
// omp_parallel.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(4)  
   {  
      int i = omp_get_thread_num();  
      printf_s("Hello from thread %d\n", i);  
   }  
}  
```  
  
```Output  
Hello from thread 0  
Hello from thread 1  
Hello from thread 2  
Hello from thread 3  
```  
  
## <a name="comment"></a>Commento  
 Si noti che l'ordine dell'output può variare in computer diversi.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)