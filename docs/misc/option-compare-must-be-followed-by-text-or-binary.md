---
title: "&#39;Option Compare&#39; deve essere seguito da &#39;Text&#39; o &#39;Binary&#39; | Microsoft Docs"
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
  - "vbc30207"
  - "bc30207"
helpviewer_keywords: 
  - "BC30207"
ms.assetid: e59cf10d-47ce-401d-8474-3b69a3a5f5db
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Option Compare&#39; deve essere seguito da &#39;Text&#39; o &#39;Binary&#39;
Un'istruzione `Option Compare` contiene un'impostazione non corretta o non contiene alcuna impostazione. Le uniche impostazioni consentite in `Option Compare` sono `Text` e `Binary`.  
  
 **ID errore:** BC30207  
  
### Per correggere l'errore  
  
1.  Verificare che l'identificatore dell'impostazione non sia digitato in modo errato.  
  
2.  Aggiungere `Text` o `Binary` all'istruzione `Option Compare`, ad esempio `Option Compare Text`.  
  
## Vedere anche  
 [Option Compare Statement](../Topic/Option%20Compare%20Statement.md)