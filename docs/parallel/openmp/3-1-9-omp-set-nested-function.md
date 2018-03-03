---
title: 3.1.9 funzione omp_set_nested | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: e4afc3aa-bb96-4314-9849-fd5df5f437d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0910e7df0ebd423b9967fd0eb7931b7434ba94fc
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="319-ompsetnested-function"></a>3.1.9 Funzione omp_set_nested
Il **omp_set_nested** funzione Abilita o disabilita il parallelismo annidato. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_nested(int nested);  
```  
  
 Se *nidificata* restituisce 0, annidati parallelismo è disabilitato, ovvero l'impostazione predefinita e aree parallele annidate vengono serializzate ed eseguite dal thread corrente. Se *nidificata* restituisce un valore diverso da zero, parallelismo annidato è abilitato e aree parallele annidati possono essere distribuiti i thread aggiuntivi per formare i team annidati.  
  
 Questa funzione non ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce zero. Se viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.  
  
 La chiamata ha la precedenza sul **OMP_NESTED** variabile di ambiente.  
  
 Quando è abilitato il parallelismo nidificato, il numero di thread utilizzato per eseguire regioni parallel annidate è definito dall'implementazione. Di conseguenza, le implementazioni conformi con OpenMP sono consentite per serializzare regioni parallel annidate, anche quando è abilitato il parallelismo annidato.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **OMP_NESTED** vedere variabile di ambiente [sezione 4.4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.  
  
-   **omp_in_parallel** funzione, vedere [sezione 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.