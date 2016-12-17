---
title: "&#39;&lt;metodo1&gt;&#39; e &#39;&lt;metodo2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per parametri dichiarati come &#39;ParamArray&#39; | Microsoft Docs"
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
  - "bc30368"
  - "vbc30368"
helpviewer_keywords: 
  - "BC30368"
ms.assetid: 6111df0c-fc3e-40b2-b536-effbd132ef72
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; e &#39;&lt;metodo2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per parametri dichiarati come &#39;ParamArray&#39;
Si è provato a eseguire l'overload di due metodi che si differenziano solo per uno o più parametri `ParamArray`. Per il compilatore, una routine con un parametro `ParamArray` ha un numero infinito di overload che si differenziano tra loro per ciò che viene passato alla matrice di parametri.  
  
 **ID errore:** BC30368  
  
### Per correggere l'errore  
  
-   Verificare che i metodi non si differenzino solo per i parametri `ParamArray`.  
  
## Vedere anche  
 [Considerations in Overloading Procedures](../Topic/Considerations%20in%20Overloading%20Procedures%20\(Visual%20Basic\).md)   
 [Parameter Arrays](../Topic/Parameter%20Arrays%20\(Visual%20Basic\).md)