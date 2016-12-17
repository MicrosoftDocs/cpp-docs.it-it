---
title: "I valori Enum devono essere dichiarati come tipo integrale | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30650"
  - "vbc30650"
helpviewer_keywords: 
  - "BC30650"
ms.assetid: 566aa501-d283-4c1f-b494-3bc5fbe80e04
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I valori Enum devono essere dichiarati come tipo integrale
Gli unici tipi validi che è possibile usare nelle enumerazioni sono `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long` e `ULong`. Non è possibile usare altri tipi di dati.  
  
 **ID errore:** BC30650  
  
### Per correggere l'errore  
  
-   Specificare un tipo di dati tra `SByte`, `Byte`, `Short`, `UShort`, `Integer`, `UInteger`, `Long` o `ULong`.  
  
## Vedere anche  
 [Data Types](../Topic/Data%20Type%20Summary%20\(Visual%20Basic\).md)   
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)