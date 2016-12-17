---
title: "Impossibile dedurre il tipo di &#39;&lt;nomevariabile&gt;&#39; da un&#39;espressione contenente &#39;&lt;nomevariabile&gt;&#39; | Microsoft Docs"
ms.custom: ""
ms.date: "11/24/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vbc30980"
  - "bc30980"
helpviewer_keywords: 
  - "BC30980"
ms.assetid: 43a5d008-5362-481b-845b-b9bb00a61a83
caps.latest.revision: 21
caps.handback.revision: 21
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile dedurre il tipo di &#39;&lt;nomevariabile&gt;&#39; da un&#39;espressione contenente &#39;&lt;nomevariabile&gt;&#39;
Il compilatore non può dedurre il tipo di dati di una variabile se la variabile viene usata per stabilire il relativo valore iniziale nella dichiarazione.  
  
 Ad esempio, con `Option Infer` impostato su `On`, negli esempi seguenti non vengono compilati:  
  
-   Dichiarazioni  
  
    ```  
    ' Does not compile with Option Infer on. Dim m = m Dim d = someFunction(d)  
    ```  
  
-   Ciclo `For`  
  
    ```  
    ' Does not compile with Option Infer on. For j = 1 To j Next  
    ```  
  
-   Ciclo `For Each`  
  
    ```  
    ' Does not compile with Option Infer on. For Each customer In customer.Orders Next  
    ```  
  
 **ID errore:** BC30980  
  
### Per correggere l'errore  
  
-   Se le due variabili devono riferirsi a valori diversi, modificare il nome della variabile che si sta dichiarando.  
  
-   Usare un valore letterale invece del nome della variabile nel valore iniziale, a destra dell'assegnazione.  
  
-   Usare una clausola `As` per specificare il tipo di variabile che si sta dichiarando.  
  
## Vedere anche  
 [Dim Statement](../Topic/Dim%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For Each...Next](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)   
 [Istruzione For...Next](../Topic/For...Next%20Statement%20\(Visual%20Basic\).md)   
 [Local Type Inference](../Topic/Local%20Type%20Inference%20\(Visual%20Basic\).md)   
 [Option Infer Statement](../Topic/Option%20Infer%20Statement.md)