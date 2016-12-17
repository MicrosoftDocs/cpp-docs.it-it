---
title: "Il tipo anonimo deve contenere almeno un membro | Microsoft Docs"
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
  - "bc36574"
  - "vbc36574"
helpviewer_keywords: 
  - "BC36574"
ms.assetid: fdc8dd47-ea38-49e8-8dd5-676f726cd101
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo anonimo deve contenere almeno un membro
L'elenco di inizializzatori in una dichiarazione di tipo anonimo non può essere vuoto.  
  
```  
' Not valid. ' Dim anonInstance = New With {}  
```  
  
 **ID errore:** BC36574  
  
### Per correggere l'errore  
  
-   Dichiarare un membro all'interno delle parentesi graffe, come illustrato nel codice seguente.  
  
    ```  
    Dim anonInstance = New With {.MemberName = "value"}  
    ```  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)