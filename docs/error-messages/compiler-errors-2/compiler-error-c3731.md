---
title: "Errore del compilatore C3731 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3731"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3731"
ms.assetid: 45f89fcd-464c-4bc8-8a42-edcb5416d26c
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3731
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

evento 'funzione1' e gestore 'funzione2' incompatibili. L'origine evento e il gestore eventi devono riferirsi allo stesso tipo di evento  
  
 L'origine e il ricevente di un evento devono avere lo stesso tipo \(ad esempio tipi `native` e `com`\).  Per correggere questo errore, fare corrispondere i tipi dell'origine eventi e del gestore eventi.  
  
 Il seguente codice di esempio genera l'errore C3731:  
  
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