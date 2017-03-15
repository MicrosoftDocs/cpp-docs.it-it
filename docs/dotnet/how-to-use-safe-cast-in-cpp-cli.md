---
title: "Procedura: utilizzare safe_cast in C++/CLI | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "safe_cast (parola chiave) [C++], upcast"
ms.assetid: 0fbc87d8-ecdf-4cd5-81f4-0d8cc18e2aff
caps.latest.revision: 18
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura: utilizzare safe_cast in C++/CLI
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato l'utilizzo di safe\_cast nelle applicazioni [!INCLUDE[cppcli](../build/reference/includes/cppcli_md.md)].  Per informazioni su safe\_cast in [!INCLUDE[cppwrt_short](../build/reference/includes/cppwrt_short_md.md)], vedere [safe\_cast](../windows/safe-cast-cpp-component-extensions.md).  
  
## Upcast  
 Un upcast è un cast da un tipo derivato a una delle relative classi base.  Questo cast è sicuro e non richiede una notazione di cast esplicita.  Il seguente codice di esempio mostra come eseguire un upcast, con `safe_cast` e senza.  
  
```  
// safe_upcast.cpp  
// compile with: /clr  
using namespace System;  
interface class A {  
   void Test();  
};  
  
ref struct B : public A {  
   virtual void Test() {  
      Console::WriteLine("in B::Test");  
   }  
  
   void Test2() {  
      Console::WriteLine("in B::Test2");  
   }  
};  
  
ref struct C : public B {  
   virtual void Test() override {  
      Console::WriteLine("in C::Test");  
   };  
};  
  
int main() {  
   C ^ c = gcnew C;  
  
   // implicit upcast  
   B ^ b = c;  
   b->Test();  
   b->Test2();  
  
   // upcast with safe_cast  
   b = nullptr;  
   b = safe_cast<B^>(c);  
   b->Test();  
   b->Test2();  
}  
```  
  
  **in C::Test**  
**in B::Test2**  
**in C::Test**  
**in B::Test2**   
## Downcast  
 Un downcast è un cast da una classe di base alla classe derivata dalla classe base.  Un downcast è sicuro solo se l'oggetto puntato in fase di esecuzione punta effettivamente a un oggetto della classe derivata.  A differenza di `static_cast`, `safe_cast` esegue un controllo dinamico e genera <xref:System.InvalidCastException> se la conversione fallisce.  
  
```  
// safe_downcast.cpp  
// compile with: /clr  
using namespace System;  
  
interface class A { void Test(); };  
  
ref struct B : public A {  
   virtual void Test() {   
      Console::WriteLine("in B::Test()");  
   }  
  
   void Test2() {   
      Console::WriteLine("in B::Test2()");  
   }  
};  
  
ref struct C : public B {  
   virtual void Test() override {   
      Console::WriteLine("in C::Test()");  
   }  
};  
  
interface class I {};  
  
value struct V : public I {};  
  
int main() {  
   A^ a = gcnew C();  
   a->Test();  
   B^ b = safe_cast<B^>(a);  
   b->Test();  
   b->Test2();  
  
   V v;   
   I^ i = v;   // i boxes V  
   V^ refv = safe_cast<V^>(i);   
  
   Object^ o = gcnew B;  
   A^ a2= safe_cast<A^>(o);  
}  
```  
  
  **in C::Test\(\)**  
**in C::Test\(\)**  
**in B::Test2\(\)**   
## safe\_cast con le conversioni definite dall'utente  
 Nell'esempio seguente viene illustrato come è possibile utilizzare `safe_cast` per richiamare conversioni definite dall'utente.  
  
