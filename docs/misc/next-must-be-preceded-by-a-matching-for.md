---
title: "&#39;Next&#39; deve essere preceduto da un oggetto &#39;For&#39; corrispondente | Microsoft Docs"
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
  - "vbc30092"
  - "bc30092"
helpviewer_keywords: 
  - "BC30092"
ms.assetid: 4bf49bb2-c69b-443d-aa58-cb40fcfb1370
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Next&#39; deve essere preceduto da un oggetto &#39;For&#39; corrispondente
Un'istruzione `Next` si verifica senza un'istruzione `For` o `For Each` corrispondente.`Next` deve essere preceduto da un'istruzione `For` o `For Each` corrispondente.  
  
 **ID errore:** BC30092  
  
### Per correggere l'errore  
  
1.  Se questo ciclo `For` fa parte di un set di cicli `For` annidati, verificare che ogni ciclo venga terminato correttamente.  
  
2.  Verificare che le altre strutture di controllo all'interno del ciclo `For` vengano terminate correttamente.  
  
3.  Verificare che il ciclo `For` sia formattato correttamente.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For Each...Next](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)