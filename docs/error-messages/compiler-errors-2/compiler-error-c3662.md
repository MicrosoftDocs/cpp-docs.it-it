---
title: "Errore del compilatore C3662 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3662"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3662"
ms.assetid: 61bd3e41-a86b-42c0-be89-d992d3906ff1
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3662
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'member': identificatore di override 'specifier' consentito solo con funzioni membro di classi gestite o WinRT  
  
 È stato usato un identificatore di override su un membro di tipo nativo, ma non è consentito.  
  
 Per altre informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3662.  
  
```  
// C3662.cpp  
// compile with: /clr /c  
struct S {  
   virtual void f();  
};  
  
struct S1 : S {  
   virtual void f() new;   // C3662  
};  
  
ref struct T {  
   virtual void f();  
};  
  
ref struct T1 : T {  
   virtual void f() new;   // OK  
};  
```