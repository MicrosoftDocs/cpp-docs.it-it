---
title: "L&#39;opzione /moduleassemblyname pu&#242; essere specificata solo durante la compilazione di una destinazione del tipo &#39;module&#39; | Microsoft Docs"
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
  - "bc2030"
  - "vbc2030"
helpviewer_keywords: 
  - "BC2030"
ms.assetid: 2ebc577b-3464-40cc-8788-9fc9d3b4f928
caps.latest.revision: 3
caps.handback.revision: 3
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;opzione /moduleassemblyname pu&#242; essere specificata solo durante la compilazione di una destinazione del tipo &#39;module&#39;
Al compilatore Visual Basic viene passata l'opzione del compilatore `/moduleassemblyname` quando l'opzione `/target` è impostata su un valore diverso da `module`.  
  
 **ID errore:** BC2030  
  
### Per correggere l'errore  
  
1.  Rimuovere l'opzione del compilatore `/moduleassemblyname` o impostare l'opzione `/target` su `module`.  
  
## Vedere anche  
 [\/target](../Topic/-target%20\(Visual%20Basic\).md)   
 [\/moduleassemblyname](../Topic/-moduleassemblyname.md)   
 [Visual Basic Command\-Line Compiler](../Topic/Visual%20Basic%20Command-Line%20Compiler.md)