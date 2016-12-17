---
title: "L&#39;istruzione &#39;Return&#39; in un Sub o Set non pu&#242; restituire un valore | Microsoft Docs"
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
  - "bc30647"
  - "vbc30647"
helpviewer_keywords: 
  - "BC30647"
ms.assetid: d4c05c28-d650-4f49-976e-650d84802036
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;Return&#39; in un Sub o Set non pu&#242; restituire un valore
Le routine `Sub` e le routine `Set` di proprietà non possono restituire valori.  
  
 **ID errore:** BC30647  
  
### Per correggere l'errore  
  
-   Modificare la routine corrente in una funzione oppure in una routine della proprietà `Get` se la routine corrente fa parte di una proprietà.  
  
-   È possibile restituire valori dalle routine `Sub` modificando il valore dei parametri passati dal riferimento tramite la parola chiave `ByRef`.  
  
## Vedere anche  
 [Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md)   
 [Sub Procedures](../Topic/Sub%20Procedures%20\(Visual%20Basic\).md)   
 [Routine Function](../Topic/Function%20Procedures%20\(Visual%20Basic\).md)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)