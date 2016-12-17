---
title: "&#200; previsto &#39;Assembly&#39; o &#39;Module&#39; | Microsoft Docs"
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
  - "vbc32015"
  - "bc32015"
helpviewer_keywords: 
  - "BC32015"
ms.assetid: 6e62fe8d-a875-4995-b6b2-443e75c65e85
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;Assembly&#39; o &#39;Module&#39;
Un attributo globale viene specificato senza indicare se si riferisce all'intero assembly o solo al modulo corrente. Gli attributi globali devono specificare `Assembly` o `Module`.  
  
 Un attributo globale è un attributo che viene specificato da solo su una riga di codice sorgente invece di essere applicato alla dichiarazione di uno specifico elemento di programmazione.  
  
 **ID errore:** BC32015  
  
### Per correggere l'errore  
  
1.  Se si intende usare l'attributo come globale, aggiungere la parola chiave `Assembly` o `Module` all'inizio del blocco dell'attributo, seguita da due punti \(:\).  
  
2.  Se non si intende usare l'attributo come globale, eliminare il blocco dell'attributo o inserirlo nella dichiarazione di un elemento di programmazione.  
  
## Vedere anche  
 [Assembly](../Topic/Assembly%20\(Visual%20Basic\).md)   
 [Module \<keyword\>](../Topic/Module%20%3Ckeyword%3E%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Applicazione di attributi](http://msdn.microsoft.com/it-it/2b1703ed-4437-49b3-bc0b-568094324f47)   
 [NOT IN BUILD: Attributi globali in Visual Basic](http://msdn.microsoft.com/it-it/253a32d8-1531-4504-b687-088554ab71d2)