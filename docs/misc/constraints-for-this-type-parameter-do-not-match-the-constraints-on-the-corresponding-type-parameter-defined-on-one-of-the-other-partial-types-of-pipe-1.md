---
title: "I vincoli per questo parametro di tipo non corrispondono ai vincoli nel corrispondente parametro di tipo definito in uno degli altri tipi parziali di &#39;|1&#39; | Microsoft Docs"
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
  - "vbc30932"
  - "bc30932"
helpviewer_keywords: 
  - "BC30932"
ms.assetid: a38ca4ad-6bbf-421e-a0d7-c5e0a9029160
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I vincoli per questo parametro di tipo non corrispondono ai vincoli nel corrispondente parametro di tipo definito in uno degli altri tipi parziali di &#39;|1&#39;
Quando si divide la definizione di una classe o struttura in diverse dichiarazioni, il compilatore considera la classe o struttura come l'unione di tutte le relative dichiarazioni parziali. Per questo motivo, non è possibile definire elenchi di parametri di tipo o modificatori in conflitto nelle varie dichiarazioni parziali.  
  
 **ID errore:** BC30932  
  
### Per correggere l'errore  
  
1.  Determinare quale elenco parametri di tipo si vuole per la classe o struttura. Questo include i parametri, il relativo ordine e i relativi elenchi di vincoli.  
  
2.  Verificare che tutte le definizioni parziali usino lo stesso elenco di parametri di tipo.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)