---
title: Stringa e I-O formattazione (C++ moderno) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 3954e8de-a59b-4175-89c9-4ee842ab89ed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 391648d71fa3d38a0f704a014c163b7f8b102e40
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="string-and-io-formatting-modern-c"></a>Formattazione di stringhe e I/O (C++ moderno)
C++ [iostream](../standard-library/iostream.md) sono in grado dei / o di stringa formattata. Ad esempio, il codice seguente viene illustrato come impostare cout per formattare un numero intero per l'output in formato esadecimale, innanzitutto salvataggio disattivare lo stato corrente e nuovamente l'impostazione in seguito, poiché la formattazione di stato viene passata a cout, rimane in questo modo finché non vengono modificate, non solo per una riga del codice.  
  
```cpp  
#include <iostream>  
#include <iomanip>  
  
using namespace std;  
  
int main()   
{  
    ios state(nullptr);  
  
    cout << "The answer in decimal is: " << 42 << endl;  
  
    state.copyfmt(cout); // save current formatting  
    cout << "In hex: 0x" // now load up a bunch of formatting modifiers  
        << hex   
        << uppercase   
        << setw(8)   
        << setfill('0')   
        << 42            // the actual value we wanted to print out  
        << endl;  
    cout.copyfmt(state); // restore previous formatting  
}  
  
```  
  
 Può essere interamente troppo complesso in molti casi. In alternativa, è possibile utilizzare Boost.Format dalle librerie di C++ Boost, anche se è conforme allo standard. È possibile scaricare qualsiasi libreria Boost dal [Boost](http://www.boost.org/) sito Web.  
  
 Alcuni vantaggi di Boost.Format sono:  
  
-   Safe: Type-safe e genera un'eccezione per gli errori, ad esempio, la specifica di troppo pochi o troppi elementi.  
  
-   Extensible: Funziona per qualsiasi tipo che può essere trasmesso.  
  
-   Pratica: Posix Standard e stringhe di formato simili.  
  
 Sebbene Boost.Format si basa su C++ [iostream](../standard-library/iostream-programming.md), che sono sicuri ed estendibile, non sono le prestazioni ottimizzate. Quando si richiede l'ottimizzazione delle prestazioni, prendere in considerazione C [printf](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md) e [sprintf](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md), che sono veloci e facili da utilizzare. Tuttavia, non sono estendibili o provvisoria da vulnerabilità. (Esistono versioni sicure, ma comportano una riduzione delle lieve miglioramento delle prestazioni. Per ulteriori informazioni, vedere [printf_s, printf_s_l, wprintf_s, wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) e [sprintf_s sprintf_s_l, swprintf_s, swprintf_s_l](../c-runtime-library/reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md)).  
  
 Il codice seguente vengono illustrate alcune delle funzionalità di formattazione l'aumento di priorità.  
  
```cpp  
    string s = str( format("%2% %2% %1%\n") % "world" % "hello" );  
    // s contains "hello hello world"    
  
    for( auto i = 0; i < names.size(); ++i )  
        cout << format("%1% %2% %|40t|%3%\n") % first[i] % last[i] % tel[i];  
    // Georges Benjamin Clemenceau             +33 (0) 123 456 789  
    // Jean de Lattre de Tassigny              +33 (0) 987 654 321  
  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Bentornato a C++](../cpp/welcome-back-to-cpp-modern-cpp.md)   
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)   
 [Libreria standard C++](../standard-library/cpp-standard-library-reference.md)   
 [\<iostream >](../standard-library/iostream.md)   
 [\<limiti >](../standard-library/limits.md)   
 [\<iomanip>](../standard-library/iomanip.md)
