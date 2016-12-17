---
title: "Errore del compilatore CS0562 | Microsoft Docs"
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
  - "CS0562"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0562"
ms.assetid: dceecce5-90ce-4554-820c-f4c06b2b8258
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0562
Il parametro di un operatore unario deve essere il tipo che lo contiene  
  
 La dichiarazione di metodo per un overload degli operatori deve seguire determinate linee guida. Per altre informazioni, vedere [Operatori che supportano l'overload](../Topic/Overloadable%20Operators%20\(C%23%20Programming%20Guide\).md) e [Operator Overloading Sample](http://msdn.microsoft.com/it-it/1c6b4610-0a49-4532-8fa7-f694cfc65743).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0562:  
  
```  
// CS0562.cs public class iii { public static implicit operator int(iii x) { return 0; } public static implicit operator iii(int x) { return null; } public static iii operator +(int aa)   // CS0562 // try the following line instead // public static iii operator +(iii aa) { return (iii)0; } public static void Main() { } }  
```