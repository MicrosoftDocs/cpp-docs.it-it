---
title: "Errore del compilatore CS0742 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0742"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0742"
ms.assetid: 078ee7af-17e4-4572-8fee-d97e09c9002b
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0742
Il corpo di una query deve terminare con una clausola select o group  
  
 Un'espressione di query deve terminare con una clausola `select` o una clausola `group` senza continuazione.  
  
### Per correggere l'errore  
  
1.  Aggiungere una [clausola select](../Topic/select%20clause%20\(C%23%20Reference\).md) o una [clausola group](../Topic/group%20clause%20\(C%23%20Reference\).md) alla query.  
  
## Esempio  
 Il codice seguente genera l'errore CS0742:  
  
```  
// cs0742.cs using System.Linq; public class Test { public static int Main() { int[] array = { 1, 2, 3 }; var query = from num in array; // CS0742 return 1; } }  
```  
  
 Se la clausola `group` usa la parola chiave [into](../Topic/into%20\(C%23%20Reference\).md) per archiviare i risultati del raggruppamento in un identificatore temporaneo, non può essere l'ultima clausola in una query. È necessaria ancora una clausola `select` o una seconda clausola `group`.  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)