---
title: singolo | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: Single
dev_langs: C++
helpviewer_keywords: single OpenMP directive
ms.assetid: 85cf94fb-cb9c-4d82-8609-adffa9f552e1
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 898a175963698d1f44f90f08c21015a765892017
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="single"></a>singola
Consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente il thread principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma omp single [clauses]   
{  
   code_block   
}  
```  
  
#### <a name="parameters"></a>Parametri  
 `clause` (facoltativo)  
 Zero o più clausole. Vedere la sezione Osservazioni per un elenco di clausole supportate da **singolo**.  
  
## <a name="remarks"></a>Note  
 Il **singolo** direttiva supporta le clausole OpenMP seguenti:  
  
-   [copyprivate](../../../parallel/openmp/reference/copyprivate.md)  
  
-   [firstprivate](../../../parallel/openmp/reference/firstprivate.md)  
  
-   [nowait](../../../parallel/openmp/reference/nowait.md)  
  
-   [private](../../../parallel/openmp/reference/private-openmp.md)  
  
 Il [master](../../../parallel/openmp/reference/master.md) direttiva consente di specificare che una sezione di codice deve essere eseguita solo sul thread master.  
  
 Per ulteriori informazioni, vedere [singolo 2.4.3 costrutto](../../../parallel/openmp/2-4-3-single-construct.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_single.cpp  
// compile with: /openmp   
#include <stdio.h>  
#include <omp.h>  
  
int main() {  
   #pragma omp parallel num_threads(2)  
   {  
      #pragma omp single  
      // Only a single thread can read the input.  
      printf_s("read input\n");  
  
      // Multiple threads in the team compute the results.  
      printf_s("compute results\n");  
  
      #pragma omp single  
      // Only a single thread can write the output.  
      printf_s("write output\n");  
    }  
}  
```  
  
```Output  
read input  
compute results  
compute results  
write output  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive](../../../parallel/openmp/reference/openmp-directives.md)