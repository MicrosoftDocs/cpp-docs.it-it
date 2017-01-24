---
title: "Il riferimento all&#39;oggetto in fase di creazione non &#232; valido durante la chiamata a un altro costruttore | Microsoft Docs"
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
  - "bc31095"
  - "vbc31095"
helpviewer_keywords: 
  - "BC31095"
ms.assetid: 68be49f1-e662-45c7-9998-e0006324535d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il riferimento all&#39;oggetto in fase di creazione non &#232; valido durante la chiamata a un altro costruttore
È stato inserito un riferimento a un membro dell'oggetto prima che il costruttore completasse la creazione dell'oggetto.  
  
 **ID errore:** BC31095  
  
### Per correggere l'errore  
  
-   Non usare `MyBase`, `MyClass` o `Me` quando si chiama un costruttore da un altro costruttore.  
  
## Vedere anche  
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)