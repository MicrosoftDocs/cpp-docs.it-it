---
title: "I metodi dichiarati come &#39;Overrides&#39; non possono essere dichiarati come &#39;Overridable&#39; perch&#233; sono implicitamente sottoponibili a override | Microsoft Docs"
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
  - "bc30730"
  - "vbc30730"
helpviewer_keywords: 
  - "BC30730"
ms.assetid: cc892f81-eb1f-42a9-8f54-eff352adb5dd
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi dichiarati come &#39;Overrides&#39; non possono essere dichiarati come &#39;Overridable&#39; perch&#233; sono implicitamente sottoponibili a override
A differenza della maggior parte dei metodi, i metodi contrassegnati con il modificatore `Overrides` sono sottoponibili a override per impostazione predefinita.  
  
 **ID errore:** BC30730  
  
### Per correggere l'errore  
  
-   Omettere il modificatore `Overridable` nei metodi contrassegnati con il modificatore `Overrides`.  
  
## Vedere anche  
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)