---
title: "3.2.3 omp_set_lock and omp_set_nest_lock Functions | Microsoft Docs"
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
ms.assetid: b5323879-f72e-418e-953f-3979fdda17a2
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.2.3 omp_set_lock and omp_set_nest_lock Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Ognuna di queste funzioni blocca il thread che esegue la funzione finché il blocco specificato non è disponibile e quindi impostare il blocco.  un blocco semplice è disponibile se è sbloccato.  Un blocco nidificabile è disponibile se è sbloccato o se già appartiene il thread che esegue la funzione.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_set_lock(omp_lock_t *lock);  
void omp_set_nest_lock(omp_nest_lock_t *lock);  
```  
  
 Per un blocco semplice, l'argomento in `omp_set_lock` la funzione deve puntare a una variabile inizializzata del blocco.  La proprietà del blocco viene concessa al thread che esegue la funzione.  
  
 Per un blocco nidificabile, l'argomento in `omp_set_nest_lock` la funzione deve puntare a una variabile inizializzata del blocco.  Il conteggio di annidamento viene incrementato e il thread viene concessa, o, mantiene proprietà del blocco.