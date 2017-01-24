---
title: "&#39;Sub New&#39; non pu&#242; essere dichiarato come &#39;Overrides&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30283"
  - "bc30283"
helpviewer_keywords: 
  - "BC30283"
ms.assetid: 0e71cdcb-b62e-4a36-8829-83de5c453c74
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Sub New&#39; non pu&#242; essere dichiarato come &#39;Overrides&#39;
Un costruttore indica che esegue l'override di un costruttore ereditato. I costruttori non possono essere sottoposto a override.  
  
 **ID errore:** BC30283  
  
### Per correggere l'errore  
  
-   Rimuovere la parola chiave `Overrides` dalla dichiarazione `Sub`.  
  
## Vedere anche  
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)   
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)