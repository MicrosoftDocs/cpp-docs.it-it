---
title: "Errore del compilatore CS0127 | Microsoft Docs"
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
  - "CS0127"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0127"
ms.assetid: b20333bf-badf-4f96-a3ee-bd35f4f7e807
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0127
Poiché 'function' restituisce void, una parola chiave restituita non deve essere seguita da un'espressione dell'oggetto  
  
 Un metodo con un tipo restituito [void](../Topic/void%20\(C%23%20Reference\).md) non può restituire un valore. Per altre informazioni, vedere [Metodi](../Topic/Methods%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0127:  
  
```  
// CS0127.cs namespace MyNamespace { public class MyClass { public int hiddenMember2 { get { return 0; } set   // CS0127, set has an implicit void return type { return 0;   // remove return statement to resolve this CS0127 } } public static void Main() { } } }  
```