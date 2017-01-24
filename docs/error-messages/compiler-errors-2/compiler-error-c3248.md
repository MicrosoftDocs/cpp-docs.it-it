---
title: "Errore del compilatore C3248 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3248"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3248"
ms.assetid: d00b9d7d-b6be-4a5b-bb52-48174ea71fc4
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3248
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function1': la funzione dichiarata come '\_\_sealed' non può essere sottoposta a override da 'function2'  
  
 Una classe derivata ha tentato di eseguire l'override di un metodo virtuale [\_\_sealed](../../misc/sealed.md).  
  
 C3248 è raggiungibile solo usando **\/clr:oldSyntax**.  
  
 L'esempio seguente genera l'errore C3248:  
  
```  
// C3248b.cpp // compile with: /clr:oldSyntax using namespace System; __gc struct B { __sealed virtual void func(); }; __gc struct D : B { void func();   // C3248 };  
```