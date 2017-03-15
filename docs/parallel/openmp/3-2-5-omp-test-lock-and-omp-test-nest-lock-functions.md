---
title: "3.2.5 omp_test_lock and omp_test_nest_lock Functions | Microsoft Docs"
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
ms.assetid: 36818945-c22c-4c24-b754-4e73eba6f3f8
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.2.5 omp_test_lock and omp_test_nest_lock Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni tenta di impostare un blocco ma non si interrompono l'esecuzione del thread.  Il formato è il seguente:  
  
```  
#include <omp.h>  
int omp_test_lock(omp_lock_t *lock);  
int omp_test_nest_lock(omp_nest_lock_t *lock);  
```  
  
 L'argomento deve puntare a una variabile inizializzata del blocco.  Queste funzioni tenta di impostare un blocco analogamente come `omp_set_lock` e  `omp_set_nest_lock`tuttavia, a differenza dei quali non si interrompono l'esecuzione del thread.  
  
 per un blocco semplice, `omp_test_lock` la funzione restituisce un valore diverso da zero se il blocco correttamente è impostato, in caso contrario, restituisce zero.  
  
 per un blocco nidificabile, `omp_test_nest_lock` la funzione restituisce il nuovo numero di annidamento se il blocco correttamente è impostato, in caso contrario, restituisce zero.