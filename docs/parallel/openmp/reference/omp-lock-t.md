---
title: omp_lock_t | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_lock_t
dev_langs:
- C++
helpviewer_keywords:
- omp_lock_t OpenMP data type
ms.assetid: 51b80629-4ffc-4b8a-95c7-1af048f1f286
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5f07ff7c9a0590bee90783c2f06dcb6ffdbcb42e
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="omplockt"></a>omp_lock_t
Tipo che contiene lo stato di un blocco, se il blocco è disponibile o se un thread proprietario di un blocco.  
  
 Le seguenti funzioni utilizzano **omp_lock_t**:  
  
-   [omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md)  
  
-   [omp_destroy_lock](../../../parallel/openmp/reference/omp-destroy-lock.md)  
  
-   [omp_set_lock](../../../parallel/openmp/reference/omp-set-lock.md)  
  
-   [omp_unset_lock](../../../parallel/openmp/reference/omp-unset-lock.md)  
  
-   [omp_test_lock](../../../parallel/openmp/reference/omp-test-lock.md)  
  
 Per ulteriori informazioni, vedere [3.2 funzioni Lock](../../../parallel/openmp/3-2-lock-functions.md).  
  
## <a name="example"></a>Esempio  
 Vedere [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio di utilizzo **omp_lock_t**.  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di dati](../../../parallel/openmp/reference/openmp-data-types.md)