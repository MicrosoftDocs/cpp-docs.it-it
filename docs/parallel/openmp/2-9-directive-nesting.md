---
title: "2.9 Directive Nesting | Microsoft Docs"
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
ms.assetid: 6565a43c-fd2d-4366-8322-8d75e1b06600
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.9 Directive Nesting
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'annidamento dinamico delle direttive deve rispettare le seguenti regole:  
  
-   In **parallelo** direttiva in modo dinamico in un altro  **parallelo** stabilisce logicamente un nuovo team, che è costituito esclusivamente il thread corrente, a meno che il parallelismo annidato è attivato.  
  
-   **per**,  **sezioni**e  **singolo** direttive che associano gli stessi  **parallelo** non sono consentiti per essere annidati nell'altro.  
  
-   **critico** le direttive con lo stesso nome non possono essere annidate nell'altro.  Si noti che questa restrizione non è sufficiente per impedire un deadlock.  
  
-   **per**,  **sezioni**e  **singolo** le direttive non sono consentite in dinamico di  **critico**,  **ordinato**e  **master** aree se le direttive vincolano gli stessi  **parallelo** come le aree.  
  
-   **barriera** le direttive non sono consentite in dinamico di  **per**,  **ordinato**,  **sezioni**,  **singolo**,  **master**e  **critico** aree se le direttive vincolano gli stessi  **parallelo** come le aree.  
  
-   **master** le direttive non sono consentite in dinamico di  **per**,  **sezioni**e  **singolo** se direttive  **master** associazione di direttive agli stessi  **parallelo** come le direttive di suddivisione del lavoro.  
  
-   **ordinato** le direttive non sono consentite in dinamico di  **critico** aree se le direttive vincolano gli stessi  **parallelo** come le aree.  
  
-   Una direttiva che è valida una volta eseguita in modo dinamico in un'area parallela viene inoltre consentita una volta eseguita all'esterno di un'area parallela.  Una volta eseguita in modo dinamico all'esterno di un'area parallela definita dall'utente, la direttiva viene eseguita da un team composto solo thread master.