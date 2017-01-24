---
title: "Il nome di un campo o di una propriet&#224; inizializzato in un inizializzatore di oggetti deve iniziare con &#39;.&#39; | Microsoft Docs"
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
  - "vbc30985"
  - "bc30985"
helpviewer_keywords: 
  - "BC30985"
ms.assetid: 4cb543e1-477c-429c-82df-541ebff08543
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome di un campo o di una propriet&#224; inizializzato in un inizializzatore di oggetti deve iniziare con &#39;.&#39;
Ogni membro inizializzato da un elenco di inizializzatori di oggetti specifica il nome di un campo o di una proprietà e il relativo valore iniziale. Il nome del campo o della proprietà deve essere preceduto da un punto. Ad esempio, la dichiarazione seguente assegna "Microsoft" come valore iniziale per la proprietà `Name` di `client`.  
  
```  
Dim client As New Customer() With { .Name = "Microsoft" }  
```  
  
 **ID errore:** BC30985  
  
### Per correggere l'errore  
  
-   Anteporre un punto a ogni nome di membro.  
  
## Vedere anche  
 [Object Initializers: Named and Anonymous Types](../Topic/Object%20Initializers:%20Named%20and%20Anonymous%20Types%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Routine di proprietà e campi](http://msdn.microsoft.com/it-it/da1c05c1-87c7-40fa-b92c-e9c7e4d170f7)