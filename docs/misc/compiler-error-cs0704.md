---
title: "Errore del compilatore CS0704 | Microsoft Docs"
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
  - "CS0704"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0704"
ms.assetid: a16ae7f3-11e0-45f3-ac40-91a853eea4e5
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0704
Impossibile eseguire la ricerca di membri in 'type' perché è un parametro di tipo  
  
 Un tipo interno non può essere specificato con un parametro di tipo. Provare a usare il tipo desiderato in modo esplicito.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0704:  
  
```  
// CS0704.cs class B { public class I { } } class C<T> where T : B { T.I f;  // CS0704 – member lookup on type parameter // Try this instead: // B.I f; } class CMain { public static void Main() {} }  
```