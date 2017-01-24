---
title: "Previsto &#39;%=&#39; all&#39;inizio di un&#39;espressione incorporata | Microsoft Docs"
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
  - "vbc31179"
  - "bc31179"
helpviewer_keywords: 
  - "BC31179"
ms.assetid: 20b0382e-1744-47e4-84e1-7fc926cbc4df
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Previsto &#39;%=&#39; all&#39;inizio di un&#39;espressione incorporata
L'identificatore iniziale per un'espressione incorporata, `<%=`, non è stato codificato correttamente. Si noti che non è possibile usare un carattere percentuale \(%\) nel nome di un valore letterale elemento XML.  
  
 **ID errore:** BC31179  
  
### Per correggere l'errore  
  
-   Verificare che l'identificatore iniziale per l'espressione incorporata sia codificato come `<%=`.  
  
## Vedere anche  
 [Embedded Expressions in XML](../Topic/Embedded%20Expressions%20in%20XML%20\(Visual%20Basic\).md)   
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)