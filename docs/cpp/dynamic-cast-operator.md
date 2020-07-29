---
title: Operatore dynamic_cast
description: Panoramica dell'operatore di dynamic_cast del linguaggio C++.
ms.date: 02/03/2020
f1_keywords:
- dynamic_cast_cpp
helpviewer_keywords:
- dynamic_cast keyword [C++]
ms.assetid: f380ada8-6a18-4547-93c9-63407f19856b
ms.openlocfilehash: 15609aeaef815ff89ca196876e1143090c65221b
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87221640"
---
# <a name="dynamic_cast-operator"></a>Operatore dynamic_cast

Converte l'operando `expression` in un oggetto di tipo `type-id` .

## <a name="syntax"></a>Sintassi

```
dynamic_cast < type-id > ( expression )
```

## <a name="remarks"></a>Osservazioni

`type-id`Deve essere un puntatore o un riferimento a un tipo di classe definito in precedenza o un "puntatore a void". Il tipo di `expression` deve essere un puntatore se `type-id` è un puntatore o un l-value se `type-id` è un riferimento.

Vedere [static_cast](../cpp/static-cast-operator.md) per una spiegazione della differenza tra le conversioni di cast statiche e dinamiche e quando è appropriato usare ciascuna di esse.

Il comportamento di nel codice gestito presenta due modifiche di rilievo **`dynamic_cast`** :

- **`dynamic_cast`** un puntatore al tipo sottostante di un'enumerazione boxed avrà esito negativo in fase di esecuzione, restituendo 0 anziché il puntatore convertito.

- **`dynamic_cast`** non genererà più un'eccezione quando `type-id` è un puntatore interno a un tipo di valore, con il cast che ha avuto esito negativo in fase di esecuzione.  Il cast restituirà il valore 0 del puntatore anziché generare.

Se `type-id` è un puntatore a una classe base diretta o indiretta accessibile non ambigua di `expression` , il risultato è un puntatore all'oggetto univoco di tipo `type-id` . Ad esempio:

```cpp
// dynamic_cast_1.cpp
// compile with: /c
class B { };
class C : public B { };
class D : public C { };

void f(D* pd) {
   C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class
                                   // pc points to C subobject of pd
   B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
                                   // pb points to B subobject of pd
}
```

Questo tipo di conversione è denominato "cast" perché sposta un puntatore verso l'alto di una gerarchia di classi, da una classe derivata a una classe da cui deriva. Un cast è una conversione implicita.

Se `type-id` è void *, viene eseguito un controllo della fase di esecuzione per determinare il tipo effettivo di `expression` . Il risultato è un puntatore all'oggetto completo a cui punta `expression` . Ad esempio:

```cpp
// dynamic_cast_2.cpp
// compile with: /c /GR
class A {virtual void f();};
class B {virtual void f();};

void f() {
   A* pa = new A;
   B* pb = new B;
   void* pv = dynamic_cast<void*>(pa);
   // pv now points to an object of type A

   pv = dynamic_cast<void*>(pb);
   // pv now points to an object of type B
}
```

Se `type-id` non è void *, viene eseguito un controllo della fase di esecuzione per verificare se l'oggetto a cui `expression` fa riferimento può essere convertito nel tipo a cui punta `type-id` .

Se il tipo di `expression` è una classe di base del tipo di `type-id` , viene eseguito un controllo della fase di esecuzione per verificare se `expression` effettivamente punta a un oggetto completo del tipo di `type-id` . Se è true, il risultato è un puntatore a un oggetto completo del tipo di `type-id` . Ad esempio:

```cpp
// dynamic_cast_3.cpp
// compile with: /c /GR
class B {virtual void f();};
class D : public B {virtual void f();};

void f() {
   B* pb = new D;   // unclear but ok
   B* pb2 = new B;

   D* pd = dynamic_cast<D*>(pb);   // ok: pb actually points to a D
   D* pd2 = dynamic_cast<D*>(pb2);   // pb2 points to a B not a D
}
```

