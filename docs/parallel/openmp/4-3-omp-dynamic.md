---
title: "4.3 OMP_DYNAMIC | Microsoft Docs"
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
ms.assetid: a15edefb-1f85-4f06-a427-beb3cfc4434f
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 4.3 OMP_DYNAMIC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**OMP\_DYNAMIC** la variabile di ambiente abilita o disabilita la modifica dinamica del numero di thread disponibili per l'esecuzione delle aree parallele a meno che la modifica dinamica in modo esplicito sia abilitata o disabilitata chiamando  **omp\_set\_dynamic** routine della libreria.  Il valore deve essere **TRUE** o  **FALSE**.  
  
 Se impostato su **TRUE**, il numero di thread utilizzati per eseguire le aree in parallelo può essere regolato dall'ambiente di runtime al meglio utilizza le risorse di sistema.  Se impostato su **FALSE**, la regolazione dinamica è disabilitata.  lo stato predefinito è implementazione\-definito.  
  
 Esempio:  
  
```  
setenv OMP_DYNAMIC TRUE  
```  
  
## riferimenti incrociati:  
  
-   Per ulteriori informazioni sulle aree in parallelo, vedere [parte 2,3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8.  
  
-   **omp\_set\_dynamic** la funzione, vedere  [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.