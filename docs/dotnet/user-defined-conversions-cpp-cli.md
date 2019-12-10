---
title: Conversioni definite dall'utente (C++/CLI)
ms.date: 11/04/2016
helpviewer_keywords:
- user-defined conversions [C++]
ms.assetid: 8010fd59-2775-4e9a-a6ed-58055032d66f
ms.openlocfilehash: bb7a30382bc586f4d324d47ef6e6757fac83f5ae
ms.sourcegitcommit: 573b36b52b0de7be5cae309d45b68ac7ecf9a6d8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/10/2019
ms.locfileid: "74988384"
---
# <a name="user-defined-conversions-ccli"></a>Conversioni definite dall'utente (C++/CLI)

In questa sezione vengono illustrate le conversioni definite dall'utente (UDC) quando uno dei tipi nella conversione è un riferimento o un'istanza di un tipo di valore o un tipo di riferimento.

## <a name="implicit-and-explicit-conversions"></a>Conversioni implicite ed esplicite

Una conversione definita dall'utente può essere implicita o esplicita.  Un UDC dovrebbe essere implicito se la conversione non comporta la perdita di informazioni. In caso contrario, è necessario definire un UDC esplicito.

Un costruttore di una classe nativa può essere usato per convertire un tipo di riferimento o valore in una classe nativa.

Per ulteriori informazioni sulle conversioni, vedere [conversione boxing](../extensions/boxing-cpp-component-extensions.md) e [conversioni standard](../cpp/standard-conversions.md).

```cpp
// mcpp_User_Defined_Conversions.cpp
// compile with: /clr
#include "stdio.h"
ref class R;
class N;

value class V {
   static operator V(R^) {
      return V();
   }
};

ref class R {
public:
   static operator N(R^);
   static operator V(R^) {
      System::Console::WriteLine("in R::operator N");
      return V();
   }
};

class N {
public:
   N(R^) {
      printf("in N::N\n");
   }
};

R::operator N(R^) {
   System::Console::WriteLine("in R::operator N");
   return N(nullptr);
}

int main() {
   // Direct initialization:
   R ^r2;
   N n2(r2);   // direct initialization, calls constructor
   static_cast<N>(r2);   // also direct initialization

   R ^r3;
   // ambiguous V::operator V(R^) and R::operator V(R^)
   // static_cast<V>(r3);
}
```

**Output**

```Output
in N::N
in N::N
```

## <a name="convert-from-operators"></a>Operatori di tipo converti da

Gli operatori Convert-from creano un oggetto della classe in cui l'operatore viene definito da un oggetto di un'altra classe.

Standard C++ non supporta gli operatori Convert-from; standard C++ utilizza costruttori a questo scopo. Tuttavia, quando si usano i tipi CLR C++ , Visual fornisce supporto sintattico per chiamare gli operatori Convert-from.

Per interoperare correttamente con altri linguaggi conformi a CLS, è possibile eseguire il wrapping di ogni costruttore unario definito dall'utente per una determinata classe con un operatore Convert-from corrispondente.

Operatori Convert-from:

- Deve essere definito come funzioni statiche.

- Può essere implicito (per le conversioni che non perdono precisione, ad esempio short-to-int) o Explicit, quando potrebbe verificarsi una perdita di precisione.

- Deve restituire un oggetto della classe che lo contiene.

- Deve avere il tipo "from" come unico tipo di parametro.

Nell'esempio seguente viene illustrato un operatore "Convert-from" implicito ed esplicito di conversione definita dall'utente (UDC).

```cpp
// clr_udc_convert_from.cpp
// compile with: /clr
value struct MyDouble {
   double d;

   MyDouble(int i) {
      d = static_cast<double>(i);
      System::Console::WriteLine("in constructor");
   }

   // Wrap the constructor with a convert-from operator.
   // implicit UDC because conversion cannot lose precision
   static operator MyDouble (int i) {
      System::Console::WriteLine("in operator");
      // call the constructor
      MyDouble d(i);
      return d;
   }

   // an explicit user-defined conversion operator
   static explicit operator signed short int (MyDouble) {
      return 1;
   }
};

int main() {
   int i = 10;
   MyDouble md = i;
   System::Console::WriteLine(md.d);

   // using explicit user-defined conversion operator requires a cast
   unsigned short int j = static_cast<unsigned short int>(md);
   System::Console::WriteLine(j);
}
```

