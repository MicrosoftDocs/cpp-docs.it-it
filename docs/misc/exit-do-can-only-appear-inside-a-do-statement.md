---
title: "&#39;Exit Do&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;Do&#39; | Microsoft Docs"
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
  - "bc30089"
  - "vbc30089"
helpviewer_keywords: 
  - "BC30089"
ms.assetid: 0e1d0b35-e42b-4b90-b8a2-91fd6ef44f06
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit Do&#39; pu&#242; trovarsi solo all&#39;interno di un&#39;istruzione &#39;Do&#39;
Un'istruzione `Exit Do` si verifica al di fuori di un ciclo `Do`.`Exit Do` è valido solo tra un'istruzione `Do` e un'istruzione `Loop` corrispondente.  
  
 **ID errore:** BC30089  
  
### Per correggere l'errore  
  
1.  Verificare che un'istruzione `Do` valida preceda `Exit Do` e che un'istruzione `Loop` valida lo segua.  
  
2.  Verificare che le altre strutture di controllo all'interno del ciclo `Do` vengano terminate correttamente.  
  
## Vedere anche  
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)