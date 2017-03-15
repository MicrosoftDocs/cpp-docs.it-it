---
title: "Errore dell‘analizzatore di espressioni CXX0039 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "CXX0039"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAN0039"
  - "CXX0039"
ms.assetid: 8bf698d2-e015-4595-944f-72b81aa43d22
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore dell‘analizzatore di espressioni CXX0039
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

simbolo ambiguo  
  
 L'analizzatore di espressioni C non è in grado di determinare l'istanza di un simbolo da utilizzare in un'espressione.  Il simbolo compare più volte nella struttura ad albero di ereditarietà.  
  
 È necessario utilizzare l'operatore di risoluzione dell'ambito \(`::`\) in modo da specificare esplicitamente l'istanza da impiegare nell'espressione.  
  
 Questo errore è identico all'errore CAN0039.