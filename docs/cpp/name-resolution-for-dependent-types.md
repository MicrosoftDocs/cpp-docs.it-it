---
title: "Risoluzione dei nomi per tipi dipendenti | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
ms.assetid: 34066bb4-0c79-4fd8-bda7-539a60a277ab
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Risoluzione dei nomi per tipi dipendenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Utilizzare **typename** per i nomi completi nelle definizioni dei modelli per indicare al compilatore che il nome completo specificato identifica un tipo.  Per ulteriori informazioni, vedere [typename](../cpp/typename.md).  
  
```cpp  
// template_name_resolution1.cpp  
#include <stdio.h>  
template <class T> class X  
{  
public:  
   void f(typename T::myType* mt) {}  
};  
  
class Yarg  
{  
public:  
   struct myType { };  
};  
  
int main()  
{  
   X<Yarg> x;  
   x.f(new Yarg::myType());  
   printf("Name resolved by using typename keyword.");  
}  
```  
  
### Output  
  
```  
Name resolved by using typename keyword.  
```  
  
 La ricerca del nome per i nomi dipendenti esamina i nomi sia dal contesto della definizione del modello \(nell'esempio seguente, questo contesto cercherebbe `myFunction(char)`\) che dal contesto della creazione di un'istanza del modello.  Nell'esempio seguente, viene creata un'istanza del modello; pertanto, `MyNamespace::myFunction` è visibile dal momento della creazione delle istanze e viene selezionato come corrispondenza ottimale.  Se `MyNamespace::myFunction` è stato rinominato, in alternativa viene chiamato `myFunction(char)`.  
  
 Tutti i nomi vengono risolti come se fossero nomi dipendenti.  Tuttavia, è consigliabile utilizzare nomi completi se è possibile che si verifichi un conflitto.  
  
```cpp  
//template_name_resolution2.cpp  
// compile with: /EHsc  
#include <iostream>  
using namespace std;  
  
void myFunction(char)  
{  
   cout << "Char myFunction" << endl;  
}  
  
template <class T> class Class1  
{  
public:  
   Class1(T i)  
   {  
      // If replaced with myFunction(1), myFunction(char)  
      // will be called  
      myFunction(i);  
}  
};  
  
namespace MyNamespace  
{  
   void myFunction(int)  
   {  
      cout << "Int MyNamespace::myFunction" << endl;  
   }  
};  
  
using namespace MyNamespace;  
  
int main()  
{  
   Class1<int>* c1 = new Class1<int>(100);  
}  
```  
  
### Output  
  
```  
Int MyNamespace::myFunction  
```  
  
### Risoluzione dell'ambiguità del modello  
 [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] applica le regole standard C\+\+98\/03\/11 per la risoluzione dell'ambiguità con la parola chiave "template".  Nell'esempio seguente, [!INCLUDE[cpp_dev10_long](../build/includes/cpp_dev10_long_md.md)] accetta sia le righe non conformi che quelle conformi. [!INCLUDE[cpp_dev11_long](../build/includes/cpp_dev11_long_md.md)] accetta solo le righe conformi.  
  
```cpp  
#include <iostream>  
#include <ostream>  
#include <typeinfo>  
using namespace std;  
  
template <typename T> struct Allocator {  
    template <typename U> struct Rebind {  
        typedef Allocator<U> Other;  
    };  
};  
  
template <typename X, typename AY> struct Container {  
    #if defined(NONCONFORMANT)  
        typedef typename AY::Rebind<X>::Other AX; // nonconformant  
    #elif defined(CONFORMANT)  
        typedef typename AY::template Rebind<X>::Other AX; // conformant  
    #else  
        #error Define NONCONFORMANT or CONFORMANT.  
    #endif  
};  
  
int main() {  
    cout << typeid(Container<int, Allocator<float>>::AX).name() << endl;  
}  
```  
  
 La conformità alle regole di risoluzione ambiguità è necessaria perché, per impostazione predefinita, in C\+\+ si presuppone che `AY::Rebind` non sia un modello e quindi il compilatore interpreta "`<`" come minore di.  È necessario indicare che `Rebind` è un modello in modo da poter analizzare correttamente "`<`" come parentesi angolare.  
  
## Vedere anche  
 [Risoluzione di nomi](../cpp/templates-and-name-resolution.md)