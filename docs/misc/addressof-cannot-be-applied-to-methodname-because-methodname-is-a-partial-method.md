---
title: "Impossibile applicare &#39;AddressOf&#39; a &#39;methodname&#39; perch&#233; &#39;methodname&#39; &#232; un metodo parziale | Microsoft Docs"
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
  - "vbc31440"
  - "bc31440"
helpviewer_keywords: 
  - "BC31440"
ms.assetid: 924dbada-3e0a-4004-a3ae-a209b7c3d1fa
caps.latest.revision: 4
caps.handback.revision: 4
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile applicare &#39;AddressOf&#39; a &#39;methodname&#39; perch&#233; &#39;methodname&#39; &#232; un metodo parziale
È stato passato un metodo parziale all'operatore `AddressOf`. I metodi parziali sono valori non validi per l'operatore `AddressOf`.  
  
 **ID errore:** BC31440  
  
### Per correggere l'errore  
  
1.  Aggiungere un metodo di implementazione per il metodo parziale. Il metodo di implementazione è un valore valido per l'operatore `AddressOf`. L'esempio seguente mostra una firma del metodo parziale e la relativa implementazione.  
  
    ```vb#  
    ' Definition of the partial method signature.  
    Partial Private Sub OnNameChanged()  
        ' The body of the signature is empty.  
    End Sub  
  
    ' Implementation of the partial method.  
    Private Sub OnNameChanged()  
        MsgBox("Name was changed to " & Me.Name)  
    End Sub  
    ```  
  
## Vedere anche  
 [AddressOf Operator](../Topic/AddressOf%20Operator%20\(Visual%20Basic\).md)   
 [Partial Methods](../Topic/Partial%20Methods%20\(Visual%20Basic\).md)