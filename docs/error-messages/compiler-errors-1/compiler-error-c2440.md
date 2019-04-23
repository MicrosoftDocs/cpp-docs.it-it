---
title: Errore del compilatore C2440
ms.date: 03/28/2017
f1_keywords:
- C2440
helpviewer_keywords:
- C2440
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
ms.openlocfilehash: c85a8284c91037e981f0d1ea82507b49be8121a3
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59777134"
---
# <a name="compiler-error-c2440"></a>Errore del compilatore C2440

'conversion': Impossibile convertire da 'type1' a 'type2'

Il compilatore non è possibile eseguire il cast da `type1` a `type2`.

## <a name="example"></a>Esempio

L'errore C2440 può verificarsi se si tenta di inizializzare un non constante `char*` (o `wchar_t*`) con un valore letterale stringa nel codice C++, quando l'opzione di conformità del compilatore [/Zc: strictstrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) è impostata. In C, il tipo di valore letterale stringa è numerosi `char`, ma in C++, è una matrice di `const char`. In questo esempio genera C2440:

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

L'errore C2440 può essere causato anche se si prova a convertire un puntatore a un membro in void *. Nell'esempio seguente genera l'errore C2440:

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

L'errore C2440 può essere causato anche se si tenta di eseguire il cast da un tipo che viene dichiarato con prototipo ma non definito. In questo esempio genera C2440:

```cpp
// c2440a.cpp
struct Base { }; // Defined

struct Derived; // Forward declaration, not defined

Base * func(Derived * d) {
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'
}
```

## <a name="example"></a>Esempio

L'errore C2440 sulle righe 15 e 16 dell'esempio successivo vengono qualificati con il `Incompatible calling conventions for UDT return value` messaggio. Oggetto *UDT* è un tipo definito dall'utente, ad esempio una classe, struct o unione. Questi tipi di errori di incompatibilità vengono generati quando la convenzione di chiamata di un tipo definito dall'utente specificato nel tipo restituito di conflitti una dichiarazione con prototipo con la convenzione di chiamata effettiva dell'UDT e quando è coinvolto un puntatore a funzione.

Nell'esempio, prima di tutto esistono dichiarazioni con prototipo per una struttura e per una funzione che restituisce la struttura. il compilatore presuppone che lo struct utilizza la convenzione di chiamata C++. Successivamente è la definizione dello struct, che, per impostazione predefinita, utilizza C convenzione di chiamata. Poiché il compilatore non conosce la convenzione di chiamata dello struct fino al termine della lettura l'intero struct, la convenzione di chiamata dello struct nel tipo restituito di `get_c2` anche si presuppone che sia C++.

La struttura è seguita da un'altra dichiarazione di funzione che restituisce lo struct, ma a questo punto, il compilatore sa che convenzione di denominazione della struttura è C++. Analogamente, il puntatore a funzione, che restituisce lo struct, viene definito dopo la definizione dello struct in modo che il compilatore sa che lo struct utilizza la convenzione di chiamata C++.

Per risolvere l'errore C2440 che si verifica a causa di convenzioni di chiamata incompatibili, dichiarare le funzioni che restituiscono un tipo definito dall'utente dopo la definizione di tipo definito dall'utente.

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

L'errore C2440 può inoltre verificarsi se si assegna zero a un puntatore interno:

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

L'errore C2440 può inoltre verificarsi per un uso non corretto di una conversione definita dall'utente. Ad esempio, quando un operatore di conversione è stato definito come `explicit`, il compilatore non è possibile usarlo in una conversione implicita. Per altre informazioni sulle conversioni definite dall'utente, vedere [conversioni definite dall'utente (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md)). In questo esempio genera C2440:

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

L'errore C2440 può inoltre verificarsi se si prova a creare un'istanza di una matrice di Visual C++ il cui tipo è un <xref:System.Array>.  Per altre informazioni, vedere [matrici](../../extensions/arrays-cpp-component-extensions.md).  Nell'esempio seguente genera l'errore C2440:

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

L'errore C2440 può inoltre verificarsi a causa delle modifiche nelle funzionalità degli attributi.  L'esempio seguente genera l'errore C2440.

```cpp
// c2440f.cpp
// compile with: /LD
[ module(name="PropDemoLib", version=1.0) ];   // C2440
// try the following line instead
// [ module(name="PropDemoLib", version="1.0") ];
```

## <a name="example"></a>Esempio

L'oggetto visivo C++ compilatore non consente più la [operatore const_cast](../../cpp/const-cast-operator.md) downcast quando codice sorgente che utilizza **/clr** programmazione viene compilata.

Per risolvere l'errore C2440, utilizzare l'operatore di cast corretto. Per altre informazioni, vedere [operatori di cast](../../cpp/casting-operators.md).

In questo esempio genera C2440:

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

L'errore C2440 può verificarsi a causa di modifiche della conformità del compilatore in Visual Studio 2015 Update 3. In precedenza, il compilatore erroneamente considerato determinate espressioni distinte dello stesso tipo quando si identificano una corrispondenza fra modelli per un `static_cast` operazione. Ora il compilatore distingue correttamente i tipi e del codice che si basava sulla precedente `static_cast` comportamento viene interrotto. Per risolvere questo problema, modificare l'argomento di modello per corrispondere al tipo di parametro di modello, oppure usare un `reinterpret_cast` o cast di tipo C.

In questo esempio genera C2440:

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

Visual Studio 2017 e versioni successiva genera correttamente errori del compilatore relativi alla creazione di oggetti usando gli elenchi di inizializzatori che non venivano rilevati in Visual Studio 2015 e potrebbe causare arresti anomali del sistema o un comportamento di runtime indefinito. In C + + 17 copia-list-initialization, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se viene scelto tale overload.

Nell'esempio seguente viene compilato in Visual Studio 2015 ma non in Visual Studio 2017.

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

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo potenzialmente può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. Nell'esempio seguente viene compilato in Visual Studio 2015 ma genera un errore del compilatore in Visual Studio 2017 e versioni successive:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare l'operatore int() come const.
