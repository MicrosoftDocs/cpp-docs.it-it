---
title: "Gli inizializzatori dei membri di struttura sono validi solo per costanti e membri &#39;Shared&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31049"
  - "vbc31049"
helpviewer_keywords: 
  - "BC31049"
ms.assetid: 8356978e-7f84-4932-be0f-dda005c9f8ca
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli inizializzatori dei membri di struttura sono validi solo per costanti e membri &#39;Shared&#39;
Una variabile membro di struttura è stata inizializzata come parte della relativa dichiarazione.  
  
 **ID errore:** BC31049  
  
### Per correggere l'errore  
  
-   Usare una costante anziché una variabile.  
  
-   Aggiungere un costruttore con parametri alla struttura. Ad esempio:  
  
    ```  
    Structure TestStruct Public t As Integer Sub New(ByVal Tval As Integer) t = Tval End Sub End Structure  
    ```  
  
## Vedere anche  
 [How to: Declare a Structure](../Topic/How%20to:%20Declare%20a%20Structure%20\(Visual%20Basic\).md)   
 [Constants and Enumerations](../Topic/Constants%20and%20Enumerations%20in%20Visual%20Basic.md)