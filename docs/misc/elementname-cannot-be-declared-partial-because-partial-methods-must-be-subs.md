---
title: "&#39;&lt;nomeelemento&gt;&#39; non pu&#242; essere dichiarato &#39;Partial&#39; perch&#233; i metodi parziali devono essere Sub | Microsoft Docs"
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
  - "vbc31437"
  - "bc31437"
helpviewer_keywords: 
  - "BC31437"
ms.assetid: 31ca12ab-2c26-4907-a253-e7c57bb4f34b
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeelemento&gt;&#39; non pu&#242; essere dichiarato &#39;Partial&#39; perch&#233; i metodi parziali devono essere Sub
Solo le routine `Sub` possono essere dichiarate come metodi parziali. Ad esempio, il codice seguente causa l'errore perché `partialMethod` è una funzione.  
  
```  
' Partial Private Function partialMethod(ByVal n As Integer) As Integer ' End Function  
```  
  
 **ID errore:** BC31437  
  
### Per correggere l'errore  
  
-   Convertire ciò che sta dichiarando come metodo parziale in un `Sub`.  
  
-   In questo caso, non usare un metodo parziale.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)   
 [Sub Procedures](../Topic/Sub%20Procedures%20\(Visual%20Basic\).md)