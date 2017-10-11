---
title: Errore del compilatore C3909 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3909
dev_langs:
- C++
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 5cb5929fe1619ce75a7bde15ac08955247f1af7a
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3909"></a>Errore del compilatore C3909
dichiarazione di evento gestito o aWinRT deve trovarsi in un tipo WinRT o gestito  
  
 Un evento Windows Runtime o gestito è stato dichiarato in un tipo nativo. Per correggere l'errore, dichiarare gli eventi nei tipi Windows Runtime o nei tipi gestiti.  
  
 Per ulteriori informazioni, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
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
