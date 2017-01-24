---
title: "&#39;&lt;nome&gt;&#39; non pu&#242; fare riferimento a se stesso mediante la sua istanza predefinita. Usare &#39;Me&#39; | Microsoft Docs"
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
  - "vbc31139"
  - "bc31139"
helpviewer_keywords: 
  - "BC31139"
ms.assetid: 459e5d5a-d526-4cd0-934e-96e4e1eb51bb
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nome&gt;&#39; non pu&#242; fare riferimento a se stesso mediante la sua istanza predefinita. Usare &#39;Me&#39;
Dall'interno di un form si è provato a fare riferimento al form come istanza predefinita. Questo può indurre il form a chiamare se stesso in modo ricorsivo.  
  
 Nella maggior parte dei casi è necessario usare `Me` quando si fa riferimento all'istanza corrente del form, anziché usare l'istanza predefinita.  
  
 **ID errore:** BC31139  
  
### Per correggere l'errore  
  
-   Usare `Me` per fare riferimento all'oggetto.  
  
## Vedere anche  
 [Nozioni di base sul debugger](../Topic/Debugger%20Basics.md)