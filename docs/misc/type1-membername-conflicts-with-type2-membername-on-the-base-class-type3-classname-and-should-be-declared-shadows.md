---
title: "&lt;tipo1&gt; &#39;&lt;nomemembro&gt;&#39; &#232; in conflitto con &lt;tipo2&gt; &#39;&lt;nomemembro&gt;&#39; nella &lt;tipo3&gt; base &#39;&lt;nomeclasse&gt;&#39;, quindi deve essere dichiarato come &#39;Shadows&#39; | Microsoft Docs"
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
  - "bc40004"
  - "vbc40004"
helpviewer_keywords: 
  - "BC40004"
ms.assetid: 24d10f31-3b3d-448c-b928-fc937e1f4a92
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &lt;tipo1&gt; &#39;&lt;nomemembro&gt;&#39; &#232; in conflitto con &lt;tipo2&gt; &#39;&lt;nomemembro&gt;&#39; nella &lt;tipo3&gt; base &#39;&lt;nomeclasse&gt;&#39;, quindi deve essere dichiarato come &#39;Shadows&#39;
Un elemento di programmazione è dichiarato con lo stesso nome di un elemento definito nella classe base. In questa situazione l'elemento in questa classe deve nascondere l'elemento della classe base.  
  
 Si tratta di un messaggio di avviso. Per impostazione predefinita viene usato `Shadows`. Per altre informazioni su come nascondere gli avvisi o considerarli come errori, vedere [Configurazione degli avvisi in Visual Basic](../Topic/Configuring%20Warnings%20in%20Visual%20Basic.md).  
  
 **ID errore:** BC40004  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Shadows` alla dichiarazione o modificare il nome dell'elemento dichiarato.  
  
## Vedere anche  
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)   
 [Shadowing in Visual Basic](../Topic/Shadowing%20in%20Visual%20Basic.md)