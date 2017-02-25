---
title: "Dichiarazione using | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiarazione using"
  - "dichiarazione di spazi dei nomi, nomi non completi negli spazi dei nomi"
  - "dichiarazioni [C++], dichiarazione using"
  - "spazi dei nomi [C++], non completi in"
  - "using (parola chiave) [C++]"
  - "dichiarazioni [C++], spazi dei nomi"
ms.assetid: 4184e2b1-3adc-408e-b5f3-0b3f8b554723
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Dichiarazione using
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La dichiarazione `using` introduce un nome nell'area dichiarativa in cui appare la dichiarazione `using`.  
  
## Sintassi  
  
```  
  
      using [typename][::] nested-name-specifier unqualified-id  
using :: unqualified-id  
```  
  
## Note  
 Il nome diventa un sinonimo di un'entità dichiarata da un'altra parte.  Consente un nome *unico* di uno specifico spazio dei nomi da utilizzare senza [qualificazione esplicita](../misc/explicit-qualification.md).  Ciò si differenzia dalla direttiva `using`, che consente *tutti* i nomi in uno spazio dei nomi da utilizzare senza qualificazione.  Vedere [Usare Directive](../misc/using-directive-cpp.md) per ulteriori informazioni.  Questa parola chiave viene utilizzata anche per gli [alias di tipo](../cpp/aliases-and-typedefs-cpp.md).  
  
## Esempio  
 Un dichiarazione using può essere usata nella definizione di una classe.  
  
```cpp  
// using_declaration1.cpp  
#include <stdio.h>  
class B {  
public:  
   void f(char) {  
      printf_s("In B::f()\n");  
   }  
  
   void g(char) {  
      printf_s("In B::g()\n");  
   }  
};  
  
class D : B {  
public:  
   using B::f;  
   using B::g;  
   void f(int) {  
      printf_s("In D::f()\n");  
      f('c');  
   }  
  
   void g(int) {  
      printf_s("In D::g()\n");  
      g('c');  
   }  
};  
  
int main() {  
   D myD;  
   myD.f(1);  
   myD.g('a');  
}  
```  
  
  **In D::f\(\)**  
**In B::f\(\)**  
**In B::g\(\)**   
## Esempio  
 Quando viene utilizzata per dichiarare un membro, una dichiarazione using deve fare riferimento a un membro di una classe base.  
  
```cpp  
// using_declaration2.cpp  
#include <stdio.h>  
  
class B {  
public:  
   void f(char) {  
      printf_s("In B::f()\n");  
   }  
  
   void g(char) {  
      printf_s("In B::g()\n");  
   }  
};  
  
class C {  
public:  
   int g();  
};  
  
class D2 : public B {  
public:  
   using B::f;   // ok: B is a base of D2  
   // using C::g;   // error: C isn't a base of D2  
};  
  
int main() {  
   D2 MyD2;  
   MyD2.f('a');  
}  
```  
  
  **In B::f\(\)**   
## Esempio  
 I membri dichiarati con la dichiarazione using possono essere referenziati usando la qualificazione esplicita.  Il prefisso `::` si riferisce allo spazio dei nomi globale.  
  
```cpp  
// using_declaration3.cpp  
#include <stdio.h>  
  
void f() {  
   printf_s("In f\n");  
}  
  
namespace A {  
   void g() {  
      printf_s("In A::g\n");  
   }  
}  
  
namespace X {  
   using ::f;   // global f  
   using A::g;   // A's g  
}  
  
void h() {  
   printf_s("In h\n");  
   X::f();   // calls ::f  
   X::g();   // calls A::g  
}  
  
int main() {  
   h();  
}  
```  
  
  **In h**  
**In f**  
**In A::g**   
## Esempio  
 Quando viene usata la dichiarazione using, il sinonimo creato dalla dichiarazione si riferisce solo alle definizioni valide al momento della dichiarazione using.  Le definizioni aggiunte a uno spazio dei nomi dopo la dichiarazione using non sono sinonimi validi.  
  
 Un nome definito da una dichiarazione using è un alias per il nome originale.  Non influisce sul tipo, il collegamento o altri attributi della dichiarazione originale.  
  
```cpp  
// post_declaration_namespace_additions.cpp  
// compile with: /c  
namespace A {  
   void f(int) {}  
}  
  
using A::f;   // f is a synonym for A::f(int) only  
  
namespace A {  
   void f(char) {}  
}  
  
void f() {  
   f('a');   // refers to A::f(int), even though A::f(char) exists  
}  
  
void b() {  
   using A::f;   // refers to A::f(int) AND A::f(char)  
   f('a');   // calls A::f(char);  
}  
```  
  
