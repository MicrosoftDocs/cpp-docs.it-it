---
title: "&#39;&lt;nomemembro&gt;&#39; non &#232; un membro di &#39;&lt;nomecontesto&gt;&#39; e non esiste nel contesto corrente | Microsoft Docs"
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
  - "vbc36557"
  - "bc36557"
helpviewer_keywords: 
  - "BC36557"
ms.assetid: d8671f1c-d545-44da-89b3-7d892e01e8be
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# &#39;&lt;nomemembro&gt;&#39; non &#232; un membro di &#39;&lt;nomecontesto&gt;&#39; e non esiste nel contesto corrente
È stato assegnato un nome di membro inesistente a una proprietà in una dichiarazione di tipo anonimo. Nell'esempio seguente `.Prop1` e `.Prop2` sono le proprietà del tipo anonimo. Il tentativo di assegnare `.Prop3` a `.Prop2` provoca l'errore.  
  
```vb#  
' Not valid.  
Dim anon1 = New With {.Prop1 = 27, .Prop2 = .Prop3}  
  
' The assignment is valid if the assigned property has been declared   
' and initialized.  
Dim anon2 = New With {.Prop1 = 27, .Prop2 = .Prop1}  
```  
  
 **ID errore:** BC36657  
  
### Per correggere l'errore  
  
-   Esaminare il codice per stabilire cosa si vuole assegnare. Il nome della variabile potrebbe essere digitato in modo non corretto o richiedere qualificazione se si tratta di una proprietà di un altro oggetto.  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Procedura: dedurre tipi e nomi di proprietà nelle dichiarazioni di tipo anonimo](../Topic/How%20to:%20Infer%20Property%20Names%20and%20Types%20in%20Anonymous%20Type%20Declarations%20\(Visual%20Basic\).md)