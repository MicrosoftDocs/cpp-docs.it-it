---
title: "Errore del compilatore CS0734 | Microsoft Docs"
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
  - "CS0734"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS0734"
ms.assetid: 9e1b0e49-bfc3-400c-9fd1-37e3c827e656
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS0734
L'opzione \/moduleassemblyname può essere specificata solo durante la compilazione del tipo di destinazione di 'module'  
  
 L'opzione del compilatore **\/moduleassemblyname** deve essere usata solo quando si compila .netmodule. Per altre informazioni, vedere [\/moduleassemblyname \(Specify Friend Assembly for Module\)](../Topic/-moduleassemblyname%20\(C%23%20Compiler%20Option\).md).  
  
 Per altre informazioni sulla compilazione di .netmodule, vedere [\/target:module \(Create Module to Add to Assembly\)](../Topic/-target:module%20\(C%23%20Compiler%20Options\).md).  
  
## Esempio  
 L'esempio seguente genera l'errore CS0734. Per risolvere il problema, aggiungere **\/target:module** alla compilazione.  
  
```  
// CS0734.cs // compile with: /moduleassemblyname:A // CS0734 expected public class Test {}  
```