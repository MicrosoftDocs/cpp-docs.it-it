---
title: omp_get_dynamic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_get_dynamic
dev_langs:
- C++
helpviewer_keywords:
- omp_get_dynamic OpenMP function
ms.assetid: efa843c5-7266-4a75-8db3-22992663d9db
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c2b5a285ef019cd1752b60065f7040d9a937ce38
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389889"
---
# <a name="ompgetdynamic"></a>omp_get_dynamic

Restituisce un valore che indica se il numero di thread disponibili nell'area parallela successive possa essere adattato per la fase di esecuzione.

## <a name="syntax"></a>Sintassi

```
int omp_get_dynamic();
```

## <a name="return-value"></a>Valore restituito

Se diverso da zero, la regolazione dinamica del thread è abilitata.

## <a name="remarks"></a>Note

Regolazione dinamica del thread viene specificato con [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) e [OMP_DYNAMIC](../../../parallel/openmp/reference/omp-dynamic.md).

Per altre informazioni, vedere [3.1.7 funzione omp_set_dynamic](../../../parallel/openmp/3-1-7-omp-set-dynamic-function.md).

## <a name="example"></a>Esempio

Visualizzare [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) per un esempio d'uso `omp_get_dynamic`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)