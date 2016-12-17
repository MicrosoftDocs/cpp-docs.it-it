---
title: "L&#39;istruzione non dichiara un metodo &#39;Get&#39; o &#39;Set&#39; | Microsoft Docs"
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
  - "bc30576"
  - "vbc30576"
helpviewer_keywords: 
  - "BC30576"
ms.assetid: 0f5aabd8-7cd0-4eaa-ae92-67be260cf63e
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione non dichiara un metodo &#39;Get&#39; o &#39;Set&#39;
L'istruzione non fornisce un'istruzione di dichiarazione `Get` o `Set` su una routine `Property`. Una proprietà viene definita come blocco di codice racchiuso tra le istruzioni `Property` e `End Property`. All'interno del blocco, ogni routine `Property` viene visualizzata come un blocco interno racchiuso tra un'istruzione di dichiarazione e un'istruzione end.  
  
 **ID errore:** BC30576  
  
### Per correggere l'errore  
  
-   Fornire un'istruzione di dichiarazione `Get` o `Set`.  
  
## Vedere anche  
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)