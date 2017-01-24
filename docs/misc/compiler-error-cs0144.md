---
title: "Errore del compilatore CS0144 | Microsoft Docs"
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
  - "CS0144"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0144"
ms.assetid: 3904cab1-05bd-44ec-81d0-e36c5656f742
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0144
Non è possibile creare un'istanza della classe o dell'interfaccia astratta 'interface'  
  
 Non è possibile creare un'istanza di una classe [abstract](../Topic/abstract%20\(C%23%20Reference\).md) o di un'[interfaccia](../Topic/interface%20\(C%23%20Reference\).md). Per altre informazioni, vedere [Interfacce](../Topic/Interfaces%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0144:  
  
```  
// CS0144.cs interface MyInterface { } public class MyClass { public static void Main() { MyInterface myInterface = new MyInterface ();   // CS0144 } }  
```