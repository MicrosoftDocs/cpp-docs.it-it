---
title: "&#39;Exit For&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;For&#39; | Microsoft Docs"
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
  - "bc30096"
  - "vbc30096"
helpviewer_keywords: 
  - "BC30096"
ms.assetid: 1062a329-9364-4234-9175-4c70a51cb7ae
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit For&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;For&#39;
Un'istruzione `Exit For` si verifica al di fuori di un ciclo `For`.`Exit For` è valido solo tra un'istruzione `For` o `For Each` e un'istruzione `Next` corrispondente.  
  
 **ID errore:** BC30096  
  
### Per correggere l'errore  
  
1.  Verificare che un'istruzione `For` o `For Each` valida preceda `Exit For` e che un'istruzione `Next` valida lo segua.  
  
2.  Verificare che le altre strutture di controllo all'interno del ciclo `For` vengano terminate correttamente.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For Each...Next](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)