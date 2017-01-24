---
title: "Le strutture non possono dichiarare un elemento &#39;Sub New&#39; non condiviso senza parametri | Microsoft Docs"
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
  - "vbc30629"
  - "bc30629"
helpviewer_keywords: 
  - "BC30629"
ms.assetid: f4298ef7-85b1-4543-b764-4c3abda84baa
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le strutture non possono dichiarare un elemento &#39;Sub New&#39; non condiviso senza parametri
I costruttori `Sub New` dichiarati all'interno delle strutture devono accettare gli argomenti o essere dichiarati con il modificatore `Shared`.  
  
 **ID errore:** BC30629  
  
### Per correggere l'errore  
  
-   Modificare il costruttore `Sub New` in modo che accetti gli argomenti.  
  
-   Applicare il modificatore `Shared` per rendere il costruttore condiviso.  
  
## Vedere anche  
 [Structure Statement](../Topic/Structure%20Statement.md)   
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)