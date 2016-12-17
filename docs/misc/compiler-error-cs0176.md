---
title: "Errore del compilatore CS0176 | Microsoft Docs"
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
  - "CS0176"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0176"
ms.assetid: 783c13d8-5ac3-4aeb-bd63-0468cb05550d
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0176
Impossibile accedere al membro statico 'member' con il riferimento a un'istanza. Qualificarlo con un nome di tipo  
  
 Per qualificare una variabile [static](../Topic/static%20\(C%23%20Reference\).md) è possibile usare solo un nome della classe. Un nome di istanza non può essere un qualificatore Per altre informazioni, vedere [Classi statiche e membri di classi statiche](../Topic/Static%20Classes%20and%20Static%20Class%20Members%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0176:  
  
```  
// CS0176.cs public class MyClass2 { public static int num; } public class Test { public static void Main() { MyClass2 mc2 = new MyClass2(); int i = mc2.num;   // CS0176 // try the following line instead // int i = MyClass2.num; } }  
  
```