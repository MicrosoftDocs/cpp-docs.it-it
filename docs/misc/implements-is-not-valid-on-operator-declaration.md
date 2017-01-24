---
title: "Implements&#39; non &#232; valido nelle dichiarazioni di operatore | Microsoft Docs"
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
  - "vbc33004"
  - "bc33004"
helpviewer_keywords: 
  - "BC33004"
ms.assetid: 22f27f4d-4bbd-4f8f-a6e8-0fc10efb268d
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Implements&#39; non &#232; valido nelle dichiarazioni di operatore
Un'[Operator Statement](../Topic/Operator%20Statement.md) specifica la parola chiave [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md).  
  
 Solo una routine `Function` o `Sub`, una proprietà o un evento può implementare un membro di interfaccia. Per altre informazioni sull'implementazione, vedere [NOT IN BUILD: Esempi di implementazione di interfaccia in Visual Basic](http://msdn.microsoft.com/it-it/50bf2a30-73b6-4126-a921-075fd6eec278).  
  
 Una routine `Operator` richiede le parole chiave `Public` e `Shared` e un operatore di conversione richiede la parola chiave `Widening` o `Narrowing`. Per altre informazioni, vedere [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC33004  
  
### Per correggere l'errore  
  
-   Se la routine è destinata a implementare un membro di interfaccia, riscriverla come routine `Function` o `Sub`, proprietà o evento.  
  
-   Se la routine è destinata a definire un operatore, rimuovere la parola chiave `Implements` dalla relativa dichiarazione.  
  
## Vedere anche  
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)