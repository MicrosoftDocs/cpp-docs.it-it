---
title: "Avviso del compilatore (livello 1) C4803 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4803"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4803"
ms.assetid: 2552f3a6-c418-49f4-98a2-a929857be658
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 1) C4803
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'metodo': il metodo di generazione ha una classe di memoria diversa da quella dell'evento, 'evento'  
  
 I metodi di un evento devono avere la stessa classe di memoria della dichiarazione dell'evento.  I metodi dell'evento vengono impostati in modo che le classi di memoria corrispondano.  
  
 L'avviso può essere generato se una classe implementa un evento da un'interfaccia.  La compilazione non prevede la generazione implicita di un metodo di generazione per un evento in un'interfaccia.  Quando si implementa tale interfaccia in una classe, viene generato in modo implicito un metodo di generazione non virtual e, di conseguenza, viene visualizzato l'avviso.  
  
 Per informazioni sulla disattivazione di un avviso, vedere pragma [warning](../../preprocessor/warning.md).  
  
## Esempio  
 L'errore C4803 può essere generato utilizzando **\/clr**.  Per ulteriori informazioni sull'utilizzo degli eventi, vedere [event](../../windows/event-cpp-component-extensions.md).  
  
 Nell'esempio seguente viene generato l'errore C4803:  
  
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
  
## Esempio  
 L'errore C4803 può essere generato utilizzando **\/clr:oldSyntax**.  Nell'esempio seguente viene generato l'errore C4803:  
  
```  
// C4803_b.cpp  
// compile with: /clr:oldSyntax /W1  
using namespace System;  
  
public __delegate void Del();  
  
__gc struct E {  
   Del* _pd1;  
   virtual __event void add_E1(Del* pd1) {  
      _pd1 = dynamic_cast<Del*> (Delegate::Combine(_pd1, pd1));  
   }  
  
   virtual __event void remove_E1(Del* pd1) {  
      _pd1 = dynamic_cast<Del*> (Delegate::Remove(_pd1, pd1));  
   }  
  
   __event void raise_E1 () {   // C4803, add virtual  
      if (_pd1)  
         _pd1->Invoke();  
   }  
  
   void func() {  
      Console::WriteLine("In E::func()");  
   }  
};  
  
int main() {  
   E* ep = new E;  
   ep->E1 += new Del(ep, &E::func);  
   ep->E1();  
   ep->E1 -= new Del(ep, &E::func);  
   ep->E1();  
}  
```