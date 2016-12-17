---
title: "Operatore di chiamata di funzione: () | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "( ) (operatore di chiamata di funzioni)"
  - "() (operatore di chiamata di funzioni)"
  - "operatore di chiamata di funzioni ( )"
  - "chiamate di funzione, funzioni C++"
  - "chiamate di funzione, operatore"
  - "funzioni [C++], operatore di chiamata di funzioni"
  - "operatori suffissi"
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
caps.latest.revision: 14
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore di chiamata di funzione: ()
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un argomento forma espressione\-suffisso seguito dall'operatore di chiamata di funzione, **\( \)**, specifica una chiamata di funzione.  
  
## Sintassi  
  
```  
  
postfix-expression   
( [argument-expression-list ] )  
```  
  
## Note  
 Gli argomenti nell'operatore di chiamata di funzione sono uguali a zero o a più espressioni separate da virgole, ossia sono gli argomenti effettivi della funzione.  
  
 L'elemento *postfix\-expression* deve restituire un indirizzo della funzione \(ad esempio un identificatore di funzione o il valore di un puntatore a funzione\) e *argument\-expression\-list* è un elenco di espressioni separate da virgole, i cui valori \(argomenti\) vengono passati alla funzione.  L'argomento *argument\-expression\-list* può essere vuoto.  
  
 L'argomento *postfix\-expression* deve essere di uno dei tipi seguenti:  
  
-   Funzione che restituisce il tipo `T`.  Una dichiarazione di esempio è  
  
    ```  
    T func( int i )  
    ```  
  
-   Puntatore a una funzione che restituisce il tipo `T`.  Una dichiarazione di esempio è  
  
    ```  
    T (*func)( int i )  
    ```  
  
-   Riferimento a una funzione che restituisce il tipo `T`.  Una dichiarazione di esempio è  
  
    ```  
    T (&func)(int i)  
    ```  
  
-   Deferenziazione della funzione puntatore a membro che restituisce il tipo `T`.  Le chiamate di funzione di esempio sono  
  
    ```  
    (pObject->*pmf)();  
    (Object.*pmf)();  
    ```  
  
## Esempio  
 Nell'esempio seguente viene chiamata la funzione della libreria standard `strcat_s` con tre argomenti:  
  
```  
// expre_Function_Call_Operator.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string>  
  
// STL name space  
using namespace std;  
  
int main()  
{  
    enum  
    {  
        sizeOfBuffer = 20  
    };  
  
    char s1[ sizeOfBuffer ] = "Welcome to ";  
    char s2[ ] = "C++";  
  
    strcat_s( s1, sizeOfBuffer, s2 );  
  
    cout << s1 << endl;  
}  
```  
  
  **Introduzione a C\+\+**   
## Risultati della chiamata di funzione  
 Una chiamata di funzione restituisce un r\-value, a meno che la funzione non sia dichiarata come tipo di riferimento.  Le funzioni con tipo restituito di riferimento restituiscono l\-value e possono essere usate a sinistra di un'istruzione di assegnazione, come indicato di seguito:  
  
```  
// expre_Function_Call_Results.cpp  
// compile with: /EHsc  
#include <iostream>  
class Point  
{  
public:  
    // Define "accessor" functions as  
    // reference types.  
    unsigned& x() { return _x; }  
    unsigned& y() { return _y; }  
private:  
    unsigned _x;  
    unsigned _y;  
};  
  
using namespace std;  
int main()  
{  
    Point ThePoint;  
  
    ThePoint.x() = 7;           // Use x() as an l-value.  
    unsigned y = ThePoint.y();  // Use y() as an r-value.  
  
    // Use x() and y() as r-values.  
    cout << "x = " << ThePoint.x() << "\n"  
         << "y = " << ThePoint.y() << "\n";  
}  
```  
  
 Nel codice precedente viene definita una classe denominata `Point`, contenente oggetti dati privati che rappresentano le coordinate *x* e *y*.  È necessario modificare tali oggetti e recuperare i relativi valori.  Questo programma rappresenta una delle diverse progettazioni possibili per tale classe. Un'altra progettazione valida consiste nell'utilizzo delle funzioni `GetX` e `SetX` o `GetY` e `SetY`.  
  
 Le funzioni che restituiscono tipi di classe, i puntatori ai tipi di classe o i riferimenti ai tipi di classe possono essere usati come operando a sinistra degli operatori di selezione dei membri.  Pertanto, il codice seguente è valido:  
  
```  
// expre_Function_Results2.cpp  
class A {  
public:  
   A() {}  
   A(int i) {}  
   int SetA( int i ) {  
      return (I = i);  
   }  
  
   int GetA() {  
      return I;  
   }  
  
private:  
   int I;  
};  
  
A func1() {  
   A a = 0;  
   return a;  
}  
  
A* func2() {  
   A *a = new A();  
   return a;  
}  
  
A& func3() {  
   A *a = new A();  
   A &b = *a;  
   return b;  
}  
  
int main() {  
   int iResult = func1().GetA();  
   func2()->SetA( 3 );  
   func3().SetA( 7 );  
}  
```  
  
 Le funzioni possono essere chiamate in modo ricorsivo.  Per altre informazioni sulle dichiarazioni di funzione, vedere [Identificatori di funzione](../misc/function-specifiers.md) e [Funzioni membro](../misc/member-functions-cpp.md).  Per altro materiale correlato, vedere [Programma e collegamento](../cpp/program-and-linkage-cpp.md).  
  
## Vedere anche  
 [Espressioni in forma suffissa](../cpp/postfix-expressions.md)   
 [Operatori C\+\+](../misc/cpp-operators.md)   
 [Operatori C\+\+, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Chiamata di funzione](../c-language/function-call-c.md)   
 [\(NOTINBUILD\) Function Declarations](http://msdn.microsoft.com/it-it/3f9b4e14-60d2-47c1-acd8-4fa8fc988be7)