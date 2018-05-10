---
title: 4.3 OMP_DYNAMIC | Documenti Microsoft
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
ms.openlocfilehash: f376fe639d9bca58b6e2bd55fd081b88921a7342
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="43-ompdynamic"></a>4.3 OMP_DYNAMIC
Il **OMP_DYNAMIC** variabile di ambiente attiva o disattiva la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele, a meno che la regolazione dinamica in modo esplicito è abilitata o disabilitata chiamando il **omp_set_dynamic** routine di libreria. Il valore deve essere **TRUE** o **FALSE**.  
  
 Se impostato su **TRUE**, è possibile modificare il numero di thread utilizzati per l'esecuzione parallele aree dall'ambiente di runtime per utilizzare al meglio le risorse di sistema.  Se impostato su **FALSE**, regolazione dinamica è disabilitata. La condizione predefinita è definito dall'implementazione.  
  
 Esempio:  
  
```  
setenv OMP_DYNAMIC TRUE  
```  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   Per ulteriori informazioni sulle aree parallele, vedere [sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **omp_set_dynamic** function, vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.