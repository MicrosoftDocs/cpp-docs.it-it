---
title: "&#200; previsto &#39;On&#39; | Microsoft Docs"
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
  - "bc36618"
  - "vbc36618"
helpviewer_keywords: 
  - "BC36618"
ms.assetid: 7cb1b205-c4c3-4485-ae3f-8942425692ff
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;On&#39;
Una clausola `Join` o `Group Join` è stata specificata senza un operatore `On`. Usare l'operatore `On` per identificare il campo chiave della variabile di intervallo per ogni raccolta. I campi chiave vengono usati per gli elementi di ogni raccolta.  
  
 **ID errore:** BC36618  
  
### Per correggere l'errore  
  
1.  Aggiungere l'operatore `On` e i campi chiave alla clausola `Join` o `Group Join`. Di seguito è riportato un esempio:  
  
    ```vb#  
    Dim petOwnersJoin = From pers In people _ Join pet In pets _ On pet.Owner Equals pers _ Select pers.FirstName, PetName = pet.Name  
    ```  
  
## Vedere anche  
 [How to: Combine Data with Joins](../Topic/How%20to:%20Combine%20Data%20with%20LINQ%20by%20Using%20Joins%20\(Visual%20Basic\).md)   
 [Join Clause](../Topic/Join%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)