---
title: "Risoluzione dei problemi relativi alle eccezioni: System.IndexOutOfRangeException | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "IndexOutOfRangeException (classe)"
ms.assetid: 9e28623c-93fc-4111-a0cb-c380e0b5de0c
caps.latest.revision: 25
caps.handback.revision: 25
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Risoluzione dei problemi relativi alle eccezioni: System.IndexOutOfRangeException
Un'eccezione <xref:System.IndexOutOfRangeException> viene generata quando viene eseguito un tentativo di accedere a un elemento di una matrice o di una raccolta con un indice che non rientra nei limiti della matrice o è minore di zero.  
  
## Suggerimenti associati  
 **Assicurarsi che le dimensioni massime dell'indice in un elenco siano inferiori alle dimensioni dell'elenco.**  
 Le dimensioni massime dell'indice in un elenco devono essere inferiori alle dimensioni dell'elenco.  
  
 **Assicurarsi che il valore dell'indice non sia un numero negativo.**  
 Se l'indice è minore di zero, verrà generata questa eccezione.  
  
 **Assicurarsi che i nomi delle colonne di dati siano corretti.**  
 Se il nome della colonna di dati specificato nella proprietà <xref:System.Data.DataView.Sort%2A?displayProperty=fullName> non è valido, è possibile che venga generata questa eccezione. Per altre informazioni, vedere la classe <xref:System.Data.DataView>.  
  
## Esempio  
  
### Descrizione  
 Nell'esempio seguente viene utilizzato un blocco `Try…Catch` per generare `IndexOutOfRangeException` quando l'indice `i` non rientra nei limiti della matrice 0 \- 3. Nell'esempio viene illustrato quanto segue:  
  
 `Element at index 0: 3`  
  
 `Element at index 2: 5`  
  
 `Element at index -1: IndexOutOfRangeException caught`  
  
 `Element at index 4: IndexOutOfRangeException caught`  
  
### Codice  
  
```vb#  
Module Module1 Sub Main() ' The first two tests will display the value of the array element. IndexTest(0) IndexTest(2) ' The following two calls will display the information that ' an IndexOutOfRangeException was caught. IndexTest(-1) IndexTest(4) End Sub Sub IndexTest(ByVal i As Integer) Dim testArray() As Integer = {3, 4, 5, 6} Console.Write("Element at index {0}: ", i) Try Console.WriteLine(testArray(i)) Catch ex As IndexOutOfRangeException Console.WriteLine("IndexOutOfRangeException caught") End Try End Sub End Module  
```  
  
## Vedere anche  
 <xref:System.IndexOutOfRangeException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Matrici](../Topic/Arrays%20in%20Visual%20Basic.md)