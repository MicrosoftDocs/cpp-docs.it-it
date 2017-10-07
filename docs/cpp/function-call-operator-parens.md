---
title: 'Operatore di chiamata di funzione: () | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- ( ) function call operator
- function calls, C++ functions
- () function call operator
- postfix operators [C++]
- function calls, operator
- functions [C++], function-call operator
- function call operator ()
ms.assetid: 50c92e59-a4bf-415a-a6ab-d66c679ee80a
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: bcd44b1c33488d4bbe4dac8bfe541dfa04f4709a
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="function-call-operator-"></a>Operatore di chiamata di funzione: ()
Un'espressione di suffisso seguita dall'operatore di chiamata di funzione, **()**, specifica una chiamata di funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
postfix-expression   
( [argument-expression-list ] )  
```  
  
## <a name="remarks"></a>Note  
 Gli argomenti nell'operatore di chiamata di funzione sono uguali a zero o a più espressioni separate da virgole, ossia sono gli argomenti effettivi della funzione.  
  
 Il *postfix-expression* deve restituire un indirizzo della funzione (ad esempio, un identificatore di funzione o il valore di un puntatore a funzione), e *argument-expression-list* è un elenco di espressioni (separate dal punto e virgola) i cui valori (argomenti) vengono passati alla funzione. L'argomento *argument-expression-list* può essere vuoto.  
  
 Il *postfix-expression* deve essere uno dei seguenti tipi:  
  
-   Funzione che restituisce il tipo `T`. Una dichiarazione di esempio è  
  
    ```  
    T func( int i )  
    ```  
  
-   Puntatore a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è  
  
    ```  
    T (*func)( int i )  
    ```  
  
-   Riferimento a una funzione che restituisce il tipo `T`. Una dichiarazione di esempio è  
  
    ```  
    T (&func)(int i)  
    ```  
  
-   Deferenziazione della funzione puntatore a membro che restituisce il tipo `T`. Le chiamate di funzione di esempio sono  
  
    ```  
    (pObject->*pmf)();  
    (Object.*pmf)();  
    ```  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene chiamata la funzione della libreria standard `strcat_s` con tre argomenti:  
  
```  
// expre_Function_Call_Operator.cpp  
// compile with: /EHsc  
  
#include <iostream>  
#include <string>  
  
// C++ Standard Library name space  
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
  
```Output  
Welcome to C++  
```  
  
## <a name="function-call-results"></a>Risultati della chiamata di funzione  
 Una chiamata di funzione restituisce un r-value, a meno che la funzione non sia dichiarata come tipo di riferimento. Le funzioni con tipo restituito di riferimento restituiscono l-value e possono essere usate a sinistra di un'istruzione di assegnazione, come indicato di seguito:  
  
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
  
 Il codice precedente viene definita una classe denominata `Point`, che contengono dati privati, gli oggetti che rappresentano *x* e *y* coordinate. È necessario modificare tali oggetti e recuperare i relativi valori. Questo programma rappresenta una delle diverse progettazioni possibili per tale classe. Un'altra progettazione valida consiste nell'utilizzo delle funzioni `GetX` e `SetX` o `GetY` e `SetY`.  
  
 Le funzioni che restituiscono tipi di classe, i puntatori ai tipi di classe o i riferimenti ai tipi di classe possono essere usati come operando a sinistra degli operatori di selezione dei membri. Pertanto, il codice seguente è valido:  
  
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
  
 Le funzioni possono essere chiamate in modo ricorsivo. Per ulteriori informazioni sulle dichiarazioni di funzione, vedere [funzioni](functions-cpp.md). Materiale correlato è in [programma e collegamento](../cpp/program-and-linkage-cpp.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni di suffisso](../cpp/postfix-expressions.md)   
 [Operatori C++ predefiniti, precedenza e associazione](../cpp/cpp-built-in-operators-precedence-and-associativity.md)   
 [Chiamata di funzione](../c-language/function-call-c.md)   

