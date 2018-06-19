---
title: 4.4 OMP_NESTED | Documenti Microsoft
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
ms.openlocfilehash: 1779b75774a2177a0d6a4f0661406e28b479a7ee
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33690270"
---
# <a name="44-ompnested"></a>4.4 OMP_NESTED
Il `OMP_NESTED` variabile di ambiente Abilita o disabilita il parallelismo nidificato a meno che non parallelismo annidato è abilitato o disabilitato chiamando il `o` **mp_set_nested** routine di libreria. Se impostato su **TRUE**, parallelismo annidato è abilitato; se è impostato su **FALSE**nidificato parallelismo è disabilitato. Il valore predefinito è **FALSE**.  
  
 Esempio:  
  
```  
setenv OMP_NESTED TRUE  
```  
  
## <a name="cross-reference"></a>Riferimento incrociato:  
  
-   `omp_set_nested` funzione, vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40.