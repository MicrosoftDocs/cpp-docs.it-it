---
title: "Errore del compilatore CS0452 | Microsoft Docs"
ms.custom: ""
ms.date: "11/17/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CS0452"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0452"
ms.assetid: 50a87734-fe07-4bce-891d-a76e131db6cc
caps.latest.revision: 12
caps.handback.revision: 12
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0452
Il tipo 'type name' deve essere un tipo riferimento per poter essere usato come parametro 'parameter name' nel metodo o nel tipo generico 'identifier of generic'  
  
 Questo errore si verifica quando si passa un tipo valore, ad esempio uno `struct` o `int` come parametro a un tipo generico o a un metodo che presenta un vincolo di tipo riferimento.  
  
## Esempio  
 Il codice seguente genera l'errore CS0452.  
  
```  
// CS0452.cs using System; public class BaseClass<S> where S : class { } public class Derived1 : BaseClass<int> { } // CS0452 public class Derived2<S> : BaseClass<S> where S : struct { } // CS0452  
```  
  
## Vedere anche  
 [Vincoli sui parametri di tipo](../Topic/Constraints%20on%20Type%20Parameters%20\(C%23%20Programming%20Guide\).md)