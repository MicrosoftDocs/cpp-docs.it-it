---
description: 'Altre informazioni su: procedura: definire e usare delegati (C++/CLI)'
title: 'Procedura: definire e utilizzare delegati (C++/CLI)'
ms.date: 11/04/2016
helpviewer_keywords:
- delegates
ms.assetid: 1cdf3420-89c1-47c0-b796-aa984020e0f8
ms.openlocfilehash: 4229af2015db3a9a77722e9e4cc24b80aa05a49b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175755"
---
# <a name="how-to-define-and-use-delegates-ccli"></a>Procedura: definire e utilizzare delegati (C++/CLI)

Questo articolo illustra come definire e utilizzare i delegati in C++/CLI.

Sebbene il .NET Framework fornisca diversi delegati, a volte potrebbe essere necessario definire nuovi delegati.

Nell'esempio di codice seguente viene definito un delegato denominato `MyCallback` . Il codice di gestione degli eventi, ovvero la funzione che viene chiamata quando viene attivato il nuovo delegato, deve avere un tipo restituito **`void`** e ottenere un <xref:System.String> riferimento.

La funzione Main usa un metodo statico definito da `SomeClass` per creare un'istanza del `MyCallback` delegato. Il delegato diventa quindi un metodo alternativo per chiamare questa funzione, come dimostrato inviando la stringa "single" all'oggetto delegato. Successivamente, le istanze aggiuntive di `MyCallback` vengono collegate tra loro e quindi eseguite da una chiamata all'oggetto delegato.

```cpp
// use_delegate.cpp
// compile with: /clr
using namespace System;

ref class SomeClass
{
public:
   static void Func(String^ str)
   {
      Console::WriteLine("static SomeClass::Func - {0}", str);
   }
};

ref class OtherClass
{
public:
   OtherClass( Int32 n )
   {
      num = n;
   }

   void Method(String^ str)
   {
      Console::WriteLine("OtherClass::Method - {0}, num = {1}",
         str, num);
   }

   Int32 num;
};

delegate void MyCallback(String^ str);

int main( )
{
   MyCallback^ callback = gcnew MyCallback(SomeClass::Func);
   callback("single");

   callback += gcnew MyCallback(SomeClass::Func);

   OtherClass^ f = gcnew OtherClass(99);
   callback += gcnew MyCallback(f, &OtherClass::Method);

   f = gcnew OtherClass(100);
   callback += gcnew MyCallback(f, &OtherClass::Method);

   callback("chained");

   return 0;
}
```

```Output
static SomeClass::Func - single
static SomeClass::Func - chained
static SomeClass::Func - chained
OtherClass::Method - chained, num = 99
OtherClass::Method - chained, num = 100
```

Nell'esempio di codice successivo viene illustrato come associare un delegato a un membro di una classe di valori.

```cpp
// mcppv2_del_mem_value_class.cpp
// compile with: /clr
using namespace System;
public delegate void MyDel();

value class A {
public:
   void func1() {
      Console::WriteLine("test");
   }
};

int main() {
   A a;
   A^ ah = a;
   MyDel^ f = gcnew MyDel(a, &A::func1);   // implicit box of a
   f();
   MyDel^ f2 = gcnew MyDel(ah, &A::func1);
   f2();
}
```

```Output
test
test
```

## <a name="how-to-compose-delegates"></a>Come comporre i delegati

È possibile utilizzare l' `-` operatore "" per rimuovere un delegato del componente da un delegato composto.

```cpp
// mcppv2_compose_delegates.cpp
// compile with: /clr
using namespace System;

delegate void MyDelegate(String ^ s);

ref class MyClass {
public:
   static void Hello(String ^ s) {
      Console::WriteLine("Hello, {0}!", s);
   }

   static void Goodbye(String ^ s) {
      Console::WriteLine("  Goodbye, {0}!", s);
   }
};

int main() {

   MyDelegate ^ a = gcnew MyDelegate(MyClass::Hello);
   MyDelegate ^ b = gcnew MyDelegate(MyClass::Goodbye);
   MyDelegate ^ c = a + b;
   MyDelegate ^ d = c - a;

   Console::WriteLine("Invoking delegate a:");
   a("A");
   Console::WriteLine("Invoking delegate b:");
   b("B");
   Console::WriteLine("Invoking delegate c:");
   c("C");
   Console::WriteLine("Invoking delegate d:");
   d("D");
}
```

**Output**

```Output
Invoking delegate a:
Hello, A!
Invoking delegate b:
  Goodbye, B!
Invoking delegate c:
Hello, C!
  Goodbye, C!
Invoking delegate d:
  Goodbye, D!
```

## <a name="pass-a-delegate-to-a-native-function-that-expects-a-function-pointer"></a>Passare un delegato ^ a una funzione nativa che prevede un puntatore a funzione

