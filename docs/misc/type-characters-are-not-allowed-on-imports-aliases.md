---
title: "I caratteri di tipo non sono consentiti negli alias di Imports | Microsoft Docs"
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
  - "vbc31398"
  - "BC31398"
helpviewer_keywords: 
  - "BC31398"
ms.assetid: 0620669d-b529-49f3-9deb-aeda4dacc58a
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I caratteri di tipo non sono consentiti negli alias di Imports
L'alias di importazione all'interno di un'istruzione `Imports` contiene almeno un carattere di tipo identificatore.  
  
 Un alias di importazione deve essere un nome valido di Visual Basic. I caratteri consentiti non includono i caratteri di tipo identificatore, ovvero `%`, `&`, `@`, `!`, `#` e `$`. Vedere [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md).  
  
 **ID errore:** BC31398  
  
### Per correggere l'errore  
  
-   Rimuovere il carattere o i caratteri di tipo identificatore dall'alias di Imports.  
  
## Vedere anche  
 [Type Characters](../Topic/Type%20Characters%20\(Visual%20Basic\).md)   
 [Declared Element Names](../Topic/Declared%20Element%20Names%20\(Visual%20Basic\).md)   
 [Imports Statement \(.NET Namespace and Type\)](../Topic/Imports%20Statement%20\(.NET%20Namespace%20and%20Type\).md)   
 [NOTINBUILD: Risoluzione di un riferimento quando più variabili hanno lo stesso nome](http://msdn.microsoft.com/it-it/9601e39f-1911-44e1-ace5-3f6e090408b9)