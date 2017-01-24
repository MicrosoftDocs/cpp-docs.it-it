---
title: "La classe &#39;&lt;nomeclasse&gt;&#39; deve essere dichiarata &#39;MustInherit&#39; oppure eseguire l&#39;override dei seguenti membri &#39;MustOverride&#39; ereditati: &lt;nomimembri&gt; | Microsoft Docs"
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
  - "bc30610"
  - "vbc30610"
helpviewer_keywords: 
  - "BC30610"
ms.assetid: 7fba7a3b-c918-44ba-ae85-20312615c1ce
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La classe &#39;&lt;nomeclasse&gt;&#39; deve essere dichiarata &#39;MustInherit&#39; oppure eseguire l&#39;override dei seguenti membri &#39;MustOverride&#39; ereditati: &lt;nomimembri&gt;
Le classi derivate da classi base contenenti membri `MustOverride` devono eseguire l'override di tali membri oppure usare il modificatore `MustInherit`.  
  
 **ID errore:** BC30610  
  
### Per correggere l'errore  
  
-   Aggiungere il modificatore `MustInherit` alla definizione della classe.  
  
-   Dichiarare un override usando la parola chiave `Overrides`.  
  
## Vedere anche  
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Ereditarietà in Visual Basic](http://msdn.microsoft.com/it-it/e5e6e240-ed31-4657-820c-079b7c79313c)