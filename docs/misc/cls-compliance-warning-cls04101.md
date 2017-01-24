---
title: "Avviso di conformit&#224; a CLS CLS04101 | Microsoft Docs"
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
  - "CLS04101"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04101"
ms.assetid: 5ad21eb4-0c6e-4629-bc4a-af274f8a8d90
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS04101
Gli attributi devono essere di tipo 'System::Attribute' o derivati da questo tipo  
  
 Verificare che tutti gli attributi applicati ai parametri del costruttore siano di tipo 'System.Attribute' o derivati da questo tipo.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS04101:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object { .method public specialname rtspecialname instance void  .ctor() cil managed  
```  
  
 L'avviso viene risolto se si fa derivare l'attributo da System::Attribute:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object { .method public specialname rtspecialname instance void  .ctor() cil managed  
```