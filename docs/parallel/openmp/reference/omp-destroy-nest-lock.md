---
title: omp_destroy_nest_lock | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: omp_destroy_nest_lock
dev_langs: C++
helpviewer_keywords: omp_destroy_nest_lock OpenMP function
ms.assetid: 0ab1352b-668f-43dd-b441-31ec4cc53e68
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 43be9cff85d9e26bbe6399574a568fa565708858
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="ompdestroynestlock"></a>omp_destroy_nest_lock
Annulla l'inizializzazione di un blocco annidabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_destroy_nest_lock(  
   omp_nest_lock_t *lock  
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `lock`  
 Una variabile di tipo [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) che è stato inizializzato con [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md).  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Vedere [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) per un esempio di utilizzo `omp_destroy_nest_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)