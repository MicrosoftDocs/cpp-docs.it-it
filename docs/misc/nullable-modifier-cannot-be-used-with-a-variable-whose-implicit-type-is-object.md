---
title: "Non &#232; possibile usare il modificatore nullable con una variabile il cui tipo implicito &#232; &#39;Object&#39; | Microsoft Docs"
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
  - "bc33112"
  - "vbc33112"
helpviewer_keywords: 
  - "BC33112"
ms.assetid: 50b2a2ad-248d-4faa-820d-bcdf0e8b4aad
caps.latest.revision: 3
caps.handback.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare il modificatore nullable con una variabile il cui tipo implicito &#232; &#39;Object&#39;
Una dichiarazione di variabile include il modificatore di tipo nullable \(?\), ma non specifica un tipo o deduce un tipo assegnando un valore alla variabile dichiarata.  
  
 **ID errore:** BC33112  
  
### Per correggere l'errore  
  
-   Specificare un tipo quando si dichiara il parametro nullable. Il tipo non può essere <xref:System.Object>.  
  
-   Assegnare un valore quando si dichiara la variabile nullable. Il tipo della variabile nullable verrà dedotto dal valore assegnato. Il tipo del valore non può essere <xref:System.Object>.  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)