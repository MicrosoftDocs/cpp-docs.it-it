---
title: 2.5.2 costrutto parallel sections | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 94220e27-14f8-465c-bd8d-eb960b4b5dee
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 073d0561fe4bfbb96ed88681a077da6fc985c963
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402330"
---
# <a name="252-parallel-sections-construct"></a>2.5.2 Costrutto parallel sections

Il **sezioni in parallelo** direttiva fornisce un modulo di scelta rapida per la specifica di un **parallele** regione che contiene una sola **sezioni** direttiva. La semantica è identica a specificare in modo esplicito un **parallele** direttiva seguita immediatamente da un **sezioni** direttiva. La sintassi del **sezioni in parallelo** direttiva è come segue:

```
#pragma omp parallel sections  [clause[[,] clause] ...] new-line
   {
   [#pragma omp section new-line]
      structured-block
   [#pragma omp section new-linestructured-block  ]
   ...
}
```

Il *clausola* può essere una delle clausole accettate dal **parallele** e **sezioni** direttive, tranne il **nowait** clausola.

## <a name="cross-references"></a>Tra i riferimenti:

- **Parallel** direttiva, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.

- **le sezioni** direttiva, vedere [sezione 2.4.2](../../parallel/openmp/2-4-2-sections-construct.md) pagina 14.