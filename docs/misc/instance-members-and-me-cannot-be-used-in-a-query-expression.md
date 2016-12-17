---
title: "Non &#232; possibile usare membri di istanza e &#39;Me&#39; in un&#39;espressione di query | Microsoft Docs"
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
  - "vbc36535"
  - "bc36535"
helpviewer_keywords: 
  - "BC36535"
ms.assetid: afb5281b-70a7-48c7-a46d-39522b96b1ff
caps.latest.revision: 7
caps.handback.revision: 7
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Non &#232; possibile usare membri di istanza e &#39;Me&#39; in un&#39;espressione di query
Una query LINQ in una `Structure` include un riferimento a `Me` o a un membro di istanza della struttura. I riferimenti a `Me` o i membri di istanza non sono consentiti nelle espressioni di query all'interno di una `Structure`.  
  
 **ID errore:** BC36535  
  
### Per correggere l'errore  
  
1.  Creare una copia del membro di istanza o il valore restituito dal riferimento a `Me` e usare la copia nell'espressione di query, come mostrato nell'esempio seguente.  
  
    ```vb#  
    Structure SampleStructure Public SearchValue As Integer Public Sub SetSearchValue(ByVal number As Integer) SearchValue = number End Sub Public Sub GetData() Dim sv = SearchValue Dim SampleData = New Integer() {1, 2, 3, 4} Dim query = From number In SampleData _ Where number < sv End Sub End Structure  
    ```  
  
## Vedere anche  
 [Introduction to LINQ in Visual Basic](../Topic/Introduction%20to%20LINQ%20in%20Visual%20Basic.md)   
 [LINQ](../Topic/LINQ%20in%20Visual%20Basic.md)   
 [Me](http://msdn.microsoft.com/it-it/a65973c7-cf06-4547-9b25-9fba885525c2)   
 [Structure \(Visual Basic\)](http://msdn.microsoft.com/it-it/263ce115-ac36-4c05-8cb7-0e0eead5c6d0)