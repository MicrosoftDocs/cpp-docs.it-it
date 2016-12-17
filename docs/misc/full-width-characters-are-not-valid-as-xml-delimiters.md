---
title: "I caratteri a larghezza intera non sono validi come delimitatori XML | Microsoft Docs"
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
  - "vbc31197"
  - "bc31197"
helpviewer_keywords: 
  - "BC31197"
ms.assetid: f5d724f8-545b-4cf8-9606-12c63814c6e8
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I caratteri a larghezza intera non sono validi come delimitatori XML
È stato definito un valore letterale XML che include un carattere a larghezza intera come delimitatore. I caratteri a larghezza intera sono detti anche caratteri wide o multibyte.  
  
 **ID errore:** BC31197  
  
### Per correggere l'errore  
  
-   Rimuovere il carattere a larghezza intera dalla definizione del valore letterale XML e sostituirlo con un carattere di delimitazione ANSI valido. I caratteri di delimitazione validi sono `<`, `>`, `=`, `:` e `/`.  
  
## Vedere anche  
 [XML Literals](../Topic/XML%20Literals%20\(Visual%20Basic\).md)   
 [Codifica di caratteri in .NET Framework](../Topic/Character%20Encoding%20in%20the%20.NET%20Framework.md)   
 [XML](../Topic/XML%20in%20Visual%20Basic.md)