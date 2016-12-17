---
title: "Formattazione di stringhe e I/O (C++ moderno) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
caps.latest.revision: 13
caps.handback.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Formattazione di stringhe e I/O (C++ moderno)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli [iostream](../standard-library/iostream.md) di C\+\+ supportano I\/O di stringa formattati.  Ad esempio, nel codice seguente viene illustrato come impostare il cout per formattare un Integer da restituire in valore esadecimale, primo salvando lo stato corrente e reimpostandolo in seguito, poiché una volta passata la formattazione di stato su cout, resta uguale fino alla modifica, non solo per una riga di codice.  
  
```fortran  
#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main()   
{  
    ios state(nullptr);  
  
    cout << "The answer in decimal is: " << 42 << endl;  
  
    state.copyfmt(cout); // save current formatting  
    cout << "In hex: 0x" // now load up a bunch of formatting modifiers  
        << hex   
        << uppercase   
        << setw(8)   
        << setfill('0')   
        << 42            // the actual value we wanted to print out  
        << endl;  
    cout.copyfmt(state); // restore previous formatting  
}  
  
```  
  
 In molti casi questa situazione può essere troppo complessa.  In alternativa, è possibile utilizzare Boost.Format dalle librerie Boost di C\+\+, anche se non si tratta di uno standard.  È possibile scaricare qualsiasi libreria Boost dal sito Web [Boost](http://www.boost.org/).  
  
 Alcuni vantaggi di Boost.Format sono:  
  
-   Sicurezza: indipendente dai tipi e genera un'eccezione per gli errori, ad esempio la specifica di un numero eccessivo o insufficiente di elementi.  
  
-   Estensibile: funziona per qualsiasi tipo che può essere trasmesso.  
  
-   Utile: POSIX standard e stringhe di formato simili.  
  
 Sebbene Boost.Format venga compilato negli [iostream](../standard-library/iostream-programming.md) di C\+\+ \(i quali sono sicuri ed estensibili\), le prestazioni che essi offrono non sono ottimizzate.  Quando è necessario ottimizzare le prestazioni, considerare [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) del linguaggio C, che sono veloci e semplici da utilizzare.  Tuttavia, non sono estendibili o senza vulnerabilità. Le versioni sicure esistono, ma comportano una lieve riduzione delle prestazioni.  Per ulteriori informazioni, vedere [printf\_s, \_printf\_s\_l, wprintf\_s, \_wprintf\_s\_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) e [sprintf\_s, \_sprintf\_s\_l, swprintf\_s, \_swprintf\_s\_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)\).  
  
 Nel codice seguente vengono illustrate alcune delle funzionalità di formattazione Boost.  
  
```cpp  
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );  
    // s contains "hello hello world"    
  
    for( auto i = 0; i < names.size(); ++i )  
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];  
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789  
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321  
  
```  
  
## Vedere anche  
 [C\+\+](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)   
 [\<iostream\>](../standard-library/iostream.md)   
 [\<limits\>](../standard-library/limits.md)   
 [\< iomanip \>](../standard-library/iomanip.md)