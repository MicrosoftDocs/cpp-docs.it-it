---
title: le sezioni (OpenMP) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- section
- SECTIONS
dev_langs:
- C++
helpviewer_keywords:
- sections OpenMP directive
ms.assetid: 4cd1d776-e198-470e-930a-01fb0ab0a0bd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d3b369cfbd68edd32b644c9a4ec0520329507b6e
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45708032"
---
# <a name="sections-openmp"></a>sections (OpenMP)
Identifica le sezioni di codice da dividere tra tutti i thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp [parallel] sections [clauses]  
{  
   #pragma omp section  
   {  
      code_block   
   }   
}  
```  
  
## <a name="arguments"></a>Argomenti

*Clausola*<br/>
(Facoltativo) Zero o più clausole. Vedere la sezione Osservazioni per un elenco delle clausole supportate da **sezioni**.

## <a name="remarks"></a>Note  
 Il **sezioni** direttiva può contenere zero o più **sezione** direttive.  
  
 Il **sezioni** direttiva supporta le clausole OpenMP seguente:  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [lastprivate](../../../parallel/openmp/reference/lastprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
 Se **parallele** viene anche specificato, `clause` può essere qualsiasi clausola accettato dal **parallel** o **sezioni** direttive, tranne `nowait`.  
  
 Per altre informazioni, vedere [2.4.2 costrutto sections](../../../parallel/openmp/2-4-2-sections-construct.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_sections.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
    #pragma omp parallel sections num_threads(4)  
    {  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
        #pragma omp section  
        printf_s("Hello from thread %d\n", omp_get_thread_num());  
    }  
}  
```  
  
```Output  
Hello from thread 0  
Hello from thread 0  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)