---
title: "Impossibile applicare &#39;&lt;nomeattributo&gt;&#39; pi&#249; di una volta a un assembly | Microsoft Docs"
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
  - "bc31521"
  - "vbc31521"
helpviewer_keywords: 
  - "BC31521"
ms.assetid: 7312570f-8afb-4afe-992f-b6f7796f5f26
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;&lt;nomeattributo&gt;&#39; pi&#249; di una volta a un assembly
L'attributo specificato può essere applicato solo una volta a un attributo.  
  
 **ID errore:** BC31521  
  
### Per correggere l'errore  
  
1.  Rimuovere le applicazioni ridondanti di questo attributo.  
  
2.  Se si usa un attributo personalizzato, modificare `AttributeUsageAttribute` e impostare la proprietà `AllowMultiple` su `True`.  
  
## Vedere anche  
 <xref:System.AttributeUsageAttribute>   
 <xref:System.AttributeUsageAttribute.AllowMultiple%2A?displayProperty=fullName>