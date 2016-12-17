---
title: "&#39;&lt;nomemembro&gt;&#39; esiste in pi&#249; interfacce di base | Microsoft Docs"
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
  - "vbc31040"
  - "bc31040"
helpviewer_keywords: 
  - "BC31040"
ms.assetid: c1a80d64-3986-417f-af92-412183e490ad
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemembro&gt;&#39; esiste in pi&#249; interfacce di base
'\<nomemembro\>' esiste in più interfacce di base. Usare il nome dell'interfaccia che dichiara '\<nomemembro\>' nella clausola 'Implements' invece del nome dell'interfaccia derivata.  
  
 Questa interfaccia eredita membri con lo stesso nome da più interfacce, generando ambiguità.  
  
 **ID errore:** BC31040  
  
### Per correggere l'errore  
  
-   Usare il nome dell'interfaccia di definizione nelle clausole `Implements` anziché il nome dell'interfaccia derivata.  
  
## Vedere anche  
 [Interfaces](../Topic/Interfaces%20\(Visual%20Basic\).md)   
 [Implements](../Topic/Implements%20Clause%20\(Visual%20Basic\).md)