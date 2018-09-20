---
title: num_threads | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- num_threads
dev_langs:
- C++
helpviewer_keywords:
- num_threads OpenMP clause
ms.assetid: 09a56fc8-25c7-43e4-bbb5-71cb955d0b93
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 27e39d7db36c121add3598387de52ecb878059b5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46405268"
---
# <a name="numthreads"></a>num_threads

Imposta il numero di thread in un gruppo di thread.

## <a name="syntax"></a>Sintassi

```
num_threads(num)
```

### <a name="parameters"></a>Parametri

*num*<br/>
Il numero di thread

## <a name="remarks"></a>Note

Il `num_threads` clausola ha la stessa funzionalità come i [omp_set_num_threads](../../../parallel/openmp/reference/omp-set-num-threads.md) (funzione).

`num_threads` si applica alle direttive seguenti:

- [parallel](../../../parallel/openmp/reference/parallel.md)

- [for](../../../parallel/openmp/reference/for-openmp.md)

- [Sezioni](../../../parallel/openmp/reference/sections-openmp.md)

Per altre informazioni, vedere [2.3 costrutto parallel](../../../parallel/openmp/2-3-parallel-construct.md).

## <a name="example"></a>Esempio

Visualizzare [parallele](../../../parallel/openmp/reference/parallel.md) per un esempio d'uso `num_threads` clausola.

## <a name="see-also"></a>Vedere anche

[Clausole](../../../parallel/openmp/reference/openmp-clauses.md)