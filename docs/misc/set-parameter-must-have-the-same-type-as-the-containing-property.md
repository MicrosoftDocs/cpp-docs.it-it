---
title: "Il parametro &#39;Set&#39; deve essere dello stesso tipo della propriet&#224; che lo contiene | Microsoft Docs"
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
  - "vbc31064"
  - "bc31064"
helpviewer_keywords: 
  - "BC31064"
ms.assetid: f0b8310d-68a1-4989-ac64-03b1861528ad
caps.latest.revision: 8
caps.handback.revision: 8
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Il parametro &#39;Set&#39; deve essere dello stesso tipo della propriet&#224; che lo contiene
Il parametro per la routine di proprietà `Set` presenta un tipo diverso dalla proprietà a cui appartiene.  
  
 **ID errore:** BC31064  
  
### Per correggere l'errore  
  
-   Modificare il tipo di dati del parametro su `Set` in modo che corrisponda al tipo di dati per la proprietà. Ad esempio:  
  
    ```  
    Class Class1 ' Declare a local variable to hold the property value. Private Fval As Integer Property F() As Integer Get Return Fval End Get Set(ByVal Value As Integer) Fval = Value End Set End Property End Class  
    ```  
  
## Vedere anche  
 [NOT IN BUILD: Procedura: Aggiungere campi e proprietà a una classe](http://msdn.microsoft.com/it-it/ae53f61b-3abc-413e-8931-703c5f5e8fc2)   
 [Routine Property](../Topic/Property%20Procedures%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Proprietà e routine delle proprietà](http://msdn.microsoft.com/it-it/23e2a1ec-7e9d-4109-8940-c703d981077b)