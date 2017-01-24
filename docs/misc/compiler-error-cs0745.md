---
title: "Errore del compilatore CS0745 | Microsoft Docs"
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
  - "CS0745"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0745"
ms.assetid: 6ae77eb2-a940-43aa-a198-3042d144613a
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0745
È prevista la parola chiave contestuale 'by'  
  
 Il percorso per la clausola `group` è `group...by` seguito da un oggetto `into` facoltativo, come mostrato nell'esempio seguente:  
  
```  
string[] names = { "Bob", "Bill", "Jonetta", "Mary" }; var query = from name in names group name by name[0];  
```  
  
 oppure  
  
```  
var query2 = from name in names group name by name[0] into g //...additional query clauses  
```  
  
### Per correggere l'errore  
  
1.  Aggiungere la parola chiave `by` alla clausola `group`.  
  
## Esempio  
 Il codice seguente genera l'errore CS0745:  
  
```  
// cs0745.cs using System; using System.Linq; public class C { public static int Main() { string[] names = { "Bob", "Bill", "Jonetta", "Mary" }; var query = from name in names group name name[0]; // CS0745 return 1; } }  
```  
  
## Vedere anche  
 [Espressioni di query LINQ](../Topic/LINQ%20Query%20Expressions%20\(C%23%20Programming%20Guide\).md)   
 [Clausola group](../Topic/group%20clause%20\(C%23%20Reference\).md)