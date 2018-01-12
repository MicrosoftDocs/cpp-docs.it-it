---
title: Basato su intervallo per l'istruzione (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
ms.assetid: 5750ba1d-ba48-4236-a923-e32de8345c2d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 43ded324227878b44f997e6539e060145ad0fb66
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="range-based-for-statement-c"></a>Istruzione for basata su intervallo (C++)
Esegue `statement` ripetutamente e in sequenza per ogni elemento in `expression`.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      for ( for-range-declaration : expression )  
   statement   
```  
  
## <a name="remarks"></a>Note  
 Utilizzare basata sull'intervallo `for` istruzione per costruire i cicli che devono essere eseguite tramite un "intervallo", che viene definito come un elemento che è possibile scorrere, ad esempio, `std::vector`, o qualsiasi altra sequenza della libreria Standard C++ il cui intervallo è definito da un `begin()` e `end()`. Il nome dichiarato nella parte `for-range-declaration` è locale all'istruzione `for` e non può essere dichiarato nuovamente in `expression` o `statement`. Si noti che il [auto](../cpp/auto-cpp.md) in cui è preferibile utilizzare parole chiave di `for-range-declaration` parte dell'istruzione. 

 **Novità di Visual Studio 2017:** basato su intervallo per i cicli non sono più necessari che Begin () ed end () restituisce oggetti dello stesso tipo. Ciò consente a end() di restituire un oggetto sentinel come viene usato dagli intervalli in base alla definizione nella proposta Ranges-V3. Per altre informazioni, vedere il documento relativo alla [generalizzazione del ciclo for basato su intervallo](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0184r0.html) e la [libreria range-v3 su GitHub](https://github.com/ericniebler/range-v3).
  
 Questo codice viene illustrato come utilizzare basata sull'intervallo `for` cicli per scorrere una matrice e un vettore:  
  
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
  
    for( const auto &y : x ) { // Type inference by const reference.  
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
  
 Basato su intervallo `for` ciclo termina quando una di queste condizioni `statement` viene eseguita: un [interruzione](../cpp/break-statement-cpp.md), [restituire](../cpp/return-statement-cpp.md), o [goto](../cpp/goto-statement-cpp.md) a un'istruzione con etichetta all'esterno di basato su intervallo **per** ciclo. Oggetto [continuare](../cpp/continue-statement-cpp.md) istruzione in un intervallo basato su un `for` ciclo termina solo l'iterazione corrente.  
  
 Tenere presente questi concetti relativi al ciclo `for` basato su intervallo:  
  
-   Riconosce automaticamente le matrici.  
  
-   Riconosce i contenitori con `.begin()` e `.end()`.  
  
-   Utilizzare la ricerca dipendente dall'argomento `begin()` e `end()` per altri scopi.  
  
## <a name="see-also"></a>Vedere anche  
 [Automatico](../cpp/auto-cpp.md)   
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Istruzione while (C++)](../cpp/while-statement-cpp.md)   
 [Istruzione do-while (C++)](../cpp/do-while-statement-cpp.md)   
 [Istruzione for (C++)](../cpp/for-statement-cpp.md)