Da un componente gestito è possibile chiamare una funzione nativa con i parametri del puntatore a funzione in cui la funzione nativa può chiamare la funzione membro del delegato del componente gestito.

Questo esempio crea il file con estensione dll che esporta la funzione nativa:

```cpp
// delegate_to_native_function.cpp
// compile with: /LD
#include < windows.h >
extern "C" {
   __declspec(dllexport)
   void nativeFunction(void (CALLBACK *mgdFunc)(const char* str)) {
      mgdFunc("Call to Managed Function");
   }
}
```

Nell'esempio seguente viene utilizzato il file con estensione dll e viene passato un handle del delegato alla funzione nativa che prevede un puntatore a funzione.

```cpp
// delegate_to_native_function_2.cpp
// compile with: /clr
using namespace System;
using namespace System::Runtime::InteropServices;

delegate void Del(String ^s);
public ref class A {
public:
   void delMember(String ^s) {
      Console::WriteLine(s);
   }
};

[DllImportAttribute("delegate_to_native_function", CharSet=CharSet::Ansi)]
extern "C" void nativeFunction(Del ^d);

int main() {
   A ^a = gcnew A;
   Del ^d = gcnew Del(a, &A::delMember);
   nativeFunction(d);   // Call to native function
}
```

**Output**

```Output
Call to Managed Function
```

## <a name="to-associate-delegates-with-unmanaged-functions"></a>Per associare delegati a funzioni non gestite

Per associare un delegato a una funzione nativa, è necessario eseguire il wrapping della funzione nativa in un tipo gestito e dichiarare la funzione da richiamare tramite `PInvoke` .

```cpp
// mcppv2_del_to_umnangd_func.cpp
// compile with: /clr
#pragma unmanaged
extern "C" void printf(const char*, ...);
class A {
public:
   static void func(char* s) {
      printf(s);
   }
};

#pragma managed
public delegate void func(char*);

ref class B {
   A* ap;

public:
   B(A* ap):ap(ap) {}
   void func(char* s) {
      ap->func(s);
   }
};

int main() {
   A* a = new A;
   B^ b = gcnew B(a);
   func^ f = gcnew func(b, &B::func);
   f("hello");
   delete a;
}
```

**Output**

```Output
hello
```

## <a name="to-use-unbound-delegates"></a>Per utilizzare delegati non associati

È possibile utilizzare un delegato non associato per passare un'istanza del tipo di cui si desidera chiamare la funzione quando viene chiamato il delegato.

I delegati non associati sono particolarmente utili se si desidera scorrere gli oggetti in una raccolta, usando [for each, in](../dotnet/for-each-in.md) keywords, e chiamare una funzione membro in ogni istanza.

Di seguito viene illustrato come dichiarare, creare un'istanza e chiamare delegati associati e non associati:

|Azione|Delegati associati|Delegati non associati|
|------------|---------------------|-----------------------|
|Declare|La firma del delegato deve corrispondere alla firma della funzione che si desidera chiamare tramite il delegato.|Il primo parametro della firma del delegato è il tipo di **`this`** per l'oggetto che si desidera chiamare.<br /><br /> Dopo il primo parametro, la firma del delegato deve corrispondere alla firma della funzione che si desidera chiamare tramite il delegato.|
|Creare|Quando si crea un'istanza di un delegato associato, è possibile specificare una funzione di istanza o una funzione membro globale o statica.<br /><br /> Per specificare una funzione di istanza, il primo parametro è un'istanza del tipo la cui funzione membro si desidera chiamare e il secondo parametro è l'indirizzo della funzione che si desidera chiamare.<br /><br /> Se si vuole chiamare una funzione membro globale o statica, è sufficiente passare il nome di una funzione globale o il nome della funzione membro statica.|Quando si crea un'istanza di un delegato non associato, è sufficiente passare l'indirizzo della funzione che si vuole chiamare.|
|Call|Quando si chiama un delegato associato, è sufficiente passare i parametri necessari per la firma del delegato.|Uguale a un delegato associato, ma tenere presente che il primo parametro deve essere un'istanza dell'oggetto che contiene la funzione che si vuole chiamare.|

Questo esempio illustra come dichiarare, creare un'istanza e chiamare delegati non associati:

