---
title: "&#39;ReDim&#39; non pu&#242; modificare il numero di dimensioni | Microsoft Docs"
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
  - "vbrArray_RankMismatch"
ms.assetid: 52505298-9985-4682-8f6e-ff7d56077f34
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;ReDim&#39; non pu&#242; modificare il numero di dimensioni
Un'operazione tenta di usare l'istruzione `ReDim` per modificare il numero di dimensioni di una matrice.`ReDim` può modificare la grandezza di una o più dimensioni di una matrice che è già stata dichiarata formalmente, ma non può modificare il numero di dimensioni di una matrice.  
  
### Per correggere l'errore  
  
-   Assicurarsi di voler modificare il numero di dimensioni anziché la grandezza delle dimensioni della matrice e, se possibile, usare `Dim` per dichiarare una nuova matrice con il numero di dimensioni desiderato.  
  
## Vedere anche  
 [NOTINBUILD Cenni preliminari sulle matrici in Visual Basic](http://msdn.microsoft.com/it-it/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)   
 [NOTINBUILD Matrici multidimensionali in Visual Basic](http://msdn.microsoft.com/it-it/d92cad25-07e2-4d79-8ea4-ab269700f5de)   
 [ReDim Statement](../Topic/ReDim%20Statement%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)