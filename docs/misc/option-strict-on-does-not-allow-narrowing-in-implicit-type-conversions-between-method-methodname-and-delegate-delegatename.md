---
title: "Option Strict On non consente la riduzione in conversioni implicite di tipi tra il metodo &#39;&lt;nomemetodo&gt;&#39; e il delegato &#39;&lt;nomedelegato&gt;&#39; | Microsoft Docs"
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
  - "bc36663"
  - "vbc36663"
helpviewer_keywords: 
  - "BC36663"
ms.assetid: fefc7ab5-b587-4ff9-a6bc-4c4e5d4b6b29
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Option Strict On non consente la riduzione in conversioni implicite di tipi tra il metodo &#39;&lt;nomemetodo&gt;&#39; e il delegato &#39;&lt;nomedelegato&gt;&#39;
Con `Option Strict` non è possibile avere una conversione verso un tipo di dati più piccolo tra il tipo di dati di un parametro in un delegato e il corrispondente parametro di una funzione o `Sub` assegnata a una variabile di quel tipo di delegato. Ad esempio, il delegato della funzione `Del` ha un parametro di tipo `Integer`, mentre le funzioni `Conversion1`, `Conversion2` e `Conversion3` hanno un parametro di tipi numerici diversi.  
  
```vb#  
Delegate Function Del(ByVal p As Integer) As String Function Conversion1(ByVal n As Integer) As String Return "Valid" End Function Function Conversion2(ByVal n As Long) As String Return "Valid" End Function Function Conversion3(ByVal n As Short) As String Return "Not valid" End Function  
```  
  
 Dal momento che ha luogo una conversione verso un tipo di dati più grande da `Integer` a `Integer` e a `Long`, le assegnazioni seguenti sono valide.  
  
```vb#  
' Valid. Dim funDel1 As Del = AddressOf Conversion1 Dim funDel2 As Del = AddressOf Conversion2  
```  
  
 La conversione da `Integer` a `Short` è una conversione verso un tipo di dati più piccolo. DI conseguenza, l'assegnazione seguente non è valida.  
  
```vb#  
' Not valid. Dim funDel3 As Del = AddressOf Conversion3  
```  
  
 ID errore: BC36663  
  
### Per correggere l'errore  
  
-   Modificare il tipo di dati del parametro nel delegato o nel metodo in modo che sia presente la relazione obbligatoria di conversione verso un tipo di dati più grande.  
  
## Vedere anche  
 [Relaxed Delegate Conversion](../Topic/Relaxed%20Delegate%20Conversion%20\(Visual%20Basic\).md)   
 [Delegates](../Topic/Delegates%20\(Visual%20Basic\).md)   
 [Widening and Narrowing Conversions](../Topic/Widening%20and%20Narrowing%20Conversions%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Delegati e operatore AddressOf](http://msdn.microsoft.com/it-it/7b2ed932-8598-4355-b2f7-5cedb23ee86f)