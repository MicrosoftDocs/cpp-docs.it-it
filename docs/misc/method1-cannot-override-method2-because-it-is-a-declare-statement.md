---
title: "&#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; &#232; un&#39;istruzione &#39;Declare&#39; | Microsoft Docs"
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
  - "vbc30474"
  - "bc30474"
helpviewer_keywords: 
  - "BC30474"
ms.assetid: 7277e8cc-aa3c-40c3-8682-c8c42d2ee921
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;metodo1&gt;&#39; non pu&#242; eseguire l&#39;override di &#39;&lt;metodo2&gt;&#39; perch&#233; &#232; un&#39;istruzione &#39;Declare&#39;
Si è provato a eseguire l'override di un delegato sul nome della classe base che è stato dichiarato con un'istruzione `Declare`.  
  
 **ID errore:** BC30474  
  
### Per correggere l'errore  
  
1.  Modificare il membro sovrascritto in modo che non sia un'istruzione `Declare`.  
  
2.  Non provare a eseguire l'override di questo metodo.  
  
## Vedere anche  
 [Declare Statement](../Topic/Declare%20Statement.md)   
 [NOT IN BUILD: Override di proprietà e metodi](http://msdn.microsoft.com/it-it/2167e8f5-1225-4b13-9ebd-02591ba90213)