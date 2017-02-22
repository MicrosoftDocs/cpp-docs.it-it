---
title: "Precedenza nelle regole di inferenza | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "regole di inferenza in NMAKE"
  - "precedenza, regola di inferenza"
  - "regole, inferenza"
ms.assetid: 69e3dc02-0815-4c3a-b02b-1cb85fceaf24
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Precedenza nelle regole di inferenza
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se una regola di inferenza è definita più volte, viene utilizzata la definizione con precedenza più alta.  Nell'elenco che segue è indicato l'ordine di precedenza delle definizioni dalla più alta alla più bassa:  
  
1.  Una regola di inferenza definita in un makefile. Le definizioni più recenti hanno la precedenza.  
  
2.  Una regola di inferenza definita in Tools.ini. Le definizioni più recenti hanno la precedenza.  
  
3.  Una regola di inferenza già definita.  
  
## Vedere anche  
 [Regole di inferenza](../build/inference-rules.md)