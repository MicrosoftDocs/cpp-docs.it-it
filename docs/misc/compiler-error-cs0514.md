---
title: "Errore del compilatore CS0514 | Microsoft Docs"
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
  - "CS0514"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0514"
ms.assetid: 74ce3010-f9e9-458c-8b68-cfb908a3e7a2
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0514
'constructor': un costruttore statico non può avere una chiamata esplicita al costruttore 'this' o 'base'  
  
 La chiamata di `this` nel costruttore statico non è consentita perché il costruttore statico viene chiamato automaticamente prima di creare qualsiasi istanza della classe. Inoltre, i costruttori statici non vengono ereditati e non possono essere chiamati direttamente.  
  
 Per altre informazioni, vedere [this](../Topic/this%20\(C%23%20Reference\).md) e [base](../Topic/base%20\(C%23%20Reference\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0514:  
  
```  
// CS0514.cs class A { static A() : base(0) // CS0514 { } public A(object o) { } } class B { static B() : this(null) // CS0514 { } public B(object o) { } }  
```