---
title: "Errore del compilatore CS0403 | Microsoft Docs"
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
  - "CS0403"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0403"
ms.assetid: 6e5d55ce-d6bf-419d-aded-aaa2e5963bb6
caps.latest.revision: 14
caps.handback.revision: 14
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0403
Impossibile convertire il valore Null nel parametro di tipo 'name' perché potrebbe essere un tipo valore non nullable. In alternativa, considerare l'uso di default\('T'\).  
  
 Non è possibile assegnare null a un tipo sconosciuto perché potrebbe essere un tipo valore, a cui non può essere assegnato null. Se la classe generica non è stata creata per accettare tipi valore, usare il vincolo di tipo classe. Se la classe generica può accettare tipi valore, quali i tipi incorporati, è possibile sostituire l'assegnazione di null con l'espressione `default(T)`, come indicato nell'esempio seguente.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0403.  
  
```  
// CS0403.cs // compile with: /target:library class C<T> { public void f() { T t = null;  // CS0403 T t2 = default(T);   // OK } } class D<T> where T : class { public void f() { T t = null;  // OK } }  
```