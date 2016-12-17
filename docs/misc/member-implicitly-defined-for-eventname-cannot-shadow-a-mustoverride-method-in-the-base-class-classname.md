---
title: "&#39;&lt;membro&gt;&#39;, definito in modo implicito per &#39;&lt;nomeevento&gt;&#39;, non pu&#242; nascondere un metodo &#39;MustOverride&#39; nella &lt;classe&gt; base &#39;&lt;nomeclasse&gt;&#39; | Microsoft Docs"
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
  - "vbc31413"
  - "bc31413"
helpviewer_keywords: 
  - "BC31413"
ms.assetid: 071706ce-a394-48b6-9afa-751cb50b2576
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;membro&gt;&#39;, definito in modo implicito per &#39;&lt;nomeevento&gt;&#39;, non pu&#242; nascondere un metodo &#39;MustOverride&#39; nella &lt;classe&gt; base &#39;&lt;nomeclasse&gt;&#39;
L'evento specificato dichiara in modo implicito un membro con lo stesso nome di un metodo dichiarato con il modificatore `MustOverride`.  
  
 **ID errore:** BC31413  
  
### Per correggere l'errore  
  
-   Rimuovere il modificatore `MustOverride` dal metodo nella classe base o assegnare un nome univoco alla proprietà o al metodo.  
  
## Vedere anche  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)   
 [Events](../Topic/Events%20\(Visual%20Basic\).md)