---
title: "Errore del compilatore CS0068 | Microsoft Docs"
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
  - "CS0068"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0068"
ms.assetid: 9c9ac915-e12f-4ceb-8eb0-806790f11a09
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0068
'event': l'evento nell'interfaccia non può avere un inizializzatore  
  
 Un evento in un'interfaccia non può avere un inizializzatore. Per altre informazioni, vedere [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0068:  
  
```  
// CS0068.cs delegate void MyDelegate(); interface I { event MyDelegate d = new MyDelegate(M.f);   // CS0068 // try the following line instead // event MyDelegate d2; } class M { event MyDelegate d = new MyDelegate(M.f); public static void f() { } public static void Main() { } }  
```