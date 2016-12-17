---
title: "&#39;&lt;nometipo&gt;&#39; non pu&#242; nascondere un metodo &#39;MustOverride&#39; dichiarato in modo implicito per &#39;&lt;nomepropriet&#224;&gt;&#39; in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39; | Microsoft Docs"
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
  - "bc31416"
  - "vbc31416"
helpviewer_keywords: 
  - "BC31416"
ms.assetid: a52aee3c-a19e-412d-bb91-ef1b79e8675f
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nometipo&gt;&#39; non pu&#242; nascondere un metodo &#39;MustOverride&#39; dichiarato in modo implicito per &#39;&lt;nomepropriet&#224;&gt;&#39; in &lt;tipo&gt; &#39;&lt;nometipo&gt;&#39;
Il nome del metodo specificato è in conflitto con un metodo `MustOverride` generato in modo implicito da una proprietà nella classe base. Ad esempio, se si dichiara una proprietà denominata `Prop1`, il compilatore genera le routine implicite `get_Prop1` e `set_Prop1`.  
  
 **ID errore:** BC31416  
  
### Per correggere l'errore  
  
1.  Assegnare al metodo un nome univoco.  
  
2.  Rimuovere il modificatore `MustOverride` dalla proprietà nella classe base.  
  
## Vedere anche  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [Shadows](../Topic/Shadows%20\(Visual%20Basic\).md)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)