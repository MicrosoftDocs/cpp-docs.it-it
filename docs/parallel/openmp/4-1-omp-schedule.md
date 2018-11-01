---
title: 4.1 OMP_SCHEDULE
ms.date: 11/04/2016
ms.assetid: d0dce411-2351-4ee9-a1cc-c0322a58b65c
ms.openlocfilehash: 4731299a4f7203dd01f660ea25bf2f5b58060630
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50432695"
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