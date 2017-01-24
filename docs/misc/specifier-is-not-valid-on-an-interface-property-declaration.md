---
title: "&#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di propriet&#224; di interfaccia | Microsoft Docs"
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
  - "vbc30273"
  - "bc30273"
helpviewer_keywords: 
  - "BC30273"
ms.assetid: f10c4f5f-6176-4dba-99a9-b58f3b390fba
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;identificatore&gt;&#39; non &#232; valido in una dichiarazione di propriet&#224; di interfaccia
Un'istruzione `Property` all'interno di un'interfaccia contiene una parola chiave non valida, ad esempio `Implements`. Un'interfaccia può solo definire i membri, non implementarli.  
  
 **ID errore:** BC30273  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave non valida dall'istruzione di dichiarazione.  
  
-   Spostare l'implementazione dei membri di interfaccia in una classe che implementa l'interfaccia.  
  
## Vedere anche  
 [Interface Statement](../Topic/Interface%20Statement%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)