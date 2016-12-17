---
title: "&#39;&lt;metodo1&gt;&#39; e &#39;&lt;metodo2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per i parametri facoltativi | Microsoft Docs"
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
  - "vbc30300"
  - "bc30300"
helpviewer_keywords: 
  - "BC30300"
ms.assetid: adb44ceb-57a0-4123-8fd8-7eb83c3f601f
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; e &#39;&lt;metodo2&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano solo per i parametri facoltativi
Si è provato a eseguire l'overload di un metodo con un altro metodo che è diverso dal primo solo per i parametri facoltativi. Un metodo con un parametro facoltativo è equivalente a due metodi di overload, uno con il parametro facoltativo e l'altro senza. Non è quindi possibile eseguire l'overload di un metodo con un elenco di argomenti corrispondente a uno di questi.  
  
 **ID errore:** BC30300  
  
### Per correggere l'errore  
  
-   Verificare che i metodi non si differenzino solo per i parametri facoltativi.  
  
## Vedere anche  
 [Procedure Overloading](../Topic/Procedure%20Overloading%20\(Visual%20Basic\).md)   
 [Considerations in Overloading Procedures](../Topic/Considerations%20in%20Overloading%20Procedures%20\(Visual%20Basic\).md)