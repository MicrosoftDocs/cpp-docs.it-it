---
title: "Errore del compilatore C3909 | Microsoft Docs"
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
  - "C3909"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3909"
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3909
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

una dichiarazione di evento gestito o WinRT deve trovarsi in un tipo WinRT o gestito  
  
 Un evento Windows Runtime o gestito è stato dichiarato in un tipo nativo.  Per correggere l'errore, dichiarare gli eventi nei tipi Windows Runtime o nei tipi gestiti.  
  
 Per altre informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
 L'esempio seguente genera l'errore C3909 e mostra come risolverlo:  
  
```  
// C3909.cpp  
// compile with: /clr /c  
delegate void H();  
class X {  
   event H^ E;   // C3909 - use ref class X instead  
};  
  
ref class Y {  
   static event H^ E {  
      void add(H^) {}  
      void remove( H^ h ) {}  
      void raise( ) {}  
   }  
};  
```