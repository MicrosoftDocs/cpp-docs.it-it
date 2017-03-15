---
title: "Conversioni definite dall&#39;utente (C++/CLI) | Microsoft Docs"
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
  - "conversioni definite dall'utente [C++]"
ms.assetid: 8010fd59-2775-4e9a-a6ed-58055032d66f
caps.latest.revision: 15
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni definite dall&#39;utente (C++/CLI)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa sezione vengono illustrate le conversioni definite dall'utente \(UDC\) quando uno dei tipi nella conversione è un riferimento o un'istanza di un tipo di valore o un tipo di riferimento.  
  
## Conversioni implicite and explicit  
 Una conversione definita dall'utente può essere implicita o esplicita.  Una CDU deve essere implicita se la conversione non comporta una perdita di informazioni.  Altrimenti una CDU esplicita deve essere definita.  
  
 Il costruttore nativo di una classe può essere utilizzato per convertire un riferimento o un tipo valore a una classe nativa.  
  
 Per ulteriori informazioni sulle conversioni, vedere [Boxing](../windows/boxing-cpp-component-extensions.md) e [Conversioni standard](../cpp/standard-conversions.md).  
  
```  
// mcpp_User_Defined_Conversions.cpp  
// compile with: /clr  
#include "stdio.h"  
ref class R;  
class N;  
  
value class V {  
   static operator V(R^) {  
      return V();  
   }  
};  
  
ref class R {  
public:  
   static operator N(R^);  
   static operator V(R^) {  
      System::Console::WriteLine("in R::operator N");  
      return V();  
   }  
};  
  
class N {  
public:  
   N(R^) {  
      printf("in N::N\n");  
   }  
};  
  
R::operator N(R^) {  
   System::Console::WriteLine("in R::operator N");  
   return N(nullptr);  
}  
  
int main() {  
   // Direct initialization:  
   R ^r2;  
   N n2(r2);   // direct initialization, calls constructor  
   static_cast<N>(r2);   // also direct initialization  
  
   R ^r3;  
   // ambiguous V::operator V(R^) and R::operator V(R^)  
   // static_cast<V>(r3);     
}  
```  
  
 **Output**  
  
  **in N::N**  
**in N::N**   
## Convertito\- Da operatori  
 Convertito\- gli operatori creare un oggetto della classe in cui l'operatore è definito da un oggetto di un'altra classe.  
  
 Lo standard C\+\+ non supporta convertito\- gli operatori; lo standard C\+\+ utilizza i costruttori per questo scopo.  Se si utilizza i tipi CLR, Visual C\+\+ fornisce il supporto sintattico a chiamare convertito\- gli operatori.  
  
 Per interoperare bene con altri linguaggi conformi a CLS, è possibile eseguire il wrapping di ogni costruttore unario definito dall'utente per una determinata classe con una corrispondenza convertito\- dall'operatore.  
  
 Convertito\- gli operatori:  
  
-   Sarà definito come static functions.  
  
-   Può essere implicito \(per le conversioni non perdono la precisione come short int\) o esplicito, si potrebbe contenere una perdita di precisione.  
  
-   Restituisce un oggetto della classe contenitore.  
  
-   Sarà "da" tipo come tipo di parametro solo.  
  
 L'esempio seguente mostra un implicito e esplicito "convertito\- da", operatore definito dall'utente \(UDC\) di conversione.  
  
```  
// clr_udc_convert_from.cpp  
// compile with: /clr  
value struct MyDouble {  
   double d;  
  
   MyDouble(int i) {  
      d = static_cast<double>(i);  
      System::Console::WriteLine("in constructor");  
   }  
  
   // Wrap the constructor with a convert-from operator.  
   // implicit UDC because conversion cannot lose precision  
   static operator MyDouble (int i) {  
      System::Console::WriteLine("in operator");  
      // call the constructor  
      MyDouble d(i);  
      return d;  
   }  
  
   // an explicit user-defined conversion operator  
   static explicit operator signed short int (MyDouble) {  
      return 1;  
   }  
};  
  
int main() {  
   int i = 10;  
   MyDouble md = i;  
   System::Console::WriteLine(md.d);  
  
   // using explicit user-defined conversion operator requires a cast    
   unsigned short int j = static_cast<unsigned short int>(md);  
   System::Console::WriteLine(j);  
}  
```  
  
 **Output**  
  
  **operatore in**  
