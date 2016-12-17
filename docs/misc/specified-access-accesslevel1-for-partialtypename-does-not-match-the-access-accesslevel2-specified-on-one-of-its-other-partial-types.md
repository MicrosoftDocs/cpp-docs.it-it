---
title: "L&#39;accesso &#39;&lt;livelloaccesso1&gt;&#39; specificato per &#39;&lt;nometipoparziale&gt;&#39; non corrisponde all&#39;accesso &#39;&lt;livelloaccesso2&gt;&#39; specificato in uno degli altri tipi parziali | Microsoft Docs"
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
  - "vbc30925"
  - "BC30925"
helpviewer_keywords: 
  - "BC30925"
ms.assetid: aabe0f4a-dc02-4828-a837-20cd47a7bd43
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# L&#39;accesso &#39;&lt;livelloaccesso1&gt;&#39; specificato per &#39;&lt;nometipoparziale&gt;&#39; non corrisponde all&#39;accesso &#39;&lt;livelloaccesso2&gt;&#39; specificato in uno degli altri tipi parziali
Una classe o struttura viene definita in più dichiarazioni parziali con specifiche del livello di accesso in conflitto.  
  
 Quando si divide la definizione di una classe o struttura in diverse dichiarazioni parziali, il compilatore considera il tipo come l'unione di tutte le relative dichiarazioni parziali. Questo riguarda non soltanto i membri, ma anche l'implementazione, l'ereditarietà e il livello di accesso.  
  
 Non è consentito combinare livelli di accesso nella definizione di una classe o di una struttura. Anche la combinazione `Protected Friend` è consentita solo quando le parole chiave sono contigue nell'istruzione della stessa dichiarazione.  
  
 **ID errore:** BC30925  
  
### Per correggere l'errore  
  
-   Stabilire quale dovrebbe essere il livello di accesso della classe e rimuovere eventuali specifiche conflittuali del livello di accesso.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)   
 [NOT IN BUILD: Classi: progetti iniziali degli oggetti](http://msdn.microsoft.com/it-it/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)