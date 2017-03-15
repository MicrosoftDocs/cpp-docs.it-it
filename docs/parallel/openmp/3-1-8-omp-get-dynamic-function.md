---
title: "3.1.8 omp_get_dynamic Function | Microsoft Docs"
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
ms.assetid: c03e2daf-29c9-49e3-9b67-b980ad1ab195
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.8 omp_get_dynamic Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

**omp\_get\_dynamic** la funzione restituisce un valore diverso da zero se la modifica dinamica dei thread è attivata e restituisce 0 in caso contrario.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_dynamic(void);  
```  
  
 Se l'implementazione non implementa la modifica dinamica del numero di thread, questa funzione restituisce sempre 0.  
  
## riferimenti incrociati:  
  
-   Per una descrizione della modifica dinamica di thread, vedere [parte 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39.