---
title: "L&#39;istruzione &#39;Return&#39; all&#39;interno di un Function, un Get o un Operator deve restituire un valore | Microsoft Docs"
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
  - "bc30654"
  - "vbc30654"
helpviewer_keywords: 
  - "BC30654"
ms.assetid: af0fb1fc-1b2e-4cae-9768-10965cda5506
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;istruzione &#39;Return&#39; all&#39;interno di un Function, un Get o un Operator deve restituire un valore
Le istruzioni `Return` devono essere usate per restituire un valore a una routine chiamante. Non è possibile usare le istruzioni `Return` per controllare il flusso di programma.  
  
 **ID errore:** BC30654  
  
### Per correggere l'errore  
  
1.  Specificare un valore che la funzione o la routine può restituire.  
  
2.  Usare l'istruzione `End` per determinare l'uscita del programma dalla routine corrente.  
  
## Vedere anche  
 [Return Statement](../Topic/Return%20Statement%20\(Visual%20Basic\).md)   
 [End \<keyword\> Statement](../Topic/End%20%3Ckeyword%3E%20Statement%20\(Visual%20Basic\).md)