---
title: "&#39;System.STAThreadAttribute&#39; e &#39;System.MTAThreadAttribute&#39; non possono essere applicati entrambi allo stesso metodo | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc31512"
  - "bc31512"
helpviewer_keywords: 
  - "BC31512"
ms.assetid: ee27e834-707d-4f02-86d4-831fa9bd2359
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;System.STAThreadAttribute&#39; e &#39;System.MTAThreadAttribute&#39; non possono essere applicati entrambi allo stesso metodo
Gli attributi `System.STAThreadAttribute` e `System.MTAThreadAttribute` si escludono reciprocamente.  
  
 **ID errore:** BC31512  
  
### Per correggere l'errore  
  
1.  Applicare `System.MTAThreadAttribute` o `System.STAThreadAttribute`, ma non entrambi.  
  
## Vedere anche  
 <xref:System.STAThreadAttribute>   
 <xref:System.MTAThreadAttribute>   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)