```cpp
// unbound_delegates.cpp
// compile with: /clr
ref struct A {
   A(){}
   A(int i) : m_i(i) {}
   void Print(int i) { System::Console::WriteLine(m_i + i);}

private:
   int m_i;
};

value struct V {
   void Print() { System::Console::WriteLine(m_i);}
   int m_i;
};

delegate void Delegate1(A^, int i);
delegate void Delegate2(A%, int i);

delegate void Delegate3(interior_ptr<V>);
delegate void Delegate4(V%);

delegate void Delegate5(int i);
delegate void Delegate6();

int main() {
   A^ a1 = gcnew A(1);
   A% a2 = *gcnew A(2);

   Delegate1 ^ Unbound_Delegate1 = gcnew Delegate1(&A::Print);
   // delegate takes a handle
   Unbound_Delegate1(a1, 1);
   Unbound_Delegate1(%a2, 1);

   Delegate2 ^ Unbound_Delegate2 = gcnew Delegate2(&A::Print);
   // delegate takes a tracking reference (must deference the handle)
   Unbound_Delegate2(*a1, 1);
   Unbound_Delegate2(a2, 1);

   // instantiate a bound delegate to an instance member function
   Delegate5 ^ Bound_Del = gcnew Delegate5(a1, &A::Print);
   Bound_Del(1);

   // instantiate value types
   V v1 = {7};
   V v2 = {8};

   Delegate3 ^ Unbound_Delegate3 = gcnew Delegate3(&V::Print);
   Unbound_Delegate3(&v1);
   Unbound_Delegate3(&v2);

   Delegate4 ^ Unbound_Delegate4 = gcnew Delegate4(&V::Print);
   Unbound_Delegate4(v1);
   Unbound_Delegate4(v2);

   Delegate6 ^ Bound_Delegate3 = gcnew Delegate6(v1, &V::Print);
   Bound_Delegate3();
}
```

**Output**

```Output
2
3
2
3
2
7
8
7
8
7
```

Nell'esempio seguente viene illustrato come utilizzare delegati non associati e [per each, in](../dotnet/for-each-in.md) parole chiave per scorrere gli oggetti in una raccolta e chiamare una funzione membro in ogni istanza.

```cpp
// unbound_delegates_2.cpp
// compile with: /clr
using namespace System;

ref class RefClass {
   String^ _Str;

public:
   RefClass( String^ str ) : _Str( str ) {}
   void Print() { Console::Write( _Str ); }
};

delegate void PrintDelegate( RefClass^ );

int main() {
   PrintDelegate^ d = gcnew PrintDelegate( &RefClass::Print );

   array< RefClass^ >^ a = gcnew array<RefClass^>( 10 );

   for ( int i = 0; i < a->Length; ++i )
      a[i] = gcnew RefClass( i.ToString() );

   for each ( RefClass^ R in a )
      d( R );

   Console::WriteLine();
}
```

Questo esempio crea un delegato non associato alle funzioni di accesso di una proprietà:

```cpp
// unbound_delegates_3.cpp
// compile with: /clr
ref struct B {
   property int P1 {
      int get() { return m_i; }
      void set(int i) { m_i = i; }
   }

private:
   int m_i;
};

delegate void DelBSet(B^, int);
delegate int DelBGet(B^);

int main() {
   B^ b = gcnew B;

   DelBSet^ delBSet = gcnew DelBSet(&B::P1::set);
   delBSet(b, 11);

   DelBGet^ delBGet = gcnew DelBGet(&B::P1::get);
   System::Console::WriteLine(delBGet(b));
}
```

**Output**

```Output
11
```

Nell'esempio seguente viene illustrato come richiamare un delegato multicast, in cui un'istanza è associata e un'istanza non è associata.

```cpp
// unbound_delegates_4.cpp
// compile with: /clr
ref class R {
public:
   R(int i) : m_i(i) {}

   void f(R ^ r) {
      System::Console::WriteLine("in f(R ^ r)");
   }

   void f() {
      System::Console::WriteLine("in f()");
   }

private:
   int m_i;
};

delegate void Del(R ^);

int main() {
   R ^r1 = gcnew R(11);
   R ^r2 = gcnew R(12);

   Del^ d = gcnew Del(r1, &R::f);
   d += gcnew Del(&R::f);
   d(r2);
};
```

**Output**

```Output
in f(R ^ r)
in f()
```

Nell'esempio seguente viene illustrato come creare e chiamare un delegato generico non associato.

```cpp
// unbound_delegates_5.cpp
// compile with: /clr
ref struct R {
   R(int i) : m_i(i) {}

   int f(R ^) { return 999; }
   int f() { return m_i + 5; }

   int m_i;
};

value struct V {
   int f(V%) { return 999; }
   int f() { return m_i + 5; }

   int m_i;
};

generic <typename T>
delegate int Del(T t);

generic <typename T>
delegate int DelV(T% t);

int main() {
   R^ hr = gcnew R(7);
   System::Console::WriteLine((gcnew Del<R^>(&R::f))(hr));

   V v;
   v.m_i = 9;
   System::Console::WriteLine((gcnew DelV<V >(&V::f))(v) );
}
```

**Output**

```Output
12
14
```

## <a name="see-also"></a>Vedi anche

[delegato (Estensioni del componente C++)](../extensions/delegate-cpp-component-extensions.md)
