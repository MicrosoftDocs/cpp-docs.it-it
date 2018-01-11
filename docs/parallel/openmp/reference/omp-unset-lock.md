---
title: funzioni omp_unset_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_unset_lock
dev_langs: C++
helpviewer_keywords: omp_unset_lock OpenMP function
ms.assetid: 68fcb728-040b-4bad-979e-aaecb9097a4e
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 5dae4888176807ba2d3a3356d71c55eb82f2a55c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ompunsetlock"></a>omp_unset_lock
Rilascia un blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_unset_lock(  
   omp_lock_t *lock  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `lock`  
 Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) che è stato inizializzato con [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md), proprietà del thread e in esecuzione nella funzione.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Vedere [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo `omp_unset_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)