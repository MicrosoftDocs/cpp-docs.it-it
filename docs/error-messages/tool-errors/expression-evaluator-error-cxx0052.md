---
title: "Errore dell‘analizzatore di espressioni CXX0052 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0052"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0052"
  - "CXX0052"
ms.assetid: 5060d479-d0a4-4682-b858-c8b9a4f324e6
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0052
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

funzione membro non presente  
  
 Una funzione membro specificata come punto di interruzione non è stata trovata.  L'errore può essere causato dall'impostazione come punto di interruzione di una funzione che è stata resa inline.  
  
 Ricompilare il file disattivando l'opzione inline \(\/Ob0\) in modo da impostare un punto di interruzione in questa funzione.  
  
 Una funzione non definita è stata chiamata da un'espressione.  
  
 Questo errore è identico all'errore CAN0052.