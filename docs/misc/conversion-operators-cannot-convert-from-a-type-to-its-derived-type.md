---
title: "Gli operatori di conversione non possono convertire un tipo nel relativo tipo derivato | Microsoft Docs"
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
  - "vbc33027"
  - "bc33027"
helpviewer_keywords: 
  - "BC33027"
ms.assetid: 861954f2-f563-4234-af84-bdd02f39979b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori di conversione non possono convertire un tipo nel relativo tipo derivato
Un operatore di conversione è dichiarato con un tipo restituito derivato dal tipo di parametro.  
  
 In fase di compilazione [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] considera come esistente una conversione predefinita da qualsiasi tipo riferimento a qualsiasi tipo nella propria gerarchia di ereditarietà, vale a dire qualsiasi tipo da cui deriva o che deriva da esso. Questo tipo di conversione potrebbe non riuscire in fase di esecuzione, tuttavia il compilatore non può prevedere i risultati in fase di esecuzione, quindi ne consente la compilazione.  
  
 Il compilatore considera questa conversione come già definita, quindi non consente di ridefinirla.  
  
 **ID errore:** BC33027  
  
### Per correggere l'errore  
  
-   Rimuovere completamente questa definizione dell'operatore. È già predefinita.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)