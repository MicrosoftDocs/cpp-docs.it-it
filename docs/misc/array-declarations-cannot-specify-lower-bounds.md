---
title: "Le dichiarazioni di matrice non possono specificare limiti inferiori | Microsoft Docs"
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
  - "vbc30805"
  - "bc30805"
helpviewer_keywords: 
  - "BC30805"
ms.assetid: f2055387-f4dc-4366-89fb-d752929a0258
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Le dichiarazioni di matrice non possono specificare limiti inferiori
Il limite inferiore delle matrici è sempre zero. È possibile specificare zero come limite inferiore per rendere il codice più leggibile. Non è tuttavia possibile specificare altri valori per il limite inferiore.  
  
 **ID errore:** BC30805  
  
### Per correggere l'errore  
  
-   Creare matrici di dimensioni pari al numero totale di elementi meno uno. Ad esempio, `Dim y(6)` ha le stesse dimensioni di `Dim x(3 To 9)` \(7 elementi\). È anche possibile specificare `Dim y(0 To 6)`.  
  
-   Usare gli offset per simulare i limiti inferiori diversi da zero. L'esempio seguente simula una matrice di dimensioni comprese tra 3 e 9.  
  
    ```  
    Const offset As Integer = 3 Dim arrayIndex As Integer ' arrayIndex can vary between 3 and 9. Dim y(0 To 6) ' The preceding statement allocates the same number of elements ' as Dim y(3 To 9). y(arrayIndex - offset) = value ' The preceding statement converts arrayIndex to the ' corresponding index of y.  
    ```  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [Array Dimensions in Visual Basic](../Topic/Array%20Dimensions%20in%20Visual%20Basic.md)   
 [NOTINBUILD Procedura: Specificare un limite inferiore pari a zero in una matrice](http://msdn.microsoft.com/it-it/20ffd49a-64f7-4634-8ed0-46ba1049d935)