---
title: Nelle sezioni (/openmp) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- section
- SECTIONS
dev_langs: C++
helpviewer_keywords: sections OpenMP directive
ms.assetid: 4cd1d776-e198-470e-930a-01fb0ab0a0bd
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 458d62bf17ce7f8778e40a4e90592aa59ba09e4c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="sections-openmp"></a>sections (OpenMP)
Identifica le sezioni di codice deve essere diviso tra tutti i thread.  
  
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
  
## <a name="remarks"></a>Note  
 dove  
  
 `clause` (facoltativo)  
 Zero o più clausole. Vedere la sezione Osservazioni per un elenco di clausole supportate da **sezioni**.  
  
## <a name="remarks"></a>Note  
 Il **sezioni** direttiva può contenere zero o più **sezione** direttive.  
  
 Il **sezioni** direttiva supporta le clausole OpenMP seguenti:  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [lastprivate](../../../parallel/openmp/reference/lastprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
-   [reduction](../../../parallel/openmp/reference/reduction.md)  
  
 Se **parallela** viene anche specificato `clause` può essere qualsiasi clausola accettato dal **parallela** o **sezioni** direttive, ad eccezione di `nowait`.  
  
 Per ulteriori informazioni, vedere [2.4.2 costrutto sections](../../../parallel/openmp/2-4-2-sections-construct.md).  
  
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