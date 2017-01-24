---
title: "Non &#232; pi&#249; possibile utilizzare le istruzioni &#39;ReDim&#39; per dichiarare le variabili di matrice | Microsoft Docs"
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
  - "bc30811"
  - "vbc30811"
helpviewer_keywords: 
  - "BC30811"
ms.assetid: 9227a06e-a997-4b16-9977-19e2bce9035b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; pi&#249; possibile utilizzare le istruzioni &#39;ReDim&#39; per dichiarare le variabili di matrice
`ReDim` può essere usato solo per modificare le dimensioni di una matrice esistente.  
  
 **ID errore:** BC30811  
  
### Per correggere l'errore  
  
-   Specificare le dimensioni delle matrici quando vengono dichiarate, ad esempio:  
  
    ```  
    Dim X(20) As Integer  
    ```  
  
## Vedere anche  
 [Arrays Summary](../Topic/Arrays%20Summary%20\(Visual%20Basic\).md)   
 [ReDim Statement](../Topic/ReDim%20Statement%20\(Visual%20Basic\).md)   
 [ReDim Statement Changes in Visual Basic](http://msdn.microsoft.com/it-it/b4da14db-ff23-490f-b3c6-d7ae1b649532)