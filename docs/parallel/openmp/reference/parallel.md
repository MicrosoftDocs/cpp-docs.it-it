---
title: Parallel | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- parallel
dev_langs:
- C++
helpviewer_keywords:
- parallel OpenMP directive
ms.assetid: b8e90073-e85b-4d39-8ed8-0364441794fb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1c8b1466eae343b6c644b6ecfbd919c3241259bf
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705965"
---
# <a name="parallel"></a>parallel
Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp parallel [clauses]  
{  
   code_block  
}  
```  
  
## <a name="arguments"></a>Argomenti

*Clausola*<br/>
(Facoltativo) Zero o più clausole.  Vedere la sezione Osservazioni per un elenco delle clausole supportate da **parallele**.  
  
## <a name="remarks"></a>Note  
 Il **parallele** direttiva supporta le clausole OpenMP seguente:  
  
-   [copyin](../../../parallel/openmp/reference/copyin.md)  
  
-   [default](../../../parallel/openmp/reference/default-openmp.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [if](../../../parallel/openmp/reference/if-openmp.md)  
  
-   [num_threads](../../../parallel/openmp/reference/num-threads.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
-   [shared](../../../parallel/openmp/reference/shared-openmp.md)  
  
 **Parallel** sono utilizzabili anche con il [sezioni](../../../parallel/openmp/reference/sections-openmp.md) e [per](../../../parallel/openmp/reference/for-openmp.md) direttive.  
  
 Per altre informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## <a name="example"></a>Esempio  
 L'esempio seguente viene illustrato come impostare il numero di thread e definire un'area parallela. Per impostazione predefinita, il numero di thread è uguale al numero di processori logici nel computer. Ad esempio, se si dispone di un computer con un unico processore fisico con hyperthreading abilitato, avrà due processori logici e, pertanto, due thread.  
  
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