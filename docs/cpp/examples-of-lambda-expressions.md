---
title: "Esempi di espressioni lambda | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "espressioni lambda [C++], esempi"
ms.assetid: 52506b15-0771-4190-a966-2f302049ca86
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# Esempi di espressioni lambda
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo articolo illustra come usare le espressioni lambda nei programmi.  Per una panoramica delle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  Per altre informazioni sulla struttura di un'espressione lambda, vedere [Sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md).  
  
##  <a name="top"></a> Contenuto dell'articolo  
 [Dichiarazioni di espressioni lambda](#declaringLambdaExpressions)  
  
 [Chiamata di espressioni lambda](#callingLambdaExpressions)  
  
 [Annidamento di espressioni lambda](#nestingLambdaExpressions)  
  
 [Funzioni lambda di ordine superiore](#higherOrderLambdaExpressions)  
  
 [Uso di un'espressione lambda in una funzione](#methodLambdaExpressions)  
  
 [Uso di espressioni lambda con modelli](#templateLambdaExpressions)  
  
 [Gestione delle eccezioni](#ehLambdaExpressions)  
  
 [Uso di espressioni lambda con tipi gestiti (C++/CLI)](#managedLambdaExpressions)  
  
##  <a name="declaringLambdaExpressions"></a> Dichiarazioni di espressioni lambda  
  
### Esempio 1  
 Poiché un'espressione lambda è tipizzata, è possibile assegnarla a una variabile `auto` o a un oggetto [funzione](../standard-library/function-class.md), come illustrato di seguito:  
  
### Codice  
  
```cpp  
// declaring_lambda_expressions1.cpp  
// compile with: /EHsc /W4  
#include <functional>  
#include <iostream>  
  
int main()  
{  
  
    using namespace std;  
  
    // Assign the lambda expression that adds two numbers to an auto variable.  
    auto f1 = [](int x, int y) { return x + y; };  
  
    cout << f1(2, 3) << endl;  
  
    // Assign the same lambda expression to a function object.  
    function<int(int, int)> f2 = [](int x, int y) { return x + y; };  
  
    cout << f2(3, 4) << endl;  
}  
```  
  
### Output  
  **5**  
**7**   
### Note  
 Per altre informazioni, vedere [auto](../cpp/auto-cpp.md), [Classe function](../standard-library/function-class.md) e [Chiamata di funzione](../cpp/function-call-cpp.md).  
  
 Sebbene le espressioni lambda vengano dichiarate soprattutto nel corpo di una funzione, è possibile dichiararle in qualsiasi posizione sia possibile inizializzare una variabile.  
  
### Esempio 2  
 Il compilatore Visual C\+\+ associa un'espressione lambda alle relative variabili acquisite quando viene dichiarata un'espressione e non quando viene chiamata l'espressione.  L'esempio seguente illustra un'espressione lambda che acquisisce la variabile locale `i` per valore e la variabile locale `j` per riferimento.  Poiché l'espressione lambda acquisisce `i` per valore, la riassegnazione successiva di `i` nel programma non influisce sul risultato dell'espressione.  Tuttavia, poiché l'espressione lambda acquisisce `j` per riferimento, la riassegnazione di `j` influisce sul risultato dell'espressione.  
  
### Codice  
  
```cpp  
// declaring_lambda_expressions2.cpp  
// compile with: /EHsc /W4  
#include <functional>  
#include <iostream>  
  
int main()  
{  
   using namespace std;  
  
   int i = 3;  
   int j = 5;  
  
   // The following lambda expression captures i by value and  
   // j by reference.  
   function<int (void)> f = [i, &j] { return i + j; };  
  
   // Change the values of i and j.  
   i = 22;  
   j = 44;  
  
   // Call f and print its result.  
   cout << f() << endl;  
}  
```  
  
### Output  
  **47** \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="callingLambdaExpressions"></a> Chiamata di espressioni lambda  
 È possibile chiamare un'espressione lambda immediatamente, come illustrato nel frammento di codice seguente.  Il secondo frammento illustra come passare un'espressione lambda come argomento agli algoritmi STL \(Standard Template Library\) come `find_if`.  
  
### Esempio 1  
 L'esempio seguente dichiara un'espressione lambda che restituisce la somma di due interi e chiama l'espressione immediatamente con gli argomenti `5` e `4`:  
  
### Codice  
  
```cpp  
// calling_lambda_expressions1.cpp  
// compile with: /EHsc  
#include <iostream>  
  
int main()  
{  
   using namespace std;  
   int n = [] (int x, int y) { return x + y; }(5, 4);  
   cout << n << endl;  
}  
```  
  
### Output  
  **9**   
### Esempio 2  
 L'esempio seguente passa un'espressione lambda come argomento alla funzione `find_if`.  L'espressione lambda restituisce `true` se il relativo parametro è un numero pari.  
  
### Codice  
  
```cpp  
// calling_lambda_expressions2.cpp  
// compile with: /EHsc /W4  
#include <list>  
#include <algorithm>  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    // Create a list of integers with a few initial elements.  
    list<int> numbers;  
    numbers.push_back(13);  
    numbers.push_back(17);  
    numbers.push_back(42);  
    numbers.push_back(46);  
    numbers.push_back(99);  
  
    // Use the find_if function and a lambda expression to find the   
    // first even number in the list.  
    const list<int>::const_iterator result =   
        find_if(numbers.begin(), numbers.end(),[](int n) { return (n % 2) == 0; });  
  
    // Print the result.  
    if (result != numbers.end()) {  
        cout << "The first even number in the list is " << *result << "." << endl;  
    } else {  
        cout << "The list contains no even numbers." << endl;  
    }  
}  
```  
  
### Output  
  **Il primo numero pari nell'elenco è 42.**   
### Note  
 Per altre informazioni sulla funzione `find_if`, vedere [find\_if](../Topic/find_if.md).  Per altre informazioni sulle funzioni STL che eseguono algoritmi comuni, vedere [\<algorithm\>](../standard-library/algorithm.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="nestingLambdaExpressions"></a> Annidamento di espressioni lambda  
  
### Esempio  
 È possibile annidare un'espressione lambda all'interno di un'altra, come illustrato nell'esempio.  L'espressione lambda interna moltiplica il relativo argomento per 2 e restituisce il risultato.  L'espressione lambda esterna chiama l'espressione lambda interna con il relativo argomento e aggiunge 3 al risultato.  
  
### Codice  
  
```cpp  
// nesting_lambda_expressions.cpp  
// compile with: /EHsc /W4  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    // The following lambda expression contains a nested lambda  
    // expression.  
    int timestwoplusthree = [](int x) { return [](int y) { return y * 2; }(x) + 3; }(5);  
  
    // Print the result.  
    cout << timestwoplusthree << endl;  
}  
  
```  
  
### Output  
  **13**   
### Note  
 In questo esempio `[](int y) { return y * 2; }` è l'espressione lambda annidata.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="higherOrderLambdaExpressions"></a> Funzioni lambda di ordine superiore  
  
### Esempio  
 Molti linguaggi di programmazione supportano il concetto di *funzione di ordine superiore.* Una funzione di ordine superiore è un'espressione lambda che accetta un'altra espressione lambda come argomento o che restituisce un'espressione lambda.  È possibile usare la classe [function](../standard-library/function-class.md) affinché un'espressione lambda C\+\+ assuma lo stesso comportamento di una funzione di ordine superiore.  L'esempio seguente illustra un'espressione lambda che restituisce un oggetto `function` e un'espressione lambda che accetta un oggetto `function` come argomento.  
  
### Codice  
  
```cpp  
// higher_order_lambda_expression.cpp  
// compile with: /EHsc /W4  
#include <iostream>  
#include <functional>  
  
int main()  
{  
    using namespace std;  
  
    // The following code declares a lambda expression that returns   
    // another lambda expression that adds two numbers.   
    // The returned lambda expression captures parameter x by value.  
    auto addtwointegers = [](int x) -> function<int(int)> {   
        return [=](int y) { return x + y; };   
    };  
  
    // The following code declares a lambda expression that takes another  
    // lambda expression as its argument.  
    // The lambda expression applies the argument z to the function f  
    // and multiplies by 2.  
    auto higherorder = [](const function<int(int)>& f, int z) {   
        return f(z) * 2;   
    };  
  
    // Call the lambda expression that is bound to higherorder.   
    auto answer = higherorder(addtwointegers(7), 8);  
  
    // Print the result, which is (7+8)*2.  
    cout << answer << endl;  
}  
  
```  
  
### Output  
  **30** \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="methodLambdaExpressions"></a> Uso di un'espressione lambda in una funzione  
  
### Esempio  
 È possibile usare le espressioni lambda nel corpo di una funzione.  L'espressione lambda può accedere a qualsiasi funzione o membro dati a cui può accedere la funzione contenitrice.  È possibile acquisire in modo esplicito o implicito il puntatore `this` per fornire l'accesso alle funzioni e ai membri dati della classe contenitrice.  
  
 È possibile usare il puntatore `this` in modo esplicito in una funzione, come illustrato di seguito:  
  
```cpp  
void ApplyScale(const vector<int>& v) const  
{  
   for_each(v.begin(), v.end(),   
      [this](int n) { cout << n * _scale << endl; });  
}  
```  
  
 È inoltre possibile acquisire il puntatore `this` in modo implicito:  
  
```  
void ApplyScale(const vector<int>& v) const  
{  
   for_each(v.begin(), v.end(),   
      [=](int n) { cout << n * _scale << endl; });  
}  
```  
  
 L'esempio seguente illustra la classe `Scale`, che incapsula un valore di scala.  
  
```cpp  
// function_lambda_expression.cpp  
// compile with: /EHsc /W4  
#include <algorithm>  
#include <iostream>  
#include <vector>  
  
using namespace std;  
  
class Scale  
{  
public:  
    // The constructor.  
    explicit Scale(int scale) : _scale(scale) {}  
  
    // Prints the product of each element in a vector object   
    // and the scale value to the console.  
    void ApplyScale(const vector<int>& v) const  
    {  
        for_each(v.begin(), v.end(), [=](int n) { cout << n * _scale << endl; });  
    }  
  
private:  
    int _scale;  
};  
  
int main()  
{  
    vector<int> values;  
    values.push_back(1);  
    values.push_back(2);  
    values.push_back(3);  
    values.push_back(4);  
  
    // Create a Scale object that scales elements by 3 and apply  
    // it to the vector object. Does not modify the vector.  
    Scale s(3);  
    s.ApplyScale(values);  
}  
  
```  
  
### Output  
  **3**  
**6**  
**9**  
**12**   
### Note  
 La funzione `ApplyScale` usa un'espressione lambda per stampare il prodotto del valore di scala e ogni elemento in un oggetto `vector`.  L'espressione lambda acquisisce in modo implicito il puntatore `this` in modo che possa accedere al membro `_scale`.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="templateLambdaExpressions"></a> Uso di espressioni lambda con modelli  
  
### Esempio  
 Poiché le espressioni lambda sono tipizzate, è possibile usarle con i modelli C\+\+.  L'esempio seguente illustra le funzioni `negate_all` e `print_all`.  La funzione `negate_all` applica l'`operator-` unario a ogni elemento dell'oggetto `vector`.  La funzione `print_all` visualizza ogni elemento nell'oggetto `vector` nella console.  
  
### Codice  
  
```cpp  
// template_lambda_expression.cpp  
// compile with: /EHsc  
#include <vector>  
#include <algorithm>  
#include <iostream>  
  
using namespace std;  
  
// Negates each element in the vector object. Assumes signed data type.  
template <typename T>  
void negate_all(vector<T>& v)  
{  
    for_each(v.begin(), v.end(), [](T& n) { n = -n; });  
}  
  
// Prints to the console each element in the vector object.  
template <typename T>  
void print_all(const vector<T>& v)  
{  
    for_each(v.begin(), v.end(), [](const T& n) { cout << n << endl; });  
}  
  
int main()  
{  
    // Create a vector of signed integers with a few elements.  
    vector<int> v;  
    v.push_back(34);  
    v.push_back(-43);  
    v.push_back(56);  
  
    print_all(v);  
    negate_all(v);  
    cout << "After negate_all():" << endl;  
    print_all(v);  
}  
  
```  
  
### Output  
  **34**  
**\-43**  
**56**  
**Dopo negate\_all\(\):**  
**\-34**  
**43**  
**\-56**   
### Note  
 Per altre informazioni sui modelli C\+\+, vedere [Modelli](../cpp/templates-cpp.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="ehLambdaExpressions"></a> Gestione delle eccezioni  
  
### Esempio  
 Il corpo di un'espressione lambda segue le regole per la gestione delle eccezioni strutturate \(SEH\) e la gestione delle eccezioni C\+\+.  È possibile gestire un'eccezione generata nel corpo di un'espressione lambda o rinviare la gestione delle eccezioni all'ambito contenitore.  L'esempio seguente usata la funzione `for_each` e un'espressione lambda per riempire un oggetto `vector` con i valori di un altro oggetto.  Viene usato un blocco `try`\/`catch` per gestire l'accesso non valido al primo vettore.  
  
### Codice  
  
```cpp  
// eh_lambda_expression.cpp  
// compile with: /EHsc /W4  
#include <vector>  
#include <algorithm>  
#include <iostream>  
using namespace std;  
  
int main()  
{  
    // Create a vector that contains 3 elements.  
    vector<int> elements(3);  
  
    // Create another vector that contains index values.  
    vector<int> indices(3);  
    indices[0] = 0;  
    indices[1] = -1; // This is not a valid subscript. It will trigger an exception.  
    indices[2] = 2;  
  
    // Use the values from the vector of index values to   
    // fill the elements vector. This example uses a   
    // try/catch block to handle invalid access to the   
    // elements vector.  
    try  
    {  
        for_each(indices.begin(), indices.end(), [&](int index) {   
            elements.at(index) = index;   
        });  
    }  
    catch (const out_of_range& e)  
    {  
        cerr << "Caught '" << e.what() << "'." << endl;  
    };  
}  
```  
  
### Output  
  **Caught 'invalid vector\<T\> subscript'.**   
### Note  
 Per altre informazioni sulla gestione delle eccezioni, vedere [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md).  
  
 \[[Contenuto dell'articolo](#top)\]  
  
##  <a name="managedLambdaExpressions"></a> Uso di espressioni lambda con tipi gestiti \(C\+\+\/CLI\)  
  
### Esempio  
 La clausola di acquisizione di un'espressione lambda non può contenere una variabile che dispone di un tipo gestito.  È tuttavia possibile passare un argomento che dispone di un tipo gestito all'elenco di parametri di un'espressione lambda.  L'esempio seguente contiene un'espressione lambda che acquisisce la variabile locale non gestita `ch` per valore e accetta un oggetto <xref:System.String?displayProperty=fullName> come parametro.  
  
### Codice  
  
```cpp  
// managed_lambda_expression.cpp  
// compile with: /clr  
using namespace System;  
  
int main()  
{  
    char ch = '!'; // a local unmanaged variable  
  
    // The following lambda expression captures local variables  
    // by value and takes a managed String object as its parameter.  
    [=](String ^s) {   
        Console::WriteLine(s + Convert::ToChar(ch));   
    }("Hello");  
}  
  
```  
  
### Output  
  **Hello\!**   
### Note  
 È anche possibile usare espressioni lambda con la libreria STL\/CLR.  Per altre informazioni, vedere [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md).  
  
> [!IMPORTANT]
>  Le espressioni lambda non sono supportate nelle entità gestite di Common Language Runtime \(CLR\) elencate di seguito: `ref class`, `ref struct`, `value class` o `value struct`.  
  
 \[[Contenuto dell'articolo](#top)\]  
  
## Vedere anche  
 [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md)   
 [Sintassi delle espressioni lambda](../cpp/lambda-expression-syntax.md)   
 [auto](../cpp/auto-cpp.md)   
 [Classe function](../standard-library/function-class.md)   
 [find\_if](../Topic/find_if.md)   
 [\<algorithm\>](../standard-library/algorithm.md)   
 [Chiamata di funzione](../cpp/function-call-cpp.md)   
 [Modelli](../cpp/templates-cpp.md)   
 [Gestione delle eccezioni](../cpp/exception-handling-in-visual-cpp.md)   
 [Libreria STL\/CLR](../dotnet/stl-clr-library-reference.md)