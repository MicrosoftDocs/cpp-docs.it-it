---
title: "Errore del compilatore CS0170 | Microsoft Docs"
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
  - "CS0170"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0170"
ms.assetid: ba881e38-2abf-4a5f-b9e6-28d26a5bd235
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0170
Uso del campo 'field' probabilmente non assegnato  
  
 Un campo in una struttura è stato usato senza essere stato prima inizializzato. Per risolvere il problema, determinare prima di tutto il campo che non è stato inizializzato e quindi inizializzarlo prima di provare ad accedervi. Per altre informazioni sull'inizializzazione di struct, vedere [Struct](../Topic/Structs%20\(C%23%20Programming%20Guide\).md) e [Utilizzo di struct](../Topic/Using%20Structs%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0170:  
  
```  
// CS0170.cs public struct error { public int i; } public class MyClass { public static void Main() { error e; // uncomment the next line to resolve this error // e.i = 0; System.Console.WriteLine( e.i );   // CS0170 because //e.i was never assigned } }  
```