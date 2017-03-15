---
title: "Procedura: definire e utilizzare delegati (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "delegati"
ms.assetid: 1cdf3420-89c1-47c0-b796-aa984020e0f8
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: definire e utilizzare delegati (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come definire e utilizzare delegati in [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  
  
 Sebbene .NET Framework fornisce numerosi delegati, talvolta potrebbe essere necessario definire nuovi delegati.  
  
 Nell'esempio di codice seguente viene definito un delegato che viene denominato `MyCallback`.  Il codice di gestione degli eventi—la funzione che viene chiamata quando il nuovo delegato viene generato—deve avere un tipo restituito di `void` e accettare un riferimento di <xref:System.String>.  
  
 La funzione principale utilizza un metodo statico che viene definito da `SomeClass` per creare un'istanza del delegato `MyCallback`.  Il delegato quindi diventa un altro metodo alternativo di chiamare questa funzione, come dimostrato inviando la stringa "scegliere" all'oggetto delegato.  Le istanze successive e aggiuntive di `MyCallback` vengono collegate tra loro e vengono quindi eseguite da una chiamata all'oggetto delegato.  
  
```  
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
  
 **Output**  
  
  **static SomeClass::Func \- singolo**  
**static SomeClass::Func \- concatenato**  
**static SomeClass::Func \- concatenato**  
**OtherClass::Method \- concatenato,num \= 99**  
**OtherClass::Method \- concatenato,num \= 100** L'esempio di codice seguente mostra come associare un delegato con un membro di una classe di valore.  
  
```  
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
  
 **Output**  
  
  **test**  
**test**   
## Come comporre i delegati  
 È possibile utilizzare l'operatore "`-`" per rimuovere un delegato componente da un delegato composto.  
  
```  
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
  
  **Invoca delegato a:**  
**Hello, A\!**  
**Invoca delegato b:**  
 **Goodbye, B\!**  
**Invoca delegato c:**  
**Hello, C\!**  
 **Goodbye, C\!**  
**Invoca delegato d:**  
 **Goodbye, D\!**   
## Passa un delegato^ ad una funzione nativa per la quale è previsto un puntatore a funzione.  
 Da un componente gestito è stata chiamata una funzione nativa con i parametri del puntatore a funzione dove la funzione nativa può quindi chiamare la funzione membro delegato del componente gestito.  
  
 In questo esempio viene creata la DLL che esporta la funzione nativa:  
  
```  
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
  
 Nell'esempio seguente viene utilizzato il file con estensione .dll e passa un punto di controllo delegato alla funzione nativa che accetta un puntatore a funzione.  
  
```  
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
  
  **Chiamata alla funzione gestita**   
## Per associare i delegati con funzioni non gestite.  
 Per associare un delegato ad una funzione nativa, è necessario eseguire il wrapping della funzione nativa in un tipo gestito e dichiarare la funzione per essere invocata con `PInvoke`.  
  
```  
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
  
  **hello**   
## Per utilizzare i delegati non associati  
 È possibile utilizzare un delegato non associato per passare un'istanza del tipo della funzione che si desidera chiamare quando il delegato viene chiamato.  
  
 I delegati non associati sono particolarmente utili quando si desidera scorrere gli oggetti in una raccolta— utilizzando le parole chiave [for each, in](../dotnet/for-each-in.md)—e chiamando una funzione membro in ogni istanza.  
  
 Di seguito viene illustrato come dichiarare, creare un'istanza e chiamare i delegati associati e non associati:  
  
|Azione|Delegati associati|Delegati non associati|  
|------------|------------------------|----------------------------|  
|Declare|La firma del delegato deve corrispondere a quella della funzione da chiamare tramite il delegato.|Il primo parametro della firma del delegato è il tipo `this` per l'oggetto che si desidera chiamare.<br /><br /> Dopo il primo parametro, la firma del delegato deve corrispondere a quella della funzione da chiamare tramite il delegato.|  
|Creare un'istanza|Quando viene creata un'istanza di un delegato associato, è possibile specificare una funzione di istanza, oppure una funzione globale o statica.<br /><br /> Per specificare una funzione di istanza, il primo parametro è un'istanza del tipo della funzione membro da chiamare e il secondo parametro è l'indirizzo della funzione da chiamare.<br /><br /> Se si desidera chiamare una funzione globale o statica, passare il nome di una funzione globale o il nome della funzione membro statica.|Quando viene creata un'istanza di un delegato non associato, passare semplicemente l'indirizzo della funzione da chiamare.|  
|Call|Quando si chiama un delegato associato, è sufficiente passare i parametri richiesti dalla firma del delegato.|Avviene lo stesso come un delegato limite, ma si memorizza che il primo parametro deve essere un'istanza dell'oggetto che contiene la funzione che si desidera chiamare.|  
  
 In questo esempio viene illustrato come dichiarare, creare un'istanza e chiamare i delegati non associati:  
  
```  
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
  
  **2**  
**3**  
**2**  
**3**  
**2**  
**7**  
**8**  
**7**  
**8**  
**7** Nell'esempio di seguito viene illustrato come utilizzare i delegati non associati e le parole chiave [for each, in](../dotnet/for-each-in.md) per scorrere gli oggetti in una raccolta e per chiamare una funzione membro in ogni istanza.  
  
```  
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
  
 In questo esempio viene creato un delegato non associato alle funzioni di accesso di una proprietà:  
  
```  
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
  
  **11** Il seguente codice di esempio mostra come richiamare un delegato multicast, dove un'istanza è associata e un'istanza non è associata  
  
```  
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
  
  **in f\(R ^ r\)**  
**in f\(\)** L'esempio seguente mostra come creare e chiamare un delegato generico non associato.  
  
```  
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
  
  **12**  
**14**   
## Vedere anche  
 [delegato](../windows/delegate-cpp-component-extensions.md)