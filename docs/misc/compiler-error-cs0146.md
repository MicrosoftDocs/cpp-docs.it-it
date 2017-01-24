---
title: "Errore del compilatore CS0146 | Microsoft Docs"
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
  - "CS0146"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0146"
ms.assetid: 2be796e5-da2c-4939-af12-3145cd1828c8
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0146
Dipendenza della classe base circolare che comprende 'class1' e 'class2'  
  
 L'elenco di ereditarietà di una classe include un riferimento diretto o indiretto a se stessa. Una classe non può ereditare da se stessa. Per altre informazioni, vedere [Ereditarietà](../Topic/Inheritance%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0146:  
  
```  
// CS0146.cs namespace MyNamespace { public interface InterfaceA { } public class MyClass : InterfaceA, MyClass2 { public void Main() { } } public class MyClass2 : MyClass   // CS0146 { } }  
```