---
title: "&#200; previsto &#39;=&#39; (inizializzatore di oggetto) | Microsoft Docs"
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
  - "vbc30984"
  - "bc30984"
helpviewer_keywords: 
  - "BC30984"
ms.assetid: 9cae8d32-775a-414f-9e51-0469974b6aab
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;=&#39; (inizializzatore di oggetto)
Per stabilire il valore iniziale per un campo o una proprietà nella dichiarazione di un inizializzatore di oggetto, è necessario usare un segno di uguale. Ad esempio, la dichiarazione seguente assegna "Microsoft" come valore iniziale per la proprietà `Name` di `client`.  
  
```  
Dim client As New Customer { .Name = "Microsoft" }  
```  
  
 **ID errore:** BC30984  
  
### Per correggere l'errore  
  
-   Aggiungere un segno di uguale nella posizione mostrata nell'esempio precedente.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)   
 [NOT IN BUILD: Routine di proprietà e campi](http://msdn.microsoft.com/it-it/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)