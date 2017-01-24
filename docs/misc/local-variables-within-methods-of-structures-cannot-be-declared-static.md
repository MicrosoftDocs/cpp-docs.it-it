---
title: "Le variabili locali all&#39;interno di metodi di strutture non possono essere dichiarate come &#39;Static&#39; | Microsoft Docs"
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
  - "vbc31400"
  - "bc31400"
helpviewer_keywords: 
  - "BC31400"
ms.assetid: 38b8adee-3593-40fb-b0a4-e2a47599567f
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le variabili locali all&#39;interno di metodi di strutture non possono essere dichiarate come &#39;Static&#39;
Il modificatore `Static` non può essere usato con variabili locali nelle strutture.  
  
 **ID errore:** BC31400  
  
### Per correggere l'errore  
  
1.  Rimuovere il modificatore `Static` dalla variabile locale.  
  
2.  Dichiarare la variabile come variabile statica con un ambito più ampio.  
  
## Vedere anche  
 [Static](../Topic/Static%20\(Visual%20Basic\).md)