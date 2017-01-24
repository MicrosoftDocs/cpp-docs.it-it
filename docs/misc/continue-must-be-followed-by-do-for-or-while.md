---
title: "&#39;Continue&#39; deve essere seguito da &#39;Do&#39;, &#39;For&#39; o &#39;While&#39; | Microsoft Docs"
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
  - "bc30781"
  - "vbc30781"
helpviewer_keywords: 
  - "BC30781"
ms.assetid: a0d5854d-ca44-4c6b-9458-4fc50d29281a
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Continue&#39; deve essere seguito da &#39;Do&#39;, &#39;For&#39; o &#39;While&#39;
Un'istruzione `Continue` deve essere seguita da `Do`, `For` o `While`, a seconda che l'istruzione `Continue` si trovi all'interno di un ciclo `Do...Loop`, `For...Next` o `While...End While`.  
  
 **ID errore:** BC30781  
  
### Per correggere l'errore  
  
1.  Se l'istruzione `Continue` si trova in un ciclo `Do...Loop`, modificare l'istruzione in `Continue Do`.  
  
2.  Se l'istruzione `Continue` si trova in un ciclo `For...Next`, modificare l'istruzione in `Continue For`.  
  
3.  Se l'istruzione `Continue` si trova in un ciclo `While...End While`, modificare l'istruzione in `Continue While`.  
  
4.  In caso contrario, rimuovere l'istruzione `Continue`.  
  
## Vedere anche  
 [Continue Statement](../Topic/Continue%20Statement%20\(Visual%20Basic\).md)