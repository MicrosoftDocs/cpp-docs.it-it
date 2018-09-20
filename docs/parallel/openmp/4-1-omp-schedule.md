---
title: 4.1 OMP_SCHEDULE | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: cbdad5ab56ea6979ae2b5952b092b5e85c7bdfa8
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46433452"
---
# <a name="41-ompschedule"></a>4.1 OMP_SCHEDULE

**OMP_SCHEDULE** si applica solo al **per** e **parallele per** direttive con il tipo di pianificazione **runtime**. Le dimensioni di blocco e tipo di pianificazione per tutti i cicli di questo tipo è impostabile in fase di esecuzione, impostare questa variabile di ambiente per uno dei tipi di pianificazione riconosciuto e facoltativa *chunk_size*.

Per la **per** e **parallele per** direttive che hanno un tipo di pianificazione diverso da **runtime**, **OMP_SCHEDULE** viene ignorato. Il valore predefinito per questa variabile di ambiente è definito dall'implementazione. Se l'opzione facoltativa *chunk_size* è impostata, il valore deve essere positivo. Se *chunk_size* non è impostato, si presuppone un valore pari a 1, tranne nel caso di un **statico** pianificazione. Per un **statici** pianificazione, la dimensione del blocco predefinita è impostata sullo spazio di iterazione ciclo diviso per il numero di thread applicati al ciclo.

Esempio:

```
setenv OMP_SCHEDULE "guided,4"
setenv OMP_SCHEDULE "dynamic"
```

## <a name="cross-references"></a>Tra i riferimenti:

- **per la** direttiva, vedere [sezione 2.4.1](../../parallel/openmp/2-4-1-for-construct.md) nella pagina 11.

- **per Parallel** direttiva, vedere [sezione 2.5.1](../../parallel/openmp/2-5-1-parallel-for-construct.md) nella pagina 16.