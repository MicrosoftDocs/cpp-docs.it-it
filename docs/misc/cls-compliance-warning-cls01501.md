---
title: "Avviso di conformit&#224; a CLS CLS01501 | Microsoft Docs"
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
  - "CLS01501"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS01501"
ms.assetid: 74361331-3773-48d5-8508-0113f5464a75
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS01501
**Il vincolo varargs non fa parte delle specifiche CLS**  
  
 Il vincolo varargs non fa parte delle specifiche CLS \(Common Language Subset\).  L'unica convenzione di chiamata supportata da CLS è la convenzione di chiamata gestita standard.  
  
 Per altre informazioni sul controllo di conformità a CLS, vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione di funzione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS01501:  
  
```  
.method public specialname rtspecialname instance vararg void  .ctor() cil managed  
```  
  
 È possibile risolvere CLS01501 usando una matrice di parametri.  Per altre informazioni, vedere [Variable Argument Lists \(...\) \(C\+\+\/CLI\)](../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).