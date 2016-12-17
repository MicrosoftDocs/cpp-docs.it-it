---
title: "Character set is missing &#39;]&#39;. | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vs.message.VS_E_RE_SETMISSINGCLOSE"
  - "vs.message.0x800A00C0"
ms.assetid: 97d2436c-498d-4eb0-a08c-8efcc7797fc0
caps.latest.revision: 6
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Character set is missing &#39;]&#39;.
Generalmente questo errore si verifica quando in un'espressione regolare specificata in una stringa di ricerca o sostituzione manca la parentesi quadra di chiusura \(`]`\).  
  
### Per correggere l'errore  
  
1.  Per cercare il valore letterale di carattere `]`, immettere `\]`.  
  
2.  Per definire una corrispondenza con un set di caratteri, immettere la parentesi `]` mancante.  
  
## Vedere anche  
 [Utilizzo delle espressioni regolari in Visual Studio](../Topic/Using%20Regular%20Expressions%20in%20Visual%20Studio.md)   
 [NIB: Find and Replace, Quick Find](http://msdn.microsoft.com/it-it/dad03582-4931-4893-83ba-84b37f5b1600)   
 [Cerca nei file](../Topic/Find%20in%20Files.md)