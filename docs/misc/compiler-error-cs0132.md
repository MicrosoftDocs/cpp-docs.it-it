---
title: "Errore del compilatore CS0132 | Microsoft Docs"
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
  - "CS0132"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0132"
ms.assetid: e8ad1281-2912-4b6a-b2af-a319a23ddd16
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0132
'constructor': un costruttore statico non deve avere parametri  
  
 Un costruttore [static](../Topic/static%20\(C%23%20Reference\).md) non può essere dichiarato con uno o più parametri. Per altre informazioni, vedere [Costruttori](../Topic/Constructors%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0132:  
  
```  
// CS0132.cs namespace MyNamespace { public class MyClass { public MyClass(int i) { } } public class MyClass2 : MyClass { static MyClass2(int i)   // CS0132 { } } }  
```