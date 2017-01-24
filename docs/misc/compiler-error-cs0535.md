---
title: "Errore del compilatore CS0535 | Microsoft Docs"
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
  - "CS0535"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0535"
ms.assetid: 282ed5d6-acb7-445b-999f-27a973ccc0b5
caps.latest.revision: 9
caps.handback.revision: 9
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0535
'class' non implementa il membro di interfaccia 'member'  
  
 Una [classe](../Topic/class%20\(C%23%20Reference\).md) è derivata da un'[interfaccia](../Topic/interface%20\(C%23%20Reference\).md), ma non ha implementato uno o più membri dell'interfaccia. Una classe deve implementare tutti i membri delle interfacce da cui deriva oppure essere dichiarata `abstract`.  
  
## Esempio  
 L'esempio seguente genera l'errore CS0535.  
  
```  
// CS0535.cs public interface A { void F(); } public class B : A {}   // CS0535 A::F is not implemented // OK public class C : A { public void F() {} public static void Main() {} }  
```  
  
## Esempio  
 L'esempio seguente genera l'errore CS0535.  
  
```  
// CS0535_b.cs using System; class C : IDisposable {}   // CS0535 // OK class D : IDisposable { void IDisposable.Dispose() {} public void Dispose() {} static void Main() { using (D d = new D()) {} } }  
```