---
title: "Non &#232; possibile applicare attributi a parametri delle espressioni lambda | Microsoft Docs"
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
  - "vbc36634"
  - "bc36634"
helpviewer_keywords: 
  - "BC36634"
ms.assetid: ed751d8d-11b7-4210-97e0-0319edff8c34
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile applicare attributi a parametri delle espressioni lambda
È stato applicato un attributo a un parametro in una definizione di espressione lambda. Questa operazione non è supportata. Il codice seguente causa questo errore.  
  
```vb#  
Sub LambaAttribute()  
    ' Not valid.  
    Dim add1 = _  
    Function(<System.Runtime.InteropServices.InAttribute()> m As Integer) _  
                   m + 1  
End Sub  
```  
  
 **ID errore:** BC36634  
  
### Per correggere l'errore  
  
-   Rimuovere l'attributo o provare a modificare il codice modificando l'espressione lambda in una funzione normale.  
  
## Vedere anche  
 <xref:System.Runtime.InteropServices.InAttribute>   
 [Lambda Expressions](../Topic/Lambda%20Expressions%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Attributi in Visual Basic](http://msdn.microsoft.com/it-it/620bfc0e-4582-4c8b-8432-ebc5c3dccc22)