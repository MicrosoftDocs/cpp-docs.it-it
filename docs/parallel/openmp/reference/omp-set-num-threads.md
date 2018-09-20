---
title: omp_set_num_threads | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_set_num_threads
dev_langs:
- C++
helpviewer_keywords:
- omp_set_num_threads OpenMP function
ms.assetid: dae0bf3f-cd7a-4413-89de-6149ac1f4fa7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5ae9dbe52dba47208844b73175f20edcc591a3ae
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46444944"
---
# <a name="ompsetnumthreads"></a>omp_set_num_threads

Imposta il numero di thread in aree parallele successivi, a meno che non viene sottoposto a override da una [num_threads](../../../parallel/openmp/reference/num-threads.md) clausola.

## <a name="syntax"></a>Sintassi

```
void omp_set_num_threads(
   int num_threads
);
```

### <a name="parameters"></a>Parametri

*num_threads*<br/>
Il numero di thread in tale area.

## <a name="remarks"></a>Note

Per altre informazioni, vedere [3.1.1 funzione omp_set_num_threads](../../../parallel/openmp/3-1-1-omp-set-num-threads-function.md).

## <a name="example"></a>Esempio

Visualizzare [omp_get_num_threads](../../../parallel/openmp/reference/omp-get-num-threads.md) per un esempio d'uso `omp_set_num_threads`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)