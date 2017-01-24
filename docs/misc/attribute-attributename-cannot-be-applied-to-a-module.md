---
title: "Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un modulo | Microsoft Docs"
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
  - "vbc30549"
  - "bc30549"
helpviewer_keywords: 
  - "BC30549"
ms.assetid: b38fea31-6b0b-4c54-9518-b59226505802
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un modulo
Si è provato ad applicare un attributo a un modulo il cui `AttributeUsageAttribute` non specifica `AttributeTargets.Module`. Quando l'attributo è stato dichiarato, non è stato definito per essere applicato a un modulo.  
  
 **ID errore:** BC30549  
  
### Per correggere l'errore  
  
1.  Controllare la dichiarazione di attributo e specificare `AttributeTargets.Module`o`AttributeTargets.All`.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 <xref:System.AttributeTargets>