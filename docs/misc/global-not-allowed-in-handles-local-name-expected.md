---
title: "&#39;Global&#39; non &#232; consentito negli handle; &#232; previsto il nome locale | Microsoft Docs"
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
  - "bc36002"
  - "vbc36002"
helpviewer_keywords: 
  - "BC36002"
ms.assetid: 7b4602a9-84c9-4068-81bc-e8df03ffc130
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;Global&#39; non &#232; consentito negli handle; &#232; previsto il nome locale
La clausola `Handles` deve fare riferimento a un evento locale. La parola chiave `Global` fornisce l'accesso agli elementi di programmazione globali.  
  
 **ID errore:** BC36002  
  
### Per correggere l'errore  
  
-   Modificare la clausola `Handles` per fare riferimento a un'istanza locale dell'evento invece dell'istanza globale.  
  
## Vedere anche  
 [Global \- eliminazione](http://msdn.microsoft.com/it-it/18c8ba14-40f6-4978-8096-6a5852324635)   
 [Handles](../Topic/Handles%20Clause%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)