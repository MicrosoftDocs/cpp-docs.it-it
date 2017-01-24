---
title: "&#39;Handles&#39; non &#232; valido nelle dichiarazioni di operatore | Microsoft Docs"
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
  - "bc33003"
  - "vbc33003"
helpviewer_keywords: 
  - "BC33003"
ms.assetid: 8336402c-9393-4e8e-834d-55c2268f24f6
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Handles&#39; non &#232; valido nelle dichiarazioni di operatore
Un'[Operator Statement](../Topic/Operator%20Statement.md) specifica la parola chiave [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md).  
  
 Solo una routine `Sub` può gestire eventi. Una routine `Operator` non può farlo. Per altre informazioni sui gestori eventi, vedere [How to: Call an Event Handler in Visual Basic](../Topic/How%20to:%20Call%20an%20Event%20Handler%20in%20Visual%20Basic.md).  
  
 Una routine `Operator` richiede le parole chiave `Public` e `Shared` e un operatore di conversione richiede la parola chiave `Widening` o `Narrowing`. Per altre informazioni, vedere [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC33003  
  
### Per correggere l'errore  
  
-   Se la routine è destinata a gestire eventi, riscriverla come routine `Sub`.  
  
-   Se la routine è destinata a definire un operatore, rimuovere la parola chiave `Handles` dalla relativa dichiarazione.  
  
## Vedere anche  
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)