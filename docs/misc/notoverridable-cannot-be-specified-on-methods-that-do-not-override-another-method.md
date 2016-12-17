---
title: "Non &#232; possibile specificare &#39;NotOverridable&#39; per metodi che non eseguono l&#39;override di un altro metodo | Microsoft Docs"
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
  - "vbc31088"
  - "bc31088"
helpviewer_keywords: 
  - "BC31088"
ms.assetid: 0241197c-51fa-48b8-9a2a-4205d25641d3
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare &#39;NotOverridable&#39; per metodi che non eseguono l&#39;override di un altro metodo
Proprietà e metodi sono `NotOverridable` per impostazione predefinita. Il modificatore `NotOverridable` può essere usato solo nei metodi che eseguono l'override di un'altra proprietà o di un altro metodo.  
  
 **ID errore:** BC31088  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore `NotOverridable` dalle proprietà e dai metodi che non eseguono l'override di un altro membro.  
  
## Vedere anche  
 [Overrides](../Topic/Overrides%20\(Visual%20Basic\).md)   
 [Overloads](../Topic/Overloads%20\(Visual%20Basic\).md)   
 [NotOverridable](../Topic/NotOverridable%20\(Visual%20Basic\).md)   
 [Overridable](../Topic/Overridable%20\(Visual%20Basic\).md)