---
title: "Non &#232; possibile inizializzare il membro &#39;&lt;nomemembro&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetti perch&#233; non &#232; un campo o una propriet&#224; | Microsoft Docs"
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
  - "bc30990"
  - "vbc30990"
helpviewer_keywords: 
  - "BC30990"
ms.assetid: 3be2c135-20f6-49b2-a324-d213cfdf9ee3
caps.latest.revision: 11
caps.handback.revision: 11
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile inizializzare il membro &#39;&lt;nomemembro&gt;&#39; in un&#39;espressione dell&#39;inizializzatore di oggetti perch&#233; non &#232; un campo o una propriet&#224;
Un elenco di inizializzatori di oggetti non può includere membri condivisi, costanti o chiamate di metodo. I membri nell'elenco di inizializzatori devono essere campi o proprietà e i membri della proprietà non richiedono argomenti.  
  
 **ID errore:** BC30990  
  
### Per correggere l'errore  
  
-   Rimuovere dall'elenco di inizializzatori di oggetti tutti i membri condivisi, le costanti, le chiamate di metodo o le proprietà che includono parametri.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Membri condivisi in Visual Basic](http://msdn.microsoft.com/it-it/dbc3783f-83a2-4225-995d-c2d6d025663d)   
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [NOT IN BUILD: Proprietà predefinite](http://msdn.microsoft.com/it-it/a70f2a27-8176-4858-935e-f25afdd43ab5)   
 [NOT IN BUILD: Membri di oggetti](http://msdn.microsoft.com/it-it/dfc2cc12-0e66-44fb-a78e-14f931db2309)   
 [Const Statement](../Topic/Const%20Statement%20\(Visual%20Basic\).md)