## Esempio  
 Rispetto alle funzioni negli spazi dei nomi, se un set di dichiarazioni locali e dichiarazioni using per un singolo nome vengono fornite in un'area dichiarativa, devono fare riferimento alla stessa entità o devono fare tutte riferimento a funzioni.  
  
```cpp  
// functions_in_namespaces1.cpp  
// C2874 expected  
namespace B {  
    int i;  
    void f(int);  
    void f(double);  
}  
  
void g() {  
    int i;  
    using B::i;   // error: i declared twice  
    void f(char);  
    using B::f;   // ok: each f is a function  
}  
```  
  
 Nell'esempio precedente, l'istruzione `using B::i` fa si che un secondo `int i` venga dichiarato nella funzione `g()`.  L'istruzione `using B::f` non è in conflitto con la funzione `f(char)` poiché i nomi delle funzioni introdotte da `B::f` presentano tipi di parametro diversi.  
  
## Esempio  
 Una dichiarazione di funzione locale non può avere lo stesso nome e lo stesso tipo come una funzione introdotta tramite la dichiarazione.  Ad esempio:  
  
```cpp  
// functions_in_namespaces2.cpp  
// C2668 expected  
namespace B {  
    void f(int);  
    void f(double);  
}  
  
namespace C {  
    void f(int);  
    void f(double);  
    void f(char);  
}  
  
void h() {  
    using B::f;          // introduces B::f(int) and B::f(double)  
    using C::f;          // C::f(int), C::f(double), and C::f(char)  
    f('h');              // calls C::f(char)  
    f(1);                // C2668 ambiguous: B::f(int) or C::f(int)?  
    void f(int);         // C2883 conflicts with B::f(int) and C::f(int)  
}  
```  
  
## Esempio  
 Rispetto all'ereditarietà, quando la dichiarazione using introduce un nome da una classe base nell'ambito della classe derivata, le funzioni nella classe derivata prendono il posto delle funzioni virtuali con lo stesso nome e tipi degli argomenti nella classe base.  
  
```cpp  
// using_declaration_inheritance1.cpp  
#include <stdio.h>  
struct B {  
   virtual void f(int) {  
      printf_s("In B::f(int)\n");  
   }  
  
   virtual void f(char) {  
      printf_s("In B::f(char)\n");  
   }  
  
   void g(int) {  
      printf_s("In B::g\n");  
   }  
  
   void h(int);  
};  
  
struct D : B {  
   using B::f;  
   void f(int) {   // ok: D::f(int) overrides B::f(int)  
      printf_s("In D::f(int)\n");  
   }  
  
   using B::g;  
   void g(char) {   // ok: there is no B::g(char)  
      printf_s("In D::g(char)\n");  
   }  
  
   using B::h;  
   void h(int) {}   // Note: D::h(int) hides non-virtual B::h(int)  
};  
  
void f(D* pd) {  
   pd->f(1);   // calls D::f(int)  
   pd->f('a');   // calls B::f(char)  
   pd->g(1);   // calls B::g(int)  
   pd->g('a');   // calls D::g(char)  
}  
  
int main() {  
   D * myd = new D();  
   f(myd);  
}  
```  
  
  **In D::f \(int\)**  
**In B::f\(char\)**  
**In B::g**  
**In D::g\(char\)**   
## Esempio  
 Tutte le istanze di un nome definito con l'utilizzo di una dichiarazione using devono essere accessibili.  In particolare, se una classe derivata utilizza la dichiarazione using per accedere a un membro di una classe base, il nome del membro deve essere accessibile.  Se il nome è quello di una funzione membro in overload, tutte le funzioni denominate devono essere accessibili.  
  
 Vedere [Controllo di accesso ai membri](../cpp/member-access-control-cpp.md), per ulteriori informazioni sull'accessibilità dei membri.  
  
```cpp  
// using_declaration_inheritance2.cpp  
// C2876 expected  
class A {  
private:  
   void f(char);  
public:  
   void f(int);  
protected:  
   void g();  
};  
  
class B : public A {  
   using A::f;   // C2876: A::f(char) is inaccessible  
public:  
   using A::g;   // B::g is a public synonym for A::g  
};  
```  
  
## Vedere anche  
 [Spazi dei nomi](../cpp/namespaces-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)