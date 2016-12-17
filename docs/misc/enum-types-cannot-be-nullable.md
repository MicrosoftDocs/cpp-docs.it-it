---
title: "I tipi enum non possono essere nullable | Microsoft Docs"
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
  - "vbc32129"
  - "bc32129"
helpviewer_keywords: 
  - "BC32129"
ms.assetid: 9e0fe5c9-72c7-4905-b177-d00cc3469ea9
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I tipi enum non possono essere nullable
Il tipo sottostante usato per dichiarare un'enumerazione non può essere nullable. Il codice seguente, ad esempio, causa questo errore:  
  
```vb#  
'' Not valid. ' Enum exampleEnum As Integer? '     Member declarations. ' End Enum  
```  
  
 **ID errore:** BC32129  
  
### Per correggere l'errore  
  
-   Non usare un tipo sottostante nullable in una dichiarazione `Enum`.  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)   
 [Enum Statement](../Topic/Enum%20Statement%20\(Visual%20Basic\).md)