---
title: funzioni omp_destroy_lock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_destroy_lock
dev_langs:
- C++
helpviewer_keywords:
- omp_destroy_lock OpenMP function
ms.assetid: b73ab036-b76f-4e42-82ff-c89db2edf7c0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5c24f09bbad550633c68c403c89362a293265111
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019926"
---
# <a name="ompdestroylock"></a>omp_destroy_lock
Non Inizializza un blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_destroy_lock(  
   omp_lock_t *lock  
);  
```  
  
### <a name="parameters"></a>Parametri
  
*lock*<br/>
Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) che è stata inizializzata [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere [3.2.2 funzioni omp_destroy_lock e omp_destroy_nest_lock funzioni](../../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio d'uso `omp_destroy_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)