---
title: "3.2.1 omp_init_lock and omp_init_nest_lock Functions | Microsoft Docs"
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
ms.assetid: 098a2721-b16a-484f-bc83-4b8e281e382c
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 3.2.1 omp_init_lock and omp_init_nest_lock Functions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Queste funzioni sono gli unici mezzi di inizializzare un blocco.  Ogni funzione inizializza il blocco associato al parametro *blocco* per utilizzare le chiamate successive.  Il formato è il seguente:  
  
```  
#include <omp.h>  
void omp_init_lock(omp_lock_t *lock);  
void omp_init_nest_lock(omp_nest_lock_t *lock);  
```  
  
 Lo stato iniziale è sbloccato ovvero nessun thread proprietario del blocco\).  Per un blocco nidificabile, il numero iniziale di annidamento è zero.  Non è conforme chiamare una di queste routine con una variabile di blocco che è già stata inizializzata.