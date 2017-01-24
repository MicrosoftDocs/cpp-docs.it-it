---
title: "&#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valida perch&#233; &lt;nomeetichetta&gt; si trova all&#39;interno di un&#39;istruzione &#39;With&#39; che non contiene questa istruzione | Microsoft Docs"
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
  - "bc30756"
  - "vbc30756"
helpviewer_keywords: 
  - "BC30756"
ms.assetid: 9c39d4ad-0b9b-45e9-b6c2-d983144b5b23
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valida perch&#233; &lt;nomeetichetta&gt; si trova all&#39;interno di un&#39;istruzione &#39;With&#39; che non contiene questa istruzione
Le istruzioni `GoTo` sono limitate ai passaggi all'interno del blocco di codice corrente.  
  
 **ID errore:** BC30756  
  
### Per correggere l'errore  
  
-   Ristrutturare il codice in modo che l'istruzione `GoTo` e l'etichetta siano entrambe all'interno del blocco `With`.  
  
## Vedere anche  
 [GoTo Statement](../Topic/GoTo%20Statement.md)