```  
// safe_cast_udc.cpp  
// compile with: /clr  
using namespace System;  
value struct V;  
  
ref struct R {  
   int x;  
   R() {  
      x = 1;  
   }  
  
   R(int argx) {  
      x = argx;  
   }  
  
   static operator R::V^(R^ r);  
};  
  
value struct V {  
   int x;  
   static operator R^(V& v) {  
      Console::WriteLine("in operator R^(V& v)");  
      R^ r = gcnew R();  
      r->x = v.x;    
      return r;  
   }  
  
   V(int argx) {  
      x = argx;  
   }  
};  
  
   R::operator V^(R^ r) {  
      Console::WriteLine("in operator V^(R^ r)");  
      return gcnew V(r->x);  
   }  
  
int main() {  
   bool fReturnVal = false;  
   V v(2);  
   R^ r = safe_cast<R^>(v);   // should invoke UDC  
   V^ v2 = safe_cast<V^>(r);   // should invoke UDC  
}  
```  
  
  **in operator R^\(V& v**  
**in operator V^\(R^ r\)**   
## Operazioni di conversione boxing e safe\_cast  
 **Conversione boxing**  
  
 La conversione boxing è definita come conversione inserita dal compilatore e definita dall'utente.  Pertanto, è possibile utilizzare `safe_cast` per eseguire il boxing di un valore nell'heap CLR.  
  
 Nell'esempio seguente viene illustrata la conversione boxing con tipi di valore semplici e tipi definiti dall'utente.  Un `safe_cast` esegue il boxing di una variabile di tipo di valore che si trova sullo stack nativo in modo da poterla assegnare a una variabile nell'heap sottoposto a garbage collection.  
  
```  
// safe_cast_boxing.cpp  
// compile with: /clr  
using namespace System;  
  
interface struct I {};  
  
value struct V : public I {   
   int m_x;  
  
   V(int i) : m_x(i) {}  
};  
  
int main() {  
   // box a value type  
   V v(100);  
   I^ i = safe_cast<I^>(v);  
  
   int x = 100;  
   V^ refv = safe_cast<V^>(v);  
   int^ refi = safe_cast<int^>(x);  
}  
```  
  
 L'esempio seguente mostra che la conversione boxing ha la precedenza rispetto a una conversione definita dall'utente in un'operazione `safe_cast`.  
  
```  
// safe_cast_boxing_2.cpp  
// compile with: /clr  
static bool fRetval = true;  
  
interface struct I {};  
value struct V : public I {  
   int x;  
  
   V(int argx) {  
      x = argx;  
   }  
  
   static operator I^(V v) {  
      fRetval = false;  
      I^ pi = v;  
      return pi;  
   }  
};  
  
ref struct R {  
   R() {}  
   R(V^ pv) {}  
};  
  
int main() {  
   V v(10);  
   I^ pv = safe_cast<I^>(v);   // boxing will occur, not UDC "operator I^"  
}  
```  
  
 **Conversione unboxing**  
  
 La conversione unboxing è definita come conversione inserita dal compilatore e definita dall'utente.  Pertanto, è possibile utilizzare `safe_cast` per eseguire l'unboxing di un valore nell'heap CLR.  
  
 La conversione unboxing è una conversione definita dall'utente, ma differenza del boxing, l'unboxing deve essere eseguita in modo esplicito, ovvero deve essere eseguita da un `static_cast`, un cast di tipo C o da un `safe_cast`; la conversione unboxing non può essere eseguita in modo implicito.  
  
```  
// safe_cast_unboxing.cpp  
// compile with: /clr  
int main() {  
   System::Object ^ o = 42;  
   int x = safe_cast<int>(o);  
}  
```  
  
 Nell'esempio seguente viene illustrata la conversione unboxing con tipi di valore e tipi primitivi.  
  
```  
// safe_cast_unboxing_2.cpp  
// compile with: /clr  
using namespace System;  
  
interface struct I {};  
  
value struct VI : public I {};  
  
void test1() {  
   Object^ o = 5;  
   int x = safe_cast<Int32>(o);  
}  
  
value struct V {  
   int x;  
   String^ s;  
};  
  
void test2() {  
   V localv;  
   Object^ o = localv;  
   V unboxv = safe_cast<V>(o);  
}  
  
void test3() {  
   V localv;  
   V^ o2 = localv;  
   V unboxv2 = safe_cast<V>(o2);  
}  
  
void test4() {  
   I^ refi = VI();  
   VI vi  = safe_cast<VI>(refi);  
}  
  
int main() {  
   test1();  
   test2();  
   test3();  
   test4();  
}  
```  
  
## safe\_cast e tipi generici  
 Nell'esempio seguente viene illustrato come è possibile utilizzare `safe_cast` per eseguire un downcast con un tipo generico.  
  
```  
// safe_cast_generic_types.cpp  
// compile with: /clr  
interface struct I {};  
  
generic<class T> where T:I  
ref struct Base {  
   T t;  
   void test1() {}  
};  
  
generic<class T> where T:I  
ref struct Derived:public Base <T> {};  
  
ref struct R:public I {};  
  
typedef Base<R^> GBase_R;  
typedef Derived<R^> GDerived_R;  
  
int main() {  
   GBase_R^ br = gcnew GDerived_R();  
   GDerived_R^ dr = safe_cast<GDerived_R^>(br);  
}  
```  
  
## Vedere anche  
 [safe\_cast](../windows/safe-cast-cpp-component-extensions.md)