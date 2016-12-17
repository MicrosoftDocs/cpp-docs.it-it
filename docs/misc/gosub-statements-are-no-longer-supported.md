---
title: "Le istruzioni &#39;GoSub&#39; non sono pi&#249; supportate | Microsoft Docs"
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
  - "vbc30814"
  - "bc30814"
helpviewer_keywords: 
  - "BC30814"
ms.assetid: fef2d78f-39ba-4aad-93b3-c7a08df9f805
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;GoSub&#39; non sono pi&#249; supportate
`GoSub` non può essere usato per chiamare una routine.  
  
 **ID errore:** BC30814  
  
### Per correggere l'errore  
  
-   Chiamare la routine direttamente, senza usare `GoSub`, ad esempio:  
  
    ```  
    CalculateInterest(Amount, Rate, Time)  
    ```  
  
## Vedere anche  
 [Procedures](../Topic/Procedures%20in%20Visual%20Basic.md)