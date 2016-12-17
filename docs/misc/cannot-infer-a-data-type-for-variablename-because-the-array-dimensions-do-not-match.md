---
title: "Non &#232; possibile dedurre un tipo di dati per &#39;&lt;nomevariabile&gt;&#39; perch&#233; le dimensioni di matrice non corrispondono | Microsoft Docs"
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
  - "bc36909"
  - "vbc36909"
helpviewer_keywords: 
  - "BC36909"
ms.assetid: e41fec81-efec-4395-a0a5-d81906a2d4f1
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre un tipo di dati per &#39;&lt;nomevariabile&gt;&#39; perch&#233; le dimensioni di matrice non corrispondono
Se le dimensioni usate per inizializzare una matrice non corrispondono alle dimensioni nella dichiarazione, il compilatore non può dedurre un tipo di dati per la matrice. Il codice seguente, ad esempio, causa questo errore.  
  
```vb#  
' Valid. exampleArray1 is a one-dimensional array of integers. Dim exampleArray1() = New Integer() {1, 2, 3} ' Not valid. 'Dim exampleArray2(,) = New Integer() {1, 2, 3} 'Dim exampleArray3(,) = New Integer() {}  
```  
  
 **ID errore:** BC36909  
  
## Vedere anche  
 [Local Type Inference](../Topic/Local%20Type%20Inference%20\(Visual%20Basic\).md)   
 [NOTINBUILD Procedura: Inizializzare una matrice multidimensionale](http://msdn.microsoft.com/it-it/502dcf8b-d86c-46f1-ad7d-3ce809645774)