---
title: "Errore del compilatore CS1657 | Microsoft Docs"
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
  - "CS1657"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1657"
ms.assetid: 6f0aeebe-5c90-4d5b-981c-1795d2e8fbb9
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1657
Non è possibile passare 'parameter' come argomento ref o out perché è 'reason'  
  
 Questo errore si verifica quando una variabile viene passata come argomento [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md) in un contesto in cui la variabile è di sola lettura. I contesti di sola lettura includono le variabili di iterazione [foreach](../Topic/foreach,%20in%20\(C%23%20Reference\).md), le variabili [using](../Topic/using%20Statement%20\(C%23%20Reference\).md) e le variabili `fixed`. Per risolvere questo errore, non chiamare le funzioni che accettano la variabile `foreach`, `using` o `fixed` come parametro `ref` o `out` nei blocchi `using`, nelle istruzioni `foreach` e nelle istruzioni `fixed`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS1657:  
  
```  
// CS1657.cs using System; class C : IDisposable { public int i; public void Dispose() {} } class CMain { static void f(ref C c) { } static void Main() { using (C c = new C()) { f(ref c);  // CS1657 } } }  
```  
  
## Esempio  
 Il codice seguente presenta lo stesso problema in un'istruzione `fixed`:  
  
```  
// CS1657b.cs // compile with: /unsafe unsafe class C { static void F(ref int* p) { } static void Main() { int[] a = new int[5]; fixed(int* p = a) F(ref p); // CS1657 } }  
```