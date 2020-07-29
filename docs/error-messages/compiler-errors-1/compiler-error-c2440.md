---
title: Errore del compilatore C2440
ms.date: 03/28/2017
f1_keywords:
- C2440
helpviewer_keywords:
- C2440
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
ms.openlocfilehash: 75b2ba62182a33137b433c836b4acf7c9e1fc231
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87207979"
---
# <a name="compiler-error-c2440"></a>Errore del compilatore C2440

' Conversion ': Impossibile convertire da' tipo1' a' tipo2'

Il compilatore non può eseguire il cast da `type1` a `type2` .

## <a name="example"></a>Esempio

C2440 può essere generato se si tenta di inizializzare un oggetto non const **`char*`** (o `wchar_t*` ) utilizzando un valore letterale stringa nel codice C++, quando viene impostata l'opzione di conformità del compilatore [/Zc: strictStrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) . In C, il tipo di valore letterale stringa è una matrice di **`char`** , ma in C++ è una matrice di `const char` . Questo esempio genera C2440:

```cpp
// C2440s.cpp
// Build: cl /Zc:strictStrings /W3 C2440s.cpp
// When built, the compiler emits:
// error C2440: 'initializing' : cannot convert from 'const char [5]'
// to 'char *'
//        Conversion from string literal loses const qualifier (see
// /Zc:strictStrings)

int main() {
   char* s1 = "test"; // C2440
   const char* s2 = "tests"; // OK
}
```

## <a name="example"></a>Esempio

C2440 può essere causato anche se si tenta di convertire un puntatore a un membro in void *. L'esempio seguente genera l'C2440:

```cpp
// C2440.cpp
class B {
public:
   void  f(){;}

   typedef void (B::*pf)();

   void f2(pf pf) {
       (this->*pf)();
       void* pp = (void*)pf;   // C2440
   }

   void f3() {
      f2(f);
   }
};
```

## <a name="example"></a>Esempio

C2440 può essere causato anche se si tenta di eseguire il cast da un tipo che viene dichiarato solo in modo dichiarativo ma non definito. Questo esempio genera C2440:

```cpp
// c2440a.cpp
struct Base { }; // Defined

struct Derived; // Forward declaration, not defined

Base * func(Derived * d) {
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'
}
```

## <a name="example"></a>Esempio

Gli errori C2440 sulle righe 15 e 16 dell'esempio successivo vengono qualificati con il `Incompatible calling conventions for UDT return value` messaggio. Un *UDT* è un tipo definito dall'utente, ad esempio una classe, uno struct o un'Unione. Questi tipi di errori di incompatibilità vengono causati quando la convenzione di chiamata di un tipo definito dall'utente specificato nel tipo restituito di una dichiarazione in diretta è in conflitto con la convenzione di chiamata effettiva del tipo definito dall'utente e quando viene richiesto un puntatore a funzione.

Nell'esempio, per prima cosa ci sono dichiarazioni in diretta per uno struct e per una funzione che restituisce lo struct. il compilatore presuppone che lo struct usi la convenzione di chiamata C++. Successivamente è la definizione struct, che, per impostazione predefinita, usa la convenzione di chiamata C. Poiché il compilatore non conosce la convenzione di chiamata dello struct fino a quando non viene completata la lettura dell'intero struct, si presuppone che la convenzione di chiamata per lo struct nel tipo restituito di `get_c2` sia C++.

Lo struct è seguito da un'altra dichiarazione di funzione che restituisce lo struct, ma a questo punto il compilatore sa che la convenzione di chiamata dello struct è C++. Analogamente, il puntatore a funzione, che restituisce lo struct, viene definito dopo la definizione dello struct, in modo che il compilatore sappia che lo struct usa la convenzione di chiamata C++.

Per risolvere C2440 che si verificano a causa di convenzioni di chiamata incompatibili, dichiarare le funzioni che restituiscono un tipo definito dall'utente dopo la definizione dell'UDT

```cpp
// C2440b.cpp
struct MyStruct;

MyStruct get_c1();

struct MyStruct {
   int i;
   static MyStruct get_C2();
};

MyStruct get_C3();

typedef MyStruct (*FC)();

FC fc1 = &get_c1;   // C2440, line 15
FC fc2 = &MyStruct::get_C2;   // C2440, line 16
FC fc3 = &get_C3;

class CMyClass {
public:
   explicit CMyClass( int iBar)
      throw()   {
   }

   static CMyClass get_c2();
};

int main() {
   CMyClass myclass = 2;   // C2440
   // try one of the following
   // CMyClass myclass{2};
   // CMyClass myclass(2);

   int *i;
   float j;
   j = (float)i;   // C2440, cannot cast from pointer to int to float
}
```

## <a name="example"></a>Esempio

C2440 può anche verificarsi se si assegna zero a un puntatore interno:

