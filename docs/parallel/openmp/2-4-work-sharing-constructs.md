---
title: "2.4 Work-sharing Constructs | Microsoft Docs"
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
ms.assetid: 25bb4ded-8466-4daa-a863-766b5a99b995
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.4 Work-sharing Constructs
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un costrutto di suddivisione del lavoro distribuisce l'esecuzione dell'istruzione associato tra i membri del team che lo si confrontano.  Le direttive di suddivisione del lavoro non iniziano nuovi thread e non esiste una barriera implicita all'ingresso in un costrutto di suddivisione del lavoro.  
  
 La sequenza di costrutti di suddivisione del lavoro e **barriera** le direttive via devono essere uguali per ogni thread in un team.  
  
 OpenMP definisce i seguenti costrutti di suddivisione del lavoro e sono descritti nelle sezioni che seguono:  
  
-   **per** direttiva  
  
-   **sezioni** direttiva  
  
-   **singolo** direttiva