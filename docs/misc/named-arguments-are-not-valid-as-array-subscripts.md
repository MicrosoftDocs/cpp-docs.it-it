---
title: "Gli argomenti denominati non sono validi come indici di matrice | Microsoft Docs"
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
  - "vbc30075"
  - "bc30075"
helpviewer_keywords: 
  - "BC30075"
ms.assetid: a25025c9-0763-4c19-9e9b-cffb9aacaa8a
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli argomenti denominati non sono validi come indici di matrice
Un indice di matrice viene specificato usando la sintassi per passare un argomento di routine in base al nome, ad esempio `Array(Index := 10)`. Questa sintassi non è valida per gli indici di matrice.  
  
 **ID errore:** BC30075  
  
### Per correggere l'errore  
  
-   Usare un'espressione costante o variabile ordinaria come indice di matrice, ad esempio `Array(10)`.  
  
## Vedere anche  
 [NOTINBUILD Cenni preliminari sulle matrici in Visual Basic](http://msdn.microsoft.com/it-it/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)   
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)