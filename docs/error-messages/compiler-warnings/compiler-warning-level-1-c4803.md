---
title: Compilatore avviso (livello 1) C4803 | Documenti di Microsoft
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
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: c243063a9770542f137d5950e8a269f771960f74
ms.openlocfilehash: 2581d4240306e88d75fe5fcc0249371005853b7e
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-warning-level-1-c4803"></a>Avviso del compilatore (livello 1) C4803
'metodo': il metodo raise ha una classe di archiviazione diverso da quello dell'evento, 'event'  
  
Metodi di evento devono avere la stessa classe di archiviazione della dichiarazione dell'evento. Il compilatore consente di modificare i metodi dell'evento in modo che le classi di archiviazione sono uguali.  
  
Il problema può verificarsi se si dispone di una classe che implementa un evento da un'interfaccia. Il compilatore non genera in modo implicito un metodo di generazione di un evento in un'interfaccia. Quando si implementa tale interfaccia in una classe, il compilatore di generare in modo implicito un metodo di generazione e tale metodo non è virtuale, pertanto il messaggio di avviso. Per ulteriori informazioni sugli eventi, vedere [evento](../../windows/event-cpp-component-extensions.md).  
  
Vedere [avviso](../../preprocessor/warning.md) pragma per informazioni su come disattivare un avviso.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente genera l'errore C4803.  
  
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

