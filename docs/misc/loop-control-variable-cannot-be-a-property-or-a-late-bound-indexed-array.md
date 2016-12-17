---
title: "La variabile di controllo del ciclo non pu&#242; essere una propriet&#224; o una matrice indicizzata per cui &#232; prevista l&#39;associazione tardiva | Microsoft Docs"
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
  - "bc30039"
  - "vbc30039"
helpviewer_keywords: 
  - "BC30039"
ms.assetid: 63846449-b1df-4626-bf99-36fa9b187799
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di controllo del ciclo non pu&#242; essere una propriet&#224; o una matrice indicizzata per cui &#232; prevista l&#39;associazione tardiva
La variabile usata per eseguire l'iterazione in un ciclo `For` deve essere di un tipo di dati numerico.  
  
 **ID errore:** BC30039  
  
### Per correggere l'errore  
  
-   Modificare la dichiarazione della variabile di controllo del ciclo in modo da specificare `Integer`, `Short`, `Long`, `Byte`, `Single`, `Double` o `Decimal`.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)