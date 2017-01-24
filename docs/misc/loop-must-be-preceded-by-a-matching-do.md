---
title: "&#39;Loop&#39; deve essere preceduto da un &#39;Do&#39; corrispondente | Microsoft Docs"
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
  - "vbc30091"
  - "bc30091"
helpviewer_keywords: 
  - "BC30091"
ms.assetid: 05f47b2f-4eaa-4911-981e-3fce737d249f
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Loop&#39; deve essere preceduto da un &#39;Do&#39; corrispondente
Un'istruzione `Loop` si verifica senza un'istruzione `Do` corrispondente.`Loop` deve essere preceduto da un'istruzione `Do` corrispondente.  
  
 **ID errore:** BC30091  
  
### Per correggere l'errore  
  
1.  Se questo ciclo `Do` fa parte di un set di cicli `Do` annidati, verificare che ogni ciclo venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del ciclo `Do` vengano terminate correttamente.  
  
3.  Verificare che il ciclo `Do` sia formattato correttamente.  
  
## Vedere anche  
 [Do...Loop Statement](../Topic/Do...Loop%20Statement%20\(Visual%20Basic\).md)