---
title: "Non &#232; possibile dedurre un tipo comune per il secondo e il terzo operando dell&#39;operatore &#39;If&#39; | Microsoft Docs"
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
  - "vbc33106"
  - "bc33106"
helpviewer_keywords: 
  - "BC33106"
ms.assetid: 793eed88-a9f9-43e3-b657-c16795ecbbcc
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre un tipo comune per il secondo e il terzo operando dell&#39;operatore &#39;If&#39;
Non è possibile dedurre un tipo comune per il secondo e il terzo operando dell'operatore 'If'. Uno deve avere una conversione Widening nell'altro.  
  
 Quando l'operatore `If` viene chiamato con tre argomenti, deve esistere una conversione verso un tipo di dati più grande tra il secondo e terzo argomento. Ad esempio, poiché non è disponibile una conversione verso un tipo di dati più grande in entrambe le direzioni tra `Integer` e `String`, il codice seguente genera questo errore.  
  
```vb#  
Dim divisor = 3  
' Not valid.  
' Console.WriteLine(If(divisor <> 0, number \ divisor, "Division by zero"))  
```  
  
 **ID errore:** BC33106  
  
### Per correggere l'errore  
  
-   Fornire una conversione esplicita per uno degli operandi, se possibile nel codice.  
  
-   Usare la costruzione di una condizione diversa, ad esempio un'istruzione `If...Then...Else`.  
  
## Vedere anche  
 [If Operator](../Topic/If%20Operator%20\(Visual%20Basic\).md)   
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)