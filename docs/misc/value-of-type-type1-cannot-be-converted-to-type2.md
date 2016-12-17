---
title: "Impossibile convertire il valore di tipo &#39;&lt;tipo1&gt;&#39; in &#39;&lt;tipo2&gt;&#39; | Microsoft Docs"
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
  - "bc30311"
  - "vbc30311"
helpviewer_keywords: 
  - "BC30311"
ms.assetid: e3a513d4-2a1e-46d6-b592-b2e756b89d7d
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile convertire il valore di tipo &#39;&lt;tipo1&gt;&#39; in &#39;&lt;tipo2&gt;&#39;
Un'istruzione prova a convertire un tipo di dati in un altro usando una procedura non definita. Alcune cause possibili di questo errore sono:  
  
-   Una conversione specifica due tipi di dati tra cui non viene eseguita alcuna conversione. Un esempio può essere una conversione da un valore `Boolean` al tipo `Date`.  
  
-   L'inizializzazione di una matrice non comprende parentesi graffe \(`{}`\) dopo una clausola `New`. In questo caso, \<tipo2\> è nella forma '1\-dimensional array of \<tipo\>'.  
  
 **ID errore:** BC30311  
  
### Per correggere l'errore  
  
-   Accertarsi che l'espressione possa essere convertita nel tipo di dati di destinazione.  
  
-   Se \<tipo2\> è una matrice, assicurarsi che la clausola `New` contenga sia le parentesi che le parentesi graffe dopo il nome del tipo. Il codice seguente illustra la corretta inizializzazione di una matrice.  
  
    ```  
    Dim anIntArray As Integer() = New Integer() {}  
    ```  
  
## Vedere anche  
 [Type Conversions in Visual Basic](../Topic/Type%20Conversions%20in%20Visual%20Basic.md)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)