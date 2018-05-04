---
title: Dichiarazione using | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- using declaration
- declaring namespaces, unqualified names in namespaces
- declarations [C++], using-declaration
- namespaces [C++], unqualified names in
- using keyword [C++]
- declarations [C++], namespaces
ms.assetid: 4184e2b1-3adc-408e-b5f3-0b3f8b554723
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4cb07e2d56527ad4907b7b144ba5f3bc04196a9
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="using-declaration"></a>dichiarazione using
La dichiarazione using introduce un nome nell'area dichiarativa in cui la dichiarazione using viene visualizzata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
using [typename] nested-name-specifier unqualified-id ;  
using declarator-list ;  
```  
  
### <a name="parameters"></a>Parametri
  
*Identificatore di nome annidati*  
    Una sequenza di spazio dei nomi, classe o i nomi di enumerazione e operatori di risoluzione ambito (:), terminata da un operatore di risoluzione dell'ambito. Un operatore di risoluzione ambito singolo può essere utilizzato per introdurre un nome dello spazio dei nomi globale. La parola chiave `typename` è facoltativo e può essere utilizzato per risolvere i nomi dipendenti quando introdotti in un modello di classe da una classe base.  
  
*id non qualificato*  
    Non qualificata id-espressione che può essere un identificatore, un nome di operatore di overload, definiti dall'utente letterale Conversione o operatore di nome di una funzione, un nome di distruttore di classe o un elenco di nome e l'argomento di modello.  
  
*elenco di dichiaratori*  
    Un elenco delimitato da virgole di [`typename`] *identificatore di nome annidati* *non qualificato id* dichiaratori, eventualmente seguiti dai puntini di sospensione.
    
## <a name="remarks"></a>Note  
Una dichiarazione using introduce un nome non qualificato come sinonimo di un'entità dichiarata in un' posizione. Consente a un nome singolo da uno spazio dei nomi specifico per essere utilizzati senza qualifica esplicita nell'area di dichiarazione in cui è presente. È in contrasto con la [direttiva using](../cpp/namespaces-cpp.md#using_directives), che consente di *tutti* i nomi di uno spazio dei nomi per essere utilizzati senza qualifica. Il `using` (parola chiave) viene usato anche per [tipo alias](../cpp/aliases-and-typedefs-cpp.md).  
  
## <a name="example"></a>Esempio  
 Una dichiarazione using può essere utilizzata in una definizione di classe.  
  
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
   using B::f;    // B::f(char) is now visible as D::f(char)  
   using B::g;    // B::g(char) is now visible as D::g(char)  
   void f(int) {  
      printf_s("In D::f()\n");  
      f('c');     // Invokes B::f(char) instead of recursing  
   }  
  
   void g(int) {  
      printf_s("In D::g()\n");  
      g('c');     // Invokes B::g(char) instead of recursing  
   }  
};  
  
int main() {  
   D myD;  
   myD.f(1);  
   myD.g('a');  
}  
```  
  
```Output  
In D::f()  
In B::f()  
In B::g()  
```  
  
## <a name="example"></a>Esempio  
Quando viene utilizzata per dichiarare un membro, un utilizzo dichiarazione deve fare riferimento a un membro di una classe di base.  
  
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
  
```Output  
In B::f()  
```  
  
## <a name="example"></a>Esempio  
I membri dichiarati utilizzando una dichiarazione può fare riferimento tramite qualificazione esplicita. Il `::` fa riferimento allo spazio dei nomi globale.  
  
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
   using ::f;   // global f is also visible as X::f  
   using A::g;   // A's g is now visible as X::g 
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
  
```Output  
In h  
In f  
In A::g  
```  
  
## <a name="example"></a>Esempio  
Utilizzando una dichiarazione, il sinonimo creato dalla dichiarazione fa riferimento solo a definizioni vengono al momento l'utilizzo di dichiarazione. Le definizioni aggiunte uno spazio dei nomi una volta completata la dichiarazione non sono sinonimi.  
  
Un nome definito da un `using` dichiarazione è un alias per il nome originale. Non si applica il tipo di collegamento o altri attributi della dichiarazione originale.  
  
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
  
## <a name="example"></a>Esempio  
Per quanto riguarda le funzioni in spazi dei nomi, se un set di dichiarazioni locali e l'utilizzo di dichiarazioni per un singolo nome utilizzati in un'area dichiarativa, sono tutte devono fare riferimento alla stessa entità o devono tutti fare riferimento alle funzioni.  
  
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
  
 Nell'esempio precedente, il `using B::i` fa in modo che un secondo `int i` per essere dichiarata nel `g()` (funzione). Il `using B::f` istruzione non è in conflitto con il `f(char)` funzionare perché i nomi di funzione introdotti da `B::f` presentano tipi di parametro diversi.  
  
## <a name="example"></a>Esempio  
 Una dichiarazione di funzione locale non può avere lo stesso nome e tipo di una funzione introdotta dalla dichiarazione using. Ad esempio:  
  
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
  
## <a name="example"></a>Esempio  
 Rispetto all'ereditarietà, utilizzando una dichiarazione introduce un nome da una classe base in un ambito di classe derivata, le funzioni membro nelle funzioni membro virtuale di override di classe derivata con gli stessi tipi di nome e l'argomento nella classe base.  
  
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
   pd->f(1);     // calls D::f(int)  
   pd->f('a');   // calls B::f(char)  
   pd->g(1);     // calls B::g(int)  
   pd->g('a');   // calls D::g(char)  
}  
  
int main() {  
   D * myd = new D();  
   f(myd);  
}  
```  
  
```Output  
In D::f(int)  
In B::f(char)  
In B::g  
In D::g(char)  
```  
  
## <a name="example"></a>Esempio  
Tutte le istanze di un nome indicato in tramite la dichiarazione deve essere accessibile. In particolare, se una classe derivata Usa un la dichiarazione di accedere a un membro di una classe base, il nome del membro deve essere accessibile. Se il nome è quello di una funzione membro in overload, tutte le funzioni denominate devono essere accessibile.  
  
Per ulteriori informazioni sull'accessibilità dei membri, vedere [controllo di accesso ai membri](../cpp/member-access-control-cpp.md).  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Spazi dei nomi](../cpp/namespaces-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)