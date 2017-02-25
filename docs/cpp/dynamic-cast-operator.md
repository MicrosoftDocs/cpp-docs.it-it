---
title: "Operatore dynamic_cast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "dynamic_cast"
  - "dynamic_cast_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dynamic_cast (parola chiave) [C++]"
ms.assetid: f380ada8-6a18-4547-93c9-63407f19856b
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 18
---
# Operatore dynamic_cast
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Converte l'operando `expression` in un oggetto di tipo `type-id`.  
  
## Sintassi  
  
```  
  
dynamic_cast < type-id > ( expression )  
```  
  
## Note  
 `type-id` deve essere un puntatore o un riferimento a un tipo di classe oppure a un "puntatore a void".  Il tipo `expression` deve essere un puntatore se `type-id` è un puntatore, o un l\-value se `type-id` è un riferimento.  
  
 Vedere [static\_cast](../cpp/static-cast-operator.md) per una spiegazione della differenza tra casting statico e dinamico e quando è consigliabile utilizzare ciascuno.  
  
 Esistono due modifiche nel comportamento di `dynamic_cast` nel codice gestito:  
  
-   `dynamic_cast` a un puntatore al tipo sottostante di un'enumerazione boxed avrà esito negativo in fase di esecuzione, restituendo 0 invece del puntatore convertito.  
  
-   `dynamic_cast` non genera un'eccezione quando `type-id` è un puntatore interno a un tipo di valore, il cast ha esito negativo in fase di esecuzione.  Il cast ora restituirà il valore un puntatore a 0 anziché generare un'eccezione.  
  
 Se `type-id` è un puntatore a una classe base diretta o indiretta accessibile di una `expression`, un puntatore al sotto\-oggetto univoco di tipo `type-id` è il risultato.  Ad esempio:  
  
```  
// dynamic_cast_1.cpp  
// compile with: /c  
class B { };  
class C : public B { };  
class D : public C { };  
  
void f(D* pd) {  
   C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class  
                                   // pc points to C subobject of pd   
   B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class  
                                   // pb points to B subobject of pd  
}  
```  
  
 Questo tipo di conversione viene chiamato "upcast" perché sposta il puntatore sulla gerarchia di classi, da una classe derivata a una classe da cui deriva.  L'upcast è una conversione implicita.  
  
 Se `type-id` è void\*, un controllo runtime viene eseguito per determinare il tipo effettivo di una `expression`.  Il risultato è un puntatore all'intero oggetto puntato dall' `expression`.  Ad esempio:  
  
```  
// dynamic_cast_2.cpp  
// compile with: /c /GR  
class A {virtual void f();};  
class B {virtual void f();};  
  
void f() {  
   A* pa = new A;  
   B* pb = new B;  
   void* pv = dynamic_cast<void*>(pa);  
   // pv now points to an object of type A  
  
   pv = dynamic_cast<void*>(pb);  
   // pv now points to an object of type B  
}  
```  
  
 Se non è `type-id` void\*, un controllo runtime viene eseguito per verificare se l'oggetto a cui l' `expression` fa riferimento può essere convertito nel tipo puntato da `type-id`.  
  
 Se il tipo `expression` è una classe base del tipo `type-id`, un controllo runtime viene eseguito per verificare se l'`expression` fa effettivamente riferimento a un oggetto completo del tipo `type-id`.  In questo caso, il risultato è un puntatore a un oggetto completo del tipo `type-id`.  Ad esempio:  
  
```  
// dynamic_cast_3.cpp  
// compile with: /c /GR  
class B {virtual void f();};  
class D : public B {virtual void f();};  
  
void f() {  
   B* pb = new D;   // unclear but ok  
   B* pb2 = new B;  
  
   D* pd = dynamic_cast<D*>(pb);   // ok: pb actually points to a D  
   D* pd2 = dynamic_cast<D*>(pb2);   // pb2 points to a B not a D  
}  
```  
  
 Questo tipo di conversione viene chiamato "un downcast" perché scorre verso il basso una gerarchia di classi, da una determinata classe ad una classe derivata da essa.  
  
 Nei casi di ereditarietà multipla, possibilità di ambiguità vengono introdotte.  Si consideri la gerarchia di classi illustrate nella figura che segue.  
  
 Per i tipi CLR, `dynamic_cast` risulta in una no\-op se la conversione può essere fatta implicitamente, oppure in un'istruzione MSIL `isinst`, che esegue un controllo dinamico e restituisce `nullptr` se la conversione non riesce.  
  
 Nell'esempio seguente viene utilizzato `dynamic_cast` per determinare se una classe è un'istanza di un determinato tipo:  
  
