---
title: "L&#39;evento &#39;&lt;nomevento1&gt;&#39; non pu&#242; implementare l&#39;evento &#39;&lt;nomeevento2&gt;&#39; perch&#233; il relativo tipo delegato non corrisponde al tipo delegato di un altro evento implementato da &#39;&lt;nomeevento1&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc31407"
  - "vbc31407"
helpviewer_keywords: 
  - "BC31407"
ms.assetid: 0b9ffddb-4759-438b-b569-beac7062e986
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;evento &#39;&lt;nomevento1&gt;&#39; non pu&#242; implementare l&#39;evento &#39;&lt;nomeevento2&gt;&#39; perch&#233; il relativo tipo delegato non corrisponde al tipo delegato di un altro evento implementato da &#39;&lt;nomeevento1&gt;&#39;
[!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] non può implementare un evento perché il tipo delegato dell'evento non corrisponde al tipo delegato di un altro evento. Questo errore può insorgere quando si definiscono più eventi in un'interfaccia e si prova a implementarli assieme con lo stesso evento. Un evento può implementare due o più eventi solo se tutti gli eventi implementati vengono dichiarati usando la sintassi `As` e se tutti specificano lo stesso tipo delegato.  
  
 **ID errore:** BC31407  
  
### Per correggere l'errore  
  
-   Implementare gli eventi separatamente.  
  
## Vedere anche  
 [Events](../Topic/Events%20\(Visual%20Basic\).md)