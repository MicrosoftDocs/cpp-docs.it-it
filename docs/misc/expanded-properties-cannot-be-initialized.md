---
title: "Non &#232; possibile inizializzare le propriet&#224; espanse | Microsoft Docs"
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
  - "vbc36714"
  - "bc36714"
helpviewer_keywords: 
  - "BC36714"
ms.assetid: ba9408f3-e606-4749-8372-987999f405f5
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile inizializzare le propriet&#224; espanse
Una proprietà implementata automaticamente può essere inizializzata come parte della relativa dichiarazione, mentre questo non è possibile per una proprietà espansa.  
  
 **ID errore:** BC36714  
  
### Per correggere l'errore  
  
-   Usare una proprietà implementata automaticamente oppure rimuovere l'inizializzazione dalla dichiarazione di proprietà.  
  
## Esempio  
 Gli esempi seguenti mostrano sia le proprietà implementate automaticamente che le proprietà espanse. Le proprietà implementate automaticamente possono essere inizializzate mediante l'assegnazione o una clausola `New`, diversamente dalle proprietà espanse.  
  
```vb#  
Class AutoImplementedExample ' An auto-implemented property can be assigned an initial value. Property IDNum As Integer = 33542 ' An auto-implemented property can be initialized with New. Property Name As New String("Don Hall") End Class Class ExpandedExample ' Attempting to expand an initialized auto-implemented property ' causes this error. 'Property IDNum As Integer = 33542 '    Get '    End Get '    Set(ByVal value As Integer) '    End Set 'End Property ' Instead, you can assign the initial value to the backing field. Private _IDNum As Integer = 33542 Property IDNum As Integer Get End Get Set(ByVal value As Integer) End Set End Property End Class  
```  
  
## Vedere anche  
 [Auto\-Implemented Properties](../Topic/Auto-Implemented%20Properties%20\(Visual%20Basic\).md)   
 [How to: Create a Property](../Topic/How%20to:%20Create%20a%20Property%20\(Visual%20Basic\).md)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)