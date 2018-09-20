---
title: omp_get_nested | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- omp_get_nested
dev_langs:
- C++
helpviewer_keywords:
- omp_get_nested OpenMP function
ms.assetid: e9784847-516e-40d3-89f7-b8b6898d8667
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 20a7378ba7e7f6dcec55cfe265dd0873bdc1fd38
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46371953"
---
# <a name="ompgetnested"></a>omp_get_nested

Restituisce un valore che indica se è abilitato il parallelismo annidato.

## <a name="syntax"></a>Sintassi

```
int omp_get_nested( );
```

## <a name="return-value"></a>Valore restituito

Se è abilitato il parallelismo diverso da zero e annidato.

## <a name="remarks"></a>Note

Parallelismo annidato è specificato con [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) e [OMP_NESTED](../../../parallel/openmp/reference/omp-nested.md).

Per altre informazioni, vedere [3.1.10 funzione omp_get_nested](../../../parallel/openmp/3-1-10-omp-get-nested-function.md).

## <a name="example"></a>Esempio

Visualizzare [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) per un esempio d'uso `omp_get_nested`.

## <a name="see-also"></a>Vedere anche

[Funzioni](../../../parallel/openmp/reference/openmp-functions.md)