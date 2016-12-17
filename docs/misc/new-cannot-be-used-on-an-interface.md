---
title: "&#39;New&#39; non pu&#242; essere usato in un&#39;interfaccia | Microsoft Docs"
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
  - "vbc30375"
  - "bc30375"
helpviewer_keywords: 
  - "BC30375"
ms.assetid: c1e06108-1b52-4cbe-8cae-e816a0dbac0b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;New&#39; non pu&#242; essere usato in un&#39;interfaccia
Un'[Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md) usa una clausola [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md) per la dichiarazione di una variabile come tipo interfaccia.  
  
 Sebbene un'interfaccia sia un tipo riferimento, non è possibile crearne un'istanza. Si può usare `New` solo per creare un'istanza di una classe o di una struttura.  
  
 **ID errore:** BC30375  
  
### Per correggere l'errore  
  
1.  Se la variabile deve essere un tipo di interfaccia, rimuovere la parola chiave `New`.  
  
2.  Se la variabile deve fare riferimento a un'istanza, dichiararla come tipo classe o tipo struttura. Mantenere la parola chiave `New` per creare un'istanza.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)