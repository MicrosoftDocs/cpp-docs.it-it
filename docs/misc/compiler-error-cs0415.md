---
title: "Errore del compilatore CS0415 | Microsoft Docs"
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
  - "CS0415"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0415"
ms.assetid: 1ed45b02-4568-4af4-b2a6-c8b01230d19a
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0415
L'attributo 'IndexerName' è valido solo in un indicizzatore che non sia una dichiarazione esplicita di un membro di interfaccia  
  
 Questo errore si verifica se si usa un attributo IndexerName in un indicizzatore che rappresenta un'implementazione esplicita di un'interfaccia. Per evitare questo errore, rimuovere il nome dell'interfaccia dalla dichiarazione dell'indicizzatore, se possibile. Per altre informazioni, vedere la [classe IndexerNameAttribute](frlrfSystemRuntimeCompilerServicesIndexerNameAttributeClassTopic).  
  
 L'esempio seguente genera l'errore CS0415:  
  
```  
// CS0415.cs using System; using System.Runtime.CompilerServices; public interface IA { int this[int index] { get; set; } } public class A : IA { [IndexerName("Item")]  // CS0415 int IA.this[int index] // Try this line instead: // public int this[int index] { get { return 0; } set { } } static void Main() { } }  
```