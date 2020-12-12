---
description: 'Altre informazioni su: errore del compilatore C2668'
title: Errore del compilatore C2668
ms.date: 03/28/2017
f1_keywords:
- C2668
helpviewer_keywords:
- C2668
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
ms.openlocfilehash: 87ae1cfa3588b8b524d73d717365206c9b7213ea
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97210686"
---
# <a name="compiler-error-c2668"></a>Errore del compilatore C2668

' Function ': chiamata ambigua a funzione in overload

Impossibile risolvere la chiamata di funzione in overload specificata. È consigliabile eseguire il cast esplicito di uno o più parametri effettivi.

È possibile ottenere questo errore anche tramite l'uso del modello. Se nella stessa classe sono presenti una funzione membro regolare e una funzione membro basata su modelli con la stessa firma, è necessario che il modello sia prima di tutto. Si tratta di una limitazione dell'implementazione corrente di Visual C++.

## <a name="examples"></a>Esempio

L'esempio seguente genera l'C2668:

```cpp
// C2668.cpp
struct A {};
struct B : A {};
struct X {};
struct D : B, X {};

void func( X, X ){}
void func( A, B ){}
D d;
int main() {
   func( d, d );   // C2668 D has an A, B, and X
   func( (X)d, (X)d );   // OK, uses func( X, X )
}
```

Un altro modo per risolvere questo errore è con una [dichiarazione using](../../cpp/using-declaration.md):

```cpp
// C2668b.cpp
// compile with: /EHsc /c
// C2668 expected
#include <iostream>
class TypeA {
public:
   TypeA(int value) {}
};

class TypeB {
   TypeB(int intValue);
   TypeB(double dbValue);
};

class TestCase {
public:
   void AssertEqual(long expected, long actual, std::string
                    conditionExpression = "");
};

class AppTestCase : public TestCase {
public:
   // Uncomment the following line to resolve.
   // using TestCase::AssertEqual;
   void AssertEqual(const TypeA expected, const TypeA actual,
                    std::string conditionExpression = "");
   void AssertEqual(const TypeB expected, const TypeB actual,
                    std::string conditionExpression = "");
};

class MyTestCase : public AppTestCase {
   void TestSomething() {
      int actual = 0;
      AssertEqual(0, actual, "Value");
   }
};
```

Questo errore può essere generato anche in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: conversione ambigua sul cast della costante 0.

La conversione in un cast con la costante 0 è ambigua perché int richiede una conversione sia a Long che a void *. Per correggere l'errore, eseguire il cast di 0 al tipo esatto del parametro della funzione usato per, in modo che non sia necessario eseguire alcuna conversione (questo codice sarà valido nelle versioni Visual Studio .NET 2003 e Visual Studio .NET di Visual C++).

```cpp
// C2668c.cpp
#include "stdio.h"
void f(long) {
   printf_s("in f(long)\n");
}
void f(void*) {
   printf_s("in f(void*)\n");
}
int main() {
   f((int)0);   // C2668

   // OK
   f((long)0);
   f((void*)0);
}
```

Questo errore può verificarsi perché CRT dispone ora di forme float e Double di tutte le funzioni matematiche.

```cpp
// C2668d.cpp
#include <math.h>
int main() {
   int i = 0;
   float f;
   f = cos(i);   // C2668
   f = cos((float)i);   // OK
}
```

Questo errore può verificarsi perché il Pow (int, int) è stato rimosso da Math. h in CRT.

```cpp
// C2668e.cpp
#include <math.h>
int main() {
   pow(9,9);   // C2668
   pow((double)9,9);   // OK
}
```

Questo codice ha esito positivo in Visual Studio 2015 ma ha esito negativo in Visual Studio 2017 e versioni successive con C2668. In Visual Studio 2015 il compilatore tratta erroneamente copy-list-initialization come l'oggetto copy-initialization normale, considerando solo la conversione dei costruttori per la risoluzione dell'overload.

```cpp
struct A {
    explicit A(int) {}
};

struct B {
    B(int) {}
};

void f(const A&) {}
void f(const B&) {}

int main()
{
    f({ 1 }); // error C2668: 'f': ambiguous call to overloaded function
}
```