**nel costruttore**  
**10**  
**1**   
## Convertito\- gli operatori  
 Convertito\- gli operatori convertire un oggetto della classe in cui l'operatore è definito in un altro oggetto.  L'esempio seguente mostra un implicito, convertito\- a, dall'utente di conversione:  
  
```  
// clr_udc_convert_to.cpp  
// compile with: /clr  
using namespace System;  
value struct MyInt {  
   Int32 i;  
  
   // convert MyInt to String^  
   static operator String^ ( MyInt val ) {  
      return val.i.ToString();  
   }  
  
   MyInt(int _i) : i(_i) {}  
};  
  
int main() {  
   MyInt mi(10);  
   String ^s = mi;  
   Console::WriteLine(s);  
}  
```  
  
 **Output**  
  
  **10** Un tipo definito da convertito\- esplicito all'operatore di conversione è appropriato per le conversioni che potenzialmente perdono i dati in qualche modo.  Per richiamare un convertito\- esplicito all'operatore, un cast deve essere utilizzato.  
  
```  
// clr_udc_convert_to_2.cpp  
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
   d.d = 10.3;  
   System::Console::WriteLine(d.d);  
   int i = 0;  
   i = static_cast<int>(d);  
   System::Console::WriteLine(i);  
}  
```  
  
 **Output**  
  
  **10.3**  
**10**   
## Per convertire le classi generiche  
 È possibile convertire una classe generica di T.  
  
```  
// clr_udc_generics.cpp  
// compile with: /clr  
generic<class T>   
public value struct V {  
   T mem;  
   static operator T(V v) {  
      return v.mem;  
   }  
  
   void f(T t) {  
      mem = t;  
   }  
};  
  
int main() {  
   V<int> v;  
   v.f(42);  
   int i = v;  
   i += v;  
   System::Console::WriteLine(i == (42 * 2) );  
}  
```  
  
 **Output**  
  
  **True** Un costruttore di conversione accetta un tipo e viene utilizzato per creare un oggetto.  Un costruttore di conversione viene chiamato con un'inizializzazione diretta solo; i cast non comporta la conversione dei costruttori.  Per impostazione predefinita, la conversione dei costruttori sono espliciti per i tipi CLR.  
  
```  
// clr_udc_converting_constructors.cpp  
// compile with: /clr  
public ref struct R {  
   int m;  
   char c;  
  
   R(int i) : m(i) { }  
   R(char j) : c(j) { }  
};  
  
public value struct V {  
   R^ ptr;  
   int m;  
  
   V(R^ r) : ptr(r) { }  
   V(int i) : m(i) { }  
};  
  
int main() {   
   R^ r = gcnew R(5);  
  
   System::Console::WriteLine( V(5).m);  
   System::Console::WriteLine( V(r).ptr);  
}  
```  
  
 **Output**  
  
  **5**  
**R** In questo esempio di codice, una funzione static conversione implicita del medesimo risultato come costruttore di conversione esplicito.  
  
```  
public value struct V {  
   int m;  
   V(int i) : m(i) {}  
   static operator V(int i) {  
      V v(i*100);  
      return v;  
   }  
};  
  
public ref struct R {  
   int m;  
   R(int i) : m(i) {}  
   static operator R^(int i) {  
      return gcnew R(i*100);  
   }  
};  
  
int main() {  
   V v(13);   // explicit  
   R^ r = gcnew R(12);   // explicit  
  
   System::Console::WriteLine(v.m);  
   System::Console::WriteLine(r->m);  
  
   // explicit ctor can't be called here: not ambiguous  
   v = 5;  
   r = 20;  
  
   System::Console::WriteLine(v.m);  
   System::Console::WriteLine(r->m);  
}  
```  
  
 **Output**  
  
  **13**  
**12**  
**500**  
**2000**   
## Vedere anche  
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)