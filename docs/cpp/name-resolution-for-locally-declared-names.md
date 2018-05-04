---
title: Risoluzione dei nomi per nomi dichiarati in locale | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 743b88f3-de11-48f4-ae83-931449ea3886
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6347f3b0b71dc35544f22101479de23bb4efd686
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="name-resolution-for-locally-declared-names"></a>Risoluzione dei nomi per nomi dichiarati in locale

È possibile fare riferimento al nome stesso del modello con o senza gli argomenti di modello. Nell'ambito di un modello di classe, il nome stesso fa riferimento al modello. Nell'ambito della specializzazione o della specializzazione parziale di un modello, il nome da solo fa riferimento alla specializzazione o alla specializzazione parziale. È inoltre possibile fare riferimento alle altre specializzazioni o alle specializzazioni parziali del modello con gli argomenti di modello appropriati.  
  
## <a name="example"></a>Esempio

 Nel codice riportato di seguito viene illustrato che il nome A del modello della classe viene interpretato in modo diverso nell'ambito di una specializzazione o di una specializzazione parziale.  
  
```cpp
// template_name_resolution3.cpp  
// compile with: /c  
template <class T> class A {  
   A* a1;   // A refers to A<T>  
   A<int>* a2;  // A<int> refers to a specialization of A.  
   A<T*>* a3;   // A<T*> refers to the partial specialization A<T*>.  
};  
  
template <class T> class A<T*> {  
   A* a4; // A refers to A<T*>.  
};  
  
template<> class A<int> {  
   A* a5; // A refers to A<int>.  
};  
```  
  
## <a name="example"></a>Esempio

 In caso di un conflitto di nomi tra un parametro di modello e un altro oggetto, il parametro di modello può o non essere nascosto. Le regole seguenti consentiranno di determinare la precedenza.  
  
 Il parametro di modello si trova nell'ambito a partire dal punto in cui viene visualizzato per la prima volta fino alla fine della classe o del modello di funzione. Se il nome viene di nuovo visualizzato nell'elenco degli argomenti di modello o nell'elenco delle classi base, si riferisce allo stesso tipo. In C++ standard, nessun altro nome identico al parametro di modello può essere dichiarato nello stesso ambito. Un'estensione Microsoft consente di ridefinire il parametro di modello nell'ambito del modello. Nell'esempio riportato di seguito viene illustrato l'utilizzo del parametro di modello nella specifica di base di un modello di classe.  
  
```cpp
// template_name_resolution4.cpp  
// compile with: /EHsc  
template <class T>  
class Base1 {};  
  
template <class T>  
class Derived1 : Base1<T> {};  
  
int main() {  
   // Derived1<int> d;  
}  
```  
  
## <a name="example"></a>Esempio

 Nel definire le funzioni membro di un modello all'esterno del modello di classe, è possibile utilizzare un nome del parametro di modello diverso. Se la definizione di funzione membro di modello utilizza un nome diverso per il parametro di modello rispetto a quello utilizzato dalla dichiarazione e il nome utilizzato nella definizione è in conflitto con un altro membro della dichiarazione, il membro della dichiarazione di modello ha la precedenza.  
  
```cpp
// template_name_resolution5.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
template <class T> class C {  
public:  
   struct Z {  
      Z() { cout << "Z::Z()" << endl; }  
   };  
   void f();  
};  
  
template <class Z>  
void C<Z>::f() {  
   // Z refers to the struct Z, not to the template arg;  
   // Therefore, the constructor for struct Z will be called.  
   Z z;  
}  
  
int main() {  
   C<int> c;  
   c.f();  
}  
```  
  
```Output  
Z::Z()  
```  
  
## <a name="example"></a>Esempio

 Quando si definisce una funzione o una funzione membro di modello all'esterno dello spazio dei nomi in cui è stato dichiarato il modello, l'argomento di modello ha la precedenza sui nomi degli altri membri dello spazio dei nomi.  
  
```cpp
// template_name_resolution6.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
namespace NS {  
   void g() { cout << "NS::g" << endl; }  
  
   template <class T> struct C {  
      void f();  
      void g() { cout << "C<T>::g" << endl; }  
   };  
};  
  
template <class T>  
void NS::C<T>::f() {  
   g(); // C<T>::g, not NS::g  
};  
  
int main() {  
   NS::C<int> c;  
   c.f();  
}  
```  
  
```Output  
C<T>::g  
```  
  
## <a name="example"></a>Esempio

 Nelle definizioni esterne alla dichiarazione della classe di modello, se una classe di modello dispone di una classe base che non dipende da un argomento di modello e se la classe base o uno dei suoi membri hanno lo stesso nome di un argomento di modello, la classe base o il nome del membro nascondono l'argomento di modello.  
  
```cpp
// template_name_resolution7.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
struct B {  
   int i;  
   void print() { cout << "Base" << endl; }  
};  
  
template <class T, int i> struct C : public B {  
   void f();  
};  
  
template <class B, int i>  
void C<B, i>::f() {  
   B b;   // Base class b, not template argument.  
   b.print();  
   i = 1; // Set base class's i to 1.  
}  
  
int main() {  
   C<int, 1> c;  
   c.f();  
   cout << c.i << endl;  
}  
```  
  
```Output  
Base  
1  
```  
  
## <a name="see-also"></a>Vedere anche

 [Risoluzione dei nomi](../cpp/templates-and-name-resolution.md)
