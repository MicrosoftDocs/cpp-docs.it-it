---
title: OMP_DYNAMIC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_DYNAMIC
dev_langs:
- C++
helpviewer_keywords:
- OMP_DYNAMIC OpenMP environment variable
ms.assetid: e306049d-b644-4b73-8b63-46c835bff98b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: b02a2a4d660057ab83da39add7fd32bcff3e6d90
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46392138"
---
# <a name="ompdynamic"></a>OMP_DYNAMIC

Specifica se il tempo di esecuzione di OpenMP può regolare il numero di thread in un'area parallela.

## <a name="syntax"></a>Sintassi

```
set OMP_DYNAMIC[=TRUE | =FALSE]
```

## <a name="remarks"></a>Note

Il `OMP_DYNAMIC` variabile di ambiente può eseguire l'override di [omp_set_dynamic](../../../parallel/openmp/reference/omp-set-dynamic.md) (funzione).

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per altre informazioni, vedere [OMP_DYNAMIC 4.3](../../../parallel/openmp/4-3-omp-dynamic.md).

## <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_DYNAMIC` variabile di ambiente su TRUE:

```
set OMP_DYNAMIC=TRUE
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_DYNAMIC` variabile di ambiente:

```
set OMP_DYNAMIC
```

## <a name="see-also"></a>Vedere anche

[Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)