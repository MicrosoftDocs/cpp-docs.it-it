---
title: "&#39;&lt;nometipo&gt;&#39; non pu&#242; implementare l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; perch&#233; dichiara &#39;&lt;firmaevento&gt;&#39;, che presenta un tipo restituito | Microsoft Docs"
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
  - "bc30945"
  - "vbc30945"
helpviewer_keywords: 
  - "BC30945"
ms.assetid: 4f26e71a-949d-4103-b565-35cc8e833d29
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; non pu&#242; implementare l&#39;interfaccia &#39;&lt;nomeinterfaccia&gt;&#39; perch&#233; dichiara &#39;&lt;firmaevento&gt;&#39;, che presenta un tipo restituito
Una classe o struttura tenta di implementare un'interfaccia che dichiara un evento che restituisce un valore.  
  
 Attualmente Visual Basic non supporta la dichiarazione di eventi che restituiscono valori.  
  
 **ID errore:** BC30945  
  
### Per correggere l'errore  
  
-   Rimuovere l'istruzione `Implements` dalla definizione della classe o della struttura oppure implementare un'interfaccia diversa.  
  
## Vedere anche  
 [NOT IN BUILD: Eventi e Gestori eventi](http://msdn.microsoft.com/it-it/95074a0d-1cbc-4221-a95a-964185c7f962)   
 [Implements Statement](../Topic/Implements%20Statement.md)   
 [NOT IN BUILD: Parola chiave Implements e istruzione Implements](http://msdn.microsoft.com/it-it/b96560f7-6413-480f-a1e2-f80253bab5be)