---
title: "La classe &#39;&lt;nomeclasse&gt;&#39; non ha &#39;Sub New&#39; accessibili e non pu&#242; essere ereditata | Microsoft Docs"
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
  - "vbc31399"
  - "BC31399"
helpviewer_keywords: 
  - "BC31399"
ms.assetid: 035b333f-ff6a-4fc4-bd36-82f40b1d8bab
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe &#39;&lt;nomeclasse&gt;&#39; non ha &#39;Sub New&#39; accessibili e non pu&#242; essere ereditata
Una classe usa un'[Inherits Statement](../Topic/Inherits%20Statement.md) per specificare una classe base, ma non può accedere qualsiasi altro costruttore nella classe base desiderata.  
  
 Questa situazione può verificarsi se la classe base desiderata non ha costruttori o se ha costruttori con livelli di accesso che impediscono l'accesso da un'altra classe.  
  
 Quando si eredita una classe, il costruttore deve chiamare il costruttore di classe base usando [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9). Se non si effettua questa chiamata, o se non si scrive un costruttore esplicito, Visual Basic genera un costruttore implicito che chiama `MyBase.New()`.  
  
 **ID errore:** BC31399  
  
### Per correggere l'errore  
  
1.  Se si ha il controllo del codice sorgente sulla classe base desiderata, modificare il livello di accesso di almeno uno dei costruttori in modo che un'altra classe possa accedervi.  
  
2.  Se non è possibile modificare i livelli di accesso dei costruttori di classe base desiderata, ereditare da una classe diversa o non ereditarli affatto.  
  
## Vedere anche  
 [Inherits Statement](../Topic/Inherits%20Statement.md)   
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9)   
 [New Operator](../Topic/New%20Operator%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)