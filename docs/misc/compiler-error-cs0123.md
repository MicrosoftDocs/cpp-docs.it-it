---
title: "Errore del compilatore CS0123 | Microsoft Docs"
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
  - "CS0123"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0123"
ms.assetid: 57be2c58-6d87-40af-9376-cd7f91023044
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0123
Nessun overload per 'method' corrisponde al delegato 'delegate'  
  
 Un tentativo di creare un delegato non è riuscito perché non è stata usata la firma corretta. Le istanze di un delegato devono essere dichiarate con la stessa firma della dichiarazione di delegato.  
  
 È possibile risolvere l'errore modificando il metodo o la firma del delegato. Per altre informazioni, vedere [Delegati](../Topic/Delegates%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0123.  
  
```  
// CS0123.cs delegate void D(); delegate void D2(int i); public class C { public static void f(int i) {} public static void Main() { D d = new D(f);   // CS0123 D2 d2 = new D2(f);   // OK } }  
```