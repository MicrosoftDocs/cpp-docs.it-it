---
title: "Errore del compilatore CS0411 | Microsoft Docs"
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
  - "CS0411"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0411"
ms.assetid: 290947c9-10d0-427e-99f2-bff20299d533
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0411
Non è possibile dedurre gli argomenti di tipo per il metodo 'method' dall'utilizzo. Provare a specificare gli argomenti di tipo in modo esplicito.  
  
 Questo errore si verifica se si chiama un metodo generico senza specificare esplicitamente gli argomenti di tipo e il compilatore non è in grado di dedurre gli argomenti di tipo. Per evitare questo errore, aggiungere gli argomenti di tipo previsti tra parentesi angolari.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0411:  
  
```  
// CS0411.cs class C { void G<T>() { } public static void Main() { G();  // CS0411 // Try this instead: // G<int>(); } }  
```  
  
## Esempio  
 L'errore può essere causato anche dal parametro `null`, che non ha informazioni sul tipo:  
  
```  
// CS0411b.cs class C { public void F<T>(T t) where T : C { } public static void Main() { C c = new C(); c.F(null);  // CS0411 } }  
```