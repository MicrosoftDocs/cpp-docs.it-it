---
title: "I metodi o gli eventi che implementano membri di interfaccia non possono essere dichiarati &#39;Shared&#39; | Microsoft Docs"
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
  - "bc30505"
  - "vbc30505"
helpviewer_keywords: 
  - "BC30505"
ms.assetid: a24937c5-aeac-47de-a08b-d8696dd8221a
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi o gli eventi che implementano membri di interfaccia non possono essere dichiarati &#39;Shared&#39;
Si è provato a dichiarare come `Shared` un metodo o un evento che implementa un membro di interfaccia. Non è possibile designare come `Shared` o `Private` i metodi e gli eventi implementati in una classe, a meno che non si tratti di una classe ereditabile.  
  
 **ID errore:** BC30505  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Shared`.  
  
## Vedere anche  
 [Shared](../Topic/Shared%20\(Visual%20Basic\).md)