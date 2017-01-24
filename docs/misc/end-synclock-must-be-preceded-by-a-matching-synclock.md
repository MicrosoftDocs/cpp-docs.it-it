---
title: "&#39;End SyncLock&#39; deve essere preceduto da un oggetto &#39;SyncLock&#39; corrispondente | Microsoft Docs"
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
  - "vbc30674"
  - "bc30674"
helpviewer_keywords: 
  - "BC30674"
ms.assetid: 2d473b0b-ca9e-43b5-9bcb-b00766bc90a4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;End SyncLock&#39; deve essere preceduto da un oggetto &#39;SyncLock&#39; corrispondente
I blocchi `SyncLock` iniziano con la parola chiave `SyncLock` e terminano con il costrutto `End` `SyncLock`.  
  
 **ID errore:** BC30674  
  
### Per correggere l'errore  
  
-   Verificare che il blocco `SyncLock` inizi con un'istruzione `SyncLock`.  
  
## Vedere anche  
 [SyncLock Statement](../Topic/SyncLock%20Statement.md)