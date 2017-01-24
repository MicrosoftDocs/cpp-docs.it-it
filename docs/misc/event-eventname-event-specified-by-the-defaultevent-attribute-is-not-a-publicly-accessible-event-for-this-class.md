---
title: "L&#39;evento &#39;&lt;nomeevento&gt;&#39; specificato dall&#39;attributo &#39;DefaultEvent&#39; non &#232; un evento accessibile pubblicamente per questa classe | Microsoft Docs"
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
  - "vbc30770"
  - "bc30770"
helpviewer_keywords: 
  - "BC30770"
ms.assetid: 7524fba7-2a37-4bc3-b789-87d73a166575
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;evento &#39;&lt;nomeevento&gt;&#39; specificato dall&#39;attributo &#39;DefaultEvent&#39; non &#232; un evento accessibile pubblicamente per questa classe
L'attributo <xref:System.ComponentModel.DefaultEventAttribute> deve specificare il nome dell'evento accessibile pubblicamente nella classe a cui l'attributo è applicato.  
  
 **ID errore:** BC30770  
  
### Per correggere l'errore  
  
1.  Verificare che la classe definisca un evento accessibile pubblicamente.  
  
2.  Verificare che il nome dell'evento nella classe corrisponda al nome specificato dall'attributo <xref:System.ComponentModel.DefaultEventAttribute>.  
  
## Vedere anche  
 <xref:System.ComponentModel.DefaultEventAttribute>   
 [Event Statement](../Topic/Event%20Statement.md)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Public](../Topic/Public%20\(Visual%20Basic\).md)