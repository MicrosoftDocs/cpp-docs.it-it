---
title: omp_get_dynamic | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_get_dynamic
dev_langs: C++
helpviewer_keywords: omp_get_dynamic OpenMP function
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 2715b7b27871f6b6ee0449bf96b81bef727dd45b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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