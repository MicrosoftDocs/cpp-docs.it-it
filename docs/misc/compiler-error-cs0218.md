---
title: "Errore del compilatore CS0218 | Microsoft Docs"
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
  - "CS0218"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0218"
ms.assetid: f675e06a-c55c-44a1-b5db-0df178fd8f79
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0218
Il tipo \('type'\) deve contenere dichiarazioni di operatore true e operatore false  
  
 Se si definisce un operatore per un tipo definito dall'utente e quindi si prova a usare l'operatore come operatore di corto circuito, l'operatore definito dall'utente deve contenere l'operatore true e l'operatore false. Per altre informazioni sugli operatori di corto circuito, vedere [Operatore &&](../Topic/&&%20Operator%20\(C%23%20Reference\).md) e [Operatore &#124;&#124;](../Topic/%7C%7C%20Operator%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0218:  
  
```  
// CS0218.cs using System; public class MyClass { // uncomment these operator declarations to resolve this CS0218 /* public static bool operator true (MyClass f) { return false; } public static bool operator false (MyClass f) { return false; } */ public static implicit operator int(MyClass x) { return 0; } public static MyClass operator & (MyClass f1, MyClass f2) { return new MyClass(); } public static void Main() { MyClass f = new MyClass(); int i = f && f;   // CS0218, requires operators true and false } }  
```  
  
## Vedere anche  
 [Operatori di conversione](../Topic/Conversion%20Operators%20\(C%23%20Programming%20Guide\).md)