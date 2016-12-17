---
title: "&#200; previsto &#39;{&#39; | Microsoft Docs"
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
  - "vbc30987"
  - "bc30987"
helpviewer_keywords: 
  - "BC30987"
ms.assetid: 3d1552b6-338a-47cf-84d5-77b59209e0d3
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#200; previsto &#39;{&#39;
Per dichiarare un'istanza di un tipo denominato o anonimo usando un inizializzatore di oggetto, è necessario racchiudere l'elenco dei campi o delle proprietà e i rispettivi valori iniziali tra parentesi graffe \({e}\).  
  
```  
Dim client As New Customer() With {.Name = "Microsoft", .City = "Seattle"}  
Dim emp = New Employee() With {.Name = "Rob Young", .ID = 55555}  
Dim anon = New With {.ID = 123456}  
```  
  
 **ID errore:** BC30987  
  
### Per correggere l'errore  
  
-   Includere un elenco di inizializzazione dopo `With`, racchiuso tra parentesi graffe.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Routine di proprietà e Campi](http://msdn.microsoft.com/it-it/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)   
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)