**Output**

```Output
in operator
in constructor
10
1
```

## <a name="convert-to-operators"></a>Operatori Convert-to

Gli operatori Convert-to convertono un oggetto della classe in cui l'operatore è definito in un altro oggetto. Nell'esempio seguente viene illustrato un operatore di conversione implicito, convertito in e definito dall'utente:

```cpp
// clr_udc_convert_to.cpp
// compile with: /clr
using namespace System;
value struct MyInt {
   Int32 i;

   // convert MyInt to String^
   static operator String^ ( MyInt val ) {
      return val.i.ToString();
   }

   MyInt(int _i) : i(_i) {}
};

int main() {
   MyInt mi(10);
   String ^s = mi;
   Console::WriteLine(s);
}
```

**Output**

```Output
10
```

Un operatore di conversione esplicito definito dall'utente è appropriato per le conversioni che potenzialmente perdono i dati. Per richiamare un operatore Convert-to esplicito, è necessario utilizzare un cast.

```cpp
// clr_udc_convert_to_2.cpp
// compile with: /clr
value struct MyDouble {
   double d;
   // convert MyDouble to Int32
   static explicit operator System::Int32 ( MyDouble val ) {
      return (int)val.d;
   }
};

int main() {
   MyDouble d;
   d.d = 10.3;
   System::Console::WriteLine(d.d);
   int i = 0;
   i = static_cast<int>(d);
   System::Console::WriteLine(i);
}
```

**Output**

```Output
10.3
10
```

## <a name="to-convert-generic-classes"></a>Per convertire classi generiche

È possibile convertire una classe generica in T.

```cpp
// clr_udc_generics.cpp
// compile with: /clr
generic<class T>
public value struct V {
   T mem;
   static operator T(V v) {
      return v.mem;
   }

   void f(T t) {
      mem = t;
   }
};

int main() {
   V<int> v;
   v.f(42);
   int i = v;
   i += v;
   System::Console::WriteLine(i == (42 * 2) );
}
```

**Output**

```Output
True
```

Un costruttore di conversione accetta un tipo e lo usa per creare un oggetto.  Un costruttore di conversione viene chiamato solo con inizializzazione diretta; i cast non richiamano i costruttori di conversione. Per impostazione predefinita, i costruttori di conversione sono espliciti per i tipi CLR.

```cpp
// clr_udc_converting_constructors.cpp
// compile with: /clr
public ref struct R {
   int m;
   char c;

   R(int i) : m(i) { }
   R(char j) : c(j) { }
};

public value struct V {
   R^ ptr;
   int m;

   V(R^ r) : ptr(r) { }
   V(int i) : m(i) { }
};

int main() {
   R^ r = gcnew R(5);

   System::Console::WriteLine( V(5).m);
   System::Console::WriteLine( V(r).ptr);
}
```

**Output**

```Output
5
R
```

In questo esempio di codice, una funzione di conversione statica implicita esegue la stessa operazione di un costruttore di conversione esplicito.

```
public value struct V {
   int m;
   V(int i) : m(i) {}
   static operator V(int i) {
      V v(i*100);
      return v;
   }
};

public ref struct R {
   int m;
   R(int i) : m(i) {}
   static operator R^(int i) {
      return gcnew R(i*100);
   }
};

int main() {
   V v(13);   // explicit
   R^ r = gcnew R(12);   // explicit

   System::Console::WriteLine(v.m);
   System::Console::WriteLine(r->m);

   // explicit ctor can't be called here: not ambiguous
   v = 5;
   r = 20;

   System::Console::WriteLine(v.m);
   System::Console::WriteLine(r->m);
}
```

**Output**

```Output
13
12
500
2000
```

## <a name="see-also"></a>Vedere anche

[Classi e struct](../extensions/classes-and-structs-cpp-component-extensions.md)
