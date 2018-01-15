---
title: num_threads | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: num_threads
dev_langs: C++
helpviewer_keywords: num_threads OpenMP clause
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7289a843c33fbc9ba23d6006997dea8e09ba7c79
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="numthreads"></a>num_threads
Imposta il numero di thread in un gruppo di thread.  
  
## <a name="syntax"></a>Sintassi  
  
```  
num_threads(num)  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `num`  
 Il numero di thread  
  
## <a name="remarks"></a>Note  
 Il `num_threads` clausola ha la stessa funzionalità come il [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) (funzione).  
  
 `num_threads`si applica alle direttive seguenti:  
  
-   [parallel](../../../parallel/openmp/reference/parallel.md)  
  
-   [for](../../../parallel/openmp/reference/for-openmp.md)  
  
-   [Nelle sezioni](../../../parallel/openmp/reference/sections-openmp.md)  
  
 Per ulteriori informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).  
  
## <a name="example"></a>Esempio  
 Vedere [parallela](../../../parallel/openmp/reference/parallel.md) per un esempio di utilizzo `num_threads` clausola.  
  
## <a name="see-also"></a>Vedere anche  
 [Clausole](../../../parallel/openmp/reference/openmp-clauses.md)