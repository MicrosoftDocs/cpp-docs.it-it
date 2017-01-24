---
title: "Errore del compilatore CS1620 | Microsoft Docs"
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
  - "CS1620"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1620"
ms.assetid: 13933976-218a-4fe2-8fde-5b9af522e2e5
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1620
L'argomento 'number' deve essere passato con la parola chiave 'keyword'  
  
 Questo errore si verifica se si passa un argomento a una funzione che accetta un parametro [ref](../Topic/ref%20\(C%23%20Reference\).md) o [out](../Topic/out%20\(C%23%20Reference\).md) e non si include la parola chiave `ref` o `out` in corrispondenza della chiamata oppure si include la parola chiave errata. Il testo dell'errore indica la parola chiave appropriata da usare e l'argomento che ha causato il problema.  
  
 L'esempio seguente genera l'errore CS1620:  
  
```  
// CS1620.cs class C { void f(ref int i) {} public static void Main() { int x = 1; f(out x);  // CS1620 – f takes a ref parameter, not an out parameter // Try this line instead: // f(ref x); } }  
```