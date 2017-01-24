---
title: "Il parametro lambda &#39;&lt;parametro&gt;&#39;nasconde una variabile in un blocco di inclusione, una variabile di intervallo precedentemente definita o una variabile dichiarata in modo implicito in un&#39;espressione di query. | Microsoft Docs"
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
  - "bc36641"
  - "vbc36641"
helpviewer_keywords: 
  - "BC36641"
ms.assetid: ee08c366-29d1-4abb-b14c-23ae2b9680e7
caps.latest.revision: 3
caps.handback.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro lambda &#39;&lt;parametro&gt;&#39;nasconde una variabile in un blocco di inclusione, una variabile di intervallo precedentemente definita o una variabile dichiarata in modo implicito in un&#39;espressione di query.
Una variabile in un'espressione lambda ha lo stesso nome di una variabile definita in precedenza nello stesso ambito. Può trattarsi di una variabile in un blocco di codice di inclusione per un'espressione lambda annidata, una variabile di intervallo precedentemente definita all'interno di una query LINQ o una variabile dichiarata in modo implicito per una query LINQ.  
  
 **ID errore:** BC36641  
  
### Per correggere l'errore  
  
-   Verificare che tutte le variabili nell'espressione lambda abbiano nomi univoci non corrispondenti a nomi di variabili esistenti nello stesso ambito.  
  
## Vedere anche  
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)