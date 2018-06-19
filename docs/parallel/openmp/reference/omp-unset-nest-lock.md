---
title: omp_unset_nest_lock | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_unset_nest_lock
dev_langs:
- C++
helpviewer_keywords:
- omp_unset_nest_lock OpenMP function
ms.assetid: 1721d061-3f9c-45d7-b479-a665cd0a121d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8434fb3e4cb07b11f2142f78ee4b243e6945dfd9
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33691664"
---
# <a name="ompunsetnestlock"></a>omp_unset_nest_lock
Rilascia un blocco annidabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_unset_nest_lock(   
   omp_nest_lock_t *lock   
);  
```  
  
## <a name="remarks"></a>Note  
 dove  
  
 `lock`  
 Una variabile di tipo [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) che è stato inizializzato con [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md), proprietà del thread e in esecuzione nella funzione.  
  
## <a name="remarks"></a>Note  
 Per ulteriori informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Vedere [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) per un esempio di utilizzo `omp_unset_nest_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)