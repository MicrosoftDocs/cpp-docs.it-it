---
title: E. I comportamenti in C/C++ OpenMP definito dall'implementazione | Documenti Microsoft
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
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 8fe890248ad2eb3bcee024bf12ccf4039484e7b2
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="e-implementation-defined-behaviors-in-openmp-cc"></a>E. Definito dall'implementazione di comportamenti in C/C++ OpenMP
Questa appendice sono riepilogati i comportamenti che sono descritte come "definito dall'implementazione" in questa API.  Ogni comportamento è riassociati con un riferimento alla relativa descrizione nella specifica principale.  
  
## <a name="remarks"></a>Note  
 Un'implementazione è necessaria definire e documentare il comportamento in questi casi, ma questo elenco potrebbe essere incompleto.  
  
-   **Numero di thread:** se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela supera il numero che può fornire il sistema in fase di esecuzione, il comportamento di il programma è definito dall'implementazione (vedere la pagina 9).  
  
     In Visual C++, per un'area parallela non nidificata 64 thread (il valore massimo), verrà fornito.  
  
-   **Numero di processori:** il numero di processori fisici hosting effettivamente i thread in qualsiasi momento è definito dall'implementazione (vedere la pagina 10).  
  
     In Visual C++, questo numero non è costante ed è controllato dal sistema operativo.  
  
-   **I team di thread di creazione:** il numero di thread in un team che eseguono un'area parallela nidificata è definito dall'implementazione. ( vedere la pagina 10).  
  
     In Visual C++, ciò è determinato dal sistema operativo.  
  
-   **Schedule (Runtime):** le decisioni relative alla pianificazione viene posticipata fino alla fase di esecuzione. La dimensione di tipo e il blocco di pianificazione è possibile accedere in fase di esecuzione impostando la `OMP_SCHEDULE` variabile di ambiente. Se questa variabile di ambiente non è impostata, la pianificazione risulta viene definito dall'implementazione (vedere la pagina 13).  
  
     In Visual C++, il tipo di pianificazione è `static` con una dimensione alcun blocco.  
  
-   **Pianificazione predefinita:** In assenza della clausola schedule, la pianificazione predefinita è definito dall'implementazione (vedere la pagina 13).  
  
     In Visual C++, è il tipo di pianificazione predefinita `static` con una dimensione alcun blocco.  
  
-   **ATOMICA:** è definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con **critico** direttive che hanno lo stesso nome univoco (vedere la pagina 20).  
  
     In Visual C++, se i dati modificati da [atomica](../../parallel/openmp/reference/atomic.md) non è un allineamento naturale o se è 1 o 2 byte tempo tutte le operazioni atomiche che soddisfano tale proprietà utilizzerà una sezione critica. In caso contrario, le sezioni critiche non consentirà.  
  
-   **omp_get_num_threads:** se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione (vedere la pagina 9, e [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37).  
  
     In Visual C++, il numero predefinito di thread è uguale al numero di processori.  
  
-   **omp_set_dynamic:** il valore predefinito per la regolazione dinamica thread è definito dall'implementazione (vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39).  
  
     In Visual C++, il valore predefinito è `FALSE`.  
  
-   **omp_set_nested:** quando parallelismo annidato è abilitato, il numero di thread utilizzato per eseguire regioni parallel annidate è definito dall'implementazione (vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40).  
  
     In Visual C++, il numero di thread è determinato dal sistema operativo.  
  
-   `OMP_SCHEDULE`variabile di ambiente: il valore predefinito per questa variabile di ambiente è definito dall'implementazione (vedere [sezione 4.1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48).  
  
     In Visual C++, il tipo di pianificazione è `static` con una dimensione alcun blocco.  
  
-   `OMP_NUM_THREADS`variabile di ambiente: se viene specificato alcun valore per il `OMP_NUM_THREADS` variabile di ambiente, o se il valore specificato non è un numero intero positivo, o se il valore è maggiore del numero massimo di thread di sistema può supportare, il numero di thread da usare definito dall'implementazione (vedere [sezione 4.2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48).  
  
     In Visual C++, se il valore specificato è uguale a zero o meno, il numero di thread è uguale al numero di processori.  Se il valore è maggiore di 64, il numero di thread è 64.  
  
-   `OMP_DYNAMIC`variabile di ambiente: il valore predefinito è definito dall'implementazione (vedere [sezione 4.3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49).  
  
     In Visual C++, il valore predefinito è `FALSE`.