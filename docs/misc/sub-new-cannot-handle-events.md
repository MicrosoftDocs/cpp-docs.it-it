---
title: "&#39;Sub New&#39; non pu&#242; gestire eventi | Microsoft Docs"
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
  - "vbc30497"
  - "bc30497"
helpviewer_keywords: 
  - "BC30497"
ms.assetid: b8a546c4-914e-49de-b553-9fc0f41424ed
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; non pu&#242; gestire eventi
Si è provato a combinare `Sub New` e `Handles`. Questa operazione non è valida. Usare la parola chiave `Handles` alla fine di una dichiarazione di routine per fare in modo che la routine gestisca eventi generati da una variabile oggetto dichiarata con la parola chiave `WithEvents`.  
  
 **ID errore:** BC30497  
  
### Per correggere l'errore  
  
1.  Non usare `New` in questo contesto.  
  
## Vedere anche  
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [WithEvents](../Topic/WithEvents%20\(Visual%20Basic\).md)