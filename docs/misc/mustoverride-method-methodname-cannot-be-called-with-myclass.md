---
title: "Il metodo &#39;MustOverride&#39; &#39;&lt;nomemetodo&gt;&#39; non pu&#242; essere chiamato con &#39;MyClass&#39; | Microsoft Docs"
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
  - "bc30614"
  - "vbc30614"
helpviewer_keywords: 
  - "BC30614"
ms.assetid: fc57af41-1552-46d1-9727-341f1835e661
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;MustOverride&#39; &#39;&lt;nomemetodo&gt;&#39; non pu&#242; essere chiamato con &#39;MyClass&#39;
`MyClass` equivale a `Me`, ma tutte le chiamate al metodo su di essa sono trattate come se il metodo richiamato fosse `NotOverridable`.  
  
 **ID errore:** BC30614  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore `MustOverride` o dichiarare il metodo in una classe base ed ereditare ed eseguire l'override di tale classe.  
  
## Vedere anche  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [MustInherit](../Topic/MustInherit%20\(Visual%20Basic\).md)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)