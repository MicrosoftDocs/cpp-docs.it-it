---
title: "Il tag &#39;returns&#39; del commento XML non &#232; consentito in un elemento di linguaggio &#39;declare sub&#39; | Microsoft Docs"
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
  - "bc42315"
  - "vbc42315"
helpviewer_keywords: 
  - "BC42315"
ms.assetid: 55ba3e8a-ba7f-42e3-a4a7-b22844e72564
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tag &#39;returns&#39; del commento XML non &#232; consentito in un elemento di linguaggio &#39;declare sub&#39;
Il tag 'returns' del commento XML non è consentito in un elemento di linguaggio 'declare sub'. Il commento XML verrà ignorato.  
  
 Un commento XML per una dichiarazione `Declare Sub` non può contenere un tag `<`returns`>`.  
  
 **ID errore:** BC42315  
  
### Per correggere l'errore  
  
-   Rimuovere il tag `<`returns`>` non supportato.  
  
## Vedere anche  
 [\<returns\>](../Topic/%3Creturns%3E%20\(Visual%20Basic\).md)   
 [XML Comment Tags](../Topic/Recommended%20XML%20Tags%20for%20Documentation%20Comments%20\(Visual%20Basic\).md)   
 [Documenting Your Code with XML](../Topic/Documenting%20Your%20Code%20with%20XML%20\(Visual%20Basic\).md)   
 [Declare Statement](../Topic/Declare%20Statement.md)