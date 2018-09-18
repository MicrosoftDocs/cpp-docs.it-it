---
title: omp_unset_lock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_unset_lock
dev_langs:
- C++
helpviewer_keywords:
- omp_unset_lock OpenMP function
ms.assetid: 68fcb728-040b-4bad-979e-aaecb9097a4e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6b0b7b796ce5db6cfe23eea3608db171ff38e263
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46059063"
---
# <a name="ompunsetlock"></a>omp_unset_lock
Rilascia un blocco.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_unset_lock(  
   omp_lock_t *lock  
);  
```  
  
### <a name="parameters"></a>Parametri
  
*lock*<br/>
Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) che è stata inizializzata [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md), proprietà del thread e in esecuzione nella funzione.  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio d'uso `omp_unset_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)