---
title: "&#39;End RaiseEvent&#39; deve essere preceduto da una dichiarazione &#39;RaiseEvent&#39; corrispondente | Microsoft Docs"
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
  - "vbc31126"
  - "bc31126"
helpviewer_keywords: 
  - "BC31126"
ms.assetid: 8f445128-eb5f-4610-9cec-107180871500
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End RaiseEvent&#39; deve essere preceduto da una dichiarazione &#39;RaiseEvent&#39; corrispondente
Un'istruzione `End RaiseEvent` si verifica senza un'istruzione `RaiseEvent` corrispondente.`End RaiseEvent` deve essere preceduto da un'istruzione `RaiseEvent` corrispondente.  
  
 **ID errore:** BC31126  
  
### Per correggere l'errore  
  
-   Verificare che l'istruzione `RaiseEvent` precedente sia valida e sia stata digitata correttamente.  
  
## Vedere anche  
 [RaiseEvent Statement](../Topic/RaiseEvent%20Statement.md)   
 [Event Statement](../Topic/Event%20Statement.md)