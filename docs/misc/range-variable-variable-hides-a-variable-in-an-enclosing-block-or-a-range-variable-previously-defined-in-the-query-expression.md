---
title: "La variabile di intervallo &lt;variabile&gt; nasconde una variabile in un blocco di inclusione o una variabile di intervallo definita in precedenza nell&#39;espressione di query. | Microsoft Docs"
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
  - "bc30978"
  - "vbc30978"
helpviewer_keywords: 
  - "BC30978"
ms.assetid: 806d94c1-653f-40c0-b1c4-95661c76a392
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La variabile di intervallo &lt;variabile&gt; nasconde una variabile in un blocco di inclusione o una variabile di intervallo definita in precedenza nell&#39;espressione di query.
Una variabile di intervallo in una query ha lo stesso nome di una variabile definita in precedenza nello stesso ambito o di una variabile di intervallo definita in precedenza all'interno della query.  
  
 **ID errore:** BC30978  
  
### Per correggere l'errore  
  
-   Verificare che tutte le variabili di intervallo nella query abbiano nomi univoci non corrispondenti a nomi di variabili esistenti nello stesso ambito.  
  
-   Racchiudere tra parentesi le query annidate con nomi di variabili di controllo duplicati, separando l'ambito per ogni variabile di intervallo.  
  
## Vedere anche  
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)