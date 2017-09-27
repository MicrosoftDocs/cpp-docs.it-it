---
title: Operatore dynamic_cast | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- dynamic_cast
- dynamic_cast_cpp
dev_langs:
- C++
helpviewer_keywords:
- dynamic_cast keyword [C++]
ms.assetid: f380ada8-6a18-4547-93c9-63407f19856b
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
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
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 3137207566a6df16c420493afa93269540de2bae
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="dynamiccast-operator"></a>Operatore dynamic_cast
Converte l'operando `expression` a un oggetto di tipo `type-id`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
dynamic_cast < type-id > ( expression )  
```  
  
## <a name="remarks"></a>Note  
 Il `type-id` deve essere un puntatore o un riferimento a un tipo di classe definita in precedenza o un "puntatore a void". Il tipo di `expression` deve essere un puntatore se `type-id` è un puntatore o un l-value se `type-id` è un riferimento.  
  
 Vedere [static_cast](../cpp/static-cast-operator.md) per una spiegazione della differenza tra le conversioni di cast statiche e dinamiche e quando è consigliabile utilizzarle.  
  
 Esistono due modifiche di rilievo al comportamento di `dynamic_cast` nel codice gestito:  
  
-   `dynamic_cast`a un puntatore al tipo sottostante di un'enumerazione boxed avrà esito negativo in fase di esecuzione, restituisce 0 anziché il puntatore convertito.  
  
-   `dynamic_cast`non verrà generata un'eccezione quando `type-id` è un puntatore interno a un tipo di valore, con il cast non riusciti in fase di esecuzione.  Il cast restituisce ora il valore del puntatore 0 anziché generare.  
  
 Se `type-id` è un puntatore a una non ambiguo accessibile diretto o indiretto classe di base di `expression`, un puntatore al sotto-oggetto univoco di tipo `type-id` è il risultato. Ad esempio:  
  
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
  
 Questo tipo di conversione viene chiamato un upcast"" perché sposta un puntatore di una gerarchia di classi, da una classe derivata a una classe che deriva da. Un upcast è una conversione implicita.  
  
 Se `type-id` è void *, viene eseguito un controllo di runtime per determinare il tipo effettivo di `expression`. Il risultato è un puntatore all'oggetto completo a cui puntata `expression`. Ad esempio:  
  
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
  
 Se `type-id` non è void *, viene eseguito un controllo di runtime per verificare se l'oggetto a cui puntava `expression` può essere convertito nel tipo a cui puntata `type-id`.  
  
 Se il tipo di `expression` è una classe di base del tipo di `type-id`, viene eseguito un controllo di runtime per verificare se `expression` punti effettivamente a un oggetto completo del tipo di `type-id`. In questo caso, il risultato è un puntatore a un oggetto completo del tipo di `type-id`. Ad esempio:  
  
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
  
 Questo tipo di conversione viene chiamato un "downcast" perché sposta un puntatore in una gerarchia di classe, da una determinata classe a una classe derivata da esso.  
  
 In caso di ereditarietà multipla, vengono introdotte le possibilità di ambiguità. Prendere in considerazione la gerarchia di classi illustrata nella figura riportata di seguito.  
  
 Per i tipi CLR, `dynamic_cast` produce alcuna operazione se è possibile eseguire la conversione in modo implicito, o un codice MSIL `isinst` istruzione, che esegue un controllo dinamico e restituisce `nullptr` se la conversione non riesce.  
  
 L'esempio seguente usa `dynamic_cast` per determinare se una classe è un'istanza del tipo specifico:  
  
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
  
 ![Gerarchia di ereditarietà multipla delle classi](../cpp/media/vc39011.gif "vc39011")  
Gerarchia delle classi che mostra l'ereditarietà multipla  
  
 Un puntatore a un oggetto di tipo `D` può essere convertito in modo sicuro in `B` o `C`. Tuttavia, se `D` viene eseguito il cast in modo da puntare a un `A` l'istanza dell'oggetto `A` comporterebbe? In questo modo, un errore di cast ambiguo. Per evitare questo problema, è possibile eseguire due cast non ambiguo. Ad esempio:  
  
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
  
 Quando si utilizzano le classi base virtuali, è possibile inserire ulteriori ambiguità. Prendere in considerazione la gerarchia di classi illustrata nella figura riportata di seguito.  
  
 ![Classe gerarchia delle classi base virtuali](../cpp/media/vc39012.gif "vc39012")  
Gerarchia delle classi che mostra classi di base virtuali  
  
 In questa gerarchia `A` è una classe base virtuale. Data un'istanza della classe `E` e un puntatore di `A` sottoggetto, un `dynamic_cast` a un puntatore a `B` avrà esito negativo a causa dell'ambiguità. È innanzitutto necessario eseguire il cast a completo `E` dell'oggetto, quindi il funzionamento del backup della gerarchia, in modo non ambiguo per raggiungere il corretto `B` oggetto.  
  
 Prendere in considerazione la gerarchia di classi illustrata nella figura riportata di seguito.  
  
 ![Classe gerarchia delle classi di base duplicate](../cpp/media/vc39013.gif "vc39013")  
Gerarchia delle classi che mostra classi di base duplicate  
  
 Dato un oggetto di tipo `E` e un puntatore al `D` sottoggetto, da cui spostarsi il `D` oggetto secondario all'estrema sinistra `A` sottoggetto, è possono eseguire conversioni di tre. È possibile eseguire un `dynamic_cast` la conversione dal `D` puntatore a un `E` puntatore, quindi una conversione (sia `dynamic_cast` o una conversione implicita) da `E` a `B`e infine una conversione implicita da `B` a `A`. Ad esempio:  
  
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
  
 Il `dynamic_cast` operatore può essere utilizzato anche per eseguire un "cast tra". Utilizzando la stessa gerarchia di classi, è possibile eseguire il cast di un puntatore, ad esempio, dal `B` oggetto secondario per il `D` sottoggetto, purché l'oggetto completo è di tipo `E`.  
  
 Considerando cross-cast, è effettivamente possibile eseguire la conversione da un puntatore a `D` a un puntatore all'estrema sinistra `A` sottoggetto nei due passaggi. È possibile eseguire una croce esegue il cast da `D` a `B`, quindi una conversione implicita da `B` a `A`. Ad esempio:  
  
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
  
 Un valore di puntatore null viene convertito al valore del puntatore null del tipo di destinazione da `dynamic_cast`.  
  
 Quando si utilizza `dynamic_cast < type-id > ( expression )`, se `expression` non può essere convertito in modo sicuro nel tipo `type-id`, il controllo in fase di esecuzione determina il cast a non riuscire. Ad esempio:  
  
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
  
 Il valore di un cast non riuscito per il tipo di puntatore è il puntatore null. Un cast non riuscito per fare riferimento a tipo genera un [eccezione bad_cast](../cpp/bad-cast-exception.md).   Se `expression` non di punta o fare riferimento a un oggetto valido, un `__non_rtti_object` viene generata un'eccezione.  
  
 Vedere [typeid](../cpp/typeid-operator.md) per una spiegazione di `__non_rtti_object` eccezione.  
  
## <a name="example"></a>Esempio  
 L'esempio seguente crea il puntatore della classe base (struct A), a un oggetto (struct C).  Questo, nonché delle tabelle dei fatti sono funzioni virtuali, abilita il polimorfismo di runtime.  
  
 L'esempio chiama anche una funzione non virtuale nella gerarchia.  
  
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
  
```Output  
in C  
test2 in B  
in GlobalTest  
Can't cast to C  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Operatori di cast](../cpp/casting-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)
