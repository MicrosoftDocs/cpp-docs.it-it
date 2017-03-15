---
title: "Errore dell‘analizzatore di espressioni CXX0021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0021"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0021"
  - "CXX0021"
ms.assetid: d6c0c35a-16c2-42c0-a7d2-e910350a47f0
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0021
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

struttura o unione utilizzata come scalare  
  
 In un'espressione è stata utilizzata una struttura o un'unione senza che alcun elemento sia stato specificato.  
  
 Quando si gestisce una variabile di struttura o di unione, il nome della variabile può comparire da solo, senza un qualificatore di campo.  La struttura o unione utilizzata in un'espressione deve essere qualificata con l'elemento specifico desiderato.  
  
 Specificare l'elemento a cui appartiene il valore che sarà utilizzato nell'espressione.  
  
 Questo errore è identico all'errore CAN0021.