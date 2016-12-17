---
title: "Errore del compilatore CS0541 | Microsoft Docs"
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
  - "CS0541"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0541"
ms.assetid: ed812c07-24f7-43c6-9a44-553f27f6249d
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0541
'declaration': la dichiarazione esplicita dell'interfaccia può essere dichiarata solo in una classe o in una struct  
  
 Una dichiarazione di [interfaccia](../Topic/interface%20\(C%23%20Reference\).md) esplicita è stata trovata al di fuori di [class](../Topic/class%20\(C%23%20Reference\).md) o [struct](../Topic/struct%20\(C%23%20Reference\).md).  
  
 L'esempio seguente genera l'errore CS0541:  
  
```  
// CS0541.cs namespace x { interface IFace { void F(); } interface IFace2 : IFace { void IFace.F();   // CS0541 } }  
```