---
title: "Errore del compilatore C2440 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2440"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2440"
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 27
---
# Errore del compilatore C2440
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'conversione': impossibile convertire da 'type1' a 'type2'  
  
 Non è possibile eseguire il cast da '`type1`' a '`type2`'.  
  
## Esempio  
 L'errore C2440 può verificarsi se si tenta di inizializzare `char*` non const \(o `wchar_t*`\) utilizzando un valore letterale stringa nel codice C\+\+, quando è impostata l'opzione [\/Zc: strictStrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) di compatibilità del compilatore.  In C, il tipo di valore letterale stringa è una matrice `char`, ma in C\+\+, è una matrice di `const` `char`.  Questo esempio genera C2440:  
  
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
  
## Esempio  
 L'errore C2440 può essere generato anche se si tenta di convertire un puntatore a un membro in void\*.  Il seguente codice di esempio genera l'errore C2440:  
  
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
  
## Esempio  
 L'errore C2440 può inoltre verificarsi se si tenta di eseguire il cast da un tipo che viene dichiarato con prototipo, ma non definito.  Questo esempio genera C2440:  
  
```cpp  
// c2440a.cpp   
struct Base { }; // Defined  
  
struct Derived; // Forward declaration, not defined  
  
Base * func(Derived * d) {  
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'  
}  
  
```  
  
## Esempio  
 Gli errore C2440 sulle righe 15 e 16 dell'esempio successivo vengono completati con il messaggio `Incompatible calling conventions for UDT return value`. Un UDT è un tipo definito dall'utente, come una classe, una struttura o un'unione. Questi tipi di errori di incompatibilità vengono generati quando la convenzione di chiamata di un tipo definito dall'utente specificato nel tipo restituito di una dichiarazione con prototipo è in conflitto con la convenzione di chiamata effettiva del tipo definito dall'utente e quando è coinvolto un puntatore a una funzione.  
  
 L'esempio presenta dichiarazioni con prototipo della funzione per uno struct e una funzione che restituisce lo struct. Si suppone che lo struct utilizzi la convenzione di chiamata C\+\+.  Segue la definizione dello struct che, per impostazione predefinita, utilizza la convenzione di chiamata C.  Poiché la convenzione di chiamata dello struct non è nota al compilatore fino al termine della lettura di tutto lo struct, si suppone che anche la convenzione di chiamata nel tipo restituito di `get_c2` sia C\+\+.  
  
 La struttura è seguita da un'altra dichiarazione di funzione che restituisce la struttura, ma a questo punto è noto che la convenzione di chiamata della struttura è C\+\+.  Analogamente, il puntatore alla funzione, che restituisce lo struct, viene definito dopo la definizione dello struct, in modo da segnalare al compilatore che lo struct utilizza la convenzione di chiamata C\+\+.  
  
 Per correggere l'errore C2440 causato da convenzioni di chiamata incompatibili, dichiarare le funzioni che restituiscono un UDT \(User Defined Type, tipo definito dall'utente\) dopo la definizione di tale tipo.  
  
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
  
## Esempio  
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
  
## Esempio  
 L'errore C2440 può inoltre verificarsi a causa di un utilizzo non corretto di una conversione definita dall'utente.  Per ulteriori informazioni sulle conversioni definite dall'utente, vedere [Conversioni definite dall'utente](../../dotnet/user-defined-conversions-cpp-cli.md)\).  Questo esempio genera C2440:  
  
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
  
## Esempio  
 L'errore C2440 può inoltre verificarsi se si tenta di creare un'istanza di una matrice Visual C\+\+ il cui tipo è un oggetto <xref:System.Array>.  Per ulteriori informazioni, vedere [Arrays](../../windows/arrays-cpp-component-extensions.md).  Il seguente codice di esempio genera l'errore C2440:  
  
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
  
## Esempio  
 L'errore C2440 può inoltre verificarsi a causa di modifiche nelle funzionalità degli attributi.  Nell'esempio seguente viene generato l'errore C2440:  
  
```cpp  
// c2440f.cpp  
// compile with: /LD  
[ module(name="PropDemoLib", version=1.0) ];   // C2440  
// try the following line instead  
// [ module(name="PropDemoLib", version="1.0") ];  
```  
  
## Esempio  
 Il compilatore di Visual C\+\+ non consente più il downcast di [Operatore const\_cast](../../cpp/const-cast-operator.md) durante la compilazione di codice sorgente che utilizza la programmazione **\/clr**.  
  
 Per risolvere l'errore C2440, utilizzare l'operatore di cast corretto.  Per ulteriori informazioni, vedere [Operatori di cast](../../cpp/casting-operators.md).  
  
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
  
## Esempio  
 L'errore C2440 può inoltre essere generato utilizzando **\/clr:oldSyntax**:  
  
```cpp  
// c2440h.cpp  
// compile with: /clr:oldSyntax  
__gc class Base {};  
__gc class Derived : public Base {};  
int main() {  
   Derived *d = new Derived;  
   Base *b = d;  
   d = const_cast<Derived*>(b);   // C2440  
   d = dynamic_cast<Derived*>(b);   // OK  
}  
```