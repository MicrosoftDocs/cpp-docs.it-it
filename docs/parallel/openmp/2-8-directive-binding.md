---
title: "2.8 Directive Binding | Microsoft Docs"
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
ms.assetid: 7bdac45e-ab55-42f0-bd47-a2e3d5bbab3e
caps.latest.revision: 4
caps.handback.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# 2.8 Directive Binding
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il collegamento dinamico delle direttive deve rispettare le seguenti regole:  
  
-   **per**,  **sezioni**,  **singolo**,  **master**e  **barriera** associazione di direttive dinamicamente a contenimento  **parallelo**, se presente, indipendentemente dal valore di qualsiasi  **se** clausola che può essere presente in tale direttiva.  Se alcuna area parallela è in esecuzione, le direttive sono eseguiti da un team composto solo thread master.  
  
-   **ordinato** la direttiva consente di associare dinamicamente a contenimento  **per**.  
  
-   **in modalità atomica** la direttiva applica l'accesso esclusivo rispetto a  **in modalità atomica** direttive in tutti i thread, non appena il team corrente.  
  
-   **critico** la direttiva applica l'accesso esclusivo rispetto a  **critico** direttive in tutti i thread, non appena il team corrente.  
  
-   Una direttiva non può vincolare mai a qualsiasi direttiva in modo dinamico di tipo più vicina **parallelo**.