```cpp
// C2440c.cpp
// compile with: /clr
int main() {
   array<int>^ arr = gcnew array<int>(100);
   interior_ptr<int> ipi = &arr[0];
   ipi = 0;   // C2440
   ipi = nullptr;   // OK
}
```

## <a name="example"></a>Esempio

C2440 può anche verificarsi per un uso errato di una conversione definita dall'utente. Ad esempio, quando un operatore di conversione è stato definito come **`explicit`** , il compilatore non può utilizzarlo in una conversione implicita. Per ulteriori informazioni sulle conversioni definite dall'utente, vedere [conversioni definite dall'utente (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md). Questo esempio genera C2440:

```cpp
// C2440d.cpp
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
   int i;
   i = d;   // C2440
   // Uncomment the following line to resolve.
   // i = static_cast<int>(d);
}
```

## <a name="example"></a>Esempio

C2440 può verificarsi anche se si tenta di creare un'istanza di una matrice di Visual C++ il cui tipo è <xref:System.Array> .  Per altre informazioni, vedere [Matrici](../../extensions/arrays-cpp-component-extensions.md).  L'esempio seguente genera l'C2440:

```cpp
// C2440e.cpp
// compile with: /clr
using namespace System;
int main() {
   array<int>^ intArray = Array::CreateInstance(__typeof(int), 1);   // C2440
   // try the following line instead
   // array<int>^ intArray = safe_cast<array<int> ^>(Array::CreateInstance(__typeof(int), 1));
}
```

## <a name="example"></a>Esempio

C2440 può anche verificarsi a causa delle modifiche apportate alla funzionalità degli attributi.  L'esempio seguente genera l'C2440.

```cpp
// c2440f.cpp
// compile with: /LD
[ module(name="PropDemoLib", version=1.0) ];   // C2440
// try the following line instead
// [ module(name="PropDemoLib", version="1.0") ];
```

## <a name="example"></a>Esempio

Il compilatore Microsoft C++ non consente più all' [operatore const_cast](../../cpp/const-cast-operator.md) di eseguire il cast quando viene compilato il codice sorgente che utilizza la programmazione **/CLR** .

Per risolvere questo C2440, usare l'operatore di cast corretto. Per altre informazioni, vedere [operatori di cast](../../cpp/casting-operators.md).

Questo esempio genera C2440:

```cpp
// c2440g.cpp
// compile with: /clr
ref class Base {};
ref class Derived : public Base {};
int main() {
   Derived ^d = gcnew Derived;
   Base ^b = d;
   d = const_cast<Derived^>(b);   // C2440
   d = dynamic_cast<Derived^>(b);   // OK
}
```

## <a name="example"></a>Esempio

C2440 può verificarsi a causa di modifiche della conformità al compilatore in Visual Studio 2015 Update 3. In precedenza, il compilatore considerava erroneamente determinate espressioni distinte come lo stesso tipo durante l'identificazione di una corrispondenza di modello per un' **`static_cast`** operazione. Ora il compilatore distingue correttamente i tipi e il codice basato sul **`static_cast`** comportamento precedente è danneggiato. Per risolvere questo problema, modificare l'argomento del modello in modo che corrisponda al tipo di parametro del modello oppure usare un cast di tipo **`reinterpret_cast`** C o.

Questo esempio genera C2440:

```cpp
// c2440h.cpp

template<int *a>
struct S1 {};

int g;
struct S2 : S1<&g> {
};

int main()
{
    S2 s;
    static_cast<S1<&*&g>>(s); // C2440 in VS 2015 Update 3
    // This compiles correctly:
    // static_cast<S1<&g>>(s);
}

This error can appear in ATL code that uses the SINK_ENTRY_INFO macro defined in <atlcom.h>.
```

## <a name="example"></a>Esempio

### <a name="copy-list-initialization"></a>Copy-list-initialization

Visual Studio 2017 e versioni successive generano correttamente errori del compilatore correlati alla creazione di oggetti usando elenchi di inizializzatori non rilevati in Visual Studio 2015 e potrebbero causare arresti anomali o un comportamento di runtime non definito. In C++ 17 Copy-List-inizializzation, il compilatore deve considerare un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se tale overload viene effettivamente scelto.

L'esempio seguente viene compilato in Visual Studio 2015 ma non in Visual Studio 2017.

```cpp
// C2440j.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    const A& a2 = { 1 }; // error C2440: 'initializing': cannot
                         // convert from 'int' to 'const A &'
}
```

Per correggere l'errore, usare l'inizializzazione diretta:

```cpp
// C2440k.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    const A& a2{ 1 };
}
```

## <a name="example"></a>Esempio

### <a name="cv-qualifiers-in-class-construction"></a>Qualificatori CV nella costruzione di classi

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo potenzialmente può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. Nell'esempio seguente viene compilato in Visual Studio 2015 ma viene generato un errore del compilatore in Visual Studio 2017 e versioni successive:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare l'operatore int() come const.
