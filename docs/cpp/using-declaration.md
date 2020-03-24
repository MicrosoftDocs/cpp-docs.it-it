---
title: dichiarazione using
ms.date: 11/04/2016
helpviewer_keywords:
- using declaration
- declarations [C++], using-declaration
- namespaces [C++], unqualified names in
- using keyword [C++]
ms.assetid: 4184e2b1-3adc-408e-b5f3-0b3f8b554723
ms.openlocfilehash: d762ea36e83d2384b7bb50c2914f6a634c134d15
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80187843"
---
# <a name="using-declaration"></a>dichiarazione using

La Dichiarazione **using** introduce un nome nell'area dichiarativa in cui viene visualizzata la dichiarazione using.

## <a name="syntax"></a>Sintassi

```
using [typename] nested-name-specifier unqualified-id ;
using declarator-list ;
```

### <a name="parameters"></a>Parametri

*identificatore-nome-annidato* Sequenza di nomi di spazio dei nomi, classe o enumerazione e operatori di risoluzione dell'ambito (::), terminati da un operatore di risoluzione dell'ambito. Per introdurre un nome dallo spazio dei nomi globale, è possibile usare un singolo operatore di risoluzione dell'ambito. La parola chiave **typeName** è facoltativa e può essere usata per risolvere i nomi dipendenti quando viene introdotta in un modello di classe da una classe base.

*ID non qualificato* Espressione ID non qualificata, che può essere un identificatore, un nome di operatore di overload, un operatore di valori letterali definito dall'utente o un nome di funzione di conversione, un nome di distruttore della classe o un nome di modello e un elenco di argomenti.

*elenco di dichiaratori* Elenco delimitato da virgole dei dichiaratori non *qualificati* di [**typeName**] *Nested-Name-specifier* , seguiti facoltativamente da puntini di sospensione.

## <a name="remarks"></a>Osservazioni

Una dichiarazione using introduce un nome non qualificato come sinonimo di un'entità dichiarata altrove. Consente di usare un singolo nome da uno spazio dei nomi specifico senza qualificazione esplicita nell'area di dichiarazione in cui viene visualizzata. Questo si differenzia dalla [direttiva using](../cpp/namespaces-cpp.md#using_directives), che consente l'uso di *tutti* i nomi in uno spazio dei nomi senza qualificazione. La parola chiave **using** viene usata anche per gli [alias di tipo](../cpp/aliases-and-typedefs-cpp.md).

## <a name="example"></a>Esempio

Una dichiarazione using può essere usata in una definizione di classe.

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

Quando viene usato per dichiarare un membro, una dichiarazione using deve fare riferimento a un membro di una classe base.

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

È possibile fare riferimento ai membri dichiarati utilizzando una dichiarazione using utilizzando la qualificazione esplicita. Il prefisso `::` si riferisce allo spazio dei nomi globale.

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

Quando viene eseguita una dichiarazione using, il sinonimo creato dalla dichiarazione si riferisce solo alle definizioni valide nel punto della dichiarazione using. Le definizioni aggiunte a uno spazio dei nomi dopo la dichiarazione using non sono sinonimi validi.

Un nome definito da una Dichiarazione **using** è un alias per il nome originale. Non influisce sul tipo, sul collegamento o su altri attributi della dichiarazione originale.

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

Per quanto riguarda le funzioni negli spazi dei nomi, se in un'area dichiarativa vengono specificati un set di dichiarazioni locali e l'utilizzo di dichiarazioni per un singolo nome, è necessario che tutti facciano riferimento alla stessa entità o che tutti facciano riferimento a funzioni.

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

Nell'esempio precedente, l'istruzione `using B::i` causa la dichiarazione di un secondo `int i` nella funzione `g()`. L'istruzione `using B::f` non è in conflitto con la funzione `f(char)` perché i nomi di funzione introdotti da `B::f` hanno tipi di parametro diversi.

## <a name="example"></a>Esempio

Una dichiarazione di funzione locale non può avere lo stesso nome e lo stesso tipo di una funzione introdotta mediante la dichiarazione. Ad esempio:

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

Per quanto riguarda l'ereditarietà, quando una dichiarazione using introduce un nome di una classe di base in un ambito di classe derivata, le funzioni membro nella classe derivata eseguono l'override delle funzioni membro virtuali con lo stesso nome e tipi di argomento nella classe di base.

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

Tutte le istanze di un nome indicate in una dichiarazione using devono essere accessibili. In particolare, se una classe derivata usa una dichiarazione using per accedere a un membro di una classe base, il nome del membro deve essere accessibile. Se il nome è quello di una funzione membro in overload, tutte le funzioni denominate devono essere accessibili.

Per altre informazioni sull'accessibilità dei membri, vedere [controllo dell'accesso ai membri](../cpp/member-access-control-cpp.md).

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

[Namespaces](../cpp/namespaces-cpp.md) (Spazi dei nomi)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
