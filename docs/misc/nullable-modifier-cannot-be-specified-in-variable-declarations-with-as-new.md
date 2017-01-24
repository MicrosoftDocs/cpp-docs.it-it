---
title: "Non &#232; possibile specificare un modificatore nullable in dichiarazioni di variabili con &#39;As New&#39; | Microsoft Docs"
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
  - "bc33109"
  - "vbc33109"
helpviewer_keywords: 
  - "BC33109"
ms.assetid: 135def20-3535-4239-bffb-43208d1b3f63
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare un modificatore nullable in dichiarazioni di variabili con &#39;As New&#39;
Il modificatore di tipo nullable \(?\) è stato incluso in una dichiarazione di variabile in cui è stato specificato `As New`. L'esempio seguente genera questo errore:  
  
```vb#  
Dim num? As New ExampleStructure  
```  
  
 **ID errore:** BC33109  
  
### Per correggere l'errore  
  
1.  Rimuovere la parola chiave `New` dalla dichiarazione di variabile che ammette valori nullable, come mostrato nell'esempio seguente:  
  
    ```vb#  
    Dim num? As ExampleStructure  
    ```  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)