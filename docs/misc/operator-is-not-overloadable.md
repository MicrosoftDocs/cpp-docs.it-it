---
title: "L&#39;operatore non supporta l&#39;overload | Microsoft Docs"
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
  - "vbc33002"
  - "bc33002"
helpviewer_keywords: 
  - "BC33002"
ms.assetid: 8628ea42-57d8-41ca-8bdc-5e4c27be543e
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore non supporta l&#39;overload
Solo determinati operatori sono idonei per l'overload. La tabella seguente elenca gli operatori che è possibile definire.  
  
|Tipo|Operatori|  
|----------|---------------|  
|Unario|`+`, `-`, `IsFalse`, `IsTrue`, `Not`|  
|Binario|`+`, `-`, `*`, `/`, `\`, `&`, `^`, `>>`, `<<`, `=`, `<>`, `>`, `>=`, `<`, `<=`, `And`, `Like`, `Mod`, `Or`, `Xor`|  
|Conversione \(unario\)|`CType`|  
  
 Si noti che l'operatore `=` nell'elenco binario è l'operatore di confronto, non l'operatore di assegnazione.  
  
 **ID errore:** BC33002  
  
### Per correggere l'errore  
  
1.  Selezionare un operatore dal set di operatori che supportano l'overload.  
  
2.  Se è necessario eseguire l'overload di un operatore che non può essere sottoposto a overload direttamente, creare una routine `Function` che accetti i parametri appropriati e restituisca il valore appropriato.  
  
## Vedere anche  
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Function Statement](../Topic/Function%20Statement%20\(Visual%20Basic\).md)