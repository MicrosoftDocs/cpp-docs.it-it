---
title: "Il metodo &#39;&lt;nomemetodo1&gt;&#39; deve essere dichiarato come &#39;Private&#39; per implementare il metodo parziale &#39;&lt;nomemetodo2&gt;&#39;  | Microsoft Docs"
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
  - "vbc31441"
  - "bc31441"
helpviewer_keywords: 
  - "BC31441"
ms.assetid: 4d8d19ad-0c3b-4eba-ada8-2cfa6ae795c4
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il metodo &#39;&lt;nomemetodo1&gt;&#39; deve essere dichiarato come &#39;Private&#39; per implementare il metodo parziale &#39;&lt;nomemetodo2&gt;&#39; 
L'implementazione di un metodo parziale deve essere dichiarata come `Private`. Il codice seguente, ad esempio, causa questo errore.  
  
```vb#  
Partial Class Product ' Declaration of the partial method. Partial Private Sub valueChanged() End Sub End Class  
```  
  
```vb#  
Partial Class Product ' Implementation of the partial method, with Private missing, ' causes this error. 'Sub valueChanged() '    MsgBox(Value was changed to " & Me.Quantity) 'End Sub End Class  
```  
  
 **ID errore:** BC31441  
  
### Per correggere l'errore  
  
1.  Usare il modificatore di accesso `Private` nell'implementazione del metodo parziale, come mostrato nell'esempio seguente.  
  
    ```vb#  
    Private Sub valueChanged() MsgBox(Value was changed to " & Me.Quantity) End Sub  
    ```  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)   
 [Access Levels in Visual Basic](../Topic/Access%20Levels%20in%20Visual%20Basic.md)