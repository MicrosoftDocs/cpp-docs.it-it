---
title: "L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non &#232; implementata da questa classe | Microsoft Docs"
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
  - "bc31035"
  - "vbc31035"
helpviewer_keywords: 
  - "BC31035"
ms.assetid: 99ddabb5-20e0-4cf6-a8d4-1ca91f3c7511
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; non &#232; implementata da questa classe
Un membro di questa classe o struttura tenta di implementare un membro di un'interfaccia non implementata dalla classe o struttura.  
  
 **ID errore:** BC31035  
  
### Per correggere l'errore  
  
-   Aggiungere un'istruzione `Implements` all'inizio della classe o struttura per fare in modo che implementi l'interfaccia appropriata.  
  
-   Rimuovere la parola chiave `Implements` dal membro che causa l'errore.  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)   
 [Implements Statement](../Topic/Implements%20Statement.md)