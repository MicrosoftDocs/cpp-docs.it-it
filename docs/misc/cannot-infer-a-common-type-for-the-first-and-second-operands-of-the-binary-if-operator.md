---
title: "Non &#232; possibile dedurre un tipo comune per il primo e il secondo operando dell&#39;operatore &#39;If&#39; | Microsoft Docs"
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
  - "vbc33110"
  - "bc33110"
helpviewer_keywords: 
  - "BC33110"
ms.assetid: f46873aa-f6cd-4cc9-9e8e-e668bddf0980
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre un tipo comune per il primo e il secondo operando dell&#39;operatore &#39;If&#39;
Non è possibile dedurre un tipo comune per il primo e il secondo operando dell'operatore 'If'. Uno deve avere una conversione Widening nell'altro.  
  
 L'operatore binario `If` richiede che ci sia una conversione verso un tipo di dati più grande tra uno degli argomenti e l'altro. Ad esempio, poiché non è disponibile una conversione verso un tipo di dati più grande in entrambe le direzioni tra `Integer` e `String`, il codice seguente genera questo errore.  
  
```vb#  
Dim first? As Integer  
Dim second As String = "First is Nothing"  
'' Not valid.  
' Console.WriteLine(If(first, second))  
```  
  
 **ID errore:** BC33110  
  
### Per correggere l'errore  
  
-   Fornire una conversione esplicita per uno degli operandi, se possibile nel codice:  
  
    ```  
    Console.WriteLine(If(first, CInt(second)))   
    ```  
  
-   Riscrivere il codice usando una diversa costruzione condizionale.  
  
    ```  
    If first IsNot Nothing Then  
        Console.WriteLine(first)  
    Else  
        Console.WriteLine(second)  
    End If  
    ```  
  
## Vedere anche  
 [If Operator](../Topic/If%20Operator%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [If...Then...Else Statement](../Topic/If...Then...Else%20Statement%20\(Visual%20Basic\).md)