---
title: "I parametri &lt;tipo&gt; non possono essere dichiarati &#39;ParamArray&#39; | Microsoft Docs"
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
  - "bc33009"
  - "vbc33009"
helpviewer_keywords: 
  - "BC33009"
ms.assetid: faba9aef-ca4e-4c4d-934c-a3e3d3fa3c3e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I parametri &lt;tipo&gt; non possono essere dichiarati &#39;ParamArray&#39;
Una definizione di un delegato, di un evento o di un operatore dichiara un parametro [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md).  
  
 I parametri `ParamArray` sono consentiti solo per i parametri `Declare`, `Function`, `Property` e `Sub`.  
  
 **ID errore:** BC33009  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `ParamArray` dall'elenco di parametri.  
  
-   Se si sta definendo un operatore, può essere possibile ottenere la funzionalità `ParamArray` con una serie di overload.  
  
-   Se si sta definendo un delegato o un evento, è necessario rielaborare la logica complessiva di questa parte di applicazione. Non è possibile usare i parametri [Optional](../Topic/Optional%20\(Visual%20Basic\).md) o `ParamArray`, oppure versioni di overload, per parametri del delegato o di evento.  
  
## Vedere anche  
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)