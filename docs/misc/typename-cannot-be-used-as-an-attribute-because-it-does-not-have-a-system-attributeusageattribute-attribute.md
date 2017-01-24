---
title: "&#39;&lt;nometipo&gt;&#39; non pu&#242; essere utilizzato come attributo perch&#233; non ha un attributo &#39;System.AttributeUsageAttribute&#39; | Microsoft Docs"
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
  - "vbc31505"
  - "bc31505"
helpviewer_keywords: 
  - "BC31505"
ms.assetid: 7dd84c9d-6711-4dab-afc6-1fe4dee78051
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; non pu&#242; essere utilizzato come attributo perch&#233; non ha un attributo &#39;System.AttributeUsageAttribute&#39;
Si è provato a usare un attributo dichiarato senza l'attributo `System.AttributeUsageAttribute` per definire il relativo utilizzo.  
  
 **ID errore:** BC31505  
  
### Per correggere l'errore  
  
1.  Gli attributi personalizzati devono essere classi derivate da`System.Attribute` alle quali è stato applicato l'attributo `AttributeUsageAttribute`.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 [NOT IN BUILD: Attributi personalizzati in Visual Basic](http://msdn.microsoft.com/it-it/d72d8a5c-8f64-4614-b15b-cad66845d047)