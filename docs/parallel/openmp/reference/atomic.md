---
title: Atomic | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
f1_keywords:
- atomic
dev_langs:
- C++
helpviewer_keywords:
- atomic OpenMP directive
ms.assetid: 275e0338-cf2f-4525-97b5-696250000df7
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c845f6147280e7248db7899a182eed8d71fc34f5
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46442695"
---
# <a name="atomic"></a>atomico

Specifica che una posizione di memoria che verrà aggiornata in modo atomico.

## <a name="syntax"></a>Sintassi

```
#pragma omp atomic
   expression
```

#### <a name="parameters"></a>Parametri

*Espressione*<br/>
L'istruzione che contiene il lvalue la cui posizione di memoria a cui si desidera proteggersi da più operazioni di scrittura. Per altre informazioni sulle forme espressione legali, vedere la specifica di OpenMP.

## <a name="remarks"></a>Note

Il `atomic` direttiva non supporta nessuna clausole OpenMP.

Per altre informazioni, vedere [atomico 2.6.4 costrutto](../../../parallel/openmp/2-6-4-atomic-construct.md).

## <a name="example"></a>Esempio

```
// omp_atomic.cpp
// compile with: /openmp
#include <stdio.h>
#include <omp.h>

#define MAX 10

int main() {
   int count = 0;
   #pragma omp parallel num_threads(MAX)
   {
      #pragma omp atomic
      count++;
   }
   printf_s("Number of threads: %d\n", count);
}
```

```Output
Number of threads: 10
```

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)