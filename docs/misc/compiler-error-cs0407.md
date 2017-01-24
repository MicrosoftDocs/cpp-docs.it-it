---
title: "Errore del compilatore CS0407 | Microsoft Docs"
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
  - "CS0407"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0407"
ms.assetid: 59112fb9-4641-466e-b738-b3228539a09e
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0407
'return\-type method' presenta il tipo restituito errato  
  
 Il metodo non è compatibile con il tipo delegato. I tipi di argomento corrispondono, ma il tipo restituito non è quello corretto per il delegato. Per evitare questo errore, usare un metodo diverso, modificare il tipo restituito del metodo o modificare il tipo restituito del delegato.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0407:  
  
```  
// CS0407.cs public delegate int MyDelegate(); class C { MyDelegate d; public C() { d = new MyDelegate(F);  // OK: F returns int d = new MyDelegate(G);  // CS0407 – G doesn't return int } public int F() { return 1; } public void G() { } public static void Main() { C c1 = new C(); } }  
```