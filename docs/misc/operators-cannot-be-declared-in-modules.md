---
title: "Gli operatori non possono essere dichiarati nei moduli | Microsoft Docs"
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
  - "bc33018"
  - "vbc33018"
helpviewer_keywords: 
  - "BC33018"
ms.assetid: 10a8fd2d-2af7-4f90-9f2a-50c07ebf7589
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori non possono essere dichiarati nei moduli
Un'[Operator Statement](../Topic/Operator%20Statement.md) è stata inserita in una definizione di modulo.  
  
 È possibile definire un operatore come parte di una classe o di una struttura in corso di definizione. È necessario che l'operatore accetti tale classe o struttura almeno come operando.  
  
 È necessario che l'operatore usi l'istanza di un elemento di programmazione come operando, tenendo conto che le istanze sono associate solo a classi e strutture. Non è quindi possibile definire un operatore come parte di altri elementi di programmazione.  
  
 **ID errore:** BC33018  
  
### Per correggere l'errore  
  
-   Se è necessario eseguire un'operazione sul modulo, usare un'[Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md) per definire una routine `Function` atta allo scopo.  
  
-   È anche possibile definire una classe o una struttura incluse nel modulo e definire un operatore sulla classe o sulla struttura. È necessario tuttavia che l'operatore accetti un'istanza di tale classe o struttura almeno come un operando.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)