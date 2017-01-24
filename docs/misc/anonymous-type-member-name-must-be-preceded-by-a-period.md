---
title: "Il nome di membro di tipo anonimo deve essere preceduto da un punto | Microsoft Docs"
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
  - "vbc36575"
  - "bc36575"
helpviewer_keywords: 
  - "BC36575"
ms.assetid: b87be29e-39f0-4830-9969-608d71137e3e
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome di membro di tipo anonimo deve essere preceduto da un punto
Nell'elenco degli inizializzatori di oggetto per una dichiarazione di tipo anonimo, un nuovo nome di membro a cui è assegnato un valore deve essere preceduto da un punto. L'esempio seguente mostra una dichiarazione valida e una dichiarazione non valida:  
  
```vb#  
' Valid.  
Dim instanceName1 = New With {.memberName = 10}  
' Invalid declaration that causes this error.  
' Dim instanceName2 = New With {memberName = 10}  
```  
  
 **ID errore:** BC36575  
  
### Per correggere l'errore  
  
-   Aggiungere un punto prima del nome del membro.  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)