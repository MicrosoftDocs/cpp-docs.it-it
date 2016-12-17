---
title: "E. Implementation-Defined Behaviors in OpenMP C/C++ | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# E. Implementation-Defined Behaviors in OpenMP C/C++
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa appendice riepilogati i comportamenti che sono descritti come “implementazione\-definiti„ in questa API.  Ogni comportamento viene visualizzato nella descrizione nella specifica principale.  
  
## Note  
 Un'implementazione è obbligatoria definire e documentare il comportamento in questi casi, ma questo elenco può essere incompleto.  
  
-   **Numero di thread:** Se un'area parallela viene rilevato durante la modifica dinamica del numero di thread viene disabilitata e il numero di thread dell'area parallela supera il numero del sistema in fase di esecuzione possibile immettere, il comportamento del programma viene implementazione\-definito \(vedere la pagina 9\).  
  
     in Visual C\+\+, per un'area parallela non annidata, 64 thread \(il massimo\) saranno forniti.  
  
-   **Numero di processori:** Il numero di processori in realtà fisici che ospitano i thread in un determinato momento è implementazione\-definito \(vedere la pagina 10\).  
  
     In Visual C\+\+, questo numero non è costante e viene controllato dal sistema operativo.  
  
-   **Creare i team di thread:** Il numero di thread in un team che eseguono un'area parallela annidata è implementazione\-definito. \(vedere la pagina 10\).  
  
     In Visual C\+\+, questo è determinato dal sistema operativo.  
  
-   **pianificazione \(pre\-elaborati\):** La decisione relativamente programmazione viene rinviata fino al runtime.  Il tipo di pianificazione e le dimensioni del blocco possono essere scelti in fase di esecuzione impostando `OMP_SCHEDULE` variabile di ambiente.  Se la variabile non è impostata, la pianificazione risultante è implementazione\-definita \(vedere la pagina 13\).  
  
     In Visual C\+\+, il tipo di pianificazione viene `static` senza dimensioni del blocco.  
  
-   **Pianificazione predefinita:** In assenza di una clausola di pianificazione, la pianificazione predefinita è implementazione\-definita \(vedere la pagina 13\).  
  
     In Visual C\+\+, il tipo predefinito di pianificazione viene `static` senza dimensioni del blocco.  
  
-   **ATOMICO:** È implementazione\-definita se un'implementazione di sostituire tutti  `atomic` direttive con  **critico** le direttive con lo stesso nome univoco \(vedere la pagina 20\).  
  
     In Visual C\+\+, se i dati modificati da [atomic](../../parallel/openmp/reference/atomic.md) non è un allineamento naturale o se è 1 o 2 byte di lunghezza tutte le operazioni atomiche che soddisfano tale proprietà utilizzerà una sezione critica.  In caso contrario, le sezioni critiche non viene utilizzata.  
  
-   **omp\_get\_num\_threads:** Se il numero di thread in modo esplicito non è stato impostato dall'utente, l'impostazione predefinita è implementazione\-definita \(vedere la pagina 9 e  [parte 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37\).  
  
     In Visual C\+\+, il numero predefinito dei thread è uguale al numero di processori.  
  
-   **omp\_set\_dynamic:** L'impostazione predefinita per la modifica dinamica dei thread è implementazione\-definita \(vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39\).  
  
     in Visual C\+\+, l'impostazione predefinita è `FALSE`.  
  
-   **omp\_set\_nested:** Quando il parallelismo annidato è abilitato, il numero di thread utilizzati per eseguire le aree parallele annidate è implementazione\-definito \(vedere  [parte 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40\).  
  
     In Visual C\+\+, il numero di thread è determinato dal sistema operativo.  
  
-   `OMP_SCHEDULE` variabile di ambiente: il valore predefinito per questa variabile di ambiente è implementazione\-definito \(vedere  [parte 4,1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48\).  
  
     In Visual C\+\+, il tipo di pianificazione viene `static` senza dimensioni del blocco.  
  
-   `OMP_NUM_THREADS` variabile di ambiente: Se non viene specificato alcun valore per  `OMP_NUM_THREADS` la variabile di ambiente o, se il valore specificato non è un numero intero positivo, o se il valore è maggiore del numero massimo di thread del sistema può supportare, il numero di thread da utilizzare è implementazione\-definita \(vedere  [parte 4,2](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48\).  
  
     In Visual C\+\+, se il valore specificato è zero o inferiore, il numero di thread è uguale al numero di processori.  Se il valore è maggiore di 64, il numero di thread è 64.  
  
-   `OMP_DYNAMIC` variabile di ambiente: il valore predefinito è implementazione\-definito \(vedere  [parte 4,3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49\).  
  
     in Visual C\+\+, l'impostazione predefinita è `FALSE`.