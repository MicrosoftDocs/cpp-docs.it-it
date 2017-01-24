---
title: "L&#39;operatore &#39;&lt;simbolooperatore1&gt;&#39; corrispondente &#232; necessario per &#39;&lt;simbolooperatore2&gt;&#39; | Microsoft Docs"
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
  - "bc33033"
  - "vbc33033"
helpviewer_keywords: 
  - "BC33033"
ms.assetid: d2805e4f-08a8-4760-9539-565f51b88d13
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operatore &#39;&lt;simbolooperatore1&gt;&#39; corrispondente &#232; necessario per &#39;&lt;simbolooperatore2&gt;&#39;
Un operatore viene definito quando non è definito il suo operatore corrispondente necessario.  
  
 Gli operatori elencati di seguito devono essere definiti come coppie associate:  
  
-   `=` e `<>`  
  
-   `>` e `<`  
  
-   `>=` e `<=`  
  
-   `IsTrue` e `IsFalse`  
  
 Se si definisce uno di questi operatori in una classe o struttura, è necessario anche definirne l'operatore corrispondente nella stessa classe o struttura.  
  
 Anche se non si usa l'operatore corrispondente in modo esplicito [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] potrebbe aver la necessità di usarla. Se ad esempio si definisce una classe o una struttura usata come variabile contatore in un'[Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md), [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] richiederà entrambi gli operatori `>=` e `<=` \(così come l'operatore `+`\).  
  
 **ID errore:** BC33033  
  
### Per correggere l'errore  
  
-   Definire l'operatore corrispondente nella stessa classe o struttura. Assicurarsi di definirlo in modo significativo perché è probabile che [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] lo usi in una situazione non prevista.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Operators and Expressions](../Topic/Operators%20and%20Expressions%20in%20Visual%20Basic.md)