---
title: "Le istruzioni &#39;Implements&#39; devono seguire l&#39;istruzione &#39;Inherits&#39; e precedere tutte le dichiarazioni all&#39;interno di una classe | Microsoft Docs"
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
  - "bc31053"
  - "vbc31053"
helpviewer_keywords: 
  - "BC31053"
ms.assetid: 8036a1a1-7e31-4c49-b74b-01601a548f3e
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le istruzioni &#39;Implements&#39; devono seguire l&#39;istruzione &#39;Inherits&#39; e precedere tutte le dichiarazioni all&#39;interno di una classe
È stata rilevata un'istruzione `Implements` in una posizione non valida.  
  
 **ID errore:** BC31053  
  
### Per correggere l'errore  
  
-   Inserire le istruzioni `Implements` subito dopo le istruzioni `Inherits`, ma prima di qualsiasi dichiarazione. Ad esempio:  
  
    ```  
    Class Derived Inherits Base Implements One Sub SubOne() Implements One.Method1 ' Add code to implement the method. End Sub End Class  
    ```  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)