---
title: "Errore del compilatore CS0462 | Microsoft Docs"
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
  - "CS0462"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0462"
ms.assetid: 0732b12d-0f7a-47d5-bc54-8b6147d7249f
caps.latest.revision: 16
caps.handback.revision: 16
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0462
I membri ereditati 'member1' e 'member2' hanno la stessa firma nel tipo 'type', quindi non possono essere sottoposti a override  
  
 Questo errore risulta dall'introduzione di generics. In genere, in una classe non possono esistere due versioni di un metodo con la stessa firma. Con l'introduzione di generics, invece, è possibile specificare un metodo generico che può duplicare un altro metodo se ne viene creata un'istanza con un tipo specifico.  
  
## Esempio  
 Quando viene creata un'istanza di `C<int>`, vengono generate due versioni del metodo `F` con la stessa firma. Di conseguenza, l'override nella classe `D` non riesce a determinare la versione su cui operare.  
  
 L'esempio seguente genera l'errore CS0462.  
  
```  
// CS0462.cs // compile with: /target:library class C<T> { public virtual void F(T t) {} public virtual void F(int t) {} } class D : C<int> { public override void F(int t) {}   // CS0462 }  
```