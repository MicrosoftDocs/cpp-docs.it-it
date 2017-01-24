---
title: "&#200; necessario fare riferimento ad almeno una variabile di intervallo su entrambi i lati dell&#39;operatore &#39;Equals&#39; | Microsoft Docs"
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
  - "vbc36622"
  - "bc36622"
helpviewer_keywords: 
  - "BC36622"
ms.assetid: 8d301227-131d-4977-b3ff-1fc4e427f8fa
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; necessario fare riferimento ad almeno una variabile di intervallo su entrambi i lati dell&#39;operatore &#39;Equals&#39;
È necessario fare riferimento ad almeno una variabile di intervallo su entrambi i lati dell'operatore 'Equals'. Le variabili di intervallo \<variabili\> devono essere visualizzate su entrambi i lati dell'operatore 'Equals'.  
  
 Le variabili di intervallo identificate per le raccolte da includere in una query LINQ devono trovarsi sui lati opposti dell'operatore `Equals`, a seconda della raccolta per la quale vengono identificate, ossia le variabili di intervallo identificate per una delle raccolte da includere devono trovarsi sul lato opposto dell'operatore `Equals` rispetto alle variabili di intervallo identificate per l'altra raccolta da includere. Le variabili di intervallo di raccolte separate non possono essere combinate sullo stesso lato dell'operatore `Equals`.  
  
 È necessario fare riferimento ad almeno una variabile da ogni raccolta da unire su ciascun lato dell'operatore `Equals`.  
  
 **ID errore:** BC36622  
  
## Vedere anche  
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)   
 [Join Clause](../Topic/Join%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [From Clause](../Topic/From%20Clause%20\(Visual%20Basic\).md)   
 [Select Clause](../Topic/Select%20Clause%20\(Visual%20Basic\).md)