```  
// dynamic_cast_clr.cpp  
// compile with: /clr  
using namespace System;  
  
void PrintObjectType( Object^o ) {  
   if( dynamic_cast<String^>(o) )  
      Console::WriteLine("Object is a String");  
   else if( dynamic_cast<int^>(o) )  
      Console::WriteLine("Object is an int");  
}  
  
int main() {  
   Object^o1 = "hello";  
   Object^o2 = 10;  
  
   PrintObjectType(o1);  
   PrintObjectType(o2);  
}  
```  
  
 ![Gerarchia delle classi con ereditarietà multipla](../cpp/media/vc39011.png "vc39011")  
Gerarchia delle classi che mostra l'ereditarietà multipla  
  
 Un puntatore a un oggetto di tipo `D` può eseguire il cast verso `B` o `C`.  Tuttavia, se a `D` viene eseguito il cast per fare riferimento ad un oggetto `A`, che l'istanza di `A` risulterebbe?  Questo avrebbe generato un errore di cast ambiguo.  Per aggirare questo problema, è possibile eseguire due cast non ambigui.  Ad esempio:  
  
```  
// dynamic_cast_4.cpp  
// compile with: /c /GR  
class A {virtual void f();};  
class B {virtual void f();};  
class D : public B {virtual void f();};  
  
void f() {  
   D* pd = new D;  
   B* pb = dynamic_cast<B*>(pd);   // first cast to B  
   A* pa2 = dynamic_cast<A*>(pb);   // ok: unambiguous  
}  
```  
  
 Ulteriori ambiguità vengono introdotte quando si utilizzano le classi di base virtuali.  Si consideri la gerarchia di classi illustrate nella figura che segue.  
  
 ![Gerarchia delle classi con classi di base virtuali](../cpp/media/vc39012.png "vc39012")  
Gerarchia delle classi che mostra classi di base virtuali  
  
 Nella gerarchia, `A` è una classe base virtuale.  Vedere [Classi di base virtuale](../misc/virtual-base-classes.md) per la definizione di una classe base virtuale.  Fornita un'istanza della classe `E` e un puntatore al sotto\-oggetto `A`, un `dynamic_cast` a un puntatore a `B` avrà esito negativo a causa di ambiguità.  È necessario prima di tutto ripristinare il cast dell'oggetto completo `E`, quindi risalire la gerarchia, in modo non ambiguo, per ottenere l'oggetto `B` corretto.  
  
 Si consideri la gerarchia di classi illustrate nella figura che segue.  
  
 ![Gerarchia delle classi con classi di base duplicate](../cpp/media/vc39013.png "vc39013")  
Gerarchia delle classi che mostra classi di base duplicate  
  
 Dato un oggetto di tipo `E` e un puntatore al sotto\-oggetto `D`, per spostarsi dal sotto\-oggetto `D` al sotto\-oggetto più a sinistra `A`, tre conversioni possono essere effettuate.  È possibile eseguire una conversione di `dynamic_cast` dal puntatore `D` ad un puntatore `E`, quindi una conversione \( `dynamic_cast` o una conversione implicita\) da `E` in `B` e infine una conversione implicita da `B` in `A`.  Ad esempio:  
  
