---
title: omp_set_dynamic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_set_dynamic
dev_langs:
- C++
helpviewer_keywords:
- omp_set_dynamic OpenMP function
ms.assetid: 3845faf2-a0ca-45a5-ae70-2a7a6164f1e8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c3e8ac574ce304238affbab41acc415e1d8de697
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46026907"
---
# <a name="ompsetdynamic"></a>omp_set_dynamic
Indica che il numero di thread disponibili nell'area parallela successive possa essere adattato per la fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_set_dynamic(  
   int val  
);  
```  
  
### <a name="parameters"></a>Parametri
  
*Val*<br/>
Un valore che indica se il numero di thread disponibili nell'area parallela successive possa essere adattato dal runtime.  Se diverso da zero, che il runtime può modificare il numero di thread, se è zero, il runtime non regolerà dinamicamente il numero di thread.  
  
## <a name="remarks"></a>Note  
 Il numero di thread non supererà mai il valore impostato da [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) o tramite [OMP_NUM_THREADS](../../../parallel/openmp/reference/omp-num-threads.md).  
  
 Uso [omp_get_dynamic](../../../parallel/openmp/reference/omp-get-dynamic.md) per visualizzare l'impostazione corrente di `omp_set_dynamic`.  
  
 L'impostazione `omp_set_dynamic` sostituirà l'impostazione delle [OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md) variabile di ambiente.  
  
 Per altre informazioni, vedere [3.1.7 funzione omp_set_dynamic](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
## <a name="example"></a>Esempio  
  
```  
// omp_set_dynamic.cpp  
// compile with: /openmp  
#include <stdio.h>  
#include <omp.h>  
  
int main()   
{  
    omp_set_dynamic(9);  
    omp_set_num_threads(4);  
    printf_s("%d\n", omp_get_dynamic( ));  
    #pragma omp parallel  
        #pragma omp master  
        {  
            printf_s("%d\n", omp_get_dynamic( ));  
        }  
}  
```  
  
```Output  
1  
1  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)