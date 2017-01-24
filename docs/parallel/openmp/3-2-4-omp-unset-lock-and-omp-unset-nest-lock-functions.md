---
title: "3.2.4 omp_unset_lock and omp_unset_nest_lock Functions | Microsoft Docs"
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
ms.assetid: 5357e43e-a7c0-41d7-b529-3f7d15da8b11
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.2.4 omp_unset_lock and omp_unset_nest_lock Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni consentono di rilascio della proprietà di un blocco.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_unset_lock(omp_lock_t *lock);  
void omp_unset_nest_lock(omp_nest_lock_t *lock);  
```  
  
 L'argomento a ognuna di queste funzioni indichi una variabile inizializzata del blocco di proprietà del thread che esegue la funzione.  Il comportamento è definito se il thread non è il proprietario del blocco.  
  
 per un blocco semplice, `omp_unset_lock` la funzione inserisce il thread che esegue la funzione da proprietà del blocco.  
  
 per un blocco nidificabile, `omp_unset_nest_lock` la funzione decrementa il conteggio di annidamento e rilascia il thread che esegue la funzione da proprietà del blocco se il conteggio risultante è zero.