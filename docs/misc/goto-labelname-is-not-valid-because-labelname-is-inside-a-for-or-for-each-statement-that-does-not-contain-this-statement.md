---
title: "&#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;For&#39; o &#39;For Each&#39; che non contiene questa istruzione | Microsoft Docs"
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
  - "vbc30757"
  - "bc30757"
helpviewer_keywords: 
  - "BC30757"
ms.assetid: be28bec5-1bc4-4da1-ba0c-4e3faac81077
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;For&#39; o &#39;For Each&#39; che non contiene questa istruzione
Le istruzioni `GoTo` sono limitate ai passaggi all'interno del blocco di codice corrente.  
  
 **ID errore:** BC30757  
  
### Per correggere l'errore  
  
-   Ristrutturare il codice in modo che l'istruzione `GoTo` e l'etichetta siano entrambe all'interno del blocco `For`.  
  
## Vedere anche  
 [GoTo Statement](../Topic/GoTo%20Statement.md)   
 [For \(Visual Basic\)](http://msdn.microsoft.com/it-it/c470a263-9b49-4308-8fd6-8592b84a7980)