---
title: "Non &#232; possibile usare l&#39;attributo perch&#233; non ha un costruttore Public | Microsoft Docs"
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
  - "vbc30758"
  - "bc30758"
helpviewer_keywords: 
  - "BC30758"
ms.assetid: b72d1ff2-f6b2-4a89-9ac2-8765f77bcc97
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare l&#39;attributo perch&#233; non ha un costruttore Public
Il costruttore dell'attributo usato è `Private` e non può essere usato.  
  
 **ID errore:** BC30758  
  
### Per correggere l'errore  
  
1.  Se questo errore viene visualizzato con un attributo personalizzato sviluppato, modificare il relativo modificatore di accesso del costruttore `Sub``New` in `Public`.  
  
## Vedere anche  
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)   
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)