---
title: "Non &#232; possibile specificare l&#39;inizializzatore di matrice per una dimensione non costante. Usare l&#39;inizializzatore vuoto &#39;{}&#39; | Microsoft Docs"
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
  - "vbc30949"
  - "bc30949"
helpviewer_keywords: 
  - "BC30949"
ms.assetid: b3d27d9c-7a1f-4bac-ad71-388b24b807b3
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile specificare l&#39;inizializzatore di matrice per una dimensione non costante. Usare l&#39;inizializzatore vuoto &#39;{}&#39;
Una matrice inizializza una dimensione che non è nota in fase di compilazione.  
  
 Il codice seguente genera questo errore.  
  
```  
Dim j As Integer Dim intArray As Integer = New Integer(1, j) {{0, 100}, {1,101}}  
```  
  
 Il codice seguente consente di evitare l'errore.  
  
```  
Dim intArray As Integer = New Integer(1, j) {} For i As Integer = 0 To j intArray(0, i) = i intArray(1, i) = 100 + i Next i  
```  
  
 **ID errore:** BC30949  
  
### Per correggere l'errore  
  
-   Se possibile, specificare una dimensione costante nella dichiarazione di matrice.  
  
-   Se non è possibile specificare una dimensione costante, è necessario inizializzare la matrice con un ciclo quando la dimensione non costante diventa nota.  
  
## Vedere anche  
 [Istruzione For Each...Next](../Topic/For%20Each...Next%20Statement%20\(Visual%20Basic\).md)   
 [NOTINBUILD Cenni preliminari sulle matrici in Visual Basic](http://msdn.microsoft.com/it-it/ca50e2f2-b4d2-4c57-9169-9abbcc3392d8)   
 [How to: Initialize an Array Variable in Visual Basic](../Topic/How%20to:%20Initialize%20an%20Array%20Variable%20in%20Visual%20Basic.md)   
 [NOTINBUILD Procedura: Inizializzare una matrice multidimensionale](http://msdn.microsoft.com/it-it/502dcf8b-d86c-46f1-ad7d-3ce809645774)