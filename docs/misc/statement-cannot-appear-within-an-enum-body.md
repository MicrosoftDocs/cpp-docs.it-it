---
title: "L&#39;istruzione non pu&#242; essere specificata all&#39;interno di un corpo di Enum | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30619"
  - "bc30619"
helpviewer_keywords: 
  - "BC30619"
ms.assetid: 5d91d601-2a2d-418c-ae26-791d14a6f3cd
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione non pu&#242; essere specificata all&#39;interno di un corpo di Enum
L'istruzione non può verificarsi all'interno di un corpo di Enum. Verrà interpretata come fine dell'enumerazione.  
  
 È stato rilevato un costrutto di linguaggio non previsto. Si presuppone che manchi un costrutto `End Enum` e che tutto il codice sorgente dopo questo punto si trovi all'esterno dell'enumerazione.  
  
 **ID errore:** BC30619  
  
### Per correggere l'errore  
  
1.  Verificare la sintassi del codice usato all'interno dell'enumerazione.  
  
2.  Verificare che la definizione dell'interfaccia termini con un costrutto `End Enum`.  
  
## Vedere anche  
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)