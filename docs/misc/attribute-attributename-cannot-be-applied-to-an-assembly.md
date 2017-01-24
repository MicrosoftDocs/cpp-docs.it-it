---
title: "Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un assembly | Microsoft Docs"
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
  - "bc30548"
  - "vbc30548"
helpviewer_keywords: 
  - "BC30548"
ms.assetid: bc36f094-626a-4907-b80b-f195155fa5db
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare l&#39;attributo &#39;&lt;nomeattributo&gt;&#39; a un assembly
Si è provato ad applicare un attributo a un assembly il cui `AttributeUsageAttribute` non specifica `AttributeTargets.Assembly`. Quando l'attributo è stato dichiarato, non è stato definito per essere applicato a un assembly.  
  
 **ID errore:** BC30548  
  
### Per correggere l'errore  
  
1.  Controllare la dichiarazione di attributo e specificare `AttributeTargets.Assembly` o `AttributeTargets.All`.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 <xref:System.AttributeTargets>