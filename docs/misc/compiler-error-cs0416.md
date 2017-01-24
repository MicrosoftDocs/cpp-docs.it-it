---
title: "Errore del compilatore CS0416 | Microsoft Docs"
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
  - "CS0416"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0416"
ms.assetid: 61bfe40d-5e87-47e5-933f-3491e28ace42
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0416
'type parameter': un argomento di attributo non può utilizzare parametri di tipo  
  
 Un parametro di tipo è stato usato come argomento dell'attributo. Questa operazione non è consentita. Usare un tipo non generico.  
  
 L'esempio seguente genera l'errore CS0416:  
  
```  
// CS0416.cs public class MyAttribute : System.Attribute { public MyAttribute(System.Type t) { } } class G<T> { [MyAttribute(typeof(G<T>))]  // CS0416 public void F() { } }  
```