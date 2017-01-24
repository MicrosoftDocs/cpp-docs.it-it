---
title: "&#39;&lt;nomeevento&gt;&#39; definisce in modo implicito &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro dichiarato in modo implicito in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "bc31059"
  - "vbc31059"
helpviewer_keywords: 
  - "BC31059"
ms.assetid: 60ddb2f4-a204-41eb-b13b-b2bb13ddb69c
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomeevento&gt;&#39; definisce in modo implicito &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro dichiarato in modo implicito in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39;
Il nome di un membro di tipo è in conflitto con il nome di un membro creato in modo implicito per un evento. Gli eventi creano in modo implicito diverse variabili. Ad esempio, la dichiarazione `Event X` dichiara in modo implicito i nomi `XEventHandler`, `XEvent`, `add_X` e `remove_X`.  
  
 **ID errore:** BC31059  
  
### Per correggere l'errore  
  
-   Rinominare il membro dichiarato in modo esplicito per rimuovere il conflitto di denominazione.  
  
## Vedere anche  
 [NotInBuild: Istruzioni di dichiarazione in Visual Basic](http://msdn.microsoft.com/it-it/81f3c398-f45c-4d95-80bf-aa39d1a0fb30)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)