---
title: "&#39;&lt;nomemetodo&gt;&#39; non pu&#242; nascondere un metodo dichiarato &#39;MustOverride&#39; | Microsoft Docs"
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
  - "vbc31404"
  - "bc31404"
helpviewer_keywords: 
  - "BC31404"
ms.assetid: 3e7bb4a0-14af-46ba-bc62-2234c16f1827
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemetodo&gt;&#39; non pu&#242; nascondere un metodo dichiarato &#39;MustOverride&#39;
Una proprietà o un metodo con il modificatore `MustOverride` e lo stesso nome è dichiarato in una classe di derivazione.  
  
 **ID errore:** BC31404  
  
### Per correggere l'errore  
  
1.  Aggiungere il modificatore `Overrides` alla proprietà o al metodo che esegue l'override nella classe derivata.  
  
2.  Rimuovere il modificatore `MustOverride` dalla proprietà o dal metodo nella classe base.  
  
## Vedere anche  
 [MustOverride](../Topic/MustOverride%20\(Visual%20Basic\).md)