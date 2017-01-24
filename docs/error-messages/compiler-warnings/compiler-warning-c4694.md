---
title: "Avviso del compilatore C4694 | Microsoft Docs"
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
  - "C4694"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4694"
ms.assetid: 5ca122bb-34f3-43ee-a21f-95802cd515f7
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore C4694
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'class\_1': una classe astratta sealed non può avere una classe base 'base\_class'  
  
 Una classe astratta e sealed non può ereditare da un tipo riferimento; una classe sealed e astratta non può implementare le funzioni della classe base e non può essere usata come una classe base.  
  
 Per altre informazioni, vedere [abstract](../../windows/abstract-cpp-component-extensions.md), [sealed](../../windows/sealed-cpp-component-extensions.md) e [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C4694.  
  
```  
// C4694.cpp // compile with: /c /clr ref struct A {}; ref struct B sealed abstract : A {};   // C4694  
```