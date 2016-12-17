---
title: "L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere un secondo parametro di tipo &#39;Integer&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BC33041"
  - "vbc33041"
helpviewer_keywords: 
  - "BC33041"
ms.assetid: 5cd56f6d-2f0f-49de-a8e6-59bdb57bdb1d
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;operatore&gt;&#39; deve avere un secondo parametro di tipo &#39;Integer&#39;
È stato dichiarato un operatore di spostamento di bit con un secondo parametro di tipo diverso da `Integer`.  
  
 Quando si usa l'operatore di spostamento a destra \(`>>`\) o di spostamento a sinistra \(`<<`\) in un'espressione, l'entità dello spostamento deve essere specificata nel secondo operando. Per questo operando [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] consente di fornire qualsiasi tipo di dati che viene convertito verso il tipo più grande `Integer`. La definizione del secondo operando, tuttavia, è rigorosamente `Integer`. Se si definisce una classe o una struttura con un operatore di spostamento di bit su di essa, nella definizione è necessario specificare `Integer` per il secondo operando.  
  
 **ID errore:** BC33041  
  
### Per correggere l'errore  
  
-   Cambiare la definizione dell'operatore di spostamento di bit in modo che venga restituito un valore `Integer`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Bit Shift Operators](../Topic/Bit%20Shift%20Operators%20\(Visual%20Basic\).md)