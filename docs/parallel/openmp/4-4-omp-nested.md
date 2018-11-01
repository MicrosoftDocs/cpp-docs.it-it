---
title: 4.4 OMP_NESTED
ms.date: 11/04/2016
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
ms.openlocfilehash: e45b8901c56923ab37ca387a5f057c5b41af21f3
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50453621"
---
# <a name="44-ompnested"></a>4.4 OMP_NESTED

Il `OMP_NESTED` variabile di ambiente Abilita o disabilita il parallelismo nidificato a meno che non annidati di parallelismo è abilitato o disabilitato chiamando il `o` **mp_set_nested** routine di libreria. Se impostato su **TRUE**, è abilitato il parallelismo annidato; se è impostato su **FALSE**nidificato parallelismo viene disabilitato. Il valore predefinito è **FALSE**.

Esempio:

```
setenv OMP_NESTED TRUE
```

## <a name="cross-reference"></a>Riferimento incrociato:

- `omp_set_nested` funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.