---
title: dichiarazione using
ms.date: 11/04/2016
helpviewer_keywords:
- using declaration
- declaring namespaces, unqualified names in namespaces
- declarations [C++], using-declaration
- namespaces [C++], unqualified names in
- using keyword [C++]
- declarations [C++], namespaces
ms.assetid: 4184e2b1-3adc-408e-b5f3-0b3f8b554723
ms.openlocfilehash: 46d8b1e13b55988efd40643482ffd6123034ccb5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50559844"
---
# <a name="using-declaration"></a>dichiarazione using

La dichiarazione using introduce un nome nell'area dichiarativa in cui la dichiarazione using viene visualizzata.

## <a name="syntax"></a>Sintassi

```
using [typename] nested-name-specifier unqualified-id ;
using declarator-list ;
```

### <a name="parameters"></a>Parametri

*Identificatore di nome annidati* una sequenza di spazio dei nomi, classe, o i nomi di enumerazione e operatori di risoluzione ambito (:), terminata da un operatore di risoluzione dell'ambito. Un operatore di risoluzione ambito singolo consente di introdurre un nome dello spazio dei nomi globali. La parola chiave **typename** è facoltativo e può essere usato per risolvere i nomi dei dipendenti quando introdotti in un modello di classe da una classe base.

*non qualificato-id* un'id non qualificato dall'espressione, che può essere un identificatore, un nome di operatore di overload, un nome definito dall'utente letterale operatore o la conversione (funzione), un nome di un distruttore di classe o un elenco di nome e l'argomento di modello.

*declarator-list* un elenco delimitato da virgole di [**typename**] *identificatore di nome annidati* *non qualificato-id* dichiaratori, seguiti facoltativamente da un puntini di sospensione.

## <a name="remarks"></a>Note

Una dichiarazione using introduce un nome non qualificato come sinonimo di un'entità dichiarata in un' posizione. Consente a un nome singolo da uno spazio dei nomi specifico per essere utilizzati senza qualifica esplicita nell'area di dichiarazione in cui è presente. È in contrasto con la [direttiva using](../cpp/namespaces-cpp.md#using_directives), che consente *tutte* i nomi in uno spazio dei nomi per essere utilizzati senza qualifica. Il **usando** parola chiave viene usato anche per [tipo alias](../cpp/aliases-and-typedefs-cpp.md).

## <a name="example"></a>Esempio

Una dichiarazione using è utilizzabile in una definizione di classe.

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

Quando viene utilizzata per dichiarare un membro, una tramite dichiarazione deve fare riferimento a un membro di una classe di base.

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

I membri dichiarati utilizzando una dichiarazione può fare riferimento con qualificazione esplicita. Il `::` fa riferimento allo spazio dei nomi globale.

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

Quando un uso è apportata dichiarazione, creato dalla dichiarazione fa riferimento il sinonimo solo definizioni validi al momento l'uso dichiarazione. Definizioni aggiunte a uno spazio dei nomi di utilizzo dichiarazione non sono sinonimi.

Un nome definito da una **usando** dichiarazione è un alias per il nome originale. Non modifica il tipo, un collegamento o altri attributi della dichiarazione originale.

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

Per quanto riguarda le funzioni in spazi dei nomi, se un set di dichiarazioni locali e si usa le dichiarazioni per un singolo nome sono espressi in un'area dichiarativa, sono tutte devono fare riferimento alla stessa entità o sono tutte devono fare riferimento alle funzioni.

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

Nell'esempio precedente, il `using B::i` istruzione fa sì che un secondo `int i` venga dichiarato nel `g()` (funzione). Il `using B::f` istruzione non è in conflitto con il `f(char)` funzionare perché i nomi delle funzioni introdotti da `B::f` presentano tipi di parametro diversi.

## <a name="example"></a>Esempio

Una dichiarazione di funzione locale non può essere lo stesso nome e tipo di una funzione introdotta dalla dichiarazione using. Ad esempio:

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

Rispetto all'ereditarietà, utilizzando una dichiarazione introduce un nome da una classe di base nell'ambito di un classe derivata, funzioni membro in funzioni di membro virtuale override della classe derivata con lo stesso nome e argomento tipo nella classe di base.

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

Tutte le istanze di un nome indicato in tramite la dichiarazione deve essere accessibile. In particolare, se una classe derivata Usa un usando una dichiarazione di accedere a un membro di una classe base, il nome del membro deve essere accessibile. Se il nome è quello di una funzione membro in overload, quindi tutte le funzioni denominate devono essere accessibili.

Per altre informazioni sull'accessibilità dei membri, vedere [controllo di accesso ai membri](../cpp/member-access-control-cpp.md).

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

[Spazi dei nomi](../cpp/namespaces-cpp.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)