---
title: Errore del compilatore C2668
ms.date: 03/28/2017
f1_keywords:
- C2668
helpviewer_keywords:
- C2668
ms.assetid: 041e9627-1c76-420e-a653-cfc83f933bd3
ms.openlocfilehash: 1920af8873578c63ab768dae4bcdf4d91fe7cd57
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62164813"
---
# <a name="compiler-error-c2668"></a>Errore del compilatore C2668

'function': chiamata ambigua a funzione in overload

Non è stato possibile risolvere la chiamata di funzione in overload specificato. È possibile eseguire il cast esplicito di uno o più parametri effettivi.

È anche possibile ottenere questo errore tramite l'uso di modello. Se, nella stessa classe, si dispone di una funzione membro normale e una funzione membro basate su modelli con la stessa firma, deve precedere quella basata su modelli. Si tratta di una limitazione dell'implementazione corrente di Visual C++.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2668:

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

## <a name="example"></a>Esempio

Un altro modo per correggere l'errore riguarda una [dichiarazione using](../../cpp/using-declaration.md):

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

## <a name="example"></a>Esempio

Questo errore può anche essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: conversione ambigua nel cast della costante 0.

Eseguire una conversione in un cast usando la costante 0 è ambigua poiché int richiede una conversione sia a lungo e a void *. Per risolvere questo errore, eseguire il cast tra 0 e il tipo esatto del parametro della funzione che perché è in uso per in modo che nessuna conversione necessaria per l'implementazione (questo codice è valido nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++).

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

## <a name="example"></a>Esempio

Questo errore può verificarsi perché la libreria CRT ha ora float e double forme di tutte le funzioni matematiche.

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

## <a name="example"></a>Esempio

Questo errore può verificarsi perché il pow (int, int) è stato rimosso da Math. h in CRT.

```cpp
// C2668e.cpp
#include <math.h>
int main() {
   pow(9,9);   // C2668
   pow((double)9,9);   // OK
}
```

## <a name="example"></a>Esempio

Questo codice ha esito positivo in Visual Studio 2015 ma non riesce in Visual Studio 2017 e versioni successive con C2668. In Visual Studio 2015 il compilatore tratta erroneamente copy-list-initialization come l'oggetto copy-initialization normale, considerando solo la conversione dei costruttori per la risoluzione dell'overload.

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