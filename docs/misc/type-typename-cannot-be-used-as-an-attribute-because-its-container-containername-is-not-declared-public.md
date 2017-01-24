---
title: "Non &#232; possibile usare il tipo &#39;&lt;nometipo&gt;&#39; perch&#233; il relativo contenitore &#39;&lt;nomecontenitore&gt;&#39; non &#232; dichiarato come &#39;Public&#39; | Microsoft Docs"
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
  - "bc31517"
  - "vbc31517"
helpviewer_keywords: 
  - "BC31517"
ms.assetid: 3d1a8f41-8652-4e37-a6bd-40b0ad306c6f
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare il tipo &#39;&lt;nometipo&gt;&#39; perch&#233; il relativo contenitore &#39;&lt;nomecontenitore&gt;&#39; non &#232; dichiarato come &#39;Public&#39;
La classe o il modulo in cui è definito questo attributo non è dichiarato con il modificatore `Public`. Le classi e i moduli che non specificano un modificatore di accesso vengono dichiarati come `Friend` per impostazione predefinita.  
  
 **ID errore:** BC31517  
  
### Per correggere l'errore  
  
1.  Aggiungere il modificatore `Public` alla classe o al modulo in cui è definito l'attributo.  
  
## Vedere anche  
 [Public](../Topic/Public%20\(Visual%20Basic\).md)