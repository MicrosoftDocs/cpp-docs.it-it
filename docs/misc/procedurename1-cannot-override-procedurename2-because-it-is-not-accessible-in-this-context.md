---
title: "&#39;&lt;nomeroutine1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutine2&gt;&#39; perch&#233; non &#232; accessibile in questo contesto | Microsoft Docs"
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
  - "bc31417"
  - "vbc31417"
helpviewer_keywords: 
  - "BC31417"
ms.assetid: 1a36acbf-cead-43a0-b12f-f52f94d09124
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeroutine1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;nomeroutine2&gt;&#39; perch&#233; non &#232; accessibile in questo contesto
Una routine o una proprietà prova a eseguire l'override di una routine o di una proprietà con un livello di accesso che lo impedisce.  
  
 Se, ad esempio, una routine viene dichiarata come `Friend` in un assembly, non è possibile accedervi al di fuori dell'assembly. Se una routine di un altro assembly dello stesso progetto prova a eseguire l'override della routine `Friend` non ha la possibilità di accedervi.  
  
 **ID errore:** BC31417  
  
### Per correggere l'errore  
  
-   Spostare la routine o la proprietà di override nel medesimo assembly della routine o della proprietà di cui eseguire l'override.  
  
     \-oppure\-  
  
-   Rimuovere la parola chiave `Overrides`.  
  
## Vedere anche  
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)