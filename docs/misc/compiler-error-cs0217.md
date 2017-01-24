---
title: "Errore del compilatore CS0217 | Microsoft Docs"
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
  - "CS0217"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0217"
ms.assetid: ede61095-6e11-4f4a-8e7d-85e7a3f4fc3d
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0217
Per essere utilizzato come operatore di corto circuito, un operatore logico definito dall'utente \('operator'\) deve avere lo stesso tipo restituito dei 2 parametri.  
  
 Se si definisce un operatore per un tipo definito dall'utente e quindi si prova a usare l'operatore come operatore di corto circuito, l'operatore definito dall'utente deve avere parametri e valori restituiti dello stesso tipo. Per altre informazioni sugli operatori di corto circuito, vedere [Operatore &&](../Topic/&&%20Operator%20\(C%23%20Reference\).md) e [Operatore &#124;&#124;](../Topic/%7C%7C%20Operator%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0217:  
  
```  
// CS0217.cs using System; public class MyClass { public static bool operator true (MyClass f) { return false; } public static bool operator false (MyClass f) { return false; } public static implicit operator int(MyClass x) { return 0; } public static int operator & (MyClass f1, MyClass f2)   // CS0217 // try the following line instead // public static MyClass operator & (MyClass f1, MyClass f2) { return new MyClass(); } public static void Main() { MyClass f = new MyClass(); int i = f && f; } }  
```  
  
## Vedere anche  
 [Operatori che supportano l'overload](../Topic/Overloadable%20Operators%20\(C%23%20Programming%20Guide\).md)