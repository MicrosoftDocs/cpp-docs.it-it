---
title: "Non &#232; possibile dedurre un tipo nullable per la variabile &#39;&lt;nomevariabile&gt;&#39; | Microsoft Docs"
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
  - "bc36628"
  - "vbc36628"
helpviewer_keywords: 
  - "BC36628"
ms.assetid: 3e92ae19-6a19-4b0b-9dd9-fba31cdb85a6
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile dedurre un tipo nullable per la variabile &#39;&lt;nomevariabile&gt;&#39;
Non è possibile dedurre un tipo nullable da un tipo riferimento, ad esempio una matrice, una classe o un `String`. Il valore da cui viene dedotto il tipo di dati deve essere un tipo valore. Questo errore è illustrato nel codice seguente.  
  
```vb#  
'' Not valid.   
'Dim arrList? = New ArrayList  
'Dim except? = New Exception  
'Dim obj? = New Object  
'Dim stringVar? = "Open the application."  
  
' Valid.  
Dim intVar? = 10  
```  
  
 **ID errore:** BC36628  
  
### Per correggere l'errore  
  
-   Rimuovere la designazione nullable.  
  
## Vedere anche  
 [Nullable Value Types](../Topic/Nullable%20Value%20Types%20\(Visual%20Basic\).md)