---
title: "L&#39;operando &#39;SyncLock&#39; non pu&#242; essere di tipo &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo riferimento | Microsoft Docs"
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
  - "vbc30582"
  - "bc30582"
helpviewer_keywords: 
  - "BC30582"
ms.assetid: 953aecf2-629a-4272-94bd-abf88f785e63
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;operando &#39;SyncLock&#39; non pu&#242; essere di tipo &#39;&lt;nometipo&gt;&#39; perch&#233; &#39;&lt;nometipo&gt;&#39; non &#232; un tipo riferimento
L'istruzione `SyncLock` consente di sincronizzare le istruzioni in un'unica espressione evitando che più thread eseguano le stesse istruzioni contemporaneamente. Il tipo di espressione in un'istruzione `SyncLock` deve essere un tipo riferimento, ad esempio una classe, un modulo, un'interfaccia, una matrice o un delegato.  
  
 **ID errore:** BC30582  
  
### Per correggere l'errore  
  
-   Modificare il tipo in un tipo riferimento appropriato.  
  
## Vedere anche  
 [SyncLock Statement](../Topic/SyncLock%20Statement.md)   
 [NOT IN BUILD: Multithreading in Visual Basic](http://msdn.microsoft.com/it-it/c731a50c-09c1-4468-9646-54c86b75d269)