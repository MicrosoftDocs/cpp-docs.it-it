---
title: funzioni omp_destroy_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_destroy_lock
dev_langs: C++
helpviewer_keywords: omp_destroy_lock OpenMP function
ms.assetid: b73ab036-b76f-4e42-82ff-c89db2edf7c0
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: e2dc67a09daaecb4ac30bad404eba7de493501f3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ompdestroylock"></a>omp_destroy_lock
Annulla l'inizializzazione di un blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_destroy_lock(  
   omp_lock_t *lock  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `lock`  
 Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) che è stato inizializzato con [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Vedere [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo `omp_destroy_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)