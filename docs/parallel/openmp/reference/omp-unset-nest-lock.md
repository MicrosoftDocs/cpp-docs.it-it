---
title: omp_unset_nest_lock | Microsoft Docs
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
ms.openlocfilehash: ddc3605bfef5c96a8882872aafbe1a15dda3e4cf
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46115970"
---
# <a name="ompunsetnestlock"></a>omp_unset_nest_lock
Rilascia un blocco annidabile.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void omp_unset_nest_lock(   
   omp_nest_lock_t *lock   
);  
```  
  
### <a name="parameters"></a>Parametri
  
*lock*<br/>
Una variabile di tipo [omp_nest_lock_t](../../../parallel/openmp/reference/omp-nest-lock-t.md) che è stata inizializzata [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md), proprietà del thread e in esecuzione nella funzione.  
  
## <a name="remarks"></a>Note  
 Per altre informazioni, vedere [3.2.4 funzioni omp_unset_lock e omp_unset_nest_lock funzioni](../../../parallel/openmp/3-2-4-omp-unset-lock-and-omp-unset-nest-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Visualizzare [omp_init_nest_lock](../../../parallel/openmp/reference/omp-init-nest-lock.md) per un esempio d'uso `omp_unset_nest_lock`.  
  
## <a name="see-also"></a>Vedere anche  
 [Funzioni](../../../parallel/openmp/reference/openmp-functions.md)