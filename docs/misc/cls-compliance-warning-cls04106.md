---
title: "Avviso di conformit&#224; a CLS CLS04106 | Microsoft Docs"
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
  - "CLS04106"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04106"
ms.assetid: a74e4cb7-c96a-4673-bf11-c2ff3c4b02f1
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS04106
Gli attributi devono essere di tipo 'System::Attribute' o derivati da questo tipo  
  
 Per essere conforme a CLS, un attributo personalizzato deve derivare da System::Attribute.  Un attributo non derivato da System::Attribute è stato applicato a una funzione.  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS04106:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
```  
  
 e quindi una funzione che usa l'attributo:  
  
```  
.custom instance void MyAttribute::.ctor(int32) = ( 01 00 01 00 00 00 00 00 )  
```  
  
 L'avviso viene risolto se si fa derivare l'attributo da System::Attribute:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Attribute  
```