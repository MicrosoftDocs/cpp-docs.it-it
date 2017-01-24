---
title: "L&#39;argomento denominato non pu&#242; corrispondere a un parametro ParamArray | Microsoft Docs"
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
  - "bc30587"
  - "vbc30587"
helpviewer_keywords: 
  - "BC30587"
ms.assetid: aff179af-96f2-4157-971e-881d8e08f5f2
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;argomento denominato non pu&#242; corrispondere a un parametro ParamArray
È stato fornito un argomento denominato, specificato con il nome dichiarato dell'argomento, seguito da due punti \(:\) e dal segno di uguale e quindi dal valore dell'argomento. Non è invece possibile passare una matrice di parametri per nome. Quando si chiama la routine, si fornisce un numero indefinito di argomenti delimitati da virgole per la matrice di parametri e il compilatore non può associare più argomenti con lo stesso nome.  
  
 **ID errore:** BC30587  
  
### Per correggere l'errore  
  
-   Passare l'argomento per posizione, anziché per nome.  
  
## Vedere anche  
 [ParamArray](../Topic/ParamArray%20\(Visual%20Basic\).md)   
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)