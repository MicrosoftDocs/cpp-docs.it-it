---
title: "&#39;&lt;tipo1&gt;&#39; non pu&#242; eseguire l&#39;override di &lt;tipo2&gt; perch&#233; non &#232; dichiarato come &#39;Overridable&#39; | Microsoft Docs"
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
  - "bc31086"
  - "vbc31086"
helpviewer_keywords: 
  - "BC31086"
ms.assetid: ce071994-2e32-4460-a65d-f48f914386c6
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;tipo1&gt;&#39; non pu&#242; eseguire l&#39;override di &lt;tipo2&gt; perch&#233; non &#232; dichiarato come &#39;Overridable&#39;
Un membro in una classe derivata esegue l'override di un membro di classe base che non è contrassegnato con il modificatore `Overridable`.  
  
 **ID errore:** BC31086  
  
### Per correggere l'errore  
  
1.  Aggiungere il modificatore `Overridable` per il membro sottoposto a override nella classe base.  
  
2.  Usare la parola chiave `Shadows` per nascondere l'elemento nella classe base.  
  
## Vedere anche  
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)