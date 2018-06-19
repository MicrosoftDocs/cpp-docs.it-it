---
title: Errore del compilatore C2440 | Documenti Microsoft
ms.custom: ''
ms.date: 03/28/2017
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2440
dev_langs:
- C++
helpviewer_keywords:
- C2440
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d6b03dfc413e3a63e5084dc265d5b7010fbcebd4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33235075"
---
# <a name="compiler-error-c2440"></a>Errore del compilatore C2440
'conversion': Impossibile convertire da 'type1' a 'type2'  
  
Il compilatore non è possibile eseguire il cast da `type1` a `type2`.  
  
## <a name="example"></a>Esempio  
Errore C2440 può verificarsi se si tenta di inizializzare una variabile non-const `char*` (o `wchar_t*`) utilizzando una stringa letterale nel codice C++, quando l'opzione di conformità del compilatore [/Zc: strictstrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) è impostata. In C, il tipo di valore letterale stringa è una matrice di `char`, ma in C++, è una matrice di `const char`. In questo esempio genera l'errore C2440:  
  
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
 Errore C2440 può essere causato anche se si tenta di convertire un puntatore a membro void *. Nell'esempio seguente genera l'errore C2440:  
  
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
 Errore C2440 può essere causato anche se si tenta di eseguire il cast da un tipo che viene dichiarato solo in avanti, ma non definito. In questo esempio genera l'errore C2440:  
  
```cpp  
// c2440a.cpp   
struct Base { }; // Defined  
  
struct Derived; // Forward declaration, not defined  
  
Base * func(Derived * d) {  
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'  
}  
  
```  
  
## <a name="example"></a>Esempio  
 L'errore C2440 sulle righe 15 e 16 dell'esempio successivo vengono qualificati con il `Incompatible calling conventions for UDT return value` messaggio. Oggetto *UDT* è un tipo definito dall'utente, ad esempio una classe, struct o union. Questi tipi di errori di compatibilità vengono generati quando la convenzione di chiamata di un tipo definito dall'utente specificato nel tipo restituito di conflitti una dichiarazione con prototipo con la convenzione di chiamata effettiva dell'UDT e quando è coinvolto un puntatore a funzione.  
  
 Nell'esempio innanzitutto esistono dichiarazioni con prototipo per una struttura e per una funzione che restituisce la struttura. il compilatore presuppone che la struttura utilizza la convenzione di chiamata C++. Successivamente è la definizione della struttura che, per impostazione predefinita, utilizza C convenzione di chiamata. Poiché il compilatore non conosce la convenzione di chiamata della struttura fino al termine della lettura l'intera struttura, la convenzione di chiamata per la struttura nel tipo restituito di `get_c2` anche si presuppone che sia di C++.  
  
 La struttura è seguita da un'altra dichiarazione di funzione che restituisce la struttura, ma a questo punto, il compilatore riconosce che la convenzione di chiamata della struttura è C++. Analogamente, il puntatore a funzione, che restituisce la struttura, è definito dopo la definizione della struttura in modo che il compilatore riconosce che la struttura utilizza la convenzione di chiamata C++.  
  
 Per risolvere l'errore C2440 che si verifica a causa di convenzioni di chiamata incompatibili, dichiarare funzioni che restituiscono un tipo definito dall'utente dopo la definizione di tipo definito dall'utente.  
  
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
 Errore C2440 può verificarsi anche se si assegna da zero a un puntatore interno:  
  
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
 Errore C2440 può verificarsi anche per un utilizzo non corretto di una conversione definita dall'utente. Ad esempio, quando un operatore di conversione è stato definito come `explicit`, il compilatore non è possibile utilizzarlo in una conversione implicita. Per ulteriori informazioni sulle conversioni definite dall'utente, vedere [conversioni definite dall'utente (C + + CLI)](../../dotnet/user-defined-conversions-cpp-cli.md)). In questo esempio genera l'errore C2440:  
  
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
 Errore C2440 può inoltre verificarsi se si tenta di creare un'istanza di una matrice di Visual C++ il cui tipo è un <xref:System.Array>.  Per ulteriori informazioni, vedere [matrici](../../windows/arrays-cpp-component-extensions.md).  Nell'esempio seguente genera l'errore C2440:  
  
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
 Errore C2440 può verificarsi anche a causa delle modifiche nelle funzionalità degli attributi.  L'esempio seguente genera l'errore C2440.  
  
```cpp  
// c2440f.cpp  
// compile with: /LD  
[ module(name="PropDemoLib", version=1.0) ];   // C2440  
// try the following line instead  
// [ module(name="PropDemoLib", version="1.0") ];  
```  
  
## <a name="example"></a>Esempio  
 Il compilatore Visual C++ non consente più di [operatore di const_cast](../../cpp/const-cast-operator.md) verso il basso il cast quando origine il codice che usa **/clr** programmazione viene compilata.  
  
 Per risolvere questo errore C2440, utilizzare l'operatore di cast corretto. Per ulteriori informazioni, vedere [operatori di cast](../../cpp/casting-operators.md).  
  
 In questo esempio genera l'errore C2440:  
  
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
Errore C2440 può verificarsi a causa delle modifiche di conformità per il compilatore in Visual Studio 2015 Update 3. In precedenza, il compilatore erroneamente considerato determinate espressioni distinte dello stesso tipo durante l'identificazione di una corrispondenza del modello per un `static_cast` operazione. Ora il compilatore distingue correttamente i tipi e scrivere il codice che si basava su precedente `static_cast` comportamento viene interrotto. Per risolvere questo problema, modificare l'argomento di modello corrisponde al tipo di parametro di modello, oppure utilizzare un `reinterpret_cast` o cast di tipo C.
  
In questo esempio genera l'errore C2440:  
  
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

2017 e versioni successiva di Visual Studio genera in modo corretto gli errori del compilatore correlati per la creazione di oggetti utilizzando gli elenchi di inizializzatori non sono stati rilevati in Visual Studio 2015 e potrebbero causare un arresto anomalo o non è definito il comportamento di runtime. In C++ 17-elenco-inizializzazione per copia, il compilatore deve prendere in considerazione un costruttore esplicito per la risoluzione dell'overload, ma deve generare un errore se tale overload scelto.

L'esempio seguente viene compilato in Visual Studio 2015, ma non in Visual Studio 2017.

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

In Visual Studio 2015 il compilatore a volte ignora erroneamente il qualificatore CV quando genera un oggetto classe usando una chiamata al costruttore. Questo potenzialmente può causare un arresto anomalo o un comportamento imprevisto in fase di esecuzione. Nell'esempio seguente viene compilato in Visual Studio 2015, ma genera un errore del compilatore in Visual Studio 2017 e versioni successive:

```cpp
struct S 
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

Per correggere l'errore, dichiarare l'operatore int() come const.
