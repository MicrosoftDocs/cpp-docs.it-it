---
title: "La variabile di controllo Next non corrisponde alla variabile di controllo del ciclo &#39;&lt;nomevariabile&gt;&#39; | Microsoft Docs"
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
  - "vbc30070"
  - "bc30070"
helpviewer_keywords: 
  - "BC30070"
ms.assetid: e9e96008-b053-4fa0-8966-decaad99fecd
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di controllo Next non corrisponde alla variabile di controllo del ciclo &#39;&lt;nomevariabile&gt;&#39;
La variabile di controllo nell'istruzione `Next` di un ciclo `For...Next` deve corrispondere alla variabile nell'istruzione `For` corrispondente.  
  
 **ID errore:** BC30070  
  
### Per correggere l'errore  
  
1.  Controllare l'ortografia della variabile nell'istruzione `Next` e nell'istruzione `For` corrispondente per verificarne la corrispondenza.  
  
2.  Verificare che nessuna parte del ciclo di inclusione sia stata eliminata inavvertitamente.  
  
3.  Se questo ciclo fa parte di un set di cicli annidati, verificare che ogni ciclo venga terminato correttamente.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)