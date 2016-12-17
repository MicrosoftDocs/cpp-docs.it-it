---
title: "I metodi parziali devono essere dichiarati come &#39;Private&#39; anzich&#233; &#39;&lt;ModificatoreAccesso&gt;&#39; | Microsoft Docs"
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
  - "vbc31431"
  - "bc31431"
helpviewer_keywords: 
  - "BC31431"
ms.assetid: bbd757f3-7281-4488-8a06-f3b4bcc820dc
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi parziali devono essere dichiarati come &#39;Private&#39; anzich&#233; &#39;&lt;ModificatoreAccesso&gt;&#39;
Il modificatore di accesso `Private` è obbligatorio nelle dichiarazioni di metodo parziali. L'esempio seguente mostra l'uso di `Private` nella firma del metodo e la relativa implementazione.  
  
```vb#  
' Definition of the partial method signature. Partial Private Sub OnNameChanged() ' The body of the signature is empty. End Sub  
```  
  
```vb#  
' Implementation of the partial method. Private Sub OnNameChanged() MsgBox("Name was changed to " & Me.Name) End Sub  
```  
  
 **ID errore:** BC31431  
  
### Per correggere l'errore  
  
-   Modificare il modificatore di accesso in `Private` nelle dichiarazioni di firma e di implementazione.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)