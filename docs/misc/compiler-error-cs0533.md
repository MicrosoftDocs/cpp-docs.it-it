---
title: "Errore del compilatore CS0533 | Microsoft Docs"
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
  - "CS0533"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0533"
ms.assetid: f8b38c5a-d365-4081-a101-6282bdd19069
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0533
'derived\-class member' nasconde il membro astratto ereditato 'base\-class member'  
  
 Un metodo della [classe](../Topic/class%20\(C%23%20Reference\).md) base è nascosto. Verificare che la sintassi della dichiarazione sia corretta.  
  
 Per altre informazioni, vedere [base](../Topic/base%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0533:  
  
```  
// CS0533.cs namespace x { abstract public class a { abstract public void f(); } abstract public class b : a { new abstract public void f();   // CS0533 // try the following lines instead // override public void f() // { // } public static void Main() { } } }  
```