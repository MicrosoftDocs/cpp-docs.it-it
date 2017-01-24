---
title: "L&#39;istruzione non pu&#242; trovarsi all&#39;interno di un corpo di interfaccia (errore di Visual Basic) | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30604"
  - "vbc30604"
helpviewer_keywords: 
  - "BC30604"
ms.assetid: ce4759fe-5e49-43ad-8405-a3f46ed0a36f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione non pu&#242; trovarsi all&#39;interno di un corpo di interfaccia (errore di Visual Basic)
È stato rilevato un costrutto di linguaggio non previsto. Si presuppone che manchi un costrutto `End Interface` e che tutto il codice sorgente dopo questo punto si trovi all'esterno dell'interfaccia.  
  
 **ID errore:** BC30604  
  
### Per correggere l'errore  
  
1.  Verificare la sintassi del codice usato all'interno della definizione di interfaccia.  
  
2.  Verificare che la definizione dell'interfaccia termini con un costrutto `End Interface`.  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)