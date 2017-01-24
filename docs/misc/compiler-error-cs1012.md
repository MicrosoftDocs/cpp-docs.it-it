---
title: "Errore del compilatore CS1012 | Microsoft Docs"
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
  - "CS1012"
dev_langs: 
  - "CSharp"
helpviewer_keywords: 
  - "CS1012"
ms.assetid: 4acc5fe0-da47-4882-b7d8-557767d7cf03
caps.latest.revision: 8
caps.handback.revision: 8
author: "BillWagner"
ms.author: "wiwagn"
manager: "wpickett"
---
# Errore del compilatore CS1012
Troppi caratteri nel valore letterale carattere  
  
 Si è provato a inizializzare una costante [char](../Topic/char%20\(C%23%20Reference\).md) con più di un carattere.  
  
 L'errore CS1012 può verificarsi anche quando si esegue il data binding. La riga seguente ad esempio genererà un errore:  
  
 `<%# DataBinder.Eval(Container.DataItem, 'doctitle') %>`  
  
 Provare la riga seguente:  
  
 `<%# DataBinder.Eval(Container.DataItem, "doctitle") %>`  
  
 L'esempio seguente genera l'errore CS1012:  
  
```  
// CS1012.cs class Sample { static void Main() { char a = 'xx';   // CS1012 char a2 = 'x';   // OK System.Console.WriteLine(a2); } }  
```