Questo tipo di conversione è denominato "abbattuto" perché sposta un puntatore verso il basso di una gerarchia di classi, da una classe specificata a una classe derivata.

Nei casi di ereditarietà multipla, vengono introdotte le possibilità di ambiguità. Si consideri la gerarchia di classi mostrata nella figura seguente.

Per i tipi CLR, **`dynamic_cast`** il risultato è no-op se la conversione può essere eseguita in modo implicito o un' `isinst` istruzione MSIL che esegue un controllo dinamico e restituisce **`nullptr`** se la conversione non riesce.

Nell'esempio seguente viene utilizzato **`dynamic_cast`** per determinare se una classe è un'istanza di un tipo specifico:

```cpp
// dynamic_cast_clr.cpp
// compile with: /clr
using namespace System;

void PrintObjectType( Object^o ) {
   if( dynamic_cast<String^>(o) )
      Console::WriteLine("Object is a String");
   else if( dynamic_cast<int^>(o) )
      Console::WriteLine("Object is an int");
}

int main() {
   Object^o1 = "hello";
   Object^o2 = 10;

   PrintObjectType(o1);
   PrintObjectType(o2);
}
```

![Gerarchia delle classi con ereditarietà multipla](../cpp/media/vc39011.gif "Gerarchia delle classi con ereditarietà multipla") <br/>
Gerarchia delle classi con ereditarietà multipla

`D`È possibile eseguire il cast sicuro di un puntatore a un oggetto di tipo in `B` o `C` . Tuttavia, se `D` viene eseguito il cast per puntare a un `A` oggetto, quale istanza di `A` risulterebbe? Ciò comporterebbe un errore di cast ambiguo. Per aggirare questo problema, è possibile eseguire due cast non ambigui. Ad esempio:

```cpp
// dynamic_cast_4.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A {virtual void f();};
class D : public B, public C {virtual void f();};

void f() {
   D* pd = new D;
   A* pa = dynamic_cast<A*>(pd);   // C4540, ambiguous cast fails at runtime
   B* pb = dynamic_cast<B*>(pd);   // first cast to B
   A* pa2 = dynamic_cast<A*>(pb);   // ok: unambiguous
}
```

Quando si usano le classi base virtuali, è possibile introdurre altre ambiguità. Si consideri la gerarchia di classi mostrata nella figura seguente.

![Gerarchia delle classi con classi di base virtuali](../cpp/media/vc39012.gif "Gerarchia delle classi con classi di base virtuali") <br/>
Gerarchia delle classi con classi di base virtuali

In questa gerarchia `A` è una classe base virtuale. Data un'istanza della classe `E` e un puntatore all' `A` oggetto SubObject, un oggetto **`dynamic_cast`** a un puntatore a `B` avrà esito negativo a causa di ambiguità. È necessario innanzitutto eseguire il cast all' `E` oggetto completo, quindi eseguire il backup della gerarchia in modo non ambiguo per raggiungere l' `B` oggetto corretto.

Si consideri la gerarchia di classi mostrata nella figura seguente.

![Gerarchia delle classi con classi di base duplicate](../cpp/media/vc39013.gif "Gerarchia delle classi con classi di base duplicate") <br/>
Gerarchia delle classi con classi di base duplicate

Dato un oggetto di tipo `E` e un puntatore all' `D` oggetto SubObject, per spostarsi dall'oggetto SubObject `D` al sottooggetto più a sinistra `A` , è possibile effettuare tre conversioni. È possibile eseguire una **`dynamic_cast`** conversione dal `D` puntatore a un `E` puntatore, quindi una conversione ( **`dynamic_cast`** o una conversione implicita) da `E` a `B` e infine una conversione implicita da `B` a `A` . Ad esempio:

