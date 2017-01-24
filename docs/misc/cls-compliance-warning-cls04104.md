---
title: "Avviso di conformit&#224; a CLS CLS04104 | Microsoft Docs"
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
  - "CLS04104"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04104"
ms.assetid: 89a5c080-c7f3-48b5-b2ff-90aa2236c90e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS04104
Gli attributi devono essere di tipo 'System::Attribute' o derivati da questo tipo  
  
 Per essere conforme a CLS, un attributo personalizzato deve derivare da System::Attribute.  Un attributo non derivato da System::Attribute è stato applicato a una funzione membro.  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS04111:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
```  
  
 e quindi una funzione membro che usa l'attributo:  
  
```  
.custom instance void MyAttribute::.ctor(int32) = ( 01 00 00 00 00 00 00 00 )  
```  
  
 L'avviso viene risolto se si fa derivare l'attributo da System::Attribute:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Attribute  
```