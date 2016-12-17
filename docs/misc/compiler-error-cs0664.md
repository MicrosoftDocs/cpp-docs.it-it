---
title: "Errore del compilatore CS0664 | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0664"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0664"
ms.assetid: 60fe15a7-db22-414f-a7b8-fac79dad22b4
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0664
Non è possibile convertire in modo implicito il valore letterale di tipo double nel tipo 'type'. Usare un suffisso 'suffix' per creare un valore letterale di questo tipo  
  
 Non è stato possibile completare un'assegnazione; usare un suffisso per correggere l'istruzione. La documentazione per ogni tipo identifica il suffisso corrispondente per il tipo. Per altre informazioni sulle conversioni, vedere [Cast e conversioni di tipi \(C\#\)](../Topic/Casting%20and%20Type%20Conversions%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0664:  
  
```c#  
// CS0664.cs class Example { static void Main() { decimal d1 = 1.0;   // CS0664, because 1.0 is interpreted // as a double. // Try the following line instead. decimal d2 = 1.0M;  // The M tells the compiler that 1.0 is a // decimal. Console.WriteLine(d2); } }  
```  
  
## Vedere anche  
 [Tabelle di conversione dei tipi](../Topic/Type%20Conversion%20Tables%20in%20the%20.NET%20Framework.md)