---
title: "La firma del metodo &#39;&lt;nomemetodo&gt;&#39; non &#232; compatibile con il delegato &#39;&lt;nomedelegato&gt;&#39; | Microsoft Docs"
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
  - "vbc31143"
  - "bc31143"
helpviewer_keywords: 
  - "BC31143"
ms.assetid: 88990637-7c92-467e-a3d3-db5498dc1dce
caps.latest.revision: 9
caps.handback.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# La firma del metodo &#39;&lt;nomemetodo&gt;&#39; non &#232; compatibile con il delegato &#39;&lt;nomedelegato&gt;&#39;
Questo errore si verifica quando è necessario eseguire una conversione tra un metodo e un delegato che non è possibile. La causa dell'errore può essere la conversione tra parametri o, quando il metodo e il delegato sono funzioni, la conversione nei valori restituiti.  
  
 Il codice seguente illustra le conversioni non riuscite. Il delegato è `FunDel`.  
  
```vb#  
Delegate Function FunDel(ByVal i As Integer, ByVal d As Double) As Integer  
```  
  
 Ognuna delle funzioni seguenti differisce da `FunDel` in modo tale da generare questo errore.  
  
```vb#  
Function ExampleMethod1(ByVal m As Integer, ByVal aDate As Date) As Integer End Function Function ExampleMethod2(ByVal m As Integer, ByVal aDouble As Double) As Date End Function  
```  
  
 Ognuna delle istruzioni di assegnazione seguenti genera l'errore.  
  
```vb#  
Sub Main() ' The second parameters of FunDel and ExampleMethod1, Double and Date, ' are not compatible. 'Dim d1 As FunDel = AddressOf ExampleMethod1 ' The return types of FunDel and ExampleMethod2, Integer and Date, ' are not compatible. 'Dim d2 As FunDel = AddressOf ExampleMethod2 End Sub  
```  
  
 **ID errore:** BC31143  
  
### Per correggere l'errore  
  
-   Esaminare i parametri corrispondenti e, se sono presenti, i tipi restituiti per determinare la coppia che non è compatibile.  
  
## Vedere anche  
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)