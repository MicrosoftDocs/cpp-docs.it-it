---
title: 4.3 OMP_DYNAMIC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: a15edefb-1f85-4f06-a427-beb3cfc4434f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c15fa9d8c9d86b736bfc577a3b17e9809ec9baaf
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46439198"
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