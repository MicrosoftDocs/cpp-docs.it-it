---
title: "Errore del compilatore CS0547 | Microsoft Docs"
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
  - "CS0547"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0547"
ms.assetid: aa80873f-deb0-4ff2-8435-92a626bb5b80
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0547
'property': la proprietà o l'indicizzatore non può avere un tipo void  
  
 [void](../Topic/void%20\(C%23%20Reference\).md) non è valido come valore restituito per una proprietà.  
  
 Per altre informazioni, vedere [Proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0547:  
  
```  
// CS0547.cs public class a { public void i   // CS0547 // Try the following declaration instead: // public int i { get { return 0; } } } public class b : a { public static void Main() { } }  
```