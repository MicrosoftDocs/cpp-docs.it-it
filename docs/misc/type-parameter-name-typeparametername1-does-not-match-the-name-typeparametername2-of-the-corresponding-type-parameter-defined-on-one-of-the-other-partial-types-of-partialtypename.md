---
title: "Il nome &#39;&lt;nomeparametrotipo1&gt;&#39; del parametro di tipo non corrisponde al nome &#39;&lt;nomeparametrotipo2&gt;&#39; del corrispondente parametro di tipo definito in uno degli altri tipi parziali di &#39;&lt;nometipoparziale&gt;&#39; | Microsoft Docs"
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
  - "vbc30931"
  - "bc30931"
helpviewer_keywords: 
  - "BC30931"
ms.assetid: 01b053c3-d1b5-4e69-b908-3d5cfc73913b
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome &#39;&lt;nomeparametrotipo1&gt;&#39; del parametro di tipo non corrisponde al nome &#39;&lt;nomeparametrotipo2&gt;&#39; del corrispondente parametro di tipo definito in uno degli altri tipi parziali di &#39;&lt;nometipoparziale&gt;&#39;
Una classe o struttura generica viene definita in più dichiarazioni parziali con specifiche del parametro di tipo in conflitto.  
  
 Quando si divide la definizione di una classe o struttura in diverse dichiarazioni parziali, il compilatore considera il tipo come l'unione di tutte le relative dichiarazioni parziali. Questo riguarda non soltanto i membri, ma anche l'implementazione, l'ereditarietà e il livello di accesso.  
  
 Non è possibile specificare più nomi per un parametro di tipo nella definizione di una classe o di una struttura generica.  
  
 **ID errore:** BC30931  
  
### Per correggere l'errore  
  
-   Stabilire il nome da assegnare al parametro di tipo e usare lo stesso nome in ogni dichiarazione parziale.  
  
## Vedere anche  
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [Class Statement](../Topic/Class%20Statement%20\(Visual%20Basic\).md)   
 [Structure Statement](../Topic/Structure%20Statement.md)   
 [NOT IN BUILD: Classi: progetti iniziali degli oggetti](http://msdn.microsoft.com/it-it/2c86373d-0333-4616-a7d8-4790c4e89f7b)   
 [Structures](../Topic/Structures%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)