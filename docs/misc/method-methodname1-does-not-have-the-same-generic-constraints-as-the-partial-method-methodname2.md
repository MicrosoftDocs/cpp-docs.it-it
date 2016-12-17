---
title: "Il metodo &#39;&lt;nomemetodo1&gt;&#39; non ha gli stessi vincoli generici del metodo parziale &#39;&lt;nomemetodo2&gt;&#39; | Microsoft Docs"
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
  - "bc31438"
  - "vbc31438"
helpviewer_keywords: 
  - "BC31438"
ms.assetid: ea092f0c-661b-49db-80c1-76401fc8bc0b
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomemetodo1&gt;&#39; non ha gli stessi vincoli generici del metodo parziale &#39;&lt;nomemetodo2&gt;&#39;
È stata definita un'implementazione del metodo parziale con vincoli generici che differiscono dai vincoli nella dichiarazione del metodo parziale. Questo errore è illustrato nel codice seguente.  
  
```vb#  
Partial Class Class1 Partial Private Sub Test(Of T As Class)(ByVal arg As T) End Sub End Class Partial Class Class1 '' The error occurs here, for Test. 'Private Sub Test(Of T As Structure)(ByVal arg As T) 'End Sub End Class  
```  
  
 **ID errore:** BC31438  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)   
 [Partial](../Topic/Partial%20\(Visual%20Basic\).md)   
 [Generic Procedures in Visual Basic](../Topic/Generic%20Procedures%20in%20Visual%20Basic.md)