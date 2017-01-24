---
title: "&#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di evento di interfaccia | Microsoft Docs"
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
  - "bc30275"
  - "vbc30275"
helpviewer_keywords: 
  - "BC30275"
ms.assetid: bd12c952-c619-4753-8d6d-90ef4086fdc2
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di evento di interfaccia
Un'istruzione `Event` all'interno di un'interfaccia contiene una parola chiave non consentita, ad esempio `Implements`. Un'interfaccia può solo definire i membri, non implementarli.  
  
 **ID errore:** BC30275  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave dall'istruzione di dichiarazione.  
  
2.  Spostare l'implementazione dei membri di interfaccia in una classe che implementa l'interfaccia.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)