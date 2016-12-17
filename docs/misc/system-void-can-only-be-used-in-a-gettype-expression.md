---
title: "&#39;System.Void&#39; pu&#242; essere utilizzato solo in un&#39;espressione GetType | Microsoft Docs"
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
  - "bc31422"
  - "vbc31422"
helpviewer_keywords: 
  - "BC31422"
ms.assetid: 84e45194-cb46-41f6-8420-a1498baeaaba
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.Void&#39; pu&#242; essere utilizzato solo in un&#39;espressione GetType
Un'espressione in un'istruzione di assegnazione o una dichiarazione usa <xref:System.Void> come tipo di una variabile, parametro di routine, tipo restituito di funzione o argomento di tipo.  
  
 La struttura <xref:System.Void> è un tipo specializzato usato internamente da .NET Framework e in particolare da Visual C\# e Visual C\+\+. Rappresenta un tipo valore restituito per un metodo che non restituisce un valore. Visual Basic usa una routine `Sub` quando non viene restituito un valore e una routine `Function` quando viene restituito un valore.  
  
 È possibile testare una variabile di riferimento con l'operatore [GetType Operator](../Topic/GetType%20Operator%20\(Visual%20Basic\).md) per verificare se il tipo di runtime è <xref:System.Void>, ma non è possibile usare <xref:System.Void> in qualsiasi altro contesto.  
  
 **ID errore:** BC31422  
  
### Per correggere l'errore  
  
1.  Se si vuole confrontare il tipo di runtime di una variabile per <xref:System.Void>, usare l'operatore `GetType`.  
  
2.  A meno che non esista un motivo specifico per confrontare un tipo di runtime a <xref:System.Void>, rimuovere completamente il riferimento a tale tipo.  
  
## Vedere anche  
 <xref:System.Void>   
 [GetType Operator](../Topic/GetType%20Operator%20\(Visual%20Basic\).md)