```cpp
// dynamic_cast_5.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A { };
class D {virtual void f();};
class E : public B, public C, public D {virtual void f();};

void f(D* pd) {
   E* pe = dynamic_cast<E*>(pd);
   B* pb = pe;   // upcast, implicit conversion
   A* pa = pb;   // upcast, implicit conversion
}
```

L' **`dynamic_cast`** operatore può essere usato anche per eseguire un "cross cast". Utilizzando la stessa gerarchia di classi, è possibile eseguire il cast di un puntatore, ad esempio, dall' `B` oggetto SubObject al `D` sottooggetto, purché l'oggetto completo sia di tipo `E` .

Considerando i cast incrociati, è possibile eseguire la conversione da un puntatore a `D` a un puntatore al sottooggetto più a sinistra `A` in soli due passaggi. È possibile eseguire un cast incrociato da `D` a `B` , quindi una conversione implicita da `B` a `A` . Ad esempio:

```cpp
// dynamic_cast_6.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A { };
class D {virtual void f();};
class E : public B, public C, public D {virtual void f();};

void f(D* pd) {
   B* pb = dynamic_cast<B*>(pd);   // cross cast
   A* pa = pb;   // upcast, implicit conversion
}
```

Un valore del puntatore null viene convertito nel valore del puntatore null del tipo di destinazione da **`dynamic_cast`** .

Quando si usa `dynamic_cast < type-id > ( expression )` , se `expression` non può essere convertito in modo sicuro nel tipo `type-id` , il controllo della fase di esecuzione causa l'esito negativo del cast. Ad esempio:

```cpp
// dynamic_cast_7.cpp
// compile with: /c /GR
class A {virtual void f();};
class B {virtual void f();};

void f() {
   A* pa = new A;
   B* pb = dynamic_cast<B*>(pa);   // fails at runtime, not safe;
   // B not derived from A
}
```

Il valore di un cast non riuscito al tipo di puntatore è il puntatore null. Un cast non riuscito al tipo di riferimento genera un' [eccezione bad_cast](../cpp/bad-cast-exception.md).   Se `expression` non punta o fa riferimento a un oggetto valido, `__non_rtti_object` viene generata un'eccezione.

Per [typeid](../cpp/typeid-operator.md) una spiegazione dell' `__non_rtti_object` eccezione, vedere typeid.

## <a name="example"></a>Esempio

Nell'esempio seguente viene creato il puntatore della classe di base (struct A) a un oggetto (struct C).  Questo, oltre al fatto che sono presenti funzioni virtuali, Abilita il polimorfismo del runtime.

Nell'esempio viene inoltre chiamata una funzione non virtuale nella gerarchia.

```cpp
// dynamic_cast_8.cpp
// compile with: /GR /EHsc
#include <stdio.h>
#include <iostream>

struct A {
    virtual void test() {
        printf_s("in A\n");
   }
};

struct B : A {
    virtual void test() {
        printf_s("in B\n");
    }

    void test2() {
        printf_s("test2 in B\n");
    }
};

struct C : B {
    virtual void test() {
        printf_s("in C\n");
    }

    void test2() {
        printf_s("test2 in C\n");
    }
};

void Globaltest(A& a) {
    try {
        C &c = dynamic_cast<C&>(a);
        printf_s("in GlobalTest\n");
    }
    catch(std::bad_cast) {
        printf_s("Can't cast to C\n");
    }
}

int main() {
    A *pa = new C;
    A *pa2 = new B;

    pa->test();

    B * pb = dynamic_cast<B *>(pa);
    if (pb)
        pb->test2();

    C * pc = dynamic_cast<C *>(pa2);
    if (pc)
        pc->test2();

    C ConStack;
    Globaltest(ConStack);

   // will fail because B knows nothing about C
    B BonStack;
    Globaltest(BonStack);
}
```

```Output
in C
test2 in B
in GlobalTest
Can't cast to C
```

## <a name="see-also"></a>Vedere anche

[Operatori di cast](../cpp/casting-operators.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)
