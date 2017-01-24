---
title: "Errore del compilatore CS0272 | Microsoft Docs"
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
  - "CS0272"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0272"
ms.assetid: 16a9aab6-922a-45a3-a0ef-f32e99f3950f
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0272
Non è possibile usare la proprietà o l'indicizzatore 'property\/indexer' in questo contesto perché la funzione di accesso set è inaccessibile  
  
 Questo errore si verifica quando il codice del programma non può accedere alla funzione di accesso `set`. Per risolvere l'errore, aumentare l'accessibilità della funzione di accesso o modificare il percorso di chiamata. Per altre informazioni, vedere [Limitazione dell'accessibilità delle funzioni di accesso](../Topic/Restricting%20Accessor%20Accessibility%20\(C%23%20Programming%20Guide\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0272:  
  
```  
// CS0272.cs public class MyClass { public int Property { get { return 0; } private set { } } } public class Test { static void Main() { MyClass c = new MyClass(); c.Property = 10;      // CS0272 // To resolve, remove the previous line // or use an appropriate modifier on the set accessor. } }  
```