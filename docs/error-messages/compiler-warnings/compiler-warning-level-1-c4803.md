---
title: Compilatore avviso (livello 1) C4803 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C4803
dev_langs:
- C++
helpviewer_keywords:
- C4803
ms.assetid: 2552f3a6-c418-49f4-98a2-a929857be658
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b6725685e84e1c9ce0fc5c3f58f4ff163870d278
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4803"></a>Avviso del compilatore (livello 1) C4803
'method': il metodo raise ha una classe di archiviazione diverso da quello dell'evento 'event'  
  
Metodi di eventi devono avere la stessa classe di archiviazione della dichiarazione dell'evento. Il compilatore consente di regolare i metodi dell'evento in modo che le classi di archiviazione sono uguali.  
  
Questo avviso può verificarsi se si dispone di una classe che implementa un evento da un'interfaccia. Il compilatore non genera in modo implicito un metodo di generazione di un evento in un'interfaccia. Quando si implementa tale interfaccia in una classe, il compilatore di generare in modo implicito un metodo di generazione e tale metodo non virtuale, pertanto l'avviso. Per ulteriori informazioni sugli eventi, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
Vedere [avviso](../../preprocessor/warning.md) pragma per informazioni su come disattivare un avviso.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4803.  
  
```  
// C4803.cpp  
// compile with: /clr /W1  
using namespace System;  
  
public delegate void Del();  
  
ref struct E {  
   Del ^ _pd1;  
   event Del ^ E1 {  
      void add (Del ^ pd1) {  
         _pd1 = dynamic_cast<Del ^>(Delegate::Combine(_pd1, pd1));  
      }  
  
      void remove(Del^ pd1) {  
         _pd1 = dynamic_cast<Del^> (Delegate::Remove(_pd1, pd1));  
      }  
  
      virtual void raise() {   // C4803 warning (remove virtual)  
         if (_pd1)  
            _pd1();  
      }  
   }  
  
   void func() {  
      Console::WriteLine("In E::func()");  
   }  
};  
  
int main() {  
   E ^ ep = gcnew E;  
   ep->E1 += gcnew Del(ep, &E::func);  
   ep->E1();  
   ep->E1 -= gcnew Del(ep, &E::func);  
   ep->E1();  
}  
```  
