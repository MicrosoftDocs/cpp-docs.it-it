---
title: "Le istruzioni &#39;ReDim&#39; richiedono un elenco tra parentesi dei nuovi limiti di ciascuna dimensione della matrice | Microsoft Docs"
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
  - "bc30670"
  - "vbc30670"
helpviewer_keywords: 
  - "BC30670"
ms.assetid: b2c5fea3-e7db-4797-b917-d61a65befbd4
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;ReDim&#39; richiedono un elenco tra parentesi dei nuovi limiti di ciascuna dimensione della matrice
È necessario specificare la nuova dimensione della matrice come parte dell'istruzione `ReDim`.  
  
 **ID errore:** BC30670  
  
### Per correggere l'errore  
  
-   Specificare le dimensioni di ogni serie di matrici, ad esempio:  
  
    ```  
    ReDim arr(5, 6)  
    ```  
  
## Vedere anche  
 [ReDim Statement](../Topic/ReDim%20Statement%20\(Visual%20Basic\).md)