---
title: "Gli operatori di conversione non possono convertire in Object | Microsoft Docs"
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
  - "bc33028"
  - "vbc33028"
helpviewer_keywords: 
  - "BC33028"
ms.assetid: 064b478c-85a1-4e13-a292-d8aebb079cad
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori di conversione non possono convertire in Object
Un operatore di conversione è dichiarato con un tipo restituito del [Object Data Type](../Topic/Object%20Data%20Type.md).  
  
 In fase di compilazione [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] considera come esistente una conversione predefinita da qualsiasi tipo riferimento a qualsiasi tipo nella propria gerarchia di ereditarietà, vale a dire qualsiasi tipo da cui deriva o che deriva da esso.`Object` è il tipo di dati universale in [!INCLUDE[dnprdnshort](../error-messages/tool-errors/includes/dnprdnshort_md.md)], quindi ogni tipo deriva da `Object`.  
  
 Il compilatore considera questa conversione come già definita, quindi non consente di ridefinirla.  
  
 **ID errore:** BC33028  
  
### Per correggere l'errore  
  
-   Rimuovere completamente questa definizione dell'operatore. È già predefinita.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Object come tipo di dati universale \(Visual Basic\)](http://msdn.microsoft.com/it-it/5315bf21-2b22-45ab-98cd-5631dffbcb2f)