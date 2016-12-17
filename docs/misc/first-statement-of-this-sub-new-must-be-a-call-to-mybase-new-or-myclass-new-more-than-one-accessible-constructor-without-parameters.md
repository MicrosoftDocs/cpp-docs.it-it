---
title: "La prima istruzione di questo &#39;Sub New&#39; deve essere una chiamata a &#39;MyBase.New&#39; o a &#39;MyClass.New&#39; (pi&#249; costruttori accessibili senza parametri) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc32038"
  - "bc32038"
helpviewer_keywords: 
  - "BC32038"
ms.assetid: 52e4e9df-a85b-46ae-a0cc-7d8fa377fe95
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La prima istruzione di questo &#39;Sub New&#39; deve essere una chiamata a &#39;MyBase.New&#39; o a &#39;MyClass.New&#39; (pi&#249; costruttori accessibili senza parametri)
La prima istruzione di questo 'Sub New' deve essere una chiamata a 'MyBase.New' o a 'MyClass.New' perché la classe base '\<base\>' di '\<derivato\>' ha più 'Sub New' accessibili che possono essere chiamati senza argomenti.  
  
 Un costruttore di classi non fornisce una chiamata a un costruttore di classi e [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può fornire un costruttore implicito perché non può determinare quale costruttore di classi base chiamare.  
  
 **ID errore:** BC32038  
  
### Per correggere l'errore  
  
-   Aggiungere una chiamata a un costruttore di classi base `MyBase.New()` o a un altro costruttore di questa classe usando `MyClass.New()` o `Me.New()` come prima riga del costruttore.  
  
## Vedere anche  
 [Object Lifetime: How Objects Are Created and Destroyed](../Topic/Object%20Lifetime:%20How%20Objects%20Are%20Created%20and%20Destroyed%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)   
 [MyBase \- eliminazione](http://msdn.microsoft.com/it-it/52491d06-6451-4f6f-9aa6-8fab59bbc2b9)