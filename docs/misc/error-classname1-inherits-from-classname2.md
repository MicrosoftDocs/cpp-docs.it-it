---
title: "&lt;errore&gt;: &#39;&lt;nomeclasse1&gt;&#39; eredita da &#39;&lt;nomeclasse2&gt;&#39; | Microsoft Docs"
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
  - "bc30256"
  - "vbc30256"
helpviewer_keywords: 
  - "BC30256"
ms.assetid: 170a12ee-87ef-4a49-8c84-ebf57fac435e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;errore&gt;: &#39;&lt;nomeclasse1&gt;&#39; eredita da &#39;&lt;nomeclasse2&gt;&#39;
È stata rilevata una gerarchia di ereditarietà circolare. Una classe viene designata come classe che eredita da se stessa o da un'altra classe che eredita direttamente o indirettamente da essa.  
  
 Questo messaggio può essere visualizzato più volte, per tracciare il percorso di ereditarietà circolare.  
  
 **ID errore:** BC30256  
  
### Per correggere l'errore  
  
-   Interrompere la circolarità rimuovendo almeno un'istruzione `Inherits` nel percorso di ereditarietà circolare.  
  
## Vedere anche  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)