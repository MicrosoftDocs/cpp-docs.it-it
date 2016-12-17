---
title: "&#39;MyClass&#39; deve essere seguita da &#39;.&#39; e da un identificatore | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc32028"
  - "vbc32028"
helpviewer_keywords: 
  - "BC32028"
ms.assetid: a7e92b54-32b8-4072-9576-632942f05e0f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;MyClass&#39; deve essere seguita da &#39;.&#39; e da un identificatore
`MyClass` non è una vera variabile oggetto e non può essere usata da sola. Si usa solo per accedere a un membro della classe base dell'istanza corrente come se fosse `NotOverridable` nella classe base.  
  
 **ID errore:** BC32028  
  
### Per correggere l'errore  
  
1.  Se si prevede di accedere a un membro della classe, specificare l'operatore di accesso ai membri \(`.`\) e un membro dell'istanza corrente dopo `MyClass`.  
  
2.  Se non si prevede di accedere a un membro della classe, usare la parola chiave `Me`.  
  
## Vedere anche  
 [MyClass \- eliminazione](http://msdn.microsoft.com/it-it/5db36f9b-f796-4b6a-ba34-cac1fde6eb62)   
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)