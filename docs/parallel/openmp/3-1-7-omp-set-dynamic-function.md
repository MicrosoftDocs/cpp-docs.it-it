---
title: "3.1.7 omp_set_dynamic Function | Microsoft Docs"
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
ms.assetid: 1fba961b-b82c-4a1e-ab0f-e4be826e50ab
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.7 omp_set_dynamic Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_set\_dynamic** la funzione attiva o disabilita la modifica dinamica del numero di thread disponibili per l'esecuzione delle aree parallele.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_dynamic(int dynamic_threads);  
```  
  
 se *dynamic\_threads* restituisce un valore diverso da zero, il numero di thread utilizzati per eseguire le aree parallele successive possono essere regolati automaticamente dall'ambiente di runtime al meglio utilizzano le risorse di sistema.  Di conseguenza, il numero di thread specificati dall'utente è il conteggio dei thread massimo.  Il numero di thread del team che esegue un'area parallela rimane fisso per la durata dell'area parallela e viene segnalato da **omp\_get\_num\_threads** funzione.  
  
 se *dynamic\_threads* restituisce 0, regolazione dinamica è disabilitato.  
  
 La funzione presenta effetti descritti in precedenza in caso di chiamata da una parte del programma in cui **omp\_in\_parallel** restituisce zero di funzione.  Se viene chiamata da una parte del programma in cui **omp\_in\_parallel** la funzione restituisce un valore diverso da zero, il comportamento di questa funzione è definita.  
  
 una chiamata a **omp\_set\_dynamic** ha la precedenza su  **OMP\_DYNAMIC** variabile di ambiente.  
  
 L'impostazione predefinita per la modifica dinamica dei thread è implementazione\-definita.  Di conseguenza, i codici utenti che dipendono da un numero specifico dei thread per l'esecuzione corretta devono disabilitare in modo esplicito i thread dinamici.  Le implementazioni non sono necessarie per consentire di modificare dinamicamente il numero di thread, ma sono necessarie fornire l'interfaccia per supportare la portabilità tra tutte le piattaforme.  
  
## riferimenti incrociati:  
  
-   **omp\_get\_num\_threads** la funzione, vedere  [parte 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.  
  
-   **OMP\_DYNAMIC** la variabile di ambiente, vedere  [parte 4,3](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49.  
  
-   **omp\_in\_parallel** la funzione, vedere  [parte 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.