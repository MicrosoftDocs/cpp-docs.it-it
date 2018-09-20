---
title: omp_set_lock | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_set_lock
dev_langs:
- C++
helpviewer_keywords:
- omp_set_lock OpenMP function
ms.assetid: ded839cb-ca19-403f-8622-eb52ce512d31
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 59a7bcc24b67e916271748740dd88568979d5a70
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46401602"
---
# <a name="ompsetlock"></a>omp_set_lock

Blocchi di esecuzione del thread fino a quando non è disponibile un blocco.

## <a name="syntax"></a>Sintassi

```
void omp_set_lock(
   omp_lock_t *lock
);
```

### <a name="parameters"></a>Parametri

*lock*<br/>
Una variabile di tipo [omp_lock_t](../../../parallel/openmp/reference/omp-lock-t.md) che è stata inizializzata [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md).

## <a name="remarks"></a>Note

Per altre informazioni, vedere [3.2.3 funzioni omp_set_lock e omp_set_nest_lock](../../../parallel/openmp/3-2-3-omp-set-lock-and-omp-set-nest-lock-functions.md).

## <a name="examples"></a>Esempi

Visualizzare [funzioni omp_init_lock](../../../parallel/openmp/reference/omp-init-lock.md) per un esempio d'uso `omp_set_lock`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)