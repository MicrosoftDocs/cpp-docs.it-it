---
title: Conversioni definite dall'utente (C + + CLI) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: user-defined conversions [C++]
ms.assetid: 8010fd59-2775-4e9a-a6ed-58055032d66f
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- dotnet
ms.openlocfilehash: 329461338579dc0787c6e3d208abac89ec762004
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="user-defined-conversions-ccli"></a>Conversioni definite dall'utente (C++/CLI)
Questa sezione vengono illustrate le conversioni definite dall'utente (UDC) quando uno dei tipi durante la conversione è un riferimento o un'istanza di un tipo di valore o un tipo di riferimento.  
  
## <a name="implicit-and-explicit-conversions"></a>Conversioni implicite ed esplicite  
 Una conversione definita dall'utente può essere implicita o esplicita.  Un UDC dovrebbe essere implicito, se la conversione non produce una perdita di informazioni. In caso contrario deve essere definito un UDC esplicita.  
  
 Per convertire un tipo riferimento o valore in una classe nativa, è possibile utilizzare il costruttore della classe nativa.  
  
 Per ulteriori informazioni sulle conversioni, vedere [Boxing](../windows/boxing-cpp-component-extensions.md) e [conversioni Standard](../cpp/standard-conversions.md).  
  
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
  
```Output  
in N::N  
in N::N  
```  
  
## <a name="convert-from-operators"></a>Operatori di tipo converti da  
 Operatori di conversione di creare un oggetto della classe in cui è definito l'operatore da un oggetto di un'altra classe.  
  
 Standard di C++ non supporta operatori di conversione; a tale scopo, standard di C++ utilizza i costruttori. Tuttavia, quando si utilizzano tipi CLR, Visual C++ forniscono supporto sintattico per la chiamata di operatori di conversione.  
  
 Per interagire con altri linguaggi conformi a CLS, si consiglia di eseguire il wrapping di ogni costruttore unario definito dall'utente per una determinata classe con un operatore di conversione corrispondente.  
  
 Operatori di conversione:  
  
-   Sono definiti come funzioni statiche.  
  
-   Può essere implicita (per le conversioni non perdita di precisione, ad esempio breve a int) o esplicita, quando potrebbero essere presenti una perdita di precisione.  
  
-   Deve restituire un oggetto di classe che lo contiene.  
  
-   Deve avere il tipo "da" come tipo di parametro unico.  
  
 L'esempio seguente viene illustrato un implicite ed esplicite "Converti da", l'operatore di conversione definito dall'utente (UDC).  
  
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
  
```Output  
in operator  
in constructor  
10  
1  
```  
  
## <a name="convert-to-operators"></a>Operatori di conversione in  
 Gli operatori di conversione in convertire un oggetto della classe in cui è definito l'operatore a un altro oggetto. L'esempio seguente viene illustrato un implicita, conversione in, operatore di conversione definito dall'utente:  
  
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
  
```Output  
10  
```  
  
 Un operatore di conversione esplicita definita dall'utente di tipo Converti in è appropriato per le conversioni che potenzialmente perdono di dati in qualche modo. Per richiamare un operatore di conversione esplicita, è necessario utilizzare un cast.  
  
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
  
```Output  
10.3  
10  
```  
  
## <a name="to-convert-generic-classes"></a>Per convertire le classi generiche  
 È possibile convertire una classe generica in T.  
  
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
  
```Output  
True  
```  
  
 Un costruttore di conversione accetta un tipo e viene utilizzato per creare un oggetto.  Un costruttore di conversione viene chiamato con l'inizializzazione diretta di sola lettura. cast non richiama costruttori di conversione. Per impostazione predefinita, i costruttori di conversione sono espliciti per i tipi CLR.  
  
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
  
```Output  
5  
R  
```  
  
 In questo esempio di codice, una funzione di conversione implicita di statico svolge la stessa funzione come costruttore di conversione esplicita.  
  
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
  
```Output  
13  
12  
500  
2000  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../windows/classes-and-structs-cpp-component-extensions.md)