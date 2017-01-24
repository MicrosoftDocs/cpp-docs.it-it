---
title: "3.1.9 omp_set_nested Function | Microsoft Docs"
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
ms.assetid: e4afc3aa-bb96-4314-9849-fd5df5f437d9
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.9 omp_set_nested Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_set\_nested** la funzione attiva o disabilita il parallelismo annidato.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_nested(int nested);  
```  
  
 se *annidato* restituisce 0, il parallelismo annidato è disabilitato, ovvero l'impostazione predefinita e le aree parallele annidate vengono serializzate ed eseguito dal thread corrente.  se *annidato* restituisce un valore diverso da zero, il parallelismo annidato è attivato e le aree di parallelo che sono annidate possono implementare i thread aggiuntivi per formare i team annidati.  
  
 La funzione presenta effetti descritti in precedenza in caso di chiamata da una parte del programma in cui **omp\_in\_parallel** restituisce zero di funzione.  Se viene chiamata da una parte del programma in cui **omp\_in\_parallel** la funzione restituisce un valore diverso da zero, il comportamento di questa funzione è definita.  
  
 Questa chiamata ha la precedenza su **OMP\_NESTED** variabile di ambiente.  
  
 Quando il parallelismo annidato è abilitato, il numero di thread utilizzati per eseguire le aree parallele annidate è implementazione\-definito.  Di conseguenza, le implementazioni OpenMP\-compiacenti sono consentite per serializzare le aree parallele annidate anche quando il parallelismo annidato è abilitato.  
  
## riferimenti incrociati:  
  
-   **OMP\_NESTED** la variabile di ambiente, vedere  [parte 4,4](../../parallel/openmp/4-4-omp-nested.md) nella pagina 49.  
  
-   **omp\_in\_parallel** la funzione, vedere  [parte 3.1.6](../../parallel/openmp/3-1-6-omp-in-parallel-function.md) nella pagina 38.