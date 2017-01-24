---
title: "Non &#232; possibile usare la propriet&#224; di membro &#39;&lt;nomepropriet&#224;&gt;&#39; di tipo anonimo per dedurre il tipo di un&#39;altra propriet&#224; di membro perch&#233; il tipo di &#39;&lt;nomepropriet&#224;&gt;&#39; non &#232; ancora stabilito | Microsoft Docs"
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
  - "vbc36559"
  - "bc36559"
helpviewer_keywords: 
  - "BC36559"
ms.assetid: 58ab8d35-9d85-4aca-8b4e-f232d7e4af61
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare la propriet&#224; di membro &#39;&lt;nomepropriet&#224;&gt;&#39; di tipo anonimo per dedurre il tipo di un&#39;altra propriet&#224; di membro perch&#233; il tipo di &#39;&lt;nomepropriet&#224;&gt;&#39; non &#232; ancora stabilito
Fino a quando non viene stabilito il tipo di una proprietà di tipo anonimo, non può essere usata per stabilire il tipo di un'altra proprietà. Ad esempio, nella dichiarazione seguente `.IDName = .LastName` non è valido perché `.LastName` non è ancora stato inizializzato.  
  
```  
' Not valid.   
' Dim anon1 = New With {Key .IDName = .LastName, Key .LastName = "Jones"}   
```  
  
 **ID errore:** BC36559  
  
### Per correggere l'errore  
  
-   Stabilire il tipo della proprietà prima di usarla per inizializzare un'altra proprietà.  
  
    ```  
    Dim anon2 = New With {Key .LastName = "Jones", Key .IDName = .LastName}  
    ```  
  
## Vedere anche  
 [Anonymous Types](../Topic/Anonymous%20Types%20\(Visual%20Basic\).md)   
 [Procedura: dedurre tipi e nomi di proprietà nelle dichiarazioni di tipo anonimo](../Topic/How%20to:%20Infer%20Property%20Names%20and%20Types%20in%20Anonymous%20Type%20Declarations%20\(Visual%20Basic\).md)