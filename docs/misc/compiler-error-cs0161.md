---
title: "Errore del compilatore CS0161 | Microsoft Docs"
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
  - "CS0161"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0161"
ms.assetid: c2731a6c-0285-4558-9e62-a7fd480ab0cf
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0161
'method': non tutti i percorsi del codice restituiscono un valore  
  
 Un metodo che restituisce un valore deve avere un'istruzione `return` in tutti i percorsi del codice. Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0161:  
  
```  
// CS0161.cs public class Test { public static int Main() // CS0161 { int i = 10; if (i < 10) { return i; } else { // uncomment the following line to resolve // return 1; } } }  
```