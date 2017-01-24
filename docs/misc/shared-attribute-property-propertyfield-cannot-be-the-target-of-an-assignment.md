---
title: "La propriet&#224; &#39;&lt;campopropriet&#224;&gt;&#39; dell&#39;attributo &#39;Shared&#39; non pu&#242; essere la destinazione di un&#39;assegnazione | Microsoft Docs"
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
  - "bc31500"
  - "vbc31500"
helpviewer_keywords: 
  - "BC31500"
ms.assetid: dffa2b07-9609-4aa3-ae58-c0804d8a05d6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La propriet&#224; &#39;&lt;campopropriet&#224;&gt;&#39; dell&#39;attributo &#39;Shared&#39; non pu&#242; essere la destinazione di un&#39;assegnazione
Si è provato ad assegnare un valore a una proprietà `ReadOnly` o `Shared` in un attributo.  
  
 **ID errore:** BC31500  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione di assegnazione di proprietà.  
  
2.  Se si usano proprietà sviluppate, rimuovere i modificatori `ReadOnly` o `Shared` dalla proprietà dell'attributo.  
  
## Vedere anche  
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)