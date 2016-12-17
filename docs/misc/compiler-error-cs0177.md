---
title: "Errore del compilatore CS0177 | Microsoft Docs"
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
  - "CS0177"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0177"
ms.assetid: 852a8c2a-2411-4800-af7c-4c572d9900d3
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0177
Il parametro out 'parameter' deve essere assegnato prima che il controllo lasci il metodo corrente  
  
 A un parametro contrassegnato con la parola chiave [out](../Topic/out%20\(C%23%20Reference\).md) non è stato assegnato un valore nel corpo del metodo. Per altre informazioni, vedere [Passaggio di parametri](../Topic/Passing%20Parameters%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0177:  
  
```  
// CS0177.cs public class MyClass { public static void Foo(out int i)   // CS0177 { // uncomment the following line to resolve this error //   i = 0; } public static void Main() { int x = -1; Foo(out x); } }  
```