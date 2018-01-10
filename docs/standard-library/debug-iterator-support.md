---
title: Supporto degli iteratori di debug | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- Safe Libraries
- Safe Libraries, C++ Standard Library
- Safe C++ Standard Library
- C++ Standard Library, debug iterator support
- iterators, debug iterator support
- iterators, incompatible
- incompatible iterators
- debug iterator support
ms.assetid: f3f5bd15-4be8-4d64-a4d0-8bc0761c68b6
caps.latest.revision: "22"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ea016877744bed8e91f8e7144560969b2dbca745
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="debug-iterator-support"></a>Debug Iterator Support
La libreria di runtime di Visual C++ rileva l'uso non corretto dell'iteratore, esegue un'asserzione e visualizza una finestra di dialogo in fase di esecuzione. Per abilitare il supporto degli iteratori di debug, è necessario usare le versioni di debug della libreria standard C++ e della libreria di runtime C per compilare il programma. Per altre informazioni, vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md). Per informazioni sull'uso degli iteratori verificati, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
 Lo standard C++ descrive in che modo le funzioni membro possono far diventare non validi gli iteratori per un contenitore. Di seguito sono riportati due esempi:  
  
-   La cancellazione di un elemento da un contenitore fa sì che gli iteratori per l'elemento non siano più validi.  
  
-   L'aumento delle dimensioni di un [vettore](../standard-library/vector.md) eseguendo il push o l'inserimento fa sì che gli iteratori nel `vector` non siano più validi.  
  
## <a name="example"></a>Esempio  
Se si compila il programma di esempio in modalità di debug, in fase di esecuzione esegue un'asserzione e viene terminato.  
  
```cpp  
// iterator_debugging_0.cpp  
// compile by using /EHsc /MDd  
#include <vector>  
#include <iostream>  
  
int main() {  
   std::vector<int> v ;  
  
   v.push_back(10);  
   v.push_back(15);  
   v.push_back(20);  
  
   std::vector<int>::iterator i = v.begin();  
   ++i;  
  
   std::vector<int>::iterator j = v.end();  
   --j;  
  
   std::cout << *j << '\n';  
  
   v.insert(i,25);   
  
   std::cout << *j << '\n'; // Using an old iterator after an insert  
}  
```  
  
## <a name="example"></a>Esempio  
È possibile usare la macro del preprocessore [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) per disattivare la funzionalità di debug dell'iteratore in una build di debug. Questo programma non esegue asserzioni, ma attiva un comportamento non definito.  
  
```cpp  
// iterator_debugging_1.cpp  
// compile by using: /EHsc /MDd  
#define _ITERATOR_DEBUG_LEVEL 0  
#include <vector>  
#include <iostream>  
  
int main() {  
   std::vector<int> v ;  
  
   v.push_back(10);  
   v.push_back(15);  
   v.push_back(20);  
  
   std::vector<int>::iterator i = v.begin();  
   ++i;  
  
   std::vector<int>::iterator j = v.end();  
   --j;  
  
   std::cout << *j << '\n';  
  
   v.insert(i,25);   
  
   std::cout << *j << '\n'; // Using an old iterator after an insert  
}  
```  
  
```Output  
20  
-572662307  
```  
  
## <a name="example"></a>Esempio  
Un'asserzione si verifica anche se si tenta di usare un iteratore prima che sia inizializzato, come illustrato di seguito:  
  
```cpp  
// iterator_debugging_2.cpp  
// compile by using: /EHsc /MDd  
#include <string>  
using namespace std;  
  
int main() {  
   string::iterator i1, i2;  
   if (i1 == i2)  
      ;  
}  
```  
  
## <a name="example"></a>Esempio  
L'esempio di codice seguente genera un'asserzione poiché i due iteratori per l'algoritmo [for_each](../standard-library/algorithm-functions.md#for_each) sono incompatibili. Gli algoritmi tentano di verificare se gli iteratori specificati fanno riferimento allo stesso contenitore.  
  
```cpp  
// iterator_debugging_3.cpp  
// compile by using /EHsc /MDd  
#include <algorithm>  
#include <vector>  
using namespace std;  
  
int main()  
{  
    vector<int> v1;  
    vector<int> v2;  
  
    v1.push_back(10);  
    v1.push_back(20);  
  
    v2.push_back(10);  
    v2.push_back(20);  
  
    // The next line asserts because v1 and v2 are  
    // incompatible.  
    for_each(v1.begin(), v2.end(), [] (int& elem) { elem *= 2; } );  
}  
```  
  
Si noti che in questo esempio si usa l'espressione lambda `[] (int& elem) { elem *= 2; }` anziché un funtore. Sebbene questa scelta non influisca sull'errore di asserzione (un funtore simile causerebbe lo stesso errore), le espressioni lambda sono un modo molto utile per eseguire attività degli oggetti funzione Compact. Per altre informazioni sulle espressioni lambda, vedere [Espressioni lambda in C++](../cpp/lambda-expressions-in-cpp.md).  
  
## <a name="example"></a>Esempio  
I controlli degli iteratori di debug causano anche l'esclusione dall'ambito di una variabile di iteratore dichiarata in un ciclo `for` al termine dell'ambito del ciclo `for`.  
  
```cpp  
// iterator_debugging_4.cpp  
// compile by using: /EHsc /MDd  
#include <vector>  
#include <iostream>  
int main() {  
   std::vector<int> v ;  
  
   v.push_back(10);  
   v.push_back(15);  
   v.push_back(20);  
  
   for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)  
      ;   // do nothing  
   --i;   // C2065  
}  
```  
  
## <a name="example"></a>Esempio  
Gli iteratori di debug hanno distruttori non semplici. Se un distruttore per qualsiasi motivo non viene eseguito, possono verificarsi violazioni di accesso e danneggiamento dei dati. Si consideri l'esempio seguente:  
  
```cpp  
// iterator_debugging_5.cpp  
// compile by using: /EHsc /MDd  
#include <vector>  
struct base {  
   // TO FIX: uncomment the next line  
   // virtual ~base() {}  
};  
  
struct derived : base {  
   std::vector<int>::iterator m_iter;  
   derived( std::vector<int>::iterator iter ) : m_iter( iter ) {}  
   ~derived() {}  
};  
  
int main() {  
   std::vector<int> vect( 10 );  
   base * pb = new derived( vect.begin() );  
   delete pb;  // doesn't call ~derived()  
   // access violation  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
[Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)




