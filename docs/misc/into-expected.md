---
title: "&#200; previsto &#39;Into&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc36615"
  - "vbc36615"
helpviewer_keywords: 
  - "BC36615"
ms.assetid: 24062dd9-a973-43b6-88d3-c11adc5a3736
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;Into&#39;
Una clausola `Aggregate`, `Group By` o `Group Join` è stata specificata senza un operatore `Into`. Usare l'operatore `Into` per identificare le funzioni di aggregazione da applicare al risultato della query e per identificare il membro del tipo di risultato della query per contenere i risultati raggruppati \(usando la funzione di aggregazione `Group`\).  
  
 **ID errore:** BC36615  
  
### Per correggere l'errore  
  
1.  Aggiungere l'operatore `Into` per la clausola `Aggregate`, `Group By` o `Group Join`. Di seguito è riportato un esempio:  
  
    ```vb#  
    Dim orders = From order In orderList _ Order By order.OrderDate _ Group By OrderDate = order.OrderDate _ Into OrdersByDate = Group  
    ```  
  
## Vedere anche  
 [Aggregate Clause](../Topic/Aggregate%20Clause%20\(Visual%20Basic\).md)   
 [Clausola Group By](../Topic/Group%20By%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)