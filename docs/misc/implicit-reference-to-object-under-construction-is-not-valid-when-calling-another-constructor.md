---
title: "Il riferimento implicito all&#39;oggetto in fase di costruzione non &#232; valido quando viene chiamato un altro costruttore | Microsoft Docs"
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
  - "vbc31096"
  - "bc31096"
helpviewer_keywords: 
  - "BC31096"
ms.assetid: 558a2beb-aa5d-41a8-8655-ad3d16ac8acd
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il riferimento implicito all&#39;oggetto in fase di costruzione non &#232; valido quando viene chiamato un altro costruttore
È stato inserito un riferimento a un membro dell'oggetto prima che il costruttore di oggetti finisse di costruire l'oggetto.  
  
 **ID errore:** BC31096  
  
### Per correggere l'errore  
  
-   Non usare `MyBase`, `MyClass` o `Me` quando si chiama un costruttore da un altro costruttore.  
  
## Vedere anche  
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)