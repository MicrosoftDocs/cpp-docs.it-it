---
title: "Gli operatori non possono essere dichiarati &lt;parolachiave&gt;&#39; | Microsoft Docs"
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
  - "vbc33013"
  - "bc33013"
helpviewer_keywords: 
  - "BC33013"
ms.assetid: bfd805f4-e30e-4553-9cb7-2690595f0480
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operatori non possono essere dichiarati &lt;parolachiave&gt;&#39;
Un operatore è dichiarato con una parola chiave che non è valida per le definizioni dell'operatore.  
  
 Ogni operatore deve essere dichiarato sia come [Public](../Topic/Public%20\(Visual%20Basic\).md) che come [Shared](../Topic/Shared%20\(Visual%20Basic\).md). Inoltre, un operatore di conversione deve essere dichiarato con [Widening](../Topic/Widening%20\(Visual%20Basic\).md) o [Narrowing](../Topic/Narrowing%20\(Visual%20Basic\).md), ma non con entrambi. Una definizione di operatore può includere facoltativamente le parole chiave [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md) o [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md). Non sono consentite altre parole chiave in un'[Operator Statement](../Topic/Operator%20Statement.md).  
  
 **ID errore:** BC33013  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave non valida dalla definizione dell'operatore.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)