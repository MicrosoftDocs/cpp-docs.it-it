---
title: "I tipi dichiarati &#39;Private&#39; devono essere specificati all&#39;interno di un altro tipo | Microsoft Docs"
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
  - "vbc31089"
  - "bc31089"
helpviewer_keywords: 
  - "BC31089"
ms.assetid: 44ea5fe4-4af6-4cea-a4a5-2cf966df2937
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I tipi dichiarati &#39;Private&#39; devono essere specificati all&#39;interno di un altro tipo
Il modificatore `Private` è stato usato in un tipo non all'interno di un altro tipo.  
  
 **ID errore:** BC31089  
  
### Per correggere l'errore  
  
1.  Usare un modificatore di accesso meno restrittivo, ad esempio `Friend`.  
  
2.  Dichiarare il tipo all'interno di un altro tipo.  
  
## Vedere anche  
 [Private](../Topic/Private%20\(Visual%20Basic\).md)