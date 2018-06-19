---
title: 3.1.7 funzione omp_set_dynamic | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 1fba961b-b82c-4a1e-ab0f-e4be826e50ab
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1d1e22a1eb9aff32bfaf07350daf1cb397e18eb3
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
ms.locfileid: "33687868"
---
# <a name="317-ompsetdynamic-function"></a>3.1.7 Funzione omp_set_dynamic
Il **omp_set_dynamic** funzione attiva o disattiva la regolazione dinamica del numero di thread disponibili per l'esecuzione di aree parallele. Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_dynamic(int dynamic_threads);  
```  
  
 Se *dynamic_threads* restituisce un valore diverso da zero, il numero di thread utilizzati per l'esecuzione di aree parallele successive è possibile modificare automaticamente dall'ambiente di runtime per utilizzare al meglio le risorse di sistema. Di conseguenza, il numero di thread specificato dall'utente è il numero massimo di thread. Il numero di thread del team, l'esecuzione di un'area parallela rimane fisso per la durata di tale area parallela e viene segnalato dal **omp_get_num_threads** (funzione).  
  
 Se *dynamic_threads* restituisce 0, la regolazione dinamica è disabilitata.  
  
 Questa funzione non ha gli effetti descritti in precedenza quando viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce zero. Se viene chiamato da una parte del programma in cui il **omp_in_parallel** funzione restituisce un valore diverso da zero, il comportamento di questa funzione è indefinito.  
  
 Una chiamata a **omp_set_dynamic** ha la precedenza sul **OMP_DYNAMIC** variabile di ambiente.  
  
 Il valore predefinito per la regolazione dinamica dei thread è definito dall'implementazione. Di conseguenza, i codici di utente che dipendono da un numero specifico di thread per l'esecuzione corretta devono disabilitare in modo esplicito thread dinamico. Le implementazioni non sono necessari per offrire la possibilità di modificare dinamicamente il numero di thread, ma viene richiesto di fornire l'interfaccia per supportare la portabilità in tutte le piattaforme.  
  
## <a name="cross-references"></a>Riferimenti:  
  
-   **omp_get_num_threads** function, vedere [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.  
  
-   **OMP_DYNAMIC** vedere variabile di ambiente [sezione 4.3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.  
  
-   **omp_in_parallel** function, vedere [sezione 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.