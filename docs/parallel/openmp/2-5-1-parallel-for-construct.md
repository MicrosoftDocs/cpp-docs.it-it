---
title: 2.5.1 Costrutto parallel for
ms.date: 11/04/2016
ms.assetid: a233e7ed-2462-4f7a-9a5d-556ab9f363d8
ms.openlocfilehash: e74fa958a70fb10aadd39ccc6b4e56670bc072b0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50590333"
---
# <a name="251-parallel-for-construct"></a>2.5.1 Costrutto parallel for

Il **parallele per** direttiva è una scelta rapida per un **parallele** area contenente una sola **per** direttiva. La sintassi del **parallele per** direttiva è come segue:

```
#pragma omp parallel for [clause[[,] clause] ...] new-linefor-loop
```

Questa direttiva consente tutte le clausole del **parallele** direttiva e il **per** direttiva, tranne il `nowait` clausola, con un significato identico e restrizioni. La semantica è identica a specificare in modo esplicito un **parallele** direttiva seguita immediatamente da un **per** direttiva.

## <a name="cross-references"></a>Tra i riferimenti:

- **Parallel** direttiva, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.

- **per la** direttiva, vedere [sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.

- Clausole di attributi per i dati, vedere [2.7.2 clausole di attributi per la condivisione dei dati](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25.