---
title: "&lt;tipo1&gt; &#39;&lt;nometipo1&gt;&#39; &#232; in conflitto con un membro dichiarato in modo implicito per l&#39;evento &lt;nomeevento&gt; in &lt;tipo2&gt; &#39;&lt;nometipo2&gt;&#39; | Microsoft Docs"
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
  - "vbc31061"
  - "bc31061"
helpviewer_keywords: 
  - "BC31061"
ms.assetid: de5b1121-8c8f-4aba-a3e7-1e3e60df0dc5
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo1&gt; &#39;&lt;nometipo1&gt;&#39; &#232; in conflitto con un membro dichiarato in modo implicito per l&#39;evento &lt;nomeevento&gt; in &lt;tipo2&gt; &#39;&lt;nometipo2&gt;&#39;
Il nome di un membro di tipo è in conflitto con il nome di un membro creato in modo implicito per un evento. Gli eventi creano in modo implicito diverse variabili implicite. Ad esempio, la dichiarazione `Event X` dichiara in modo implicito i nomi `XEventHandler`, `XEvent`, `add_X` e `remove_X`.  
  
 **ID errore:** BC31061  
  
### Per correggere l'errore  
  
-   Rinominare il membro dichiarato in modo esplicito per rimuovere il conflitto di denominazione.  
  
## Vedere anche  
 [NotInBuild: Istruzioni di dichiarazione in Visual Basic](http://msdn.microsoft.com/it-it/81f3c398-f45c-4d95-80bf-aa39d1a0fb30)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)