---
title: "Errore del compilatore CS0131 | Microsoft Docs"
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
  - "CS0131"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0131"
ms.assetid: 822852cc-a426-4b7d-b2ff-0026a0c0a0e7
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0131
La parte sinistra di un'assegnazione deve essere una variabile, una proprietà o un indicizzatore  
  
 In un'istruzione di assegnazione il valore della parte destra viene assegnato alla parte sinistra. La parte sinistra deve essere una variabile, una proprietà o un indicizzatore.  
  
 Per correggere questo errore, assicurarsi che tutti gli operatori siano nella parte destra e che la parte sinistra sia una variabile, una proprietà o un indicizzatore. Per altre informazioni, vedere [Istruzioni, espressioni e operatori](../Topic/Statements,%20Expressions,%20and%20Operators%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0131.  
  
```  
// CS0131.cs public class MyClass { public int i = 0; public void MyMethod() { i++ = 1;   // CS0131 // try the following line instead // i = 1; } public static void Main() { } }  
```  
  
## Esempio  
 Questo errore può verificarsi anche se si tenta di eseguire operazioni aritmetiche nella parte sinistra dell'operatore di assegnazione, come nell'esempio seguente.  
  
```  
// CS0131b.cs public class C { public static int Main() { int a = 1, b = 2, c = 3; if (a + b = c) // CS0131 // try this instead // if (a + b == c) return 0; return 1; } }  
```