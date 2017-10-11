---
title: Errore del compilatore C3731 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C3731
dev_langs:
- C++
helpviewer_keywords:
- C3731
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: ac117c6c2020607d5b2d15b0229eaa045a22ec99
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3731"></a>Errore del compilatore C3731
evento incompatibile 'function1' e il gestore 'function2'; origine evento e il gestore dell'evento deve essere dello stesso tipo  
  
 L'origine e il ricevente di un evento devono avere lo stesso tipo (ad esempio tipi `native` e `com`). Per correggere l'errore, verificare i tipi di origine dell'evento e la corrispondenza del gestore dell'evento.  
  
 L'esempio seguente genera l'errore C3731:  
  
```  
// C3731.cpp  
// compile with: /clr  
#using <mscorlib.dll>  
[event_source(native)]  
struct A {  
   __event void MyEvent();  
};  
  
[event_receiver(managed)]  
// try the following line instead  
// [event_receiver(native)]  
struct B {  
   void func();  
   B(A a) {  
      __hook(&A::MyEvent, &a, &B::func);   // C3731  
   }  
};  
  
int main() {  
}  
```
