---
title: "Le espressioni &#39;AddressOf&#39; non sono valide nella prima espressione di un&#39;istruzione &#39;Select Case&#39; | Microsoft Docs"
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
  - "bc36636"
  - "vbc36636"
helpviewer_keywords: 
  - "BC36636"
ms.assetid: 2ccc0ccc-d4d0-4910-8859-dedfa57c8126
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le espressioni &#39;AddressOf&#39; non sono valide nella prima espressione di un&#39;istruzione &#39;Select Case&#39;
Non è possibile usare un'espressione `AddressOf` per l'espressione di test in un'istruzione `Select Case`. Le espressioni `AddressOf` restituiscono delegati di funzione e l'espressione di test di un'istruzione `Select Case` deve essere un tipo di dati elementare.  
  
 **ID errore:** BC36636  
  
### Per correggere l'errore  
  
-   Esaminare il codice per determinare se funziona una costruzione condizionale diversa, ad esempio un'istruzione `If...Then...Else`.  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)   
 [Select...Case Statement](../Topic/Select...Case%20Statement%20\(Visual%20Basic\).md)