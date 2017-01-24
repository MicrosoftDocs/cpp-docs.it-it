---
title: "Errore del compilatore CS1686 | Microsoft Docs"
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
  - "CS1686"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1686"
ms.assetid: 46a9e82b-57f4-416d-8e49-242bfff5433a
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1686
Non è possibile accettare e usare gli indirizzi dell'elemento 'variable' locale o dei rispettivi membri all'interno di un metodo anonimo o di un'espressione lambda  
  
 Questo errore viene generato quando si usa una variabile, e si tenta di eseguire il relativo indirizzo, e una di queste operazioni viene eseguita all'interno di un metodo anonimo.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1686.  
  
```  
// CS1686.cs // compile with: /unsafe /target:library class MyClass { public unsafe delegate int * MyDelegate(); public unsafe int * Test() { int j = 0; MyDelegate d = delegate { return &j; };   // CS1686 return &j;   // OK } }  
```