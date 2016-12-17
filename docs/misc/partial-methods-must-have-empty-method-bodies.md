---
title: "I metodi parziali devono avere corpi dei metodi vuoti | Microsoft Docs"
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
  - "bc31435"
  - "vbc31435"
helpviewer_keywords: 
  - "BC31435"
ms.assetid: 279f283d-ce40-401c-8494-4bf06394fdd3
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# I metodi parziali devono avere corpi dei metodi vuoti
Il corpo di una dichiarazione di firma del metodo parziale non deve contenere alcun codice. L'esempio seguente mostra una firma del metodo parziale e la relativa implementazione.  
  
```  
' Definition of the partial method signature. Partial Private Sub OnNameChanged() ' The body of the signature is empty. End Sub  
```  
  
```  
' Implementation of the partial method. Private Sub OnNameChanged() MsgBox("Name was changed to " & Me.Name) End Sub  
```  
  
 **ID errore:** 31435  
  
### Per correggere l'errore  
  
-   Rimuovere il codice dalla dichiarazione di metodo parziale.  
  
## Vedere anche  
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)