---
title: "Errore del compilatore CS0305 | Microsoft Docs"
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
  - "CS0305"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0305"
ms.assetid: a862c484-01fe-4067-b0f4-15a618e7f8a1
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0305
L'uso del tipo generico 'generic type' richiede argomenti di tipo 'number'  
  
 Questo errore si verifica quando il numero previsto di argomenti di tipo non è stato trovato. Per risolvere l'errore C0305, usare il numero di argomenti di tipo richiesto.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0305.  
  
```  
// CS0305.cs public class MyList<T> {} public class MyClass<T> {} class MyClass { public static void Main() { MyList<MyClass, MyClass> list1 = new MyList<MyClass>();   // CS0305 MyList<MyClass> list2 = new MyList<MyClass>();   // OK } }  
```