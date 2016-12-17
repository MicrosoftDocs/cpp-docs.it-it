---
title: "Errore del compilatore CS0267 | Microsoft Docs"
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
  - "CS0267"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0267"
ms.assetid: 11aaab96-5838-4e36-9551-5b032a1089e1
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0267
Il modificatore partial può trovarsi solo immediatamente prima di 'class', 'struct' o 'interface'  
  
 Il posizionamento del modificatore **partial** non è corretto nella dichiarazione di classe, struct o interfaccia. Per risolvere l'errore, riordinare i modificatori. Per altre informazioni, vedere [Classi e metodi parziali](../Topic/Partial%20Classes%20and%20Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0267:  
  
```  
// CS0267.cs public partial class MyClass { public MyClass() { } } partial public class MyClass  // CS0267 // Try this line instead: // public partial class MyClass { public void Foo() { } public static void Main() { } }  
```