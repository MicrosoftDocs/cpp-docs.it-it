---
title: "&#200; previsto &#39;Group&#39; o un identificatore | Microsoft Docs"
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
  - "vbc36707"
  - "bc36707"
helpviewer_keywords: 
  - "BC36707"
ms.assetid: 214e4aa3-d20f-41b3-902c-f1076d31b832
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;Group&#39; o un identificatore
La parte `Into` di una clausola `Group By` o `Group Join` non include la parola chiave `Group`. Per identificare il nome della variabile da usare per i risultati raggruppati, è necessario includere la parola chiave `Group` nella clausola `Into` di una clausola `Group By` o `Group Join`. Può trattarsi di un nome specificato o della parola chiave `Group`.  
  
 **ID errore:** BC36707  
  
### Per correggere l'errore  
  
1.  Verificare che la parte `Into` di una clausola `Group By` o `Group Join` includa la parola chiave `Group`, come mostrato nell'esempio seguente.  
  
    ```vb#  
    Dim orders = From order In orderList _ Order By order.OrderDate _ Group By OrderDate = order.OrderDate _ Into OrdersByDate = Group  
    ```  
  
## Vedere anche  
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [Clausola Group By](../Topic/Group%20By%20Clause%20\(Visual%20Basic\).md)   
 [Group Join Clause](../Topic/Group%20Join%20Clause%20\(Visual%20Basic\).md)