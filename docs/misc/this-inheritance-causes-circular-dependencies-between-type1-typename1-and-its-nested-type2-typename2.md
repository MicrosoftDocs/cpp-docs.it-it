---
title: "L&#39;ereditariet&#224; causa dipendenze circolari tra &lt;tipo1&gt; &#39;&lt;nometipo1&gt;&#39; e &lt;tipo2&gt; &#39;&lt;nometipo2&gt;&#39; annidato | Microsoft Docs"
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
  - "vbc30907"
  - "bc30907"
helpviewer_keywords: 
  - "BC30907"
ms.assetid: 17d4f938-5895-4d33-943e-8abf0ceacdc9
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;ereditariet&#224; causa dipendenze circolari tra &lt;tipo1&gt; &#39;&lt;nometipo1&gt;&#39; e &lt;tipo2&gt; &#39;&lt;nometipo2&gt;&#39; annidato
La struttura di ereditarietà determina una dipendenza circolare tra classi annidate, ovvero due classi che ereditano l'una dall'altra.  
  
 Il codice seguente può generare questo messaggio di errore.  
  
```  
Public Class c1 Inherits c3.c4 Public Class c2 End Class End Class Public Class c3 Inherits c1.c2 Public Class c4 End Class End Class  
```  
  
 Nel codice precedente, la classe `c1` eredita dalla classe `c4`, ma `c4` è annidata in `c3`, che eredita da `c2`, annidata in `c1`.  
  
 **ID errore:** BC30907  
  
### Per correggere l'errore  
  
-   Modificare la struttura di ereditarietà in modo che non esista alcuna dipendenza circolare.  
  
## Vedere anche  
 [Inheritance Basics](../Topic/Inheritance%20Basics%20\(Visual%20Basic\).md)