---
title: "Errore del compilatore CS0182 | Microsoft Docs"
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
  - "CS0182"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0182"
ms.assetid: a9e97bb8-f06e-499f-aadf-26abc2082f98
caps.latest.revision: 11
caps.handback.revision: 11
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0182
L'argomento di un attributo deve essere un'espressione costante, un'espressione typeof o un'espressione per la creazione di matrici di un tipo di parametro dell'attributo  
  
 Alcune limitazioni si applicano ai tipi di argomenti che possono essere usati con attributi. Si noti che oltre alle restrizioni specificate nel messaggio di errore, i tipi seguenti NON sono consentiti come argomenti dell'attributo:  
  
-   [sbyte](../Topic/sbyte%20\(C%23%20Reference\).md)  
  
-   [ushort](../Topic/ushort%20\(C%23%20Reference\).md)  
  
-   [uint](../Topic/uint%20\(C%23%20Reference\).md)  
  
-   [ulong](../Topic/ulong%20\(C%23%20Reference\).md)  
  
-   [decimal](../Topic/decimal%20\(C%23%20Reference\).md)  
  
 Per altre informazioni, vedere [NOT IN BUILD: Attributi globali \(Guida per i programmatori C\#\)](http://msdn.microsoft.com/it-it/7c6c41f8-f0d5-4345-8987-3d91f9bae136).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0182:  
  
```  
// CS0182.cs public class MyClass { static string s = "Test"; [System.Diagnostics.ConditionalAttribute(s)]   // CS0182 // try the following line instead // [System.Diagnostics.ConditionalAttribute("Test")] void NonConstantArgumentToConditional() { } public static void Main() { } }  
```