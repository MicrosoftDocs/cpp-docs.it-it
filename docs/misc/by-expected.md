---
title: "Previsto &#39;By&#39; | Microsoft Docs"
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
  - "vbc36605"
  - "bc36605"
helpviewer_keywords: 
  - "BC36605"
ms.assetid: d0397b6e-bfc2-400c-92fc-efe82036cfdb
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Previsto &#39;By&#39;
Una clausola `Order By` o `Group By` è stata specificata senza la parola chiave `By`.  
  
 **ID errore:** BC36605  
  
### Per correggere l'errore  
  
1.  Aggiungere la parola chiave `By` alla clausola `Order By` o `Group By`. Di seguito è riportato un esempio:  
  
    ```vb#  
    Dim customersByCountry = From cust In customers _  
                             Order By cust.Country, cust.City _  
                             Group By CountryName = cust.Country _  
                             Into RegionalCustomers = Group, Count() _  
                             Order By CountryName  
    ```  
  
## Vedere anche  
 [How to: Sort Query Results](../Topic/How%20to:%20Sort%20Query%20Results%20by%20Using%20LINQ%20\(Visual%20Basic\).md)   
 [Order By Clause](../Topic/Order%20By%20Clause%20\(Visual%20Basic\).md)   
 [Clausola Group By](../Topic/Group%20By%20Clause%20\(Visual%20Basic\).md)   
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)