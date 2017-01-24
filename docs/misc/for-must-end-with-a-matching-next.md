---
title: "&#39;For&#39; deve terminare con un oggetto &#39;Next&#39; corrispondente | Microsoft Docs"
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
  - "vbc30084"
  - "bc30084"
helpviewer_keywords: 
  - "BC30084"
ms.assetid: 4c5e49c2-7343-4487-b5f8-a38c97ba895b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;For&#39; deve terminare con un oggetto &#39;Next&#39; corrispondente
Un'istruzione `For` si verifica senza un'istruzione `Next` corrispondente. Deve essere usata un'istruzione `Next` per terminare il ciclo `For`.  
  
 **ID errore:** BC30084  
  
### Per correggere l'errore  
  
-   Se questo ciclo `For` fa parte di un set di cicli annidati, verificare che ogni ciclo venga terminato correttamente.  
  
-   Aggiungere un'istruzione `Next` alla fine del ciclo `For`.  
  
## Vedere anche  
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)