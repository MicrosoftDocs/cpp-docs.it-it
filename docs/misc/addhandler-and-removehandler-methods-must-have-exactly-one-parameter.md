---
title: "I metodi &#39;AddHandler&#39; e &#39;RemoveHandler&#39; devono avere esattamente un parametro | Microsoft Docs"
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
  - "vbc31133"
  - "bc31133"
helpviewer_keywords: 
  - "BC31133"
ms.assetid: f6295626-dd63-408c-ab5f-76367f94d6ca
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi &#39;AddHandler&#39; e &#39;RemoveHandler&#39; devono avere esattamente un parametro
Una dichiarazione di evento personalizzato deve avere dichiarazioni `AddHandler` o `RemoveHandler`, ognuna delle quali accetta un solo parametro del tipo delegato specificato dalla clausola `As` dell'evento personalizzato.  
  
 **ID errore:** BC31133  
  
### Per correggere l'errore  
  
-   Rimuovere i parametri aggiuntivi dall'elenco dei parametri e modificare il tipo di parametro in modo che corrisponda al tipo delegato specificato per la clausola `As` dell'evento personalizzato.  
  
## Esempio  
 Questo esempio mostra un evento personalizzato con i tipi di parametro corretti per le dichiarazioni `AddHandler` e `RemoveHandler`.  
  
 [!code-vb[VbVbalrEventError#1](../misc/codesnippet/VisualBasic/addhandler-and-removehandler-methods-must-have-exactly-one-parameter_1.vb)]  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [AddHandler \- eliminazione](http://msdn.microsoft.com/it-it/fc464cf8-582c-48a6-a9c2-185c4c3d5ff8)   
 [RemoveHandler \- eliminazione](http://msdn.microsoft.com/it-it/35c17f61-6e22-4b87-b6e1-3ed0c27a88a0)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)