---
title: OMP_NESTED | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_NESTED
dev_langs:
- C++
helpviewer_keywords:
- OMP_NESTED OpenMP environment variable
ms.assetid: c43f5287-a548-40d0-bd54-0c6b2b9f9a53
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c90878ce96cf1639c983be899ba13eccf1f040e8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46376538"
---
# <a name="ompnested"></a>OMP_NESTED

Specifica se è abilitato il parallelismo annidato, a meno che non è abilitato o disabilitato con parallelismo annidato `omp_set_nested`.

## <a name="syntax"></a>Sintassi

```
set OMP_NESTED[=TRUE | =FALSE]
```

## <a name="remarks"></a>Note

Il `OMP_NESTED` variabile di ambiente può eseguire l'override di [omp_set_nested](../../../parallel/openmp/reference/omp-set-nested.md) (funzione).

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_DYNAMIC=FALSE`.

Per altre informazioni, vedere [4.4 OMP_NESTED](../../../parallel/openmp/4-4-omp-nested.md).

## <a name="example"></a>Esempio

Il comando seguente imposta la `OMP_NESTED` variabile di ambiente su TRUE:

```
set OMP_NESTED=TRUE
```

Il comando seguente consente di visualizzare l'impostazione corrente del `OMP_NESTED` variabile di ambiente:

```
set OMP_NESTED
```

## <a name="see-also"></a>Vedere anche

[Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)