---
title: "Avviso del compilatore (livello 1) CS2002 | Microsoft Docs"
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
  - "CS2002"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS2002"
ms.assetid: 4acd054e-d3fe-4be6-a660-53a0a5e8c6a4
caps.latest.revision: 7
caps.handback.revision: 7
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Avviso del compilatore (livello 1) CS2002
Il file di origine 'file' è specificato più volte  
  
 Un file di origine è stato passato più volte al compilatore. Per generare un file di output, è possibile specificare un file solo una volta al compilatore.  
  
 Questo avviso non può essere eliminato con l'opzione [\/nowarn](../Topic/-nowarn%20\(C%23%20Compiler%20Options\).md).  
  
 L'esempio seguente genera l'errore CS2002:  
  
```  
// CS2002.cs // compile with: CS2002.cs public class A { public static void Main(){} }  
```  
  
 Per generare l'errore, compilare l'esempio con la riga di comando:  
  
```  
csc CS2002.cs CS2002.cs  
```