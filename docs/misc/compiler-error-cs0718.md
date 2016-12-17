---
title: "Errore del compilatore CS0718 | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0718"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0718"
ms.assetid: f18ea7b7-7495-4039-9876-409e9fe98ba1
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0718
'type': i tipi statici non possono essere usati come argomenti di tipo  
  
 Poiché non è possibile creare un'istanza di un tipo statico, questo tipo non può essere usato come argomento generico. Per risolvere questo errore, rimuovere il tipo statico dall'argomento generico.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0718:  
  
```  
// CS0718.cs public static class SC { public static void F() { } } public class G<T> { } public class CMain { public static void Main() { G<SC> gsc = new G<SC>();  // CS0718 } }  
```