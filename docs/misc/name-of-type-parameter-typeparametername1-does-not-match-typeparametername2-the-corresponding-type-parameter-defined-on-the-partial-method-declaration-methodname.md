---
title: "Il nome del parametro di tipo &#39;&lt;nomeparametrotipo1&gt;&#39; non corrisponde a &#39;&lt;nomeparametrotipo2&gt;&#39;, il parametro di tipo corrispondente definito nella dichiarazione del metodo parziale &#39;&lt;nomemetodo&gt;&#39; | Microsoft Docs"
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
  - "vbc31443"
  - "bc31443"
helpviewer_keywords: 
  - "BC31443"
ms.assetid: 27c81cc1-325e-4e86-9d00-34f81e928076
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il nome del parametro di tipo &#39;&lt;nomeparametrotipo1&gt;&#39; non corrisponde a &#39;&lt;nomeparametrotipo2&gt;&#39;, il parametro di tipo corrispondente definito nella dichiarazione del metodo parziale &#39;&lt;nomemetodo&gt;&#39;
In un metodo parziale che include uno o più parametri di tipo, i nomi dei parametri di tipo devono essere uguali nella dichiarazione del metodo e nell'implementazione del metodo.  
  
 La dichiarazione e l'implementazione riportate di seguito, ad esempio, causano questo errore.  
  
```vb#  
' Definition of the partial method signature with type parameter T. Partial Private Sub OnNameChanged(Of T)() End Sub  
```  
  
```vb#  
'' Implementation of the partial method with type parameter N. 'Private Sub OnNameChanged(Of N)() '    Console.WriteLine("Name was changed to " & Me.Name) 'End Sub  
```  
  
 **ID errore:** BC31443  
  
### Per correggere l'errore  
  
-   Esaminare i parametri di tipo per determinare dove non corrispondono. Modificare i nomi in modo da renderli uguali.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)