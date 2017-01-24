---
title: "Avviso di conformit&#224; a CLS CLS04111 | Microsoft Docs"
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
  - "CLS04111"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CLS04111"
ms.assetid: 4b445ce7-d823-4cf3-b971-1c181be5fa41
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "douge"
---
# Avviso di conformit&#224; a CLS CLS04111
Gli attributi devono essere di tipo 'System::Attribute' o derivati da questo tipo  
  
 Per essere conforme a CLS, un attributo personalizzato deve derivare da System::Attribute.  Un attributo non derivato da System::Attribute è stato applicato a un tipo.  
  
 La dichiarazione seguente \(che usa il linguaggio assembly MSIL\) illustra ciò che potrebbe causare l'avviso CLS04111:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Object  
```  
  
 L'avviso viene risolto se si fa derivare l'attributo da System::Attribute:  
  
```  
.class public auto ansi MyAttribute extends [mscorlib]System.Attribute  
```