```  
// dynamic_cast_5.cpp  
// compile with: /c /GR  
class A {virtual void f();};  
class B : public A {virtual void f();};  
class C : public A { };  
class D {virtual void f();};  
class E : public B, public C, public D {virtual void f();};  
  
void f(D* pd) {  
   E* pe = dynamic_cast<E*>(pd);  
   B* pb = pe;   // upcast, implicit conversion  
   A* pa = pb;   // upcast, implicit conversion  
}  
```  
  
 L'operatore `dynamic_cast` può essere utilizzato per eseguire un cast "incrociato." Utilizzando la stessa gerarchia di classi, è possibile eseguire il cast di un puntatore, ad esempio, dal sotto\-oggetto `B` al sotto\-oggetto `D`, finché l'oggetto completo è di tipo `E`.  
  
 Con il cast incrociato, è in realtà possibile effettuare la conversione da un puntatore a `D` a un puntatore al sotto\-oggetto più a sinistra `A` in soli due passaggi.  È possibile eseguire un cast incrociato da `D` a `B`, quindi una conversione implicita da `B` in `A`.  Ad esempio:  
  
```  
// dynamic_cast_6.cpp  
// compile with: /c /GR  
class A {virtual void f();};  
class B : public A {virtual void f();};  
class C : public A { };  
class D {virtual void f();};  
class E : public B, public C, public D {virtual void f();};  
  
void f(D* pd) {  
   B* pb = dynamic_cast<B*>(pd);   // cross cast  
   A* pa = pb;   // upcast, implicit conversion  
}  
```  
  
 Un valore di puntatore null viene convertito in un valore di puntatore null del tipo di destinazione da `dynamic_cast`.  
  
 Quando si utilizza `dynamic_cast < type-id > ( expression )`, se `expression` non può essere convertito in modo sicuro nel tipo `type-id`, il controllo runtime determina la non riuscita del cast.  Ad esempio:  
  
```  
// dynamic_cast_7.cpp  
// compile with: /c /GR  
class A {virtual void f();};  
class B {virtual void f();};  
  
void f() {  
   A* pa = new A;  
   B* pb = dynamic_cast<B*>(pa);   // fails at runtime, not safe;  
   // B not derived from A  
}  
```  
  
 Il valore di un cast non riuscito ad un tipo puntatore è un puntatore a null.  Un cast non riuscito a tipo riferimento genera [eccezione di bad\_cast](../cpp/bad-cast-exception.md).   Se `expression` non punta o non fa riferimento a un oggetto valido, viene generata l'eccezione `__non_rtti_object`.  
  
 Vedere [typeid](../cpp/typeid-operator.md) per una spiegazione dell'eccezione `__non_rtti_object`.  
  
## Esempio  
 L'esempio seguente consente di creare il puntatore della classe base \(struct A\), ad un oggetto \(struct C\).  Questo, più il fatto che sono presenti funzioni virtuali, consente il polimorfismo runtime.  
  
 L'esempio chiama inoltre una funzione non virtuale nella gerarchia.  
  
```  
// dynamic_cast_8.cpp  
// compile with: /GR /EHsc  
#include <stdio.h>  
#include <iostream>  
  
struct A {  
    virtual void test() {  
        printf_s("in A\n");  
   }  
};  
  
struct B : A {  
    virtual void test() {  
        printf_s("in B\n");  
    }  
  
    void test2() {  
        printf_s("test2 in B\n");  
    }  
};  
  
struct C : B {  
    virtual void test() {  
        printf_s("in C\n");  
    }  
  
    void test2() {  
        printf_s("test2 in C\n");  
    }  
};  
  
void Globaltest(A& a) {  
    try {  
        C &c = dynamic_cast<C&>(a);  
        printf_s("in GlobalTest\n");  
    }  
    catch(std::bad_cast) {  
        printf_s("Can't cast to C\n");  
    }  
}  
  
int main() {  
    A *pa = new C;  
    A *pa2 = new B;  
  
    pa->test();  
  
    B * pb = dynamic_cast<B *>(pa);  
    if (pb)  
        pb->test2();  
  
    C * pc = dynamic_cast<C *>(pa2);  
    if (pc)  
        pc->test2();  
  
    C ConStack;  
    Globaltest(ConStack);  
  
   // will fail because B knows nothing about C  
    B BonStack;  
    Globaltest(BonStack);  
}  
```  
  
  **in C**  
**test2 in B**  
**in GlobalTest**  
**Non è possibile eseguire il cast verso C**   
## Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)