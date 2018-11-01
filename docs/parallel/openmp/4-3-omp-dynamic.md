---
title: 4.3 OMP_DYNAMIC
ms.date: 11/04/2016
ms.assetid: a15edefb-1f85-4f06-a427-beb3cfc4434f
ms.openlocfilehash: 0ea6784159a11fc194d0c1cd16d2316a80b9cd37
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50488565"
---
# <a name="43-ompdynamic"></a>4.3 OMP_DYNAMIC

Il **OMP_DYNAMIC** variabile di ambiente attiva o disattiva la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele a meno che non regolazione dinamica in modo esplicito è abilitato o disabilitato chiamando il **omp_set_dynamic** routine di libreria. Il valore deve essere **TRUE** oppure **FALSE**.

Se impostato su **TRUE**, è possibile modificare il numero di thread usati per l'esecuzione di aree parallele dall'ambiente di runtime per utilizzare al meglio le risorse di sistema.  Se impostato su **FALSE**, regolazione dinamica è disabilitata. La condizione predefinita è definito dall'implementazione.

Esempio:

```
setenv OMP_DYNAMIC TRUE
```

## <a name="cross-references"></a>Tra i riferimenti:

- Per altre informazioni sulle aree parallele, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.

- **omp_set_dynamic** funzione, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.