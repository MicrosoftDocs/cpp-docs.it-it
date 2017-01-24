---
title: "Impossibile convertire la matrice multidimensionale in un albero delle espressioni | Microsoft Docs"
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
  - "bc36603"
  - "vbc36603"
helpviewer_keywords: 
  - "BC36603"
ms.assetid: 65eefab7-c7ad-4dcd-bebf-2d16fba9f28f
caps.latest.revision: 6
caps.handback.revision: 6
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile convertire la matrice multidimensionale in un albero delle espressioni
È possibile convertire in alberi delle espressioni la maggior parte delle espressioni, ma non le matrici multidimensionali. Il codice seguente, ad esempio, causa questo errore:  
  
```vb#  
Module Module1 Sub Main() '' A multi-dimensional array cannot be converted. 'Dim expTree As Expressions.Expression(Of Func(Of Object)) = _ '    Function() New Integer(1, 1) {{1, 2}, {2, 3}} ' A one-dimensional array can be converted. Dim expTree2 As Expressions.Expression(Of Func(Of Object)) = _ Function() New Integer() {1, 2, 3} End Sub End Module  
```  
  
 **ID errore:** BC36603  
  
## Vedere anche  
 [NOT IN BUILD: Strutture ad albero dell'espressione in LINQ](http://msdn.microsoft.com/it-it/1a2e8e74-4bbc-45ab-9a46-2b6cfce3bcb2)   
 [Procedura: Usare strutture ad albero dell'espressione per la compilazione di query dinamiche](../Topic/How%20to:%20Use%20Expression%20Trees%20to%20Build%20Dynamic%20Queries%20\(C%23%20and%20Visual%20Basic\).md)   
 [NOTINBUILD Matrici multidimensionali in Visual Basic](http://msdn.microsoft.com/it-it/d92cad25-07e2-4d79-8ea4-ab269700f5de)