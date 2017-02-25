---
title: "Sintassi delle espressioni lambda | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "VCF1 Lambda_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni lambda [C++], sintassi"
ms.assetid: 5d6154a4-f34d-4a15-970d-7e7de45f54e9
caps.latest.revision: 26
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# Sintassi delle espressioni lambda
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono descritti la sintassi e gli elementi strutturali delle espressioni lambda.  Per una descrizione delle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  
  
## Oggetti funzioneLambda  
 Quando si scrive codice, probabilmente si usano puntatori a funzione e oggetti funzione per risolvere problemi ed eseguire calcoli, in particolare quando si usano gli [algoritmi STL](../cpp/algorithms-modern-cpp.md).  I puntatori a funzione e gli oggetti funzione presentano vantaggi e svantaggi: i puntatori a funzione, ad esempio, presentano un sovraccarico sintattico minimo, ma non mantengono lo stato interno a un ambito, mentre gli oggetti funzione possono mantenere lo stato, ma richiedono il sovraccarico sintattico di una definizione di classe.  
  
 Un'espressione lambda combina i vantaggi dei puntatori a funzione e degli oggetti funzione, ma non gli svantaggi.  Analogamente a un oggetto funzione, un'espressione lambda è flessibile e può mantenere lo stato, ma a differenza di un oggetto funzione, la sua sintassi compressa non richiede una definizione di classe esplicita.  Usando le espressioni lambda, è possibile scrivere codice meno complesso e meno soggetto agli errori del codice per un oggetto funzione equivalente.  
  
 Negli esempi seguenti viene confrontato l'utilizzo di un'espressione lambda all'utilizzo di un oggetto funzione.  Nel primo esempio viene usata un'espressione lambda per mostrare sulla console se ogni elemento di un oggetto `vector` è pari o dispari.  Nel secondo esempio viene usato un oggetto funzione per eseguire la stessa attività.  
  
## Esempio 1: Utilizzo di un'espressione lambda  
 L'esempio passa un'espressione lambda alla funzione `for_each`.  L'espressione lambda stampa un risultato che indica se ogni elemento in un oggetto `vector` è pari o dispari.  
  
### Codice  
  
```cpp  
// even_lambda.cpp  
// compile with: cl /EHsc /nologo /W4 /MTd  
#include <algorithm>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
int main()   
{  
   // Create a vector object that contains 10 elements.  
   vector<int> v;  
   for (int i = 1; i < 10; ++i) {  
      v.push_back(i);  
   }  
  
   // Count the number of even numbers in the vector by   
   // using the for_each function and a lambda.  
   int evenCount = 0;  
   for_each(v.begin(), v.end(), [&evenCount] (int n) {  
      cout << n;  
      if (n % 2 == 0) {  
         cout << " is even " << endl;  
         ++evenCount;  
      } else {  
         cout << " is odd " << endl;  
      }  
   });  
  
   // Print the count of even numbers to the console.  
   cout << "There are " << evenCount   
        << " even numbers in the vector." << endl;  
}  
```  
  
### Output  
  **1 è dispari**  
**2 è pari**  
**3 è dispari**  
**4 è pari**  
**5 è dispari**  
**6 è pari**  
**7 è dispari**  
**8 è pari**  
**9 è dispari**  
**Il vettore contiene 4 numeri pari.**   
### Commenti  
 Nell'esempio il terzo argomento passato alla funzione `for_each` è un'espressione lambda.  La parte `[&evenCount]` specifica la clausola di acquisizione dell'espressione, `(int n)` specifica l'elenco di parametri, mentre la parte rimanente specifica il corpo dell'espressione.  
  
## Esempio 2: Utilizzo di un oggetto funzione  
 Talvolta un'espressione lambda potrebbe risultare troppo complessa da gestire per ampliare l'esempio precedente.  Nell'esempio seguente viene usato un oggetto funzione, anziché un'espressione lambda, con la funzione `for_each` per produrre gli stessi risultati dell'Esempio 1.  In entrambi gli esempi viene memorizzato il conteggio dei numeri pari in un oggetto `vector`.  Per mantenere lo stato dell'operazione, la classe `FunctorClass` archivia la variabile `m_evenCount` per riferimento come variabile membro.  Per eseguire l'operazione, `FunctorClass` implementa l'operatore di chiamata di funzione, `operator()`.  Il compilatore di Visual C\+\+ genera codice analogo per dimensioni e prestazioni al codice dell'espressione lambda dell'Esempio 1.  Per un problema di base simile a quello presentato in questo articolo, la progettazione più semplice delle espressioni lambda è probabilmente preferibile alla progettazione dell'oggetto funzione.  Se tuttavia si prevede che la funzionalità possa richiedere un'espansione significativa in futuro, usare la progettazione dell'oggetto funzione in modo che la manutenzione del codice risulti più facile.  
  
 Per altre informazioni su `operator()`, vedere [Chiamata di funzione](../cpp/function-call-cpp.md).  Per altre informazioni sulla funzione `for_each`, vedere [for\_each](../Topic/for_each.md).  
  
### Codice  
  
```cpp  
// even_functor.cpp  
// compile with: /EHsc  
#include <algorithm>  
#include <iostream>  
#include <vector>  
using namespace std;  
  
class FunctorClass  
{  
public:  
    // The required constructor for this example.  
    explicit FunctorClass(int& evenCount)  
        : m_evenCount(evenCount) { }  
  
    // The function-call operator prints whether the number is  
    // even or odd. If the number is even, this method updates  
    // the counter.  
    void operator()(int n) const {  
        cout << n;  
  
        if (n % 2 == 0) {  
            cout << " is even " << endl;  
            ++m_evenCount;  
        } else {  
            cout << " is odd " << endl;  
        }  
    }  
  
private:  
    // Default assignment operator to silence warning C4512.  
    FunctorClass& operator=(const FunctorClass&);  
  
    int& m_evenCount; // the number of even variables in the vector.  
};  
  
int main()  
{  
    // Create a vector object that contains 10 elements.  
    vector<int> v;  
    for (int i = 1; i < 10; ++i) {  
        v.push_back(i);  
    }  
  
    // Count the number of even numbers in the vector by   
    // using the for_each function and a function object.  
    int evenCount = 0;  
    for_each(v.begin(), v.end(), FunctorClass(evenCount));  
  
    // Print the count of even numbers to the console.  
    cout << "There are " << evenCount  
        << " even numbers in the vector." << endl;  
}  
  
```  
  
## Output  
  **1 è dispari**  
**2 è pari**  
**3 è dispari**  
**4 è pari**  
**5 è dispari**  
**6 è pari**  
**7 è dispari**  
**8 è pari**  
**9 è dispari**  
**Il vettore contiene 4 numeri pari.**   
## Vedere anche  
 [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)   
 [Esempi di espressioni lambda](../cpp/examples-of-lambda-expressions.md)   
 [generare](../Topic/generate.md)   
 [generate\_n](../Topic/generate_n.md)   
 [for\_each](../Topic/for_each.md)   
 [Specifiche di eccezioni \(generazione\)](../cpp/exception-specifications-throw-cpp.md)   
 [Avviso del compilatore \(livello 1\) C4297](../error-messages/compiler-warnings/compiler-warning-level-1-c4297.md)   
 [Modificatori specifici Microsoft](../cpp/microsoft-specific-modifiers.md)