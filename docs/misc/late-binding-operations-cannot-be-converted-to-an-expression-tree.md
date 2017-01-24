---
title: "Impossibile convertire le operazioni di associazione tardiva in un albero delle espressioni | Microsoft Docs"
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
  - "vbc36604"
  - "bc36604"
helpviewer_keywords: 
  - "BC36604"
ms.assetid: 6fd66d12-8c99-46e0-9095-fe1b29fd2692
caps.latest.revision: 5
caps.handback.revision: 5
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Impossibile convertire le operazioni di associazione tardiva in un albero delle espressioni
Si è provato a convertire un'operazione di associazione tardiva in un albero delle espressioni. Questa operazione non è valida. Il codice seguente, ad esempio, causa questo errore.  
  
```vb#  
Option Strict Off Module Module1 Sub Main() '' Not valid. ' Test(Function(someInstance) someInstance.SomeProperty) End Sub Sub Test(ByVal ex As Expressions.Expression(Of Func(Of Object, Object))) End Sub End Module  
```  
  
 **ID errore:** BC36604  
  
## Vedere anche  
 [Early and Late Binding](../Topic/Early%20and%20Late%20Binding%20\(Visual%20Basic\).md)   
 [NOT IN BUILD: Strutture ad albero dell'espressione in LINQ](http://msdn.microsoft.com/it-it/1a2e8e74-4bbc-45ab-9a46-2b6cfce3bcb2)