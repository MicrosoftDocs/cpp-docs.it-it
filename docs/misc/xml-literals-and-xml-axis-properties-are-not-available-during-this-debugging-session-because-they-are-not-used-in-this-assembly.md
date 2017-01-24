---
title: "I valori letterali XML e le propriet&#224; axis XML non sono disponibili nella sessione di debug perch&#233; non sono usati in questo assembly. | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31196"
  - "bc31196"
helpviewer_keywords: 
  - "BC31196"
ms.assetid: 36be5c92-dd6b-41d4-894a-2bd71d772092
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I valori letterali XML e le propriet&#224; axis XML non sono disponibili nella sessione di debug perch&#233; non sono usati in questo assembly.
È stato fatto riferimento a un valore letterale XML o a una proprietà axis XML nella finestra **Espressioni di controllo** o nella finestra di **controllo immediato** durante una sessione di debug in cui non sono disponibili le funzionalità XML in [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)]. Questa situazione si verifica con un assembly che non usa le funzionalità XML in [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] o è una build di rilascio.  
  
 **ID errore:** BC31196  
  
### Per correggere l'errore  
  
-   Avviare una nuova sessione di debug usando la build di debug dell'assembly.  
  
## Vedere anche  
 [Debugging Your Visual Basic Application](../Topic/Debugging%20Your%20Visual%20Basic%20Application.md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML Axis Properties](../Topic/XML%20Axis%20Properties%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)