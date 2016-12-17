---
title: "Option Strict On non ammette operandi di tipo Object per l&#39;operatore &#39;&lt;nomeoperatore&gt;&#39; | Microsoft Docs"
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
  - "bc32013"
  - "vbc32013"
helpviewer_keywords: 
  - "BC32013"
ms.assetid: cd197da8-2676-453b-884b-3231fb6f909d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non ammette operandi di tipo Object per l&#39;operatore &#39;&lt;nomeoperatore&gt;&#39;
Option Strict On non ammette operandi di tipo Object per l'operatore '\<nomeoperatore\>'. Usare l'operatore Is per verificare l'identità dell'oggetto.  
  
 Un operatore di confronto aritmetico, ad esempio `=`, viene usato con una o più variabili oggetto quando `Option Strict` è `On`.  
  
 **ID errore:** BC32013  
  
### Per correggere l'errore  
  
1.  Attivare `Option Strict Off` se le variabili oggetto contengono valori numerici e si intende usare un confronto aritmetico.  
  
2.  Usare l'operatore `Is` per verificare l'identità dell'oggetto.  
  
## Vedere anche  
 [Comparison Operators](../Topic/Comparison%20Operators%20\(Visual%20Basic\).md)   
 [Is Operator](../Topic/Is%20Operator%20\(Visual%20Basic\).md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)