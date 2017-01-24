---
title: "Sono presenti pi&#249; inizializzazioni di &#39;&lt;nomemembro&gt;&#39; | Microsoft Docs"
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
  - "vbc30989"
  - "bc30989"
helpviewer_keywords: 
  - "BC30989"
ms.assetid: 574b6398-1e9d-43e1-ac16-6fc8687f71d9
caps.latest.revision: 13
caps.handback.revision: 13
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Sono presenti pi&#249; inizializzazioni di &#39;&lt;nomemembro&gt;&#39;
Sono presenti più inizializzazioni di '\<nomemembro\>'. I campi e le proprietà possono essere inizializzati solo se presenti in un'espressione dell'inizializzatore di oggetti.  
  
 Si può assegnare un valore iniziale a ogni campo e proprietà in un elenco di inizializzatori di oggetti una sola volta. La dichiarazione seguente non è valida.  
  
```  
' Dim cust = New Customer() With {.Name = "Bob", .Name = "Robert"}  
```  
  
> [!NOTE]
>  Si può usare un campo o una proprietà come valore iniziale per un altro membro, come mostrato nella dichiarazione seguente.  
  
```  
Dim cust = New Customer() With {.First = "Mike", .Last = "Nash", _ .Full = .First & " " & .Last}  
```  
  
 **ID errore:** BC30989  
  
### Per correggere l'errore  
  
-   Eliminare tutte le inizializzazioni tranne una per ogni campo o proprietà nell'elenco di inizializzatori di oggetti.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Routine di proprietà e Campi](http://msdn.microsoft.com/it-it/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)