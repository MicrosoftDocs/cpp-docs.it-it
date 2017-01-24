---
title: "Supporto degli iteratori di debug | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_HAS_ITERATOR_DEBUGGING symbol"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "supporto degli iteratori di debug"
  - "iteratori incompatibili"
  - "iteratori, supporto degli iteratori di debug"
  - "iteratori, incompatibili"
  - "librerie protette"
  - "librerie protette, libreria C++ standard"
  - "libreria C++ standard protetta"
  - "libreria C++ standard, supporto degli iteratori di debug"
ms.assetid: f3f5bd15-4be8-4d64-a4d0-8bc0761c68b6
caps.latest.revision: 22
caps.handback.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Supporto degli iteratori di debug
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La libreria di runtime di Visual C\+\+ rileva l'utilizzo inappropriato iteratore e le asserzioni e visualizzare una finestra di dialogo in fase di esecuzione.  Per abilitare il supporto iteratori di debug, è necessario utilizzare una versione di debug della libreria di runtime c per compilare il programma.  Per ulteriori informazioni, vedere [Funzionalità libreria CRT](../c-runtime-library/crt-library-features.md).  Per informazioni su come utilizzare gli iteratori, vedere [Iteratori verificati](../standard-library/checked-iterators.md).  
  
 Lo standard C\+\+ viene descritto come le funzioni membro possono riordinare gli iteratori a un contenitore a diventare non validi.  Due esempi sono:  
  
-   Elimina elemento da un contenitore determina gli iteratori all'elemento a diventare non validi.  
  
-   L'aumento delle dimensioni di [vettore](../standard-library/vector.md) \(push o inserimento\) determina gli iteratori in `vector` a diventare non validi.  
  
## Esempio  
 Se si compila il programma in modalità di debug, in fase di esecuzione asserirà e terminerà.  
  
```cpp  
/* compile with /EHsc /MDd */  
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
  
   std::cout<<*j<<'\n';  
  
   v.insert(i,25);   
  
   std::cout<<*j<<'\n'; // Using an old iterator after an insert  
}  
  
```  
  
## Esempio  
 È possibile utilizzare il simbolo [\_HAS\_ITERATOR\_DEBUGGING](../standard-library/has-iterator-debugging.md) per disabilitare la funzionalità di debug iteratori in una build di debug.  Il seguente programma non assert, ma ancora i trigger hanno un comportamento indefinito.  
  
> [!IMPORTANT]
>  Utilizzo `_ITERATOR_DEBUG_LEVEL` controllare `_HAS_ITERATOR_DEBUGGING`.  Per ulteriori informazioni, vedere [\_ITERATOR\_DEBUG\_LEVEL](../standard-library/iterator-debug-level.md).  
  
```cpp  
// iterator_debugging.cpp  
// compile with: /EHsc /MDd  
#define _HAS_ITERATOR_DEBUGGING 0  
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
  
   std::cout<<*j<<'\n';  
  
   v.insert(i,25);   
  
   std::cout<<*j<<'\n'; // Using an old iterator after an insert  
}  
```  
  
  **20**  
**\-572662307**   
## Esempio  
 Un'asserzione si verifica anche se si tenta di utilizzare un iteratore prima che venga inizializzato, come illustrato di seguito:  
  
```cpp  
/* compile with /EHsc /MDd */  
#include <string>  
using namespace std;  
int main() {  
   string::iterator i1, i2;  
   if (i1 == i2)  
      ;  
}  
```  
  
## Esempio  
 Nell'esempio di codice causa un'asserzione poiché i due iteratori all'algoritmo di [for\_each](../Topic/for_each.md) sono incompatibili.  Gli algoritmi controllano per determinare se gli iteratori forniti a esse siano facendo riferimento allo stesso contenitore.  
  
```cpp  
/* compile with /EHsc /MDd */  
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
  
    // The next line will assert because v1 and v2 are  
    // incompatible.  
    for_each(v1.begin(), v2.end(), [] (int& elem) { elem *= 2; } );  
}  
```  
  
 Si noti che in questo esempio viene utilizzata l'espressione lambda `[] (int& elem) { elem *= 2; }` anziché un functor.  Sebbene questa scelta sono rilevanti ai fini dell'errore \- che un assert like functor causerebbe lo stesso errore \- lambda è una soluzione molto utile eseguire attività compresseoggetto function.  Per ulteriori informazioni sulle espressioni lambda, vedere [Espressioni lambda](../cpp/lambda-expressions-in-cpp.md).  
  
## Esempio  
 Il debug dell'iteratore che controlla inoltre possibile causa una variabile di iteratore dichiarata in un ciclo di `for` per all'ambito quando l'ambito del ciclo di `for` termina.  
  
```cpp  
// debug_iterator.cpp  
// compile with: /EHsc /MDd  
#include <vector>  
#include <iostream>  
int main() {  
   std::vector<int> v ;  
  
   v.push_back(10);  
   v.push_back(15);  
   v.push_back(20);  
  
   for (std::vector<int>::iterator i = v.begin() ; i != v.end(); ++i)  
   ;  
   --i;   // C2065  
}  
```  
  
## Esempio  
 Gli iteratori di debug hanno distruttori complesse.  Se un distruttore non funziona, per qualsiasiasi motivo, le violazioni di accesso e l'alterazione dei dati potrebbero verificarsi.  Si consideri l'esempio seguente:  
  
```cpp  
/* compile with: /EHsc /MDd */  
#include <vector>  
struct base {  
   // FIX: uncomment the next line  
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
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)