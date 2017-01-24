---
title: "Avviso del compilatore (livello 1) CS0658 | Microsoft Docs"
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
  - "CS0658"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0658"
ms.assetid: 0309074c-741a-492c-9370-73b4bbfd3c1a
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS0658
'attribute modifier' non è una posizione di attributo riconosciuta. Tutti gli attributi in questo blocco verranno ignorati.  
  
 È stato specificato un modificatore di attributo non valido. Per altre informazioni, vedere [Destinazioni degli attributi](http://msdn.microsoft.com/it-it/59a261f0-1cfb-4aa5-b610-6b735389882c).  
  
 L'esempio seguente genera l'errore CS0658:  
  
```  
// CS0658.cs using System; public class TestAttribute : Attribute{} [badAttributeLocation: Test]   // CS0658, badAttributeLocation is invalid class ClassTest { public static void Main() { } }  
```