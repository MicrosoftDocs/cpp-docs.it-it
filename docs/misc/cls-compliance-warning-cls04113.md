---
title: "Avviso di conformit&#224; a CLS CLS04113 | Microsoft Docs"
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
  - "CLS04113"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04113"
ms.assetid: 628f56bf-5f2f-4245-b4fd-02d4605a901c
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS04113
**Gli attributi devono essere di tipo 'System::Attribute' o derivati da questo tipo**  
  
 Per essere conforme a CLS, un attributo personalizzato deve derivare da System::Attribute.  
  
 Per altre informazioni sul controllo di conformità a CLS \(Common Language Subset\), vedere [Assembly conformi a CLS](http://msdn.microsoft.com/it-it/3320b57e-ea55-4697-a17d-f509a36a3c93).  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS04100:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
```  
  
 L'avviso viene risolto se si fa derivare l'attributo da System::Attribute:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Attribute  
```