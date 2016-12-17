---
title: "&#39;Exit&#39; deve essere seguito da &#39;Sub&#39;, &#39;Function&#39;, &#39;Property&#39;, &#39;Do&#39;, &#39;For&#39;, &#39;While&#39;, &#39;Select&#39; o &#39;Try&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc30240"
  - "vbc30240"
helpviewer_keywords: 
  - "BC30240"
ms.assetid: 91078689-f4bf-4331-a475-10bc9fe7cd0c
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Exit&#39; deve essere seguito da &#39;Sub&#39;, &#39;Function&#39;, &#39;Property&#39;, &#39;Do&#39;, &#39;For&#39;, &#39;While&#39;, &#39;Select&#39; o &#39;Try&#39;
Un'istruzione `Exit` contiene una parola chiave non valida.`Exit` deve specificare il blocco da cui il controllo viene trasferito all'istruzione che segue il blocco; ad esempio, `End While`.  
  
 **ID errore:** BC30240  
  
### Per correggere l'errore  
  
-   Aggiungere una parola chiave valida che segue `Exit` o rimuovere l'istruzione `Exit`.  
  
## Vedere anche  
 [Exit Statement](../Topic/Exit%20Statement%20\(Visual%20Basic\).md)