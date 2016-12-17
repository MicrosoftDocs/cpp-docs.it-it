---
title: "Gli operandi &#39;If&#39; non possono essere argomenti denominati | Microsoft Docs"
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
  - "bc33105"
  - "vbc33105"
helpviewer_keywords: 
  - "BC33105"
ms.assetid: 596baeb6-a44f-4d92-beb7-06624b60c00d
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Gli operandi &#39;If&#39; non possono essere argomenti denominati
L'uso degli argomenti denominati negli operandi dell'operatore `If` non è valido. L'esempio seguente genera questo errore:  
  
```  
Dim i As Integer Dim result As String ' Not valid. ' result = (If(i > 0, TruePart:="positive", FalsePart:="not positive")  
```  
  
 Questo comportamento è diverso da quello della funzione `IIf`, che consente argomenti denominati, come mostrato nel codice seguente:  
  
```  
' Valid. IIf(i > 0, TruePart:="positive", FalsePart:="not positive")  
```  
  
 **ID errore:** BC33105  
  
### Per correggere l'errore  
  
-   Rimuovere le assegnazioni dagli operandi, come mostrato nel codice seguente.  
  
    ```  
    result = If(i > 0, "positive", "not positive")  
    ```  
  
## Vedere anche  
 [If Operator](../Topic/If%20Operator%20\(Visual%20Basic\).md)   
 [Passing Arguments by Position and by Name](../Topic/Passing%20Arguments%20by%20Position%20and%20by%20Name%20\(Visual%20Basic\).md)