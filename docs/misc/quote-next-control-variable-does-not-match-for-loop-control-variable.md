---
title: "La variabile di controllo &#39;Next&#39; non corrisponde alla variabile di controllo del ciclo &#39;For&#39; | Microsoft Docs"
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
  - "vbc30976"
  - "bc30976"
helpviewer_keywords: 
  - "BC30976"
ms.assetid: 87c2d464-43bf-426f-b78b-7bc07ba171e6
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di controllo &#39;Next&#39; non corrisponde alla variabile di controllo del ciclo &#39;For&#39;
La variabile di controllo nell'istruzione `Next` di un ciclo `For...Next` deve corrispondere alla variabile nell'istruzione `For` corrispondente.  
  
 **ID errore:** BC30976  
  
### Per correggere l'errore  
  
-   Controllare l'ortografia della variabile nell'istruzione `Next` e nell'istruzione `For` corrispondente per verificarne la corrispondenza.  
  
-   Verificare che nessuna parte del ciclo di inclusione sia stata eliminata inavvertitamente.  
  
-   Se questo ciclo fa parte di un set di cicli annidati, verificare che ogni ciclo venga terminato correttamente.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)