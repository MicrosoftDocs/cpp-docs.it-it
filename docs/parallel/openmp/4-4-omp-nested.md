---
title: 4.4 OMP_NESTED | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: fd17b6f4-84e8-44c0-a96a-3a9e5ba33688
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1083269f31ebc710da24430635ff8381e3f2147a
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46419516"
---
# <a name="44-ompnested"></a>4.4 OMP_NESTED

Il `OMP_NESTED` variabile di ambiente Abilita o disabilita il parallelismo nidificato a meno che non annidati di parallelismo è abilitato o disabilitato chiamando il `o` **mp_set_nested** routine di libreria. Se impostato su **TRUE**, è abilitato il parallelismo annidato; se è impostato su **FALSE**nidificato parallelismo viene disabilitato. Il valore predefinito è **FALSE**.

Esempio:

```
setenv OMP_NESTED TRUE
```

## <a name="cross-reference"></a>Riferimento incrociato:

- `omp_set_nested` funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.