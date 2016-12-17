---
title: "Errore del compilatore CS0153 | Microsoft Docs"
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
  - "CS0153"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0153"
ms.assetid: 3a0791e9-0ab9-4eaa-a230-d39aabaa9d5d
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0153
La sintassi goto case è valida soltanto all'interno di un'istruzione switch  
  
 Si è provato a usare una sintassi [switch](../Topic/switch%20\(C%23%20Reference\).md) al di fuori di un'istruzione **switch**. Per altre informazioni, vedere [switch](../Topic/switch%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0153:  
  
```  
// CS0153.cs public class a { public static void Main() { goto case 5;   // CS0153 } }  
```