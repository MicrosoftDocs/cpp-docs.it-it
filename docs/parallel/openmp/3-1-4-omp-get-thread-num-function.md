---
title: "3.1.4 omp_get_thread_num Function | Microsoft Docs"
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
ms.assetid: 5220402b-c109-4b1f-ba79-002e93d08617
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.1.4 omp_get_thread_num Function
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

`omp_get_thread_num` la funzione restituisce il numero di thread, all'interno del proprio team, del thread in esecuzione la funzione.  Il numero di thread si trova tra 0 e **omp\_get\_num\_threads \(\)**\- 1, inclusi.  Il thread master del team è thread 0.  
  
 Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_get_thread_num(void);  
```  
  
 Se viene chiamato da un'area seriale, `omp_get_thread_num` restituisce 0.  Se viene chiamato dall'interno di un'area parallela annidata serializzata, restituisce 0 di questa funzione.  
  
## riferimenti incrociati:  
  
-   `omp_get_num_threads` la funzione, vedere  [parte 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37.