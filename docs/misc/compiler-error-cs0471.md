---
title: "Errore del compilatore CS0471 | Microsoft Docs"
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
  - "CS0471"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0471"
ms.assetid: 3b666461-c57b-45f4-83d3-a23786e29ae9
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0471
Il metodo 'name' non è un metodo generico. Per un elenco di espressioni, includere l'espressione \< tra parentesi.  
  
 Questo errore viene generato quando il codice contiene un elenco di espressioni senza parentesi.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0471.  
  
```  
// CS0471.cs // compile with: /t:library class Test { public void F(bool x, bool y) {} public void F1() { int a = 1, b = 2, c = 3; F(a<b, c>(3));    // CS0471 // To resolve, try the following instead: // F((a<b), c>(3)); } }  
  
```