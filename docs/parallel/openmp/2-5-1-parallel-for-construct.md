---
title: 2.5.1 parallel costrutto for | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a233e7ed-2462-4f7a-9a5d-556ab9f363d8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cfff3b0c17dd098b5d802af61a7ca1f81cb02845
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373961"
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