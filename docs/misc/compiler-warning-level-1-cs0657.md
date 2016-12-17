---
title: "Avviso del compilatore (livello 1) CS0657 | Microsoft Docs"
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
  - "CS0657"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0657"
ms.assetid: d12d2efc-f44e-40e6-b825-5a66ead0c08e
caps.latest.revision: 10
caps.handback.revision: 10
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0657
'attribute modifier' non è una posizione valida dell'attributo per questa dichiarazione. Le posizioni valide degli attributi sono 'locations'. Tutti gli attributi in questo blocco verranno ignorati.  
  
 Il compilatore ha rilevato un modificatore di attributo in una posizione non valida. Per altre informazioni, vedere [Destinazioni degli attributi](http://msdn.microsoft.com/it-it/59a261f0-1cfb-4aa5-b610-6b735389882c).  
  
 L'esempio seguente genera l'errore CS0657:  
  
```  
// CS0657.cs // compile with: /target:library public class TestAttribute : System.Attribute {} [return: Test]   // CS0657 return not valid on a class class Class1 {}  
```