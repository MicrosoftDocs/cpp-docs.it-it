---
title: "Errore del compilatore CS1628 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS1628"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1628"
ms.assetid: 520f864c-afe3-4db2-b44e-cfaac28ff49d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1628
Non è possibile usare il parametro ref o out 'parameter' all'interno di un metodo anonimo, un'espressione lambda o un'espressione di query  
  
 Questo errore si verifica se si usa un parametro ref o out in un blocco di metodo anonimo. Per evitare l'errore, usare una variabile locale o un altro costrutto.  
  
 L'esempio seguente genera l'errore CS1628:  
  
```  
// CS1628.cs delegate int MyDelegate(); class C { public static void F(ref int i) { MyDelegate d = delegate { return i; };  // CS1628 // Try this instead: // int tmp = i; // MyDelegate d = delegate { return tmp; }; } public static void Main() { } }  
```