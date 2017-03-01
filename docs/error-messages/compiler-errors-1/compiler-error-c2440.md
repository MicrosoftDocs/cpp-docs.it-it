---
title: Errore del compilatore C2440 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2440
dev_langs:
- C++
helpviewer_keywords:
- C2440
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
caps.latest.revision: 27
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 5f0472f7d318de24c38898388906a264cf56db7b
ms.lasthandoff: 02/24/2017

---
# <a name="compiler-error-c2440"></a>Errore del compilatore C2440
'conversione': Impossibile convertire da 'tipo1' a 'tipo2'  
  
Il compilatore non può eseguire il cast da `type1` a `type2`.  
  
## <a name="example"></a>Esempio  
L'errore C2440 può verificarsi se si tenta di inizializzare una variabile non const `char*` (o `wchar_t*`) utilizzando una stringa letterale nel codice C++, quando l'opzione di conformità del compilatore [/Zc: strictstrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) è impostata. In C, il tipo di valore letterale stringa è una matrice di `char`, ma in C++, è una matrice di `const char`. In questo esempio genera l'errore C2440:  
  
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
 L'errore C2440 può essere causato anche se si tenta di convertire un puntatore a membro void *. Nell'esempio seguente viene generato l'errore C2440:  
  
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
 L'errore C2440 può essere causato anche se si tenta di eseguire il cast da un tipo che viene dichiarato solo in avanti, ma non definito. In questo esempio genera l'errore C2440:  
  
```cpp  
// c2440a.cpp   
struct Base { }; // Defined  
  
struct Derived; // Forward declaration, not defined  
  
Base * func(Derived * d) {  
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'  
}  
  
```  
  
## <a name="example"></a>Esempio  
 Gli errori C2440 sulle righe 15 e 16 dell'esempio successivo vengono qualificati con il `Incompatible calling conventions for UDT return value` messaggio. Oggetto *UDT* è un tipo definito dall'utente, ad esempio una classe, struct o union. Questi tipi di errori di compatibilità vengono generati quando la convenzione di chiamata di un tipo definito dall'utente specificato nel tipo restituito di un conflitto di dichiarazione con prototipo con la convenzione di chiamata effettiva dell'UDT e quando è coinvolto un puntatore a funzione.  
  
 Nell'esempio innanzitutto esistono dichiarazioni con prototipo per una struttura e per una funzione che restituisce la struttura. il compilatore presuppone che la struttura utilizza la convenzione di chiamata C++. Successivamente è la definizione della struttura che, per impostazione predefinita, utilizza il C convenzione di chiamata. Poiché il compilatore non conosce la convenzione di chiamata della struttura fino al termine della lettura l'intera struttura, la convenzione di chiamata per la struttura nel tipo restituito di `get_c2` inoltre si presume che sia C++.  
  
 La struttura è seguita da un'altra dichiarazione di funzione che restituisce la struttura, ma a questo punto, il compilatore sa che convenzione di chiamata della struttura è C++. Analogamente, il puntatore a funzione, che restituisce la struttura, viene definito dopo la definizione della struttura in modo che il compilatore sa che la struttura utilizza la convenzione di chiamata C++.  
  
 Per risolvere l'errore C2440 che si verifica a causa delle convenzioni di chiamata incompatibili, dichiarare le funzioni che restituiscono un tipo definito dall'utente dopo la definizione di tipo definito dall'utente.  
  
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
 C2440 può inoltre verificarsi se si assegna zero a un puntatore interno:  
  
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
 C2440 può inoltre verificarsi per un utilizzo non corretto di una conversione definita dall'utente. Ad esempio, quando un operatore di conversione è stato definito come `explicit`, il compilatore non può utilizzare in una conversione implicita. Per ulteriori informazioni sulle conversioni definite dall'utente, vedere [conversioni definite dall'utente (C + c++ /CLI)](../../dotnet/user-defined-conversions-cpp-cli.md)). In questo esempio genera l'errore C2440:  
  
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
 Errore C2440 può inoltre verificarsi se si tenta di creare un'istanza di una matrice di Visual C++ il cui tipo è un <xref:System.Array>.</xref:System.Array>  Per ulteriori informazioni, vedere [matrici](../../windows/arrays-cpp-component-extensions.md).  Nell'esempio seguente viene generato l'errore C2440:  
  
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
 C2440 può inoltre verificarsi a causa delle modifiche nelle funzionalità degli attributi.  Nell'esempio seguente viene generato l'errore C2440.  
  
```cpp  
// c2440f.cpp  
// compile with: /LD  
[ module(name="PropDemoLib", version=1.0) ];   // C2440  
// try the following line instead  
// [ module(name="PropDemoLib", version="1.0") ];  
```  
  
## <a name="example"></a>Esempio  
 Il compilatore Visual C++ non consente più il [operatore const_cast](../../cpp/const-cast-operator.md) verso il basso il cast quando il codice che utilizza sorgente **/clr** programmazione viene compilata.  
  
 Per risolvere questo errore C2440, utilizzare l'operatore cast corretto. Per ulteriori informazioni, vedere [operatori di cast](../../cpp/casting-operators.md).  
  
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
Errore C2440 può verificarsi a causa delle modifiche di conformità al compilatore in Visual Studio 2015 Update 3. In precedenza, il compilatore erroneamente considerato determinate espressioni distinte dello stesso tipo durante l'identificazione di una corrispondenza di modello per un `static_cast` operazione. Ora il compilatore distingue correttamente i tipi e codice che si basava su precedente `static_cast` comportamento viene interrotto. Per risolvere questo problema, modificare l'argomento di modello per corrispondere al tipo di parametro di modello o utilizzare un `reinterpret_cast` o cast di tipo C.
  
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

