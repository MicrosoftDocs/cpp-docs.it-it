---
title: "Errore del compilatore CS0070 | Microsoft Docs"
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
  - "CS0070"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0070"
ms.assetid: bb0de7c6-c734-4a8f-ab62-0a50eac2a91f
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0070
L'evento 'event' può trovarsi soltanto sul lato sinistro di \+\= o di \-\= \(tranne quando è utilizzato dall'interno del tipo 'type'\)  
  
 All'esterno della classe in cui è definito, un [evento](../Topic/event%20\(C%23%20Reference\).md) può solo aggiungere o sottrarre riferimenti. Per altre informazioni, vedere [Eventi](../Topic/Events%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0070:  
  
```  
// CS0070.cs using System; public delegate void EventHandler(); public class A { public event EventHandler Click; public static void OnClick() { EventHandler eh; A a = new A(); eh = a.Click; } public static void Main() { } } public class B { public int Foo () { EventHandler eh = new EventHandler(A.OnClick); A a = new A(); eh = a.Click;   // CS0070 // try the following line instead // a.Click += eh; return 1; } }  
```