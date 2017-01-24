---
title: "Avviso del compilatore (livello 1) CS0197 | Microsoft Docs"
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
  - "CS0197"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0197"
ms.assetid: 2b5b1b8d-ce13-4bd7-b80a-abb80e9f79ad
caps.latest.revision: 17
caps.handback.revision: 17
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0197
Passare 'argument' come parametro ref o out oppure accettarne l'indirizzo potrebbe provocare un'eccezione in fase di esecuzione perché è un campo di una classe con marshalling per riferimento  
  
 Tutte le classi che derivano direttamente o indirettamente da <xref:System.MarshalByRefObject> sono classi con marshalling per riferimento. Tali classi possono essere sottoposte a marshalling per riferimento oltre i limiti del processo e del computer. Le istanze di queste classi possono quindi essere proxy per gli oggetti remoti. Non è possibile passare un campo di un oggetto proxy come [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md). I campi di tali classi non possono dunque essere passati come argomenti `ref` o `out`, a meno che l'istanza non sia [this](../Topic/this%20\(C%23%20Reference\).md), ovvero un'istanza che non può essere un oggetto proxy.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0197.  
  
```  
// CS0197.cs // compile with: /W:1 class X : System.MarshalByRefObject { public int i; } class M { public int i; static void AddSeventeen(ref int i) { i += 17; } static void Main() { X x = new X(); x.i = 12; AddSeventeen(ref x.i);   // CS0197 // OK M m = new M(); m.i = 12; AddSeventeen(ref m.i); } }  
```