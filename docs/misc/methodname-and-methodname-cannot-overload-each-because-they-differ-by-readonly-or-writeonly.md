---
title: "&lt;nomemetodo&gt;&#39; e &#39;&lt;nomemetodo&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano per &#39;ReadOnly&#39; o &#39;WriteOnly&#39; | Microsoft Docs"
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
  - "vbc30366"
  - "BC30366"
helpviewer_keywords: 
  - "BC30366"
ms.assetid: 2440fd29-e205-4004-b2ee-9d954d17b8d3
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;nomemetodo&gt;&#39; e &#39;&lt;nomemetodo&gt;&#39; non possono essere in rapporto di overload perch&#233; si differenziano per &#39;ReadOnly&#39; o &#39;WriteOnly&#39;
Si è provato a eseguire l'overload di due metodi che si differenziano l'uno dall'altro solo per le loro dichiarazioni `ReadOnly` e `WriteOnly`. Per distinguere le versioni è possibile usare solo l'elenco di argomento.  
  
 **ID errore:** BC30366  
  
### Per correggere l'errore  
  
-   Verificare che i metodi si differenzino per altri elementi oltre a `ReadOnly` e `WriteOnly`.  
  
## Vedere anche  
 [Considerations in Overloading Procedures](../Topic/Considerations%20in%20Overloading%20Procedures%20\(Visual%20Basic\).md)