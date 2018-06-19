---
title: Errore del compilatore C3909 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3909
dev_langs:
- C++
helpviewer_keywords:
- C3909
ms.assetid: 0a443132-e53f-42dc-a58b-f086da3e7bfd
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 53e89dd422b1289d926ab04a0f17ae4d6185d19d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33270817"
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