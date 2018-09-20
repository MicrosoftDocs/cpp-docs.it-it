---
title: OMP_SCHEDULE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- OMP_SCHEDULE
dev_langs:
- C++
helpviewer_keywords:
- OMP_SCHEDULE OpenMP environment variable
ms.assetid: 2295a801-e584-4d2f-826f-7ca4c88846a6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 507067be30db019536ef222a62335244eabfaada
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46413861"
---
# <a name="ompschedule"></a>OMP_SCHEDULE

Modifica il comportamento del [pianificazione](../../../parallel/openmp/reference/schedule.md) clausola quando `schedule(runtime)` viene specificato un `for` o `parallel for` direttiva.

## <a name="syntax"></a>Sintassi

```
set OMP_SCHEDULE[=type[,size]]
```

## <a name="arguments"></a>Argomenti

*size*<br/>
(Facoltativo) Specifica le dimensioni di iterazioni. `size` Deve essere un numero intero positivo. Il valore predefinito è 1, tranne quando `type` è statico. Non è valida quando `type` è `runtime`.

*type*<br/>
Il tipo di pianificazione:

- `dynamic`

- `guided`

- `runtime`

- `static`

## <a name="remarks"></a>Note

Il valore predefinito nell'implementazione di Visual C++ dello standard OpenMP è `OMP_SCHEDULE=static,0`.

Per altre informazioni, vedere [OMP_SCHEDULE 4.1](../../../parallel/openmp/4-1-omp-schedule.md).

## <a name="example"></a>Esempio

Il comando seguente imposta la **OMP_SCHEDULE** variabile di ambiente:

```
set OMP_SCHEDULE="guided,2"
```

Il comando seguente consente di visualizzare l'impostazione corrente del **OMP_SCHEDULE** variabile di ambiente:

```
set OMP_SCHEDULE
```

## <a name="see-also"></a>Vedere anche

[Variabili di ambiente](../../../parallel/openmp/reference/openmp-environment-variables.md)