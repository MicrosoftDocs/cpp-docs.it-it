---
title: "I tipi restituiti e i tipi di parametro di &#39;&lt;operatorelogico&gt;&#39; devono essere &#39;&lt;nometipo&gt;&#39; per poter essere usati in un&#39;espressione &#39;&lt;operatorecortocircuito&gt;&#39; | Microsoft Docs"
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
  - "vbc33034"
  - "bc33034"
helpviewer_keywords: 
  - "BC33034"
ms.assetid: 94cd52dc-5d48-4673-b0b8-38a1954483c6
caps.latest.revision: 12
caps.handback.revision: 12
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I tipi restituiti e i tipi di parametro di &#39;&lt;operatorelogico&gt;&#39; devono essere &#39;&lt;nometipo&gt;&#39; per poter essere usati in un&#39;espressione &#39;&lt;operatorecortocircuito&gt;&#39;
Un operatore `And` o un operatore `Or` è dichiarato con parametri non adatti o un tipo restituito per l'uso in un [AndAlso Operator](../Topic/AndAlso%20Operator%20\(Visual%20Basic\).md) o in un [OrElse Operator](../Topic/OrElse%20Operator%20\(Visual%20Basic\).md).  
  
 Poiché non si definisce direttamente un operatore di corto circuito \(`AndAlso` o `OrElse`\), è necessario definire gli operatori logici e determinanti corrispondenti. La tabella seguente mostra gli operatori richiesti.  
  
|Operatore di corto circuito|Operatore logico|Operatore determinante|  
|---------------------------------|----------------------|----------------------------|  
|`AndAlso`|[And Operator](../Topic/And%20Operator%20\(Visual%20Basic\).md)|[IsFalse Operator](../Topic/IsFalse%20Operator%20\(Visual%20Basic\).md)|  
|`OrElse`|[Or Operator](../Topic/Or%20Operator%20\(Visual%20Basic\).md)|[IsTrue Operator](../Topic/IsTrue%20Operator%20\(Visual%20Basic\).md)|  
  
 [!INCLUDE[vbprvb](../dotnet/includes/vbprvb_md.md)] usa questi operatori logici e determinanti per costruire la logica di corto circuito di `AndAlso` o `OrElse`. Per il funzionamento corretto di questa operazione, è necessario che gli operandi e il valore restituito della definizione di `And` o `Or` siano del tipo contenitore, vale a dire, il tipo della classe o della struttura in cui si definisce `And` o `Or`.  
  
 **ID errore:** BC33034  
  
### Per correggere l'errore  
  
-   Cambiare il tipo di entrambi gli operandi e il valore restituito con il tipo della classe o della struttura in cui si definisce questo operatore.  
  
     \-oppure\-  
  
-   Non usare l'operatore di corto circuito corrispondente \(`AndAlso` o `OrElse`\) con gli operandi del tipo della classe o della struttura in cui si definisce questo operatore `And` o `Or`.  
  
## Vedere anche  
 [Operator Procedures](../Topic/Operator%20Procedures%20\(Visual%20Basic\).md)   
 [Operator Statement](../Topic/Operator%20Statement.md)   
 [How to: Define an Operator](../Topic/How%20to:%20Define%20an%20Operator%20\(Visual%20Basic\).md)   
 [How to: Define a Conversion Operator](../Topic/How%20to:%20Define%20a%20Conversion%20Operator%20\(Visual%20Basic\).md)   
 [Logical and Bitwise Operators in Visual Basic](../Topic/Logical%20and%20Bitwise%20Operators%20in%20Visual%20Basic.md)