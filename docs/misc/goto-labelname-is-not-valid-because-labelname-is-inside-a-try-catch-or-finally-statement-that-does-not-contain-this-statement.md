---
title: "&#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;Try&#39;, &#39;Catch&#39; o &#39;Finally&#39; che non contiene questa istruzione | Microsoft Docs"
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
  - "bc30754"
  - "vbc30754"
helpviewer_keywords: 
  - "BC30754"
ms.assetid: 2eefc7fb-fdf0-41e9-bf60-c3bc93580e14
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;GoTo &lt;nomeetichetta&gt;&#39; non &#232; valido perch&#233; &#39;&lt;nomeetichetta&gt;&#39; si trova all&#39;interno di un&#39;istruzione &#39;Try&#39;, &#39;Catch&#39; o &#39;Finally&#39; che non contiene questa istruzione
Non è consentito creare rami in un blocco `Try...Catch...Finally`.  
  
 **ID errore:** BC30754  
  
### Per correggere l'errore  
  
-   Ristrutturare il codice inserendo l'etichetta prima del blocco `Try...Catch...Finally`.  
  
## Vedere anche  
 [Try...Catch...Finally Statement](../Topic/Try...Catch...Finally%20Statement%20\(Visual%20Basic\).md)