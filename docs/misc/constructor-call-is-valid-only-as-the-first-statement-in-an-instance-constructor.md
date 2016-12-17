---
title: "Una chiamata a un costruttore &#232; valida solo come prima istruzione in un costruttore di istanza | Microsoft Docs"
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
  - "vbc30282"
  - "bc30282"
helpviewer_keywords: 
  - "BC30282"
ms.assetid: c51b172f-fbd7-4ef5-8276-01a4bf6ed35b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Una chiamata a un costruttore &#232; valida solo come prima istruzione in un costruttore di istanza
Una chiamata a `New()` si verifica dopo la prima istruzione di un costruttore. Se un costruttore chiama in modo esplicito un altro, l'operazione deve essere eseguita nella prima istruzione che segue l'istruzione `Sub New()`.  
  
 **ID errore:** BC30282  
  
### Per correggere l'errore  
  
-   Rimuovere la chiamata a `New()` o spostarla all'inizio del costruttore.  
  
## Vedere anche  
 [NOT IN BUILD: Utilizzo di costruttori e distruttori](http://msdn.microsoft.com/it-it/548eebe1-86c4-4377-b2f5-447cb8be3d90)