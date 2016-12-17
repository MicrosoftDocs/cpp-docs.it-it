---
title: "Il tipo &#39;&lt;nometipo&gt;&#39; deve definire l&#39;operatore &#39;&lt;operatoredeterminante&gt;&#39; per poter essere usato in un&#39;istruzione &#39;&lt;operatorecortocircuito&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33035"
  - "vbc33035"
helpviewer_keywords: 
  - "BC33035"
ms.assetid: 50a0a39f-63cd-4100-aea9-91b5b6ab5bbf
caps.latest.revision: 10
caps.handback.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il tipo &#39;&lt;nometipo&gt;&#39; deve definire l&#39;operatore &#39;&lt;operatoredeterminante&gt;&#39; per poter essere usato in un&#39;istruzione &#39;&lt;operatorecortocircuito&gt;&#39;
Un [AndAlso Operator](../Topic/AndAlso%20Operator%20\(Visual%20Basic\).md) o un [OrElse Operator](../Topic/OrElse%20Operator%20\(Visual%20Basic\).md) usa operandi di un tipo di classe o struttura, quando quella classe o struttura non definisce un operatore richiesto.  
  
 Poiché non si definisce direttamente un operatore di corto circuito \(`AndAlso` o `OrElse`\), è necessario definire gli operatori logici e determinanti corrispondenti. La tabella seguente mostra gli operatori richiesti.  
  
|Operatore di corto circuito|Operatore logico|Operatore determinante|  
|---------------------------------|----------------------|----------------------------|  
|`AndAlso`|[And Operator](../Topic/And%20Operator%20\(Visual%20Basic\).md)|[IsFalse Operator](../Topic/IsFalse%20Operator%20\(Visual%20Basic\).md)|  
|`OrElse`|[Or Operator](../Topic/Or%20Operator%20\(Visual%20Basic\).md)|[IsTrue Operator](../Topic/IsTrue%20Operator%20\(Visual%20Basic\).md)|  
  
 [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] usa questi operatori logici e determinanti per costruire la logica di corto circuito di `AndAlso` o `OrElse`. Per il funzionamento corretto di questa operazione, è necessario che gli operandi e il valore restituito della definizione di `And` o `Or` siano del tipo contenitore, vale a dire, il tipo della classe o della struttura in cui si definisce `And` o `Or`.  
  
 **ID errore:** BC33035  
  
### Per correggere l'errore  
  
-   Definire gli operatori `And` e `IsFalse` oppure gli operatori `Or` e `IsTrue` nella classe o struttura usata per il tipo di operando dell'operatore `AndAlso` o `OrElse`. Verificare che gli operandi per `And` o `Or` siano del tipo della classe o struttura in cui sono definiti.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Logical and Bitwise Operators in Visual Basic](../Topic/Logical%20and%20Bitwise%20Operators%20in%20Visual%20Basic.md)