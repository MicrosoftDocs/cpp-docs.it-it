---
title: "Errore del compilatore CS0765 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0765"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0765"
ms.assetid: adfb1f95-f7b1-4e43-83c2-42e8531eb980
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0765
Non è possibile usare negli alberi delle espressioni metodi parziali contenenti solo una dichiarazione di definizione o metodi condizionali rimossi  
  
 Anche se una chiamata a un metodo parziale rimosso è un'espressione, non è un'espressione accettabile in un albero delle espressioni.  
  
### Per correggere l'errore  
  
1.  Aggiungere una dichiarazione di implementazione per il metodo parziale o rimuovere il codice che causa l'esclusione del metodo condizionale dalla compilazione.  
  
## Esempio  
 Il codice seguente genera l'errore CS0765 in due posizioni:  
  
```  
// cs0765.cs using System; using System.Collections; using System.Collections.Generic; using System.Diagnostics; using System.Linq; using System.Linq.Expressions; public delegate void dele(); public class ConClass { [Conditional("CONDITION")] public static void TestMethod() { } } public partial class PartClass : IEnumerable { List<object> list = new List<object>(); partial void Add(int x); public IEnumerator GetEnumerator() { for (int i = 0; i < list.Count; i++) yield return list[i]; } static void Main() { Expression<Func<PartClass>> testExpr1 = () => new PartClass { 1, 2 }; // CS0765 Expression<dele> testExpr2 = () => ConClass.TestMethod(); // CS0765 } }  
```  
  
## Vedere anche  
 [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md)   
 [Strutture ad albero dell'espressione](../Topic/Expression%20Trees%20\(C%23%20and%20Visual%20Basic\).md)