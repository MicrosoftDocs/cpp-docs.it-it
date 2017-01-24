---
title: "&#39;ReDim&#39; non pu&#242; modificare il numero di dimensioni di una matrice | Microsoft Docs"
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
  - "vbc30415"
  - "bc30415"
helpviewer_keywords: 
  - "BC30415"
ms.assetid: 8ce97188-ff96-4e8c-917c-efc2f94173a3
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ReDim&#39; non pu&#242; modificare il numero di dimensioni di una matrice
Si è provato a usare `ReDim` per modificare il numero di dimensioni di una matrice. L'istruzione `ReDim` può essere usata per modificare la grandezza di una o più dimensioni di una matrice che è già stata dichiarata formalmente, ma non può modificare il numero di dimensioni di una matrice.  
  
 **ID errore:** BC30415  
  
### Per correggere l'errore  
  
-   Assicurarsi di voler dichiarare il numero di dimensioni anziché le dimensioni della matrice e, se possibile, usare `Dim` per dichiarare una nuova matrice con il numero di dimensioni desiderato.  
  
## Vedere anche  
 [ReDim Statement](../Topic/ReDim%20Statement%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD Cenni preliminari sulle matrici in Visual Basic](http://msdn.microsoft.com/it-it/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)