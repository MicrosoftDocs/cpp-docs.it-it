---
title: "Option Strict Custom pu&#242; essere utilizzato solo come opzione del compilatore da riga di comando (vbc.exe) | Microsoft Docs"
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
  - "vbc31141"
  - "bc31141"
helpviewer_keywords: 
  - "BC31141"
ms.assetid: c32ae8ff-aacc-40b4-960a-6f2d5d246671
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict Custom pu&#242; essere utilizzato solo come opzione del compilatore da riga di comando (vbc.exe)
L'istruzione `Option Strict` accetta solo `On` e `Off` come argomenti. `Option Strict Custom` non è consentito.  
  
 Usare l'opzione del compilatore `/optionstrict:custom` per segnalare quando la semantica della lingua ridotta non viene rispettata.  
  
 **ID errore:** BC31141  
  
### Per correggere l'errore  
  
1.  Rimuovere `Option Strict Custom` dal codice sorgente.  
  
2.  Specificare l'opzione `/optionstrict:custom`. Per altre informazioni, vedere [\/optionstrict](../Topic/-optionstrict.md).  
  
## Vedere anche  
 [Option \<keyword\> Statement](../Topic/Option%20%3Ckeyword%3E%20Statement.md)   
 [Option Strict Statement](../Topic/Option%20Strict%20Statement.md)   
 [\/optionstrict](../Topic/-optionstrict.md)