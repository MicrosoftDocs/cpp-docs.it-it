---
title: "Errore del compilatore CS0271 | Microsoft Docs"
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
  - "CS0271"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0271"
ms.assetid: eadc9fb5-7770-4ec4-94f6-3c7cf37eec06
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0271
Non è possibile usare la proprietà o l'indicizzatore 'property\/indexer' in questo contesto perché la funzione di accesso get è inaccessibile  
  
 Questo errore si verifica quando si prova ad accedere a una funzione di accesso `get` inaccessibile. Per risolvere l'errore, aumentare l'accessibilità della funzione di accesso o modificare il percorso di chiamata. Per altre informazioni, vedere [Accessibilità delle funzioni di accesso](../Topic/Restricting%20Accessor%20Accessibility%20\(C%23%20Programming%20Guide\).md) e [Proprietà](../Topic/Properties%20\(C%23%20Programming%20Guide\).md).  
  
 L'esempio seguente genera l'errore CS0271:  
  
```  
// CS0271.cs public class MyClass { public int Property { private get { return 0; } set { } } public int Property2 { get { return 0; } set { } } } public class Test { public static void Main(string[] args) { MyClass c = new MyClass(); int a = c.Property;   // CS0271 int b = c.Property2;   // OK } }  
```