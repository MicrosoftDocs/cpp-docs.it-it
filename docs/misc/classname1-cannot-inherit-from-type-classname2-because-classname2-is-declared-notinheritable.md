---
title: "&#39;&lt;nomeclasse1&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nomeclasse2&gt;&#39; perch&#233; &#39;&lt;nomeclasse2&gt;&#39; &#232; dichiarata come &#39;NotInheritable&#39; | Microsoft Docs"
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
  - "vbc30299"
  - "bc30299"
helpviewer_keywords: 
  - "BC30299"
ms.assetid: 627d50f5-9e75-495d-93f7-50096ba2ea08
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeclasse1&gt;&#39; non pu&#242; ereditare da &lt;tipo&gt; &#39;&lt;nomeclasse2&gt;&#39; perch&#233; &#39;&lt;nomeclasse2&gt;&#39; &#232; dichiarata come &#39;NotInheritable&#39;
Una classe tenta di ereditare da un'altra classe, ma la classe base desiderata è specificata come `NotInheritable`. Le classi `NotInheritable` vengono usate principalmente per evitare derivazioni indesiderate.  
  
 **ID errore:** BC30299  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `NotInheritable` dalla definizione della classe base desiderata, oppure rimuovere l'istruzione `Inherits`.  
  
## Vedere anche  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)   
 [NotInheritable](../Topic/NotInheritable%20\(Visual%20Basic\).md)   
 [Inherits Statement](../Topic/Inherits%20Statement.md)