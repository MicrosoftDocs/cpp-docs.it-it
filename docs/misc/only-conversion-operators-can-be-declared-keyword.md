---
title: "Solo gli operatori di conversione possono essere dichiarati come &#39;&lt;parolachiave&gt;&#39; | Microsoft Docs"
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
  - "bc33019"
  - "vbc33019"
helpviewer_keywords: 
  - "BC33019"
ms.assetid: 946266fe-a909-41b1-aad4-f85dc8050b88
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Solo gli operatori di conversione possono essere dichiarati come &#39;&lt;parolachiave&gt;&#39;
Un'[Operator Statement](../Topic/Operator%20Statement.md) specifica [Widening](../Topic/Widening%20\(Visual%20Basic\).md) o [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md) quando l'operatore non è un operatore di conversione.  
  
 Ogni operatore deve essere dichiarato sia come [Public](../Topic/Public%20\(Visual%20Basic\).md) che come [Shared](../Topic/Shared%20\(Visual%20Basic\).md). Un operatore di conversione, invece, può essere dichiarato con [Widening](../Topic/Widening%20\(Visual%20Basic\).md) o [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md) ma non entrambi.  
  
 Una definizione di operatore può includere facoltativamente le parole chiave [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) e [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md). Non sono consentite altre parole chiave in un'[Operator Statement](../Topic/Operator%20Statement.md).  
  
 **ID errore:** BC33019  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave `Widening` o `Narrowing` dalla definizione dell'operatore. Queste parole chiave non sono applicabili perché non viene eseguita alcuna conversione di tipi.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)