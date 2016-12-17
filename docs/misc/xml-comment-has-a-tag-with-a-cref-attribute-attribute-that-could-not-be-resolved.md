---
title: "Il commento XML contiene un tag con un attributo &#39;cref&#39; &#39;&lt;attributo&gt;&#39; che non &#232; possibile risolvere  | Microsoft Docs"
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
  - "bc42309"
  - "vbc42309"
helpviewer_keywords: 
  - "BC42309"
ms.assetid: c9f3cfa5-565f-48bf-8616-cfb25d24f89e
caps.latest.revision: 19
caps.handback.revision: 19
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il commento XML contiene un tag con un attributo &#39;cref&#39; &#39;&lt;attributo&gt;&#39; che non &#232; possibile risolvere 
Il commento XML contiene un tag con un attributo 'cref' \<attributo\> che non è possibile risolvere. Il commento XML verrà ignorato.  
  
 I tag possono includere un attributo `cref` che designa un collegamento a un altro elemento del commento XML specificando il nome relativo dell'identificatore. In fase di compilazione il valore viene sostituito con l'identificatore XML qualificato per il valore a cui si riferisce l'utente. Il compilatore usa le normali regole di risoluzione per trovare il tipo o il membro.  
  
 **ID errore:** BC42309  
  
### Per correggere l'errore  
  
-   Convalidare l'attributo `cref` in modo che punti a un elemento di codice valido.  
  
## Vedere anche  
 [How to: Create XML Documentation](../Topic/How%20to:%20Create%20XML%20Documentation%20in%20Visual%20Basic.md)   
 [XML Comment Tags](../Topic/Recommended%20XML%20Tags%20for%20Documentation%20Comments%20\(Visual%20Basic\).md)