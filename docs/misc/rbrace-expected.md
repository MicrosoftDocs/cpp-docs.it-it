---
title: "Previsto &#39;}&#39; | Microsoft Docs"
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
  - "vbc30370"
  - "bc30370"
helpviewer_keywords: 
  - "BC30370"
ms.assetid: a4ce9be9-fc5d-46ec-a217-c3428bd0b97e
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Previsto &#39;}&#39;
Un inizializzatore di matrice o un elenco di vincoli non termina in modo valido.  
  
 I valori degli elementi con cui inizializzare una matrice devono essere racchiusi tra parentesi graffe \(`{}`\).  
  
```  
Dim demoArray() As Integer = New Integer() {1, 2, 3}   
```  
  
 Analogamente, anche i vincoli in un elenco di vincoli per un parametro di tipo generico devono essere racchiusi tra parentesi graffe.  
  
```  
Public Class dictionaryMaker(Of t As {IComparable, IDisposable, New})   
```  
  
 **ID errore:** BC30370  
  
### Per correggere l'errore  
  
-   Usare "}" per terminare l'inizializzatore di matrice o l'elenco di vincoli.  
  
## Vedere anche  
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)   
 [Type List](../Topic/Type%20List%20\(Visual%20Basic\).md)   
 [Tipi generici in Visual Basic](../Topic/Generic%20Types%20in%20Visual%20Basic%20\(Visual%20Basic\).md)