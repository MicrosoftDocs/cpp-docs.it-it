---
title: Errore del compilatore C2512 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2512
dev_langs:
- C++
helpviewer_keywords:
- C2512
ms.assetid: 15206da9-1164-451a-b869-280e00711aad
caps.latest.revision: 9
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 63090bc7dac08aa87bcd68e77c076185176a7285
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c2512"></a>Errore del compilatore C2512
'identifier': non è disponibile alcun costruttore predefinito appropriato  
  
 Nessun costruttore predefinito è disponibile per la classe, struttura o unione specificata. Il compilatore fornisce un costruttore predefinito solo se non sono disponibili costruttori definiti dall'utente.  
  
 Se si fornisce un costruttore che accetta un parametro non void e si vuole consentire che la classe venga creata senza parametri, ad esempio come gli elementi di una matrice, è necessario fornire anche un costruttore predefinito. Il costruttore predefinito può essere un costruttore con valori predefiniti per tutti i parametri.  
  
 L'esempio seguente genera l'errore C2512 e mostra come risolverlo:  
  
```  
// C2512.cpp  
// C2512 expected  
struct B {  
   B (char *);  
   // Uncomment the following line to fix.  
   // B() {};  
};  
  
int main() {  
   B b;   
}  
```  
  
 L'esempio seguente mostra un errore C2512 più complesso. Per correggere l'errore, modificare il codice in modo da definire la classe prima che si faccia riferimento al costruttore:  
  
```  
// C2512b.cpp  
// compile with: /c  
struct S {  
   struct X;  
  
   void f() {  
      X *x = new X();   // C2512 X not defined yet  
   }  
  
};  
  
struct S::X {};  
  
struct T {  
   struct X;  
   void f();  
};  
  
struct T::X {};  
  
void T::f() {  
   X *x = new X();  
}  
```  
  
 C2512 può essere causato anche da una chiamata a un costruttore predefinito, una classe contenente una costante o un membro dati di riferimento. Questi membri devono essere inizializzati in un elenco di inizializzatori del costruttore, per evitare che il compilatore generi un costruttore predefinito.  
  
 L'esempio seguente genera l'errore C2512 e mostra come risolverlo:  
  
```  
// C2512c.cpp  
// Compile by using: cl /c /W3 C2512c.cpp  
struct S {  
   const int i_;  
   int &r_;   
};   
  
int SumS() {  
   const int ci = 7;  
   int ir = 42;  
  
   S s1; // C2512 - no default constructor available  
   S s2{ci, ir};  // Fix - initialize const and reference members   
   return s2.i_ + s2.r_;  
}  
```
