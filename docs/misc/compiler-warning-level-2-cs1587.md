---
title: "Avviso del compilatore (livello 2) CS1587 | Microsoft Docs"
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
  - "CS1587"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1587"
ms.assetid: b27c2009-d485-43fd-a649-fbc15570d256
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 2) CS1587
Il commento XML non si trova in un elemento di linguaggio valido  
  
 I tag consigliati per i commenti relativi alla documentazione non sono consentiti per tutti gli elementi di linguaggio. Ad esempio, un tag non è consentito per uno spazio dei nomi. Per altre informazioni sui commenti XML, vedere [Tag consigliati per i commenti relativi alla documentazione](../Topic/Recommended%20Tags%20for%20Documentation%20Comments%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS1587:  
  
```  
// CS1587.cs // compile with: /W:2 /doc:x.xml /// <summary>test</summary>   // CS1587, tag not allowed on namespace namespace MySpace { class MyClass { public static void Main() { } } }  
```