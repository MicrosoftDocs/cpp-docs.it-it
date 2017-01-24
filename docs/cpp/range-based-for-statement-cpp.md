---
title: "Istruzione for basata su intervallo (C++) | Microsoft Docs"
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
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
caps.latest.revision: 10
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione for basata su intervallo (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue `statement` ripetutamente e in sequenza per ogni elemento nella `expression`.  
  
## Sintassi  
  
```  
  
      for ( for-range-declaration : expression )  
   statement   
```  
  
## Note  
 Utilizzare all'istruzione basata su intervalli `for` per costruire i cicli che devono essere eseguite tramite un "intervallo", definito come qualcosa che sia possibile iterare—ad esempio `std::vector` o qualsiasi altra sequenza STL, la cui portata è definita da `begin()` e `end()`.  Il nome che è dichiarato nella parte `for-range-declaration` è locale all'istruzione `for` e non può essere dichiarato nuovamente in `expression` o `statement`.  Si noti che la parola chiave [auto](../cpp/auto-cpp.md) è preferibile nella parte dell'istruzione `for-range-declaration` .  
  
 Questo codice mostra come utilizzare un ciclo ad intervalli `for` per scorrere una matrice e un vettore:  
  
```cpp  
  
// range-based-for.cpp  
// compile by using: cl /EHsc /nologo /W4  
#include <iostream>  
#include <vector>  
using namespace std;  
  
int main()   
{  
    // Basic 10-element integer array.  
    int x[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };  
  
    // Range-based for loop to iterate through the array.  
    for( int y : x ) { // Access by value using a copy declared as a specific type.   
                       // Not preferred.  
        cout << y << " ";  
    }  
    cout << endl;  
  
    // The auto keyword causes type inference to be used. Preferred.  
  
    for( auto y : x ) { // Copy of 'x', almost always undesirable  
        cout << y << " ";  
    }  
    cout << endl;  
  
    for( auto &y : x ) { // Type inference by reference.  
        // Observes and/or modifies in-place. Preferred when modify is needed.  
        cout << y << " ";  
    }  
    cout << endl;  
  
    for( const auto &y : x ) { // Type inference by reference.  
        // Observes in-place. Preferred when no modify is needed.  
        cout << y << " ";  
    }  
    cout << endl;  
    cout << "end of integer array test" << endl;  
    cout << endl;  
  
    // Create a vector object that contains 10 elements.  
    vector<double> v;  
    for (int i = 0; i < 10; ++i) {  
        v.push_back(i + 0.14159);  
    }  
  
    // Range-based for loop to iterate through the vector, observing in-place.  
    for( const auto &j : v ) {  
        cout << j << " ";  
    }  
    cout << endl;  
    cout << "end of vector test" << endl;  
}  
  
```  
  
 L'output è il seguente:  
  
 `1 2 3 4 5 6 7 8 9 10`  
  
 `1 2 3 4 5 6 7 8 9 10`  
  
 `1 2 3 4 5 6 7 8 9 10`  
  
 `1 2 3 4 5 6 7 8 9 10`  
  
 `end of integer array test`  
  
 `0.14159 1.14159 2.14159 3.14159 4.14159 5.14159 6.14159 7.14159 8.14159 9.14159`  
  
 `end of vector test`  
  
 Un ciclo basato su intervallo `for` termina quando una di queste `statement` viene eseguita: [break](../cpp/break-statement-cpp.md), [return](../cpp/return-statement-cpp.md), o [goto](../cpp/goto-statement-cpp.md) ad un'istruzione con etichetta esterna al ciclo basato su intervallo **for**.  Un'istruzione [continue](../cpp/continue-statement-cpp.md) in un ciclo basato su intervallo `for` termina solo l'iterazione corrente.  
  
 Ricordarsi questi concetti relativi al ciclo basato su intervallo `for`:  
  
-   Riconosce automaticamente gli array.  
  
-   Riconosce i contenitori che hanno `.begin()` e `.end()`.  
  
-   Utilizzare la ricerca dipendente dall'argomento `begin()` e `end()` per altri scopi.  
  
## Vedere anche  
 [auto](../cpp/auto-cpp.md)   
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione while \(C\+\+\)](../cpp/while-statement-cpp.md)   
 [Istruzione do\-while \(C\+\+\)](../cpp/do-while-statement-cpp.md)   
 [Istruzione for \(C\+\+\)](../cpp/for-statement-cpp.md)