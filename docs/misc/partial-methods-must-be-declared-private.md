---
title: "I metodi parziali devono essere dichiarati &#39;Private&#39; | Microsoft Docs"
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
  - "vbc31432"
  - "bc31432"
helpviewer_keywords: 
  - "BC31432"
ms.assetid: 3a4474d9-661e-4793-9624-30cf81faddcf
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi parziali devono essere dichiarati &#39;Private&#39;
Il modificatore di accesso `Private` è obbligatorio nelle dichiarazioni di metodo parziali. L'esempio seguente mostra l'uso di `Private` nella firma del metodo e la relativa implementazione.  
  
```vb#  
' Definition of the partial method signature. Partial Private Sub OnNameChanged() ' The body of the signature is empty. End Sub  
```  
  
```vb#  
' Implementation of the partial method. Private Sub OnNameChanged() MsgBox("Name was changed to " & Me.Name) End Sub  
```  
  
 **ID errore:** BC31432  
  
### Per correggere l'errore  
  
-   Aggiungere la parola chiave `Private` prima di `Sub` nelle dichiarazioni di firma e di implementazione.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)