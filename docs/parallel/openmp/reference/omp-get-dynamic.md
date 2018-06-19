---
title: omp_get_dynamic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_get_dynamic
dev_langs:
- C++
helpviewer_keywords:
- omp_get_dynamic OpenMP function
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d97cae8091f88c283412b36ef757b03c72f7580d
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691274"
---
# <a name="ompgetdynamic"></a>omp_get_dynamic
Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successivi possa essere adattato per la fase di esecuzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
int omp_get_dynamic();  
```  
  
## <a name="return-value"></a>Valore restituito  
 Se diverso da zero, viene abilitata la regolazione dinamica dei thread.  
  
## <a name="remarks"></a>Note  
 Viene specificata la regolazione dinamica dei thread con [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) e [OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md).  
  
 Per ulteriori informazioni, vedere [3.1.7 funzione omp_set_dynamic](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).  
  
## <a name="example"></a>Esempio  
 Vedere [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) per un esempio di utilizzo `omp_get_dynamic`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)