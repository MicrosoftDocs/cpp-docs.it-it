---
title: "La propriet&#224; &#39;&lt;campopropriet&#224;&gt;&#39; dell&#39;attributo &#39;ReadOnly&#39; non pu&#242; essere la destinazione di un&#39;assegnazione | Microsoft Docs"
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
  - "bc31501"
  - "vbc31501"
helpviewer_keywords: 
  - "BC31501"
ms.assetid: 41c3f979-6b24-4595-9503-9c80a4d6d762
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La propriet&#224; &#39;&lt;campopropriet&#224;&gt;&#39; dell&#39;attributo &#39;ReadOnly&#39; non pu&#242; essere la destinazione di un&#39;assegnazione
Si è provato ad assegnare un valore a una proprietà `ReadOnly` in un attributo.  
  
 **ID errore:** BC31501  
  
### Per correggere l'errore  
  
1.  Rimuovere l'istruzione di assegnazione di proprietà.  
  
2.  Se si usano proprietà sviluppate, rimuovere i modificatori `ReadOnly` o `Shared` dalla proprietà dell'attributo.  
  
## Vedere anche  
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)