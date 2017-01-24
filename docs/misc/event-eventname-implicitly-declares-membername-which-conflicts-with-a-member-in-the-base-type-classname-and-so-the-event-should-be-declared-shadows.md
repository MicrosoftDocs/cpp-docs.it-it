---
title: "L&#39;evento &#39;&lt;nomeevento&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro della base &#39;&lt;nomeclasse&gt;&#39; &lt;tipo&gt;. L&#39;evento deve essere quindi dichiarato &#39;Shadows&#39; | Microsoft Docs"
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
  - "bc40012"
  - "vbc40012"
helpviewer_keywords: 
  - "BC40012"
ms.assetid: 5f14e8bd-a227-4115-af99-cd2b6fe4dc0e
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;evento &#39;&lt;nomeevento&gt;&#39; dichiara in modo implicito &#39;&lt;nomemembro&gt;&#39;, che &#232; in conflitto con un membro della base &#39;&lt;nomeclasse&gt;&#39; &lt;tipo&gt;. L&#39;evento deve essere quindi dichiarato &#39;Shadows&#39;
Un evento è dichiarato con un nome che forma un membro implicito con lo stesso nome di un membro della classe base. Se ad esempio si dichiara un evento denominato `Event1`, il compilatore genera le routine implicite `add_Event1` e `remove_Event1`. Se un membro della classe base ha uno di questi nomi, l'evento in questa classe dovrebbe nascondere il membro della classe base.  
  
 Si tratta di un messaggio di avviso. Per impostazione predefinita viene usato `Shadows`. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40012  
  
### Per correggere l'errore  
  
1.  Per nascondere il membro della classe base, aggiungere la parola chiave `Shadows` alla dichiarazione dell'evento.  
  
2.  Se non si intende nascondere il membro della classe base, cambiare il nome dell'evento.  
  
## Vedere anche  
 [Event Statement](../Topic/Event%20Statement.md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)