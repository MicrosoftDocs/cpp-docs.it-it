---
title: "Errore del compilatore CS0744 | Microsoft Docs"
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
  - "CS0744"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0744"
ms.assetid: 7ce430d6-737a-4103-9116-d9a4a69f8af3
caps.latest.revision: 6
caps.handback.revision: 6
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0744
È prevista la parola chiave contestuale 'equals'  
  
 Il percorso per una clausola `join` è `join`...`in`...`on`...`equals`, come mostrato nell'esempio:  
  
```  
var query = from x in array1 join y in array2 on x equals y select x;  
```  
  
### Per correggere l'errore  
  
1.  Aggiungere la parola chiave `equals` alla clausola `join`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0744:  
  
```  
// cs0744.cs using System; using System.Linq; public class C { public static int Main() { int[] array1 = { 1, 2, 3 ,4, 5, 6,}; int[] array2 = { 5, 6, 7, 8, 9 }; var c = from x in array1 join y in array2 on x y // CS0744 select x; return 1; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [Clausola join](../Topic/join%20clause%20\(C%